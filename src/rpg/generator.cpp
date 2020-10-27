//
// Created by mctaverna on 2/23/20.
//

#include <llvm/ADT/STLExtras.h>
#include <llvm/IR/Module.h>
#include <llvm/IR/Verifier.h>
#include <llvm/IR/IRBuilder.h>
#include <llvm/IR/DIBuilder.h>
#include <llvm/IR/GlobalVariable.h>
#include <llvm/IR/ValueSymbolTable.h>

#include <llvm/ADT/StringRef.h>

#include "log.h"
#include "generator.h"
#include "compiler.h"


/**
 * Process the symbol table and the AST to emits the global definitions
 * @param symbolTable
 * @param ast
 */
void  GeneratorLLVM::process(std::shared_ptr<SymbolTable> symbolTable,std::shared_ptr<AST> ast) {
    LOG(DECL) << "----- Code generation  -----";
    // Store a reference to the symbol table
    this->symbolTable = symbolTable;

    try {
        // Generate data, process global scope
        std::map<std::basic_string<char>, std::shared_ptr<Symbol>> global = symbolTable->getSymbols(0);

        for(auto symbol = global.begin(); symbol != global.end();symbol++) {
            declare(symbol->second.get());
        }

        // Generate support functions
        initializeRunTime(symbolTable);

        // Generate code
        for (auto node = ast->getNodes().begin(); node != ast->getNodes().end(); ++node) {
            node->get()->accept(this);
        }
    } catch(RpgException& e) {
        std::cerr << "rpg: " <<  this->filename << " : error: " << e.getMessage() << std::endl;
        exit(-1);
    }

}

/**
 * Emits a INZ function for global variables initialization
 * In this implementation of the RPG language all data declaration are global variables.
 * This method creates a INZ function with all the store operation required to set the
 * value specified in the  data declaration INZ value,
 */
void  GeneratorLLVM::initializeRunTime(std::shared_ptr<SymbolTable> symbolTable) {
    /* Emit the format string for the printf */
    std::string str = "%lld\n";
    auto charType = llvm::IntegerType::get(llvmContext, 8);

    /*  Initialize the  vector */
    std::vector<llvm::Constant *> chars(str.length());
    for(unsigned int i = 0; i < str.size(); i++) {
        chars[i] = llvm::ConstantInt::get(charType, str[i]);
    }
    /*  Add '\0' at the end of the string */
    //chars.push_back(llvm::ConstantInt::get(charType, 0));

    /* Initialize the string from the characters */
    auto stringType = llvm::ArrayType::get(charType, chars.size());

    /* declaration statement */
    auto globalDeclaration = (llvm::GlobalVariable*) module->getOrInsertGlobal("pstr", stringType);
    globalDeclaration->setInitializer(llvm::ConstantArray::get(stringType, chars));
    globalDeclaration->setConstant(true);
    globalDeclaration->setLinkage(llvm::GlobalValue::LinkageTypes::PrivateLinkage);
    globalDeclaration->setUnnamedAddr (llvm::GlobalValue::UnnamedAddr::Global);

    std::vector<llvm::Type*> pparams;
    pparams.push_back(llvm::Type::getInt8PtrTy(llvmContext));
    /* External function declaration */
    llvm::FunctionType *pft = llvm::FunctionType::get(llvm::Type::getInt32Ty(llvmContext),pparams, true);
    llvm::Function *printf = llvm::Function::Create(pft, llvm::Function::ExternalLinkage, "printf", this->module.get());


    /* Emit the INZ function */
    std::vector<llvm::Type*> params;
    llvm::FunctionType *ft = llvm::FunctionType::get(llvm::Type::getVoidTy(llvmContext),params,false);
    llvm::Function *inz = llvm::Function::Create(ft, llvm::Function::ExternalLinkage, "INZ", this->module.get());

    llvm::BasicBlock *BB = llvm::BasicBlock::Create(llvmContext, "",inz);
    builder->SetInsertPoint(BB);

    /* Process the symbol table and create the initialization values */
    std::map<std::basic_string<char>, std::shared_ptr<Symbol>> global = symbolTable->getSymbols(0);
    for(auto symbol = global.begin(); symbol != global.end();symbol++) {
        SymbolSpecifier *specifier = symbol->second->getSpecifier();
        if(specifier) {
            llvm::Constant *initValue;
            llvm::GlobalVariable *var = module->getNamedGlobal(symbol->first);
            try {
                std::shared_ptr<Expression> expression = specifier->getValue();
                if(expression) {
                    /* Evaluates the initialization expression */
                    llvm::Value* value = expression->accept(this);
                    /* Creates the store instruction with the initialization value */
                    builder->CreateStore(value,var);
                }
            } catch(RpgException& e) {
                std::cerr << "rpg: " <<  this->filename << ":" << symbol->second->getLine() << " error: "  << e.getMessage() << std::endl;
                exit(-1);
            }
        }
    }

    /* Function terminator */
    builder->CreateRetVoid();

    /* Verfifies the function */
    if(!emitDebugInfo) {

        std::string errors;
        llvm::raw_string_ostream out(errors);
        if(llvm::verifyFunction(*inz,&out)) {
            throw RpgException( "INZ " + out.str());
        }
    }

}
/**
 * Declares a global variable or a function
 * @param symbol
 */
