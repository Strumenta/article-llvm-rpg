//
// Created by madytyoo on 2/11/20.
//
#include <list>
#include "log.h"
#include "antlr4-runtime.h"
#include "RpgParser.h"
#include "RpgParserBaseVisitor.h"

#include "symbtab.h"
#include "declaration.h"

/**
 * Process a data declaration
 * @param ctx
 * @return symbol
 */
std::shared_ptr<Symbol> RpgSymbolFactory::create(antlrcpprpg::RpgParser::DspecContext *ctx) {
    if (ctx->ds_name()) {
        int size = 0;
        int decimals = 0;

        /* Symbol Name */
        std::string name = ctx->ds_name()->getText();

        /* Size and decimals */

        size = stoi(ctx->TO_POSITION()->getText());
        if (ctx->DECIMAL_POSITIONS()) {
            if (is_number(ctx->DECIMAL_POSITIONS()->getText())) {
                decimals = stoi(ctx->DECIMAL_POSITIONS()->getText());
                if(decimals > 0) {

                }
            }
        }

        /* Creates the symbol and the specifier */
        std::shared_ptr<Symbol> symbol = std::make_shared<Symbol>(name, ctx->ds_name()->getStart()->getLine());
        std::shared_ptr<SymbolSpecifier> specifier = std::make_shared<SymbolSpecifier>("S", size, decimals);
        // Default to 0
        //specifier.get()->setValue("0");
        for (auto keyword : ctx->keyword()) {
            if (keyword->keyword_dim()) {
                int arraySize = stoi(keyword->keyword_dim()->simpleExpression()->getText());
                std::shared_ptr<ArrayDeclarator> declarator = std::make_shared<ArrayDeclarator>(arraySize);
                symbol->addDeclarator(declarator);
            }
            if (keyword->keyword_inz()) {
                //Expression
                //specifier.get()->setValue(keyword->keyword_inz()->simpleExpression()->getText());
            }
        }
        symbol->addSpecifier(specifier);
        return symbol;
    }
    return nullptr;
}

/**
 * Process a COSTANT data declaration
 * @param ctx
 * @return
 */

std::shared_ptr<Symbol> RpgSymbolFactory::create(antlrcpprpg::RpgParser::DspecConstantContext* ctx) {
    if(ctx->ds_name()) {
        int size = 0;
        int decimals = 0;

        /* Symbol Name */
        std::string name = ctx->ds_name()->getText();
        /* Creates the symbol and the specifier */
        std::shared_ptr<Symbol> symbol = std::make_shared<Symbol>(name,ctx->ds_name()->getStart()->getLine());
        std::shared_ptr<SymbolSpecifier> specifier =  std::make_shared<SymbolSpecifier>("C",size,decimals);
        //specifier->setValue( ctx->number()->getText() );
        symbol->addSpecifier(specifier);
        return symbol;
    }
    return nullptr;
}

/**
 * Process a Data Structure declaration
 * @param ctx
 * @return
 */
std::shared_ptr<Symbol> RpgSymbolFactory::create(antlrcpprpg::RpgParser::Dcl_dsContext* ctx,std::shared_ptr<SymbolTable> symbolTable) {
    if(ctx->ds_name()) {
        int size = 0;
        int decimals = 0;
        bool qualified = false;
        std::string likeds = "";

        /* Symbol Name */
        std::string name = ctx->ds_name()->getText();
        /* Creates the symbol and the specifier */
        std::shared_ptr<Symbol> symbol = std::make_shared<Symbol>(name,ctx->ds_name()->getStart()->getLine());
        for (auto keyword : ctx->keyword()) {
            /* Array of structures */
            if (keyword->keyword_dim()) {
                /* TODO: SimpleExpression must be parsed? */

                int arraySize = stoi(keyword->keyword_dim()->simpleExpression()->getText());
                std::shared_ptr<ArrayDeclarator> declarator = std::make_shared<ArrayDeclarator>(arraySize);
                symbol->addDeclarator(declarator);
            }
            if (keyword->keyword_qualified()) {
                qualified = true;
            }
            /* Likeds processing */
            if (keyword->keyword_likeds()) {
                likeds = keyword->keyword_likeds()->simpleExpression()->getText();
            }
        }

        /* Add the struct declarator */
        std::shared_ptr<StructDeclarator> declarator = std::make_shared<StructDeclarator>();
        symbol->addDeclarator(declarator);


        if(likeds.empty()) {
            /* Process the fields */
            for (auto param : ctx->parm_fixed()) {
                std::shared_ptr<Symbol> field = create(param,name,qualified,symbolTable);
                /* creates the to the parent data structure */
                field->setRef(symbol);
                declarator->addField(field);
            }
        } else {
            /* search if the symbol is already in the symbol table */
            auto templateds = symbolTable->get(likeds);
            if(templateds) {
                std::cout << "symbol: " << likeds << " found!" << std::endl;
                StructDeclarator* from = templateds->getStructDeclarator();
                if(from) {
                    for (auto it = from->getFields().begin(); it != from->getFields().end(); ++it) {
                        //it->get()->dump();
                        std::string clonedName = replace(it->get()->getName(),likeds,symbol->getName());
                        std::cout << "cloning: " <<  it->get()->getName() << " into " << clonedName << std::endl;
                        std::shared_ptr<Symbol> field = it->get()->clone(clonedName);
                        field->setRef(symbol);
                        declarator->addField(field);
                    }
                } else {
                    std::cout << "symbol: " << likeds << " found is not a data structure" << std::endl;
                }

            } else {
                /* Unresolved symbol */
                std::cout << "symbol: " << likeds << " NOT FOUND" << std::endl;
                std::shared_ptr<Symbol> unresolved = std::make_shared<Symbol>(likeds,ctx->ds_name()->getStart()->getLine());
                symbol->setRef(unresolved);
                symbol->setState(Symbol::State::UNRESOLVED);


            }
        }

        return symbol;
    }
    return nullptr;
}

