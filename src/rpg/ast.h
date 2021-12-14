//
// Created by madytyoo on 2/1/20.
//

#pragma once

#include <iostream>
#include <vector>
#include <memory>
#include <llvm/IR/Module.h>

class Symbol;
class SymbolTable;
class AST;
class IntegerLiteral;
class DecimalLiteral;
class StringLiteral;
class Identifier;
class MathExpression;
class ComparisonExpression;
class Statement;
class SelectStatement;
class ForStatement;
class SubroutineDeclaration;
class SubroutineInvocation;
class AssignmentStatement;
class DisplayStatement;


class Generator {
public:
    virtual void declare(Symbol *) = 0;
    virtual llvm::Value* visit(IntegerLiteral *integer,void *param) =0;
    virtual llvm::Value* visit(DecimalLiteral *decimal,void *param) =0;
    virtual llvm::Value* visit(StringLiteral *string,void *param) =0;
    virtual llvm::Value* visit(Identifier *string,void *param) =0;
    virtual llvm::Value* visit(MathExpression *expression,void *param) =0;
    virtual llvm::Value* visit(Statement *statement,void *param) =0;
    virtual llvm::Value* visit(SelectStatement *select,void *param) =0;
    virtual llvm::Value* visit(ForStatement *loop,void *param) =0;
    virtual llvm::Value* visit(SubroutineDeclaration *subroutine,void *param) =0;
    virtual llvm::Value* visit(SubroutineInvocation *subroutine,void *param) =0;
    virtual llvm::Value* visit(AssignmentStatement *assignment,void *param) =0;
    virtual llvm::Value* visit(ComparisonExpression *expression,void *param) =0;
    virtual llvm::Value *visit(DisplayStatement *dsply,void *param)  = 0;
};

class Token {
public:
    enum Type {
        INT,
        DECIMAL,
        STRING,
        PLUS,
        MINUS,
        MULTIPLY,
        DIVIDE,
        AND,
        OR,
        SYMBOL,
        SUBROUTINE,
        ASSIGNMENT,
        CALLS,
        SELECT,
        WHEN,
        OTHER,
        FOR,
        EQUAL,
        LT,GT,LE,GE,NE,
        DSPLY
    };

    Token(Type type, const std::string &text) : _type(type), _text(text) {}
    Type getType() const { return _type; }

    const std::string &getValue() const { return _text; }
    const std::string &toString() const { return _text; }

private:
    Type _type;
    std::string _text;
};

class Node {
public:
    Node(int line, const Token &token) : _line(line), _token(token) {}

    int getLine() const { return _line; }
    Token::Type getType() const { return _token.getType(); }
    const std::string &getValue() const { return _token.getValue(); }
    virtual  std::string toString() { return _token.toString(); }

    int addNode(std::shared_ptr<Node> node) { nodes.push_back(node); return nodes.size(); }

    const std::vector<std::shared_ptr<Node>> &getNodes() const { return nodes; }

    virtual llvm::Value *accept(Generator *v, void *param = nullptr) = 0;

private:
    int _line;
    Token _token;
    std::vector<std::shared_ptr<Node>>  nodes;

};

class Expression : public Node {
public:
    Expression(int line, const Token &token) : Node(line, token) {}

    llvm::Value *accept(Generator *v, void *param = nullptr) override {  return nullptr; }

};


class ComparisonExpression : public Expression {

public:
    ComparisonExpression(int line, const Token &token, const std::shared_ptr<Expression> left,
                    const std::shared_ptr<Expression> right) : Expression(line,
                                                                                token),
                                                                     _left(left),
                                                                     _right(right) {}

    static std::shared_ptr<ComparisonExpression> create(std::shared_ptr<Expression> left,
                                                   std::string op,
                                                   std::shared_ptr<Expression> right,
                                                   int line = 0) {
        if(op == "=") {
            Token token(Token::EQUAL,  "=" );
            return std::make_shared<ComparisonExpression>(line, token, left, right);
        }
        if(op == "<") {
            Token token(Token::LT,  "<" );
            return std::make_shared<ComparisonExpression>(line, token, left, right);
        }
        if(op == ">") {
            Token token(Token::GT,  ">" );
            return std::make_shared<ComparisonExpression>(line, token, left, right);
        }
        if(op == "<=") {
            Token token(Token::LE,  "<=" );
            return std::make_shared<ComparisonExpression>(line, token, left, right);
        }
        if(op == ">=") {
            Token token(Token::GE,  ">=" );
            return std::make_shared<ComparisonExpression>(line, token, left, right);
        }
         if(op == "<>") {
            Token token(Token::NE,  "<>" );
            return std::make_shared<ComparisonExpression>(line, token, left, right);
        }

    }

    const std::shared_ptr<Expression> &getLeft() const {
        return _left;
    }

    const std::shared_ptr<Expression> &getRight() const {
        return _right;
    }

    llvm::Value *accept(Generator *v, void *param = nullptr) override { return v->visit(this,param); }

