//
// Created by madytyoo on 2/6/20.
//

#pragma once

#include "antlr4-runtime.h"
#include "RpgLexer.h"
#include "RpgParser.h"
#include "RpgParserBaseVisitor.h"

#include "ast.h"
#include "symbtab.h"

class Compiler {

public:
    Compiler() {
        this->emitDebugInfo = false;
        this->ast = std::make_shared<AST>();
        this->symbolTable = std::make_shared<SymbolTable>();
    }

    int compile(void);
    void addSource(const char* filename);
    void readSource(const std::string  &filename,std::string &file_contents);

    void setEmitLogInfo(bool enable);
    void setEmitDebugInfo(bool enable) { emitDebugInfo = enable; }
    std::string getFilename(const std::string filename) {
        size_t i = filename.rfind('/', filename.length());
        if (i != std::string::npos) {
            return filename.substr(i+1, filename.length() - i);
        }
        return filename;
    }
private:
    bool emitDebugInfo;                         /* Generate debug information */
    std::list<std::string> sources;             /* List of source filenames to compile */
    std::shared_ptr<SymbolTable> symbolTable;   /* Symbol Table */
    std::shared_ptr<AST> ast;                   /* Abstract Syntax Tree */

    friend class RpgDeclarationVisitor;
    friend class RpgCodeVisitor;
    friend class RpgVisitor;
};

class RpgException : public std::exception {

public:
    RpgException(const std::string &message) : message(message) { }

    const std::string &getMessage() const {
        return message;
    }

private:
    const std::string message;
};

class RpgVisitor : public antlrcpprpg::RpgParserBaseVisitor {
public:

    RpgVisitor(const std::string filename, const Compiler *compiler) : filename(filename), compiler(compiler) { }

    /**
     * Parse an expression and returns the appropriate Expression subclass
     * @param ctx
     * @return an instance of an Expression subclass
     */
    std::shared_ptr<Expression>  parseExpression(antlrcpprpg::RpgParser::SimpleExpressionContext *ctx) {
        if(ctx->number()) {
            std::string number = ctx->number()->getText();
            /* If contains a dot is a decimal, not supported */
            if( number.find('.') != std::string::npos ) {
                throw RpgException(ctx->number()->getText() + " DECIMAL not supported");
            }
            else {
                return  IntegerLiteral::create(number,ctx->getStart()->getLine());
            }
        }
        if(ctx->identifier()) {
            std::string name = ctx->identifier()->getText();
            std::shared_ptr<Symbol> symbol =  this->compiler->symbolTable->get(name);
            if(symbol) {
                return Identifier::create(name,ctx->getStart()->getLine());
            } else {
                throw RpgException(ctx->identifier()->getText() + " UNDEFINED identifier");
            }
        }
    }

    std::shared_ptr<Expression>  parseExpression(antlrcpprpg::RpgParser::ExpressionContext *ctx) {
        if(!ctx) {
            throw RpgException(" INVALID expression");
        }
        if(ctx->pexpression()) {
            return parseExpression(ctx->pexpression()->expression());
        }
        if(ctx->number()) {
            std::string number = ctx->number()->getText();
            /* If contains a dot is a decimal, not supported */
            if( number.find('.') != std::string::npos ) {
                throw RpgException(ctx->number()->getText() + " DECIMAL not supported");
            }
            else {
                return  IntegerLiteral::create(number,ctx->getStart()->getLine());
            }
        }
        if(ctx->identifier()) {
            std::string name = ctx->identifier()->getText();
            std::shared_ptr<Symbol> symbol =  this->compiler->symbolTable->get(name);
            if(symbol) {
                return Identifier::create(name,ctx->getStart()->getLine());
            } else {
                throw RpgException(ctx->identifier()->getText() + " UNDEFINED identifier");
            }
        }
        if(ctx->PLUS() || ctx->MINUS() || ctx->MULT() || ctx->DIV()) {
            std::string op = ctx->PLUS() ? ctx->PLUS()->getText() :
                             ctx->MINUS() ? ctx->MINUS()->getText() :
                             ctx->MULT() ? ctx->MULT()->getText() :
                             ctx->DIV() ? ctx->DIV()->getText() : "";

            std::shared_ptr<Expression> left = parseExpression(ctx->expression(0));
            std::shared_ptr<Expression> right = parseExpression(ctx->expression(1));
            return MathExpression::create(left, op, right, ctx->getStart()->getLine());
        }

        if(ctx->EQUAL() || ctx->comparisonOperator()) {
            std::string op = "";
            if(ctx->comparisonOperator()) {
                op = ctx->comparisonOperator()->GE() ? ctx->comparisonOperator()->GE()->getText() :
                     ctx->comparisonOperator()->GT() ? ctx->comparisonOperator()->GT()->getText() :
                     ctx->comparisonOperator()->LE() ? ctx->comparisonOperator()->LE()->getText() :
                     ctx->comparisonOperator()->LT() ? ctx->comparisonOperator()->LT()->getText() :
                     ctx->comparisonOperator()->NE() ? ctx->comparisonOperator()->NE()->getText() : "";
                std::shared_ptr<Expression> left = parseExpression(ctx->expression(0));
                std::shared_ptr<Expression> right = parseExpression(ctx->expression(1));
                return ComparisonExpression::create(left, op, right, ctx->getStart()->getLine());
            } else {
                op = ctx->EQUAL()->getText();
                std::shared_ptr<Expression> left = parseExpression(ctx->expression(0));
                std::shared_ptr<Expression> right = parseExpression(ctx->expression(1));
                return ComparisonExpression::create(left, op, right, ctx->getStart()->getLine());
            }

        }
        throw RpgException(  ctx->getText() + "  INVALID expression!");
    }

protected:
    const Compiler* compiler;
    const std::string filename;

    bool is_number(const std::string& s) {
        std::string tmp = s;
        tmp = trim(tmp);
        return !tmp.empty() && std::find_if(tmp.begin(),
                                            tmp.end(), [](unsigned char c) { return !std::isdigit(c); }) == tmp.end();
    }

    inline std::string &ltrim(std::string &s) {
        s.erase(s.begin(), std::find_if(s.begin(), s.end(),
                                        std::not1(std::ptr_fun<int, int>(std::isspace))));
        return s;
    }

    inline std::string &rtrim(std::string &s) {
        s.erase(std::find_if(s.rbegin(), s.rend(),
                             std::not1(std::ptr_fun<int, int>(std::isspace))).base(), s.end());
        return s;
    }

    inline std::string &trim(std::string &s) {
        return ltrim(rtrim(s));
    }
};