void GeneratorLLVM::declare(class Symbol *symbol) {
    FunctionDeclarator *function = symbol->getFunctionDeclarator();
    std::string what = function ? "processing subroutine declaration" : "processing data declaration";
    LOG(EMIT) << this->filename << "(" << symbol->getLine() << ")" <<  " : " << what << " " << symbol->getName();
    // Declares a function prototype
    if(function) {
        // Subroutines have no params
        std::vector<llvm::Type*> params;
        params.push_back(llvm::Type::getInt32Ty(llvmContext));
        llvm::FunctionType *ft = llvm::FunctionType::get(llvm::Type::getInt32Ty(llvmContext),params, false);
        llvm::Function *function = llvm::Function::Create(ft, llvm::Function::ExternalLinkage, symbol->getName(), this->module.get());

    }
    // Declares a global variable
    SymbolSpecifier *variable = symbol->getSpecifier();
    if(variable) {
        if( !module->getNamedGlobal(symbol->getName())) {
            if(variable->getDecimals() == 0) {
                this->module->getOrInsertGlobal(symbol->getName(),builder->getInt64Ty());
            }
            // Creates the variable
            llvm::GlobalVariable *var = module->getNamedGlobal(symbol->getName());
            // INZ value (if specified)
            if(var) {
                llvm::Constant *initValue = llvm::ConstantInt::get(llvmContext, llvm::APInt(64, 0, true));
                var->setInitializer(initValue);
                var->setLinkage(llvm::GlobalValue::CommonLinkage);

            }
            if(emitDebugInfo) {

                llvm::DIScope *scope = debugInfo.unit;

                llvm::DIFile *Unit = debugBuilder->createFile(debugInfo.unit->getFilename(),
                                                              debugInfo.unit->getDirectory());

                llvm::DIType *dtype = debugBuilder->createBasicType("int", 64, llvm::dwarf::DW_ATE_signed);
                llvm::DIType *gtype = debugBuilder->createPointerType(dtype,64);

                llvm::DIGlobalVariableExpression *D = debugBuilder->createGlobalVariableExpression(
                        scope, symbol->getName(),llvm::StringRef("@" + symbol->getName()), Unit, symbol->getLine(), gtype, false);
                emitLocation(nullptr,debugInfo.unit);
//                debugBuilder->insertDeclare(var, D,
//                                            D->getExpression(), llvm::DebugLoc::get(symbol->getLine(), 0, scope),
//                                            builder->GetInsertBlock());
            }

        }
    }
}

