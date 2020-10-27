//
// Created by madytyoo on 2/6/20.
//
#pragma once

#include <map>
#include <memory>
#include "RpgParser.h"
#include "generator.h"


class SymbolType {
public:
    virtual bool    isSpecifier() { return false; }
    virtual bool    isArray() { return false; }
    virtual bool    isFunction() { return false; }
    virtual bool    isStructure() { return false; }

    virtual std::shared_ptr<SymbolType> clone(std::string name = "")  = 0;
    virtual void dump()  = 0;
private:

};

class SymbolSpecifier : public SymbolType {
public:
    SymbolSpecifier(const std::string &storage, int size, int decimals) : storage(storage), size(size),
                                                                          decimals(decimals) {}
    //SymbolSpecifier(const std::string &storage, int size, int decimals,const Expression &value) : storage(storage), size(size),
    //                                                                      decimals(decimals), value(value) {}

    /* Accessors */
    int getSize() const;
    int getDecimals() const;
    const std::string &getStorage();
    const std::shared_ptr<Expression> getValue();
    void setValue(std::shared_ptr<Expression> value);

    bool isSpecifier() override {
        return true;
    }

    std::shared_ptr<SymbolType>  clone(std::string name) override {
        std::shared_ptr<SymbolSpecifier> cloned = std::make_shared<SymbolSpecifier>(this->storage,this->size,this->decimals);
        return cloned;
    }


    void dump() override {
        std::cout << " - specifier -" << std::endl;
        std::cout << "   storage:" << storage << std::endl;
        std::cout << "   size:" << size << std::endl;
        std::cout << "   decimals:" << decimals << std::endl;
        //std::cout << "   value:" << value << std::endl;
    }

private:
    int size;                               /* Size in bytes */
    int decimals;                           /* Number of decimals */
    std::string storage;                    /* Storage class */
    std::shared_ptr<Expression> value;      /* initial value (if any) */
};

class ArrayDeclarator : public  SymbolType {
public:
    ArrayDeclarator(int size) : size(size) {}

    int getSize() const;

    std::shared_ptr<SymbolType> clone(std::string name) override {
        std::shared_ptr<ArrayDeclarator> cloned = std::make_shared<ArrayDeclarator>(this->size);
        return cloned;
    }
    bool isArray() override { return true; }
    void dump() override {
        std::cout << "- declarator - " << std::endl;
        std::cout << "  array size:" << size << std::endl;
    }
private:
    int size;
};


class StructDeclarator;
class FunctionDeclarator;


class Symbol {
public:
    enum State {
        RESOLVED = 0,
        UNRESOLVED = 1
    } ;

    Symbol(const std::string &name, Symbol::State state) : name(name), state(state) {}

    Symbol(const std::string &name, int line) : name(name), line(line) {
        state = State::RESOLVED;
    }

    Symbol(const std::string &name, int line, const std::shared_ptr<Symbol> &ref) :
            name(name), line(line), ref(ref) {
        state = State::RESOLVED;
    }


    /* Accessor */
    int getLine() const;
    const std::string&getName();

    Symbol::State getState() const { return state; }
    void setState(Symbol::State state) { this->state = state; }
    bool isUnresolved() { return  state == State::UNRESOLVED; }

    FunctionDeclarator *getFunctionDeclarator() {
        for (auto it = type.begin(); it != type.end(); ++it) {
            if(it->get()->isFunction()) {
                return reinterpret_cast<FunctionDeclarator *>(it->get());
            }
        }
        return nullptr;
    }

    SymbolSpecifier *getSpecifier() {
        for (auto it = type.begin(); it != type.end(); ++it) {
            if(it->get()->isSpecifier()) {
                return reinterpret_cast<SymbolSpecifier *>(it->get());
            }
        }
        return nullptr;
    }


    const std::shared_ptr<Symbol> &getRef() const;
    void setRef(const std::shared_ptr<Symbol> &ref);

    void setOffset(int offset);

    int getOffset() const;

    /* Operations */
    void addType(std::shared_ptr<SymbolType> symbolType) {
        type.push_back(symbolType);
    };
    void addSpecifier(std::shared_ptr<SymbolSpecifier> specifier);
    void addDeclarator(std::shared_ptr<ArrayDeclarator> declarator);
    void addDeclarator(std::shared_ptr<StructDeclarator> declarator);
    void addDeclarator(std::shared_ptr<FunctionDeclarator> declarator);