std::shared_ptr<Symbol> RpgSymbolFactory::create(antlrcpprpg::RpgParser::Parm_fixedContext* ctx,std::string parent,bool qualified,std::shared_ptr<SymbolTable> symbolTable) {
    if (ctx->ds_name()) {
        int size = 0;
        int decimals = 0;

        /* Symbol Name */
        std::string name = ctx->ds_name()->getText();
        if(qualified) {
            name = parent + "." + name;
        }

        /* Size and decimals */
        if (is_number(ctx->FROM_POSITION()->getText())) {
            // TODO double check the requirement
        } else {
            size = stoi(ctx->TO_POSITION()->getText());
            if (ctx->DECIMAL_POSITIONS()) {
                if (is_number(ctx->DECIMAL_POSITIONS()->getText())) {
                    decimals = stoi(ctx->DECIMAL_POSITIONS()->getText());
                } else {
                    // TODO: raise an error
                }
            }
        }
        /* Creates the symbol and the specifier */
        std::shared_ptr<Symbol> symbol = std::make_shared<Symbol>(name, ctx->ds_name()->getStart()->getLine());
        std::shared_ptr<SymbolSpecifier> specifier = std::make_shared<SymbolSpecifier>("S", size, decimals);
        for (auto keyword : ctx->keyword()) {
            if (keyword->keyword_dim()) {
                /* TODO: SimpleExpression must be parsed? */

                int arraySize = stoi(keyword->keyword_dim()->simpleExpression()->getText());
                std::shared_ptr<ArrayDeclarator> declarator = std::make_shared<ArrayDeclarator>(arraySize);
                symbol->addDeclarator(declarator);
            }
            if (keyword->keyword_inz()) {
                /* TODO: SimpleExpression must be parsed? */
                //specifier.get()->setValue(keyword->keyword_inz()->simpleExpression()->getText());
            }
            if (keyword->keyword_overlay()) {
                std::string overlay = keyword->keyword_overlay()->simpleExpression(0)->identifier()->getText();
                std::string offset = keyword->keyword_overlay()->simpleExpression(1)->number()->getText();
                std::shared_ptr<Symbol> ref = symbolTable->get(overlay);
                std::cout << "OVERLAY: " << overlay << " offset: " << offset << std::endl;
                if(ref) {
                    symbol->setRef(ref);
                    symbol->setOffset(std::stoi(offset));
                }
            }

        }
        symbol->addSpecifier(specifier);
        return symbol;
    }
    return nullptr;
}

std::shared_ptr<Symbol> RpgSymbolFactory::create(antlrcpprpg::RpgParser::CsBEGSRContext* ctx,std::shared_ptr<SymbolTable>) {
    /* Subroutine Name */
    std::string name =  ctx->factor()->getText();
    std::shared_ptr<Symbol> symbol = std::make_shared<Symbol>(name, ctx->getStart()->getLine());
    std::shared_ptr<FunctionDeclarator> declarator = std::make_shared<FunctionDeclarator>();
    symbol->addDeclarator(declarator);

    return symbol;
}

RpgDeclarationVisitor::RpgDeclarationVisitor(const std::string &filename, const Compiler *compiler)
        : RpgVisitor(filename, compiler) {
    this->symbolFactory = std::make_shared<RpgSymbolFactory>(compiler);
}

/**
 * Parse data declaration
 * @param ctx
 * @return
 */