/**
 * Retruns an integer constant
 * @param select instance of Identifier node
 * @return llvm::Value integer constant value
 */
llvm::Value*  GeneratorLLVM::visit(IntegerLiteral *integer,void *param) {
    int64_t ivalue = stoi(integer->getValue());
    return llvm::ConstantInt::get(llvmContext,llvm::APInt(64,ivalue,true));
}

/**
 * Returns the load instruction for an identifier
 * @param select instance of Identifier node
 * @return LLVM load instruction
 */
llvm::Value* GeneratorLLVM::visit(Identifier *identifier,void *param) {
    // Check if the symbol is defined, if not raise error
    std::shared_ptr<Symbol> symbol = symbolTable->get(identifier->getValue());
    if(symbol == nullptr) {
        std::cout << "ERROR: undefined symbol: " << identifier->getValue()  << std::endl;
        exit(1);
    }
    // Emits a Load as the data definition are global
    return  builder->CreateLoad(module->getGlobalVariable(identifier->getValue()));
}

/**
 * Retruns a math instruction
 * @param select instance of ComparisonExpression node
 * @return llvm::Value with the evaluated instruction
 */
llvm::Value* GeneratorLLVM::visit(MathExpression *expression,void *param) {
    LOG(EMIT) << this->filename << "(" << expression->getLine() << ")" <<  " : " << "math expression" << " " << expression->toString();
    llvm::Value* L = expression->getLeft()->accept(this,param);
    llvm::Value* R = expression->getRight()->accept(this,param);

    switch (expression->getType()) {
        case Token::PLUS:
            return builder->CreateAdd(L, R, "addtmp");;

        case Token::MINUS:
            return builder->CreateSub(L, R, "subtmp");

        case Token::MULTIPLY:
            return builder->CreateMul(L, R, "multmp");

        case Token::DIVIDE:
            return builder->CreateSDiv(L, R, "divtmp");
    }
    if(emitDebugInfo) {
        emitLocation(expression,debugInfo.unit);
    }
    throw RpgException(  expression->getValue() + "  INVALID operator!");
}

/**
 * Generates the instructons for a Comparison
 * @param select instance of ComparisonExpression node
 * @return
 */
llvm::Value *GeneratorLLVM::visit(ComparisonExpression *expression,void *param) {
    LOG(EMIT) << this->filename << "(" << expression->getLine() << ")" <<  " : " << "comparison expression" << " " << expression->toString();
    llvm::Value* L = expression->getLeft()->accept(this,param);
    llvm::Value* R = expression->getRight()->accept(this,param);


    switch (expression->getType()) {
        case Token::EQUAL:
            return builder->CreateICmp(llvm::ICmpInst::ICMP_EQ,L,R,"");

        case Token::NE:
            return builder->CreateICmp(llvm::ICmpInst::ICMP_NE,L,R,"");

        case Token::LE:
            return builder->CreateICmp(llvm::ICmpInst::ICMP_SLE,L,R,"");

        case Token::GE:
            return builder->CreateICmp(llvm::ICmpInst::ICMP_SGE,L,R,"");

        case Token::GT:
            return builder->CreateICmp(llvm::ICmpInst::ICMP_SGT,L,R,"");

        case Token::LT:
            return builder->CreateICmp(llvm::ICmpInst::ICMP_SLT,L,R,"");

        default:
            break;
    }

    return nullptr;
}

/**
 * Generates the instructons for an Assigment statement
 * @param select instance of AssignmentStatement node
 * @return
 */
llvm::Value* GeneratorLLVM::visit(AssignmentStatement *assignment,void *param) {
    LOG(EMIT) << this->filename << "(" << assignment->getLine() << ")" <<  " : " << "assigment statement" << " " << assignment->toString();
    llvm::GlobalVariable* target = module->getGlobalVariable(assignment->getTarget());
    if(!target) {
        throw RpgException(  assignment->getTarget() + "  not found!");
    }
    if(assignment->getExpression()) {
        llvm::Value* v = assignment->getExpression()->accept(this );
        if(v) {
            // Store the value in the variable
            builder->CreateStore(v, target);
        }
    }

    if(emitDebugInfo) {
        emitLocation(assignment,debugInfo.unit);
    }
    return  target;
}

