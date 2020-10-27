//
// Created by madytyoo on 2/23/20.
//


#pragma once
#include <llvm/IR/Module.h>
#include <llvm/IR/IRBuilder.h>
#include <llvm/IR/DIBuilder.h>
#include <llvm/IR/LLVMContext.h>

#include "ast.h"
#include "symbtab.h"
#include "rpgjit.h"

struct DebugInfo {
    llvm::DICompileUnit *unit;
    llvm::DIType *itype = nullptr;

} ;

struct Blocks {
    llvm::BasicBlock    *trueBlock;
    llvm::BasicBlock    *falseBlock;
};

class GeneratorLLVM : public Generator {

public:

    GeneratorLLVM(std::string filename, bool emitDebugInfo = false) {
        this->filename = filename;
        this->emitDebugInfo = emitDebugInfo;

        //this->jit = llvm::make_unique<llvm::orc::RpgJIT>();
        this->module = std::make_unique<llvm::Module>(llvm::StringRef(filename),llvmContext);
        this->builder = std::make_unique<llvm::IRBuilder<>>(llvmContext);
        //this->module->setDataLayout(jit->getTargetMachine().createDataLayout());
        auto TargetTriple = LLVMGetDefaultTargetTriple();
        module->setTargetTriple(TargetTriple);

        if(emitDebugInfo) {
            module->addModuleFlag(llvm::Module::Warning, "Debug Info Version",
                                  llvm::DEBUG_METADATA_VERSION);

            // Construct the DIBuilder
            debugBuilder = std::make_unique<llvm::DIBuilder>(*module);
            debugInfo.unit = debugBuilder->createCompileUnit(
                    llvm::dwarf::DW_LANG_C, debugBuilder->createFile(filename, ""),
                    "Strumenta RPG Compiler", 1, "", 0);
        }


    }
    void dump();
public:
    virtual void declare(Symbol *);
    void         process(std::shared_ptr<SymbolTable> symbolTable,std::shared_ptr<AST> ast);
    void         initializeRunTime(std::shared_ptr<SymbolTable> symbolTable);
    llvm::Value* visit(IntegerLiteral *integer,void *param) override;
    llvm::Value* visit(DecimalLiteral *decimal,void *param) override;
    llvm::Value* visit(StringLiteral *string,void *param) override;
    llvm::Value* visit(Identifier *string,void *param) override;
    llvm::Value* visit(MathExpression *expression,void *param) override;

    llvm::Value *visit(ComparisonExpression *expression,void *param) override;

    llvm::Value* visit(Statement  *statement,void *param) override;
    llvm::Value* visit(SelectStatement  *select,void *param) override;
    llvm::Value* visit(SubroutineDeclaration  *subroutine,void *param) override;
    llvm::Value* visit(SubroutineInvocation  *subroutine,void *param) override;
    llvm::Value* visit(AssignmentStatement  *assignment,void *param) override;

    llvm::Value *visit(ForStatement *loop,void *param) override;
    llvm::Value *visit(DisplayStatement *dsply,void *param) override;

    llvm::DIType *getDebugType();
    llvm::DISubroutineType *createFunctionType(unsigned NumArgs);

private:
    std::string filename;
    std::vector<llvm::DIScope *> LexicalBlocks;
    void emitLocation(Node *node,llvm::DICompileUnit *unit);

    llvm::LLVMContext llvmContext;
    std::unique_ptr<llvm::Module> module;
    std::unique_ptr<llvm::IRBuilder<>>  builder;
    std::unique_ptr<llvm::DIBuilder> debugBuilder;

    bool emitDebugInfo;                         /* Generate debug information */
    struct DebugInfo                 debugInfo;
    std::shared_ptr<SymbolTable> symbolTable;
};