    std::string toString() override {
        return this->_left->toString() + this->getValue() + this->_right->toString();
    }
private:
    std::shared_ptr<Expression> _left;
    std::shared_ptr<Expression> _right;
};

class MathExpression : public Expression {
public:
    MathExpression(int line, const Token &token, const std::shared_ptr<Expression> left,
                   const std::shared_ptr<Expression> right) : Expression(line,
                                                                        token),
                                                                   _left(left),
                                                                   _right(right) {
    }

    static std::shared_ptr<MathExpression> create(std::shared_ptr<Expression> left,
                                                  std::string op,
                                                  std::shared_ptr<Expression> right,
                                                  int line = 0) {

        if(op == "+") {
            Token token(Token::PLUS,  "+" );
            return std::make_shared<MathExpression>(line, token, left, right);
        }
        if(op == "-") {
            Token token(Token::MINUS,  "-" );
            return std::make_shared<MathExpression>(line, token, left, right);
        }
        if(op == "*") {
            Token token(Token::MULTIPLY,  "*" );
            return std::make_shared<MathExpression>(line, token, left, right);
        }
        if(op == "/") {
            Token token(Token::DIVIDE,  "/" );
            return std::make_shared<MathExpression>(line, token, left, right);
        }
        fprintf(stderr,"Invalid Math operation %s",op.c_str());
        return nullptr;

    }

    const std::shared_ptr<Expression> &getLeft() const {
        return _left;
    }

    const std::shared_ptr<Expression> &getRight() const {
        return _right;
    }

    llvm::Value *accept(Generator *v, void *param = nullptr) override { return v->visit(this,param); }

    std::string toString() override {
        return this->_left->toString() + this->getValue() + this->_right->toString();
    }

private:
    std::shared_ptr<Expression> _left;
    std::shared_ptr<Expression> _right;
};

class IntegerLiteral : public Expression {
public:
    IntegerLiteral(int line, const Token &token) : Expression(line, token) {}

    static std::shared_ptr<IntegerLiteral> create(std::string text, int line = 0) {
        Token token(Token::INT, text);
        return std::make_shared<IntegerLiteral>(line, token);
    }
    llvm::Value *accept(Generator *v, void *param = nullptr) override { return v->visit(this,param); };
private:
};

class DecimalLiteral : public Expression {
public:
    DecimalLiteral(int line, const Token &token) : Expression(line, token) {}
    static std::shared_ptr<DecimalLiteral> create(std::string text, int line = 0) {
        Token token(Token::DECIMAL, text);
        return std::make_shared<DecimalLiteral>(line, token);
    }
    llvm::Value *accept(Generator *v, void *param = nullptr) override { return v->visit(this,param); }
};

class StringLiteral : public Expression {
    StringLiteral(int line, const Token &token) : Expression(line, token) {}
    llvm::Value *accept(Generator *v, void *param = nullptr) override { return v->visit(this,param); }
};

class Identifier : public Expression {
public:
    Identifier(int line, const Token &token) : Expression(line, token) {}

    static std::shared_ptr<Identifier> create(std::string name, int line = 0) {
        Token token(Token::SYMBOL, name);
        return std::make_shared<Identifier>(line, token);
    }
    llvm::Value *accept(Generator *v, void *param = nullptr) override { return v->visit(this,param); }
};

class Statement : public Node {
public:
    Statement(int line, const Token &token) : Node(line, token) {}
    llvm::Value *accept(Generator *v, void *param = nullptr) override { return  v->visit(this,param); }
};

class SubroutineDeclaration : public  Statement {
public:
    SubroutineDeclaration(int line, const Token &token, const std::string &name) : Statement(line, token), _name(name) {}
    static std::shared_ptr<SubroutineDeclaration> create(std::string name,int line = 0) {
        Token token(Token::SUBROUTINE , name);
        return std::make_shared<SubroutineDeclaration>(line,token,name);
    }
    const std::string &getName() const { return _name; }
    llvm::Value *accept(Generator *v, void *param = nullptr) override { return  v->visit(this,param); }
    bool isMAIN() { return this->_name == "main"; }
private:
    std::string _name;
};

class SubroutineInvocation : public Statement {
public:
    SubroutineInvocation(int line, const Token &token, const std::string &name) : Statement(line, token), _name(name) {}

    static std::shared_ptr<SubroutineInvocation> create(std::string name,int line = 0) {
        Token token(Token::CALLS , name);
        return std::make_shared<SubroutineInvocation>(line,token,name);
    }
    const std::string &getName() const { return _name; }
    llvm::Value *accept(Generator *v, void *param = nullptr) override { return  v->visit(this,param); }

    std::string toString() override {
        return this->getValue();
    }

private:
    std::string _name;
};

class AssignmentStatement : public Statement {
public:
    AssignmentStatement(int line, const Token &token, const std::string &target,
                        const std::shared_ptr<Expression> &expression) : Statement(line, token),
                                                                         _target(target),
                                                                         _expression(expression) {}