/**
 * Generates body block for a Subroutine
 * @param select instance of SubroutineInvocation node
 * @return
 */
llvm::Value* GeneratorLLVM::visit(SubroutineDeclaration *subroutine,void *param) {

    // Create a new block insert the subroutine.
    llvm::Function *function = module->getFunction(subroutine->getName());
    if(!function) {
        throw RpgException( subroutine->getName() + "  not found!");
    }
    if(emitDebugInfo) {
        llvm::DIFile *Unit = debugBuilder->createFile(debugInfo.unit->getFilename(),
                                                      debugInfo.unit->getDirectory());
        llvm::DIScope *context = Unit;

        unsigned LineNo = subroutine->getLine();
        unsigned ScopeLine = LineNo;
        std::string name = subroutine->getName();

        llvm::DISubprogram *SP = debugBuilder->createFunction(
                context, name, llvm::StringRef(), Unit, LineNo,
                createFunctionType(function->arg_size()), ScopeLine,
                llvm::DINode::FlagPrototyped, llvm::DISubprogram::SPFlagDefinition);
        function->setSubprogram(SP);
        LexicalBlocks.push_back(SP);
        builder->SetCurrentDebugLocation(nullptr);
    }
    llvm::BasicBlock *body = llvm::BasicBlock::Create(llvmContext, "entry", function);
    builder->SetInsertPoint(body);

    // The very first statement is the initialization call
    if(subroutine->isMAIN()) {

        std::vector<llvm::Value *> args;
        llvm::Function *target = module->getFunction("INZ");
        llvm::CallInst *c = builder->CreateCall(target, args);

    }

    // Emit the subroutine body
    for (auto stmt = subroutine->getNodes().begin(); stmt != subroutine->getNodes().end(); ++stmt) {
        stmt->get()->accept( this );
    }
    // Function terminator
    llvm::Value *ret = llvm:: ConstantInt::get(llvmContext, llvm::APInt(32, 0, true));
    builder->CreateRet(ret);

#ifdef _DEBUG_
    for (llvm::BasicBlock &BB : *function)
        // Print out the name of the basic block if it has one, and then the
        // number of instructions that it contains
        llvm::errs() << subroutine->getName() << " Basic block (name=" << BB.getName() << ") has "
                     << BB.size() << " instructions.\n";
#endif

    if(emitDebugInfo) {
        LexicalBlocks.pop_back();
    } else {
        /* Verfifies the function */
        std::string errors;
        llvm::raw_string_ostream out(errors);
        if(llvm::verifyFunction(*function,&out)) {
            throw RpgException( subroutine->getName() + " " + out.str());
        }
    }

}

/**
 * Generates  the instructions to call  a subroutine
 * @param select instance of SubroutineInvocation node
 * @return
 */
llvm::Value* GeneratorLLVM::visit(SubroutineInvocation *subroutine,void *param) {
    LOG(EMIT) << this->filename << "(" << subroutine->getLine() << ")" <<  " : " << "subroutine invocation" << " " << subroutine->toString();

    llvm::Function *target = module->getFunction(subroutine->getName());
    if(!target) {
        throw RpgException( subroutine->getName() + "  not found!");
    }
    std::vector<llvm::Value *> args;
    llvm::Value *arg0 = llvm:: ConstantInt::get(llvmContext, llvm::APInt(32, 0, true));
    args.push_back(arg0);
    llvm::CallInst *call = builder->CreateCall(target, args);
    if(emitDebugInfo) {
        emitLocation(subroutine,debugInfo.unit);
    }
    return call;
}

/**
 * Generates  blocks and the instructions for the SELECT statement
 * @param select instance of SelectStatement node
 * @return
 */