std::shared_ptr<Symbol> RpgDeclarationVisitor::parseSymbol(antlrcpprpg::RpgParser::DspecContext *ctx) {

    if (ctx->ds_name()) {
        int size = 0;
        int decimals = 0;

        /* Symbol Name */
        std::string tmp(ctx->ds_name()->getText());
        std::string name = trim(tmp);
        if(!name.empty()) {
            /* Size and decimals */
            size = stoi(ctx->TO_POSITION()->getText());
            if (ctx->DECIMAL_POSITIONS()) {
                if (is_number(ctx->DECIMAL_POSITIONS()->getText())) {
                    decimals = stoi(ctx->DECIMAL_POSITIONS()->getText());
                    if(decimals > 0) {
                        throw RpgException(ctx->getText() + " DECIMAL not supported");
                    }
                }
            }

            /* Creates the symbol and the specifier */
            std::shared_ptr<Symbol> symbol = std::make_shared<Symbol>(name, ctx->ds_name()->getStart()->getLine());
            std::shared_ptr<SymbolSpecifier> specifier = std::make_shared<SymbolSpecifier>("S", size, decimals);

            for (auto keyword : ctx->keyword()) {
                if (keyword->keyword_dim()) {
                    int arraySize = stoi(keyword->keyword_dim()->simpleExpression()->getText());
                    std::shared_ptr<ArrayDeclarator> declarator = std::make_shared<ArrayDeclarator>(arraySize);
                    symbol->addDeclarator(declarator);
                }
                if (keyword->keyword_inz()) {
                    if(keyword->keyword_inz()->simpleExpression()->expression()) {
                        std::shared_ptr<Expression> expression = RpgVisitor::parseExpression(keyword->keyword_inz()->simpleExpression()->expression());
                        specifier.get()->setValue(expression);
                    } else {
                        std::shared_ptr<Expression> expression = RpgVisitor::parseExpression(keyword->keyword_inz()->simpleExpression());
                        specifier.get()->setValue(expression);
                    }

                }
            }
            symbol->addSpecifier(specifier);
            return symbol;
        }
        throw RpgException(ctx->getText() + " INVALID identifier ");
    }
    throw RpgException(ctx->getText() + " UNABLE to parse declaration ");
}

/**
 * Subroutine declaration
 * @param ctx
 * @return
 */
std::shared_ptr<Symbol> RpgDeclarationVisitor::parseSubroutine(antlrcpprpg::RpgParser::CsBEGSRContext* ctx) {
    /* Subroutine Name */
    std::string name =  ctx->factor()->getText();
    std::shared_ptr<Symbol> symbol = std::make_shared<Symbol>(name, ctx->getStart()->getLine());
    std::shared_ptr<FunctionDeclarator> declarator = std::make_shared<FunctionDeclarator>();
    symbol->addDeclarator(declarator);

    return symbol;
}

/**
 * Data declaration
 * @param ctx
 * @return
 */
antlrcpp::Any RpgDeclarationVisitor::visitDspec(antlrcpprpg::RpgParser::DspecContext *ctx) {
    std::string name = ctx->ds_name() ? ctx->ds_name()->getText() : "";
    LOG(DECL) << this->filename << "(" << ctx->getStart()->getLine() << ")" <<  " : DECLARATION " << name;

    /* Attempt to create the symbol */
    try {
        std::shared_ptr<Symbol> symbol = this->parseSymbol(ctx);
        compiler->symbolTable->add(symbol);
    } catch(RpgException& e) {
        std::cerr << "rpg: error " <<  this->filename << "(" << ctx->getStart()->getLine() << ") : "  << e.getMessage() << std::endl;
        exit(-1);
    }
    return RpgParserBaseVisitor::visitDspec(ctx);
}

/**
 * Subroutine declaration
 * @param ctx
 * @return
 */
antlrcpp::Any RpgDeclarationVisitor::visitCsBEGSR(antlrcpprpg::RpgParser::CsBEGSRContext *ctx) {
    std::string name = ctx->factor() ? ctx->factor()->getText() : "";
    LOG(DECL) << this->filename << "(" << ctx->getStart()->getLine() << ")" <<  " : SUBROUTINE " << name;

    std::shared_ptr<Symbol> symbol = parseSubroutine(ctx);
    if (symbol) {
        compiler->symbolTable->add(symbol);
    }
    return RpgParserBaseVisitor::visitCsBEGSR(ctx);
}

/**
 * ANTLR parser visitor override for data structure declaration
 * @param ctx
 * @return
 */
antlrcpp::Any RpgDeclarationVisitor::visitDcl_ds(antlrcpprpg::RpgParser::Dcl_dsContext *ctx) {
    std::shared_ptr<Symbol> symbol = this->symbolFactory->create(ctx,compiler->symbolTable);
    if (symbol) {
        compiler->symbolTable->add(symbol);

        /* Add all the fields to the symbol table */
        StructDeclarator* declarator = symbol->getStructDeclarator();
        if(declarator) {
            for (auto it = declarator->getFields().begin(); it != declarator->getFields().end(); ++it) {
                std::shared_ptr<Symbol> field = static_cast<std::shared_ptr<Symbol>>(it->get());
                compiler->symbolTable->add(field);
            }
        }
    }
    return RpgParserBaseVisitor::visitDcl_ds(ctx);
}


antlrcpp::Any RpgDeclarationVisitor::visitR(antlrcpprpg::RpgParser::RContext *ctx) {
    LOG(DECL) << "----- Processing data declarations -----";
    std::shared_ptr<Symbol> symbol = std::make_shared<Symbol>("main", ctx->getStart()->getLine());
    std::shared_ptr<FunctionDeclarator> declarator = std::make_shared<FunctionDeclarator>();
    symbol->addDeclarator(declarator);
    if (symbol) {
        compiler->symbolTable->add(symbol);
    }
    return RpgParserBaseVisitor::visitR(ctx);
}