    static std::shared_ptr<AssignmentStatement> create(std::string target,std::shared_ptr<Expression> expression,int line = 0) {
        Token token(Token::ASSIGNMENT , target);
        return std::make_shared<AssignmentStatement>(line,token,target,expression);
    }

    const std::string &getTarget() const { return _target;}
    const std::shared_ptr<Expression> &getExpression() const { return _expression; }

    llvm::Value *accept(Generator *v, void *param = nullptr) override { return  v->visit(this,param); }

    std::string toString() override {
        return this->_target + " = " + _expression->toString();
    }

private:
    std::string _target;
    std::shared_ptr<Expression>  _expression;
};


class SelectWhenClause : public Statement {
public:
    SelectWhenClause(int line, const Token &token, const std::shared_ptr<Expression> &expression)
            : Statement(line, token), _expression(expression) {}

    static std::shared_ptr<SelectWhenClause> create(std::shared_ptr<Expression> expression, int line = 0) {
        Token token(Token::WHEN ,"WHEN");
        return std::make_shared<SelectWhenClause>(line, token, expression);
    }

    const std::shared_ptr<Expression> &getExpression() const { return _expression; }

    std::string toString() override {
        return this->_expression->toString();
    }

private:
    std::shared_ptr<Expression>  _expression;


};
class SelectOtherClause : public Statement {
public:
    SelectOtherClause(int line, const Token &token) : Statement(line, token) {}
    static std::shared_ptr<SelectOtherClause> create(int line = 0) {
        Token token(Token::OTHER ,"OTHER");
        return std::make_shared<SelectOtherClause>(line, token);
    }

};

class SelectStatement : public Statement {
public:
    SelectStatement(int line, const Token &token) : Statement(line, token) {}

    static std::shared_ptr<SelectStatement> create(int line = 0) {
        Token token(Token::SELECT , "SELECT");
        return std::make_shared<SelectStatement>(line,token);
    }
    void    add(std::shared_ptr<SelectWhenClause> when) {
        _when.push_back(when);
    }

    const std::vector<std::shared_ptr<SelectWhenClause>> &getWhen() const { return _when; }
    const std::shared_ptr<SelectOtherClause> &getOther() const { return _other; }

    void setOther(const std::shared_ptr<SelectOtherClause> &other) { _other = other; }

    llvm::Value *accept(Generator *v, void *param = nullptr) override { return  v->visit(this,param); }

    std::string toString() override {
        return this->getValue();
    }

private:
    std::vector<std::shared_ptr<SelectWhenClause>>   _when;
    std::shared_ptr<SelectOtherClause> _other;
};

class ForStatement : public Statement {
public:
    ForStatement(int line, const Token &token, const std::shared_ptr<AssignmentStatement> &start,
                               const std::shared_ptr<Expression> &end, const std::shared_ptr<AssignmentStatement> &by) : Statement(
            line, token), _start(start), _end(end), _by(by) {

    }

public:
    static std::shared_ptr<ForStatement> create( const std::shared_ptr<AssignmentStatement> &start,
                 const std::shared_ptr<Expression> &end, const std::shared_ptr<AssignmentStatement> &by,int line = 0) {

        Token token(Token::FOR,"FOR");
        return std::make_shared<ForStatement>(line,token,start,end,by);
    }

    const std::shared_ptr<AssignmentStatement> &getStart() const { return _start; }

    const std::shared_ptr<Expression> &getEnd() const { return _end; }

    const std::shared_ptr<AssignmentStatement> &getBy() const { return _by; }

    std::string toString() override {
        return _start->toString() + " TO " + _end->toString();
    }

    llvm::Value *accept(Generator *v, void *param = nullptr) override { return  v->visit(this,param); }

private:
    std::shared_ptr<AssignmentStatement>  _start;
    std::shared_ptr<Expression>  _end;
    std::shared_ptr<AssignmentStatement>  _by;
};

class DisplayStatement : public Statement {
public:
    DisplayStatement(int line, const Token &token, const std::shared_ptr<Identifier> &identifier) : Statement(line,
                                                                                                              token),
                                                                                                    _identifier(
                                                                                                            identifier) {}

    static std::shared_ptr<DisplayStatement> create(std::shared_ptr<Identifier> identifier, int line = 0) {
        Token token(Token::DSPLY,"DSPLY");
        return std::make_shared<DisplayStatement>(line,token,identifier);
    }

    const std::shared_ptr<Identifier> &getIdentifier() const {
        return _identifier;
    }

    llvm::Value *accept(Generator *v, void *param = nullptr) override { return  v->visit(this,param); }

private:
    std::shared_ptr<Identifier>  _identifier;
};

class AST {
public:
    AST() {}

    void add(std::shared_ptr<Node> node) {
        nodes.push_back(node);
    }

    const std::vector<std::shared_ptr<Node>> &getNodes() const {
        return nodes;
    }

private:
    std::vector<std::shared_ptr<Node>> nodes;
};