llvm::Value* GeneratorLLVM::visit(SelectStatement *select,void *param) {
    LOG(EMIT) << this->filename << "(" << select->getLine() << ")" <<  " : " << "select statement" ;
    /* Creates the SELECT block linked to the parent */
    llvm::Function *selectBlock = builder->GetInsertBlock()->getParent();
    /* Creates a block for the exit point ENDSL  */
    llvm::BasicBlock *selectEnd = llvm::BasicBlock::Create(llvmContext, "endselect");

    // Creates a block for the OTHER clause (if any)
    llvm::BasicBlock *otherBlock = nullptr;
    if (select->getOther()) {
        otherBlock = llvm::BasicBlock::Create(llvmContext, "other");
    }

    // Creates a block for each WHEN clause
    for (int i = 0; i < select->getWhen().size(); i++) {
        LOG(EMIT) << this->filename << "(" << select->getWhen().at(i)->getLine() << ")" <<  " : " << "when clause" << " " << select->getWhen().at(i)->toString();

        if(emitDebugInfo) {
            emitLocation(select->getWhen().at(i).get(),debugInfo.unit);
        }

        llvm::BasicBlock *falseBlock;
        llvm::BasicBlock *trueBlock = llvm::BasicBlock::Create(llvmContext, "when_true", selectBlock);

        // Last WHEN clause, if the OTHER is present became the false block
        if (i == select->getWhen().size() - 1) {
            if (otherBlock) {
                falseBlock = otherBlock;
            } else {
                falseBlock = selectEnd;
            }
        } else {
            falseBlock = llvm::BasicBlock::Create(llvmContext, "when_false");
        }

        llvm::Value *condition = select->getWhen().at(i)->getExpression()->accept(this );
        builder->CreateCondBr(condition, trueBlock, falseBlock);

        // Emits the true block
        builder->SetInsertPoint(trueBlock);
        for (auto stmt = select->getWhen().at(i)->getNodes().begin();
            stmt != select->getWhen().at(i)->getNodes().end(); ++stmt) {
            llvm::Value *xx = stmt->get()->accept( this );
            //std::cout << xx << std::endl;
        }
        builder->CreateBr(selectEnd);

        // Emits the true false block
        selectBlock->getBasicBlockList().push_back(falseBlock);
        builder->SetInsertPoint(falseBlock);

    }

    // Emits the other block
    if (otherBlock) {
        LOG(EMIT) << this->filename << "(" << select->getOther()->getLine() << ")" <<  " : " << "other clause";

        selectBlock->getBasicBlockList().push_back(otherBlock);
        builder->SetInsertPoint(otherBlock);
        if(emitDebugInfo) {
            emitLocation(select->getOther().get(),debugInfo.unit);
        }
        for (auto stmt = select->getOther()->getNodes().begin(); stmt != select->getOther()->getNodes().end(); ++stmt) {
            stmt->get()->accept(this,param);
        }
        builder->CreateBr(selectEnd);
    }

    /* Emits the ENDSL block */
    selectBlock->getBasicBlockList().push_back(selectEnd);
    builder->SetInsertPoint(selectEnd);
}

/**
 * Generates  blocks and the instructions of the FOR statement
 * @param select instance of ForStatement node
 * @return
 */