    StructDeclarator* getStructDeclarator() {
        for (auto it = type.begin(); it != type.end(); ++it) {
            if(it->get()->isStructure()) {
                return reinterpret_cast<StructDeclarator *>(it->get());
            }
        }
        return nullptr;
    }

    std::shared_ptr<Symbol> clone(std::string name) {
        std::shared_ptr<Symbol> cloned = std::make_shared<Symbol>(name,this->getLine());
        for (auto it  = this->type.begin();it  != this->type.end(); ++it) {
            cloned->addType(static_cast<std::shared_ptr<SymbolType>>(it->get()));
        }
        return cloned;
    }


public:
    void    dump() {

        std::cout <<  name << " (" << (state == State::RESOLVED ? "RESOLVED" : "UNRESOLVED" )  << ")" << std::endl;
        if(ref) {
            std::cout << "ref: " << ref.get()->getName() << std::endl;
        }
        for (auto it = type.begin(); it != type.end(); ++it) {
            it->get()->dump();
        }
    }

private:
    int line;                                       /* Source line of the symbol declaration */
    std::string name;                               /* Name of the symbol */
    std::vector<std::shared_ptr<SymbolType>> type;  /* Collection of type declarators */
    std::shared_ptr<Symbol> ref;                    /* Reference to another symbol */
    int offset;                                     /* offset */
    Symbol::State state;                            /* State of the symbol */
};

class StructDeclarator : public  SymbolType {
public:
    void    addField(std::shared_ptr<Symbol> symbol) {
        fields.push_back(symbol);
    }

    const std::vector<std::shared_ptr<Symbol>> &getFields() const {
        return fields;
    }

    bool isStructure() override {
        return true;
    }

    std::shared_ptr<SymbolType> clone(std::string name) override {
        std::shared_ptr<StructDeclarator> cloned = std::make_shared<StructDeclarator>();
        return cloned;
    }

    void dump() override {
        std::cout << " - declarator -" << std::endl;

        for (auto it = fields.begin(); it != fields.end(); ++it) {
            std::cout << "    " << it->get()->getName();
        }
        std::cout <<  std::endl;
    }
private:
    std::vector<std::shared_ptr<Symbol>> fields;
};
class ParamDeclaration {
public:
    ParamDeclaration(const std::string &name, const std::shared_ptr<SymbolType> &type) : name(name),
                                                                                                           type(type) {}

private:
    std::string name;                   /* Parameter name */
    std::shared_ptr<SymbolType> type;   /* Parameter type */
};

class FunctionDeclarator : public  SymbolType {
public:
    FunctionDeclarator()  {}

    std::shared_ptr<SymbolType> clone(std::string name) override {
        return std::shared_ptr<SymbolType>();
    }

    bool isFunction() override  {
        return true;
    }

    void dump() override {
        std::cout << " - function declarator -" << std::endl;
    }

private:
    std::vector<std::shared_ptr<ParamDeclaration>> args;
};

class SymbolTable {
public:
    SymbolTable() {
        std::map<std::basic_string<char>, std::shared_ptr<Symbol>> scope;
        symbolTable.push_back(scope);
    }

    void    add(std::shared_ptr<Symbol> symbol, int at = 0);
    void    replace(std::shared_ptr<Symbol> symbol, int at = 0) {
        std::map<std::basic_string<char>, std::shared_ptr<Symbol>> scope = symbolTable.at(at);
        scope.insert({ symbol->getName(),symbol });
    }
    std::shared_ptr<Symbol> get(std::string name, int at = 0);

    std::shared_ptr<std::vector<std::string>> getUnresolved() {
        std::shared_ptr<std::vector<std::string>> unresolved = std::make_shared<std::vector<std::string>>();
        std::map<std::basic_string<char>, std::shared_ptr<Symbol>> scope = symbolTable.at(0);
        for (auto it  = scope.begin();it  != scope.end(); ++it) {
            if(it->second->isUnresolved()) {
                unresolved->push_back(it->second->getName());
            }
        }
        return unresolved;
    }

    std::map<std::basic_string<char>, std::shared_ptr<Symbol>> getSymbols(int scope = 0) {
        return symbolTable.at(scope);
    }
    void resolve();
    void    dump() {
        std::map<std::basic_string<char>, std::shared_ptr<Symbol>> scope = symbolTable.at(0);
        std::cout << scope.size() << std::endl;
        for (auto itr = scope.begin(); itr != scope.end(); ++itr) {
            itr->second->dump();
        }
    }

private:
    std::vector<std::map<std::string,std::shared_ptr<Symbol>>> symbolTable;
};