llvm::Value *GeneratorLLVM::visit(ForStatement *loop,void *param) {
    LOG(EMIT) << this->filename << "(" << loop->getLine() << ")" <<  " : " << "for statement" << " " << loop->toString();
    /* Initialize the loop variable */
    llvm::Value *startVal = loop->getStart()->accept(this );
    llvm::GlobalVariable* variable = module->getGlobalVariable(loop->getStart().get()->getTarget());

    llvm::Function *forLoop = builder->GetInsertBlock()->getParent();
    llvm::BasicBlock *loopBody = llvm::BasicBlock::Create(llvmContext, "forLoop", forLoop);
    // Insert an explicit jump from the current block to the LoopBB.
    builder->CreateBr(loopBody);

    /* Insert the statements in loopBody */
    builder->SetInsertPoint(loopBody);

    /* Adds the statements to the loop body */
    for (auto stmt = loop->getNodes().begin(); stmt != loop->getNodes().end(); ++stmt) {
        stmt->get()->accept(this );
    }

    /* Emits instructions to update the loop variable */
    loop->getBy()->accept(this );

    /* Create the "exit loop" block */
    llvm::BasicBlock *exitLoop = llvm::BasicBlock::Create(llvmContext, "exitLoop", forLoop);


    llvm::Value *EndCond = loop->getEnd()->accept(this );
    /* Insert the conditional branch */
    builder->CreateCondBr(EndCond, loopBody, exitLoop);

    /* Restore the insert point the end of the loop */
    builder->SetInsertPoint(exitLoop);

}

llvm::Value *GeneratorLLVM::visit(DisplayStatement *dsply,void *param) {
    auto charType = llvm::IntegerType::get(llvmContext, 8);
    llvm::Value* format = llvm::ConstantExpr::getBitCast(module->getNamedGlobal("pstr"), charType->getPointerTo());
    llvm::Value* variable = builder->CreateLoad(module->getGlobalVariable(dsply->getIdentifier()->getValue()));

    std::vector<llvm::Value *> args;
    args.push_back(format);
    args.push_back(variable);

    llvm::Function *target = module->getFunction("printf");
    llvm::CallInst *printf = builder->CreateCall(target, args);

    if(emitDebugInfo) {
        emitLocation(dsply,debugInfo.unit);
    }
    return printf;
}

void GeneratorLLVM::dump()  {
    auto CPU = "generic";
    auto Features = "";

    if(debugBuilder) {
        debugBuilder->finalize();
    }
//    llvm::TargetOptions opt;
//    auto RM = llvm:: Optional<llvm::Reloc::Model>();
//    auto TargetMachine = Target->createTargetMachine(TargetTriple, CPU, Features, opt);

    /* Verifies the module */
    std::string errors;
    llvm::raw_string_ostream out(errors);
    if(llvm::verifyModule(*this->module, &out)) {
        throw RpgException( filename + " " + out.str());
    }

    this->module->print(llvm::outs(), nullptr);
}

llvm::Value* GeneratorLLVM::visit(Statement *statement,void *param) {
    return nullptr;
}

llvm::Value* GeneratorLLVM::visit(DecimalLiteral *decimal,void *param) {
    return nullptr;
}

llvm::Value* GeneratorLLVM::visit(StringLiteral *string,void *param) {
    return nullptr;
}
/**
 * Utility function to emit debug location
 * @param node
 * @param unit
 */
void GeneratorLLVM::emitLocation(Node *node,llvm::DICompileUnit *unit) {
    if (!node)
        return builder->SetCurrentDebugLocation(llvm::DebugLoc());
    llvm::DIScope *scope;
    if (LexicalBlocks.empty())
        scope = unit;
    else
        scope = LexicalBlocks.back();
    builder->SetCurrentDebugLocation(
            llvm::DebugLoc::get(node->getLine(),0, scope));
}

llvm::DIType *GeneratorLLVM::getDebugType() {
    if (debugInfo.itype)
        return debugInfo.itype;

    debugInfo.itype = debugBuilder->createBasicType("int", 32, llvm::dwarf::DW_ATE_signed);
    return debugInfo.itype;
}


llvm::DISubroutineType *GeneratorLLVM::createFunctionType(unsigned NumArgs) {
    llvm::SmallVector<llvm::Metadata *, 8> EltTys;
    llvm::DIType *DblTy = getDebugType();

    // Add the result type.
    EltTys.push_back(DblTy);

    for (unsigned i = 0, e = NumArgs; i != e; ++i)
        EltTys.push_back(DblTy);

    return debugBuilder->createSubroutineType(debugBuilder->getOrCreateTypeArray(EltTys));
}


