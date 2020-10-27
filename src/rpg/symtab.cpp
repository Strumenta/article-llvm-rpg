//
// Created by madytyoo on 2/10/20.
//

#include "declaration.h"
#include "symbtab.h"

/**
 *  SymbolSpecifier
 */
int SymbolSpecifier::getSize() const {
    return size;
}

int SymbolSpecifier::getDecimals() const {
    return decimals;
}

const std::string &SymbolSpecifier::getStorage()  {
    return storage;
}

const std::shared_ptr<Expression> SymbolSpecifier::getValue() {
    return value;
}

void SymbolSpecifier::setValue(std::shared_ptr<Expression> value)   {
    SymbolSpecifier::value = value;
}



/**
 *  ArrayDeclarator
 */
int ArrayDeclarator::getSize() const {
    return size;
}


/**
 * Symbol
 */

int Symbol::getLine() const {
    return line;
}

const std::string& Symbol::getName()  {
    return name;
}

void Symbol::addSpecifier(std::shared_ptr<SymbolSpecifier> specifier) {
    type.push_back(specifier);
}
void Symbol::addDeclarator(std::shared_ptr<ArrayDeclarator> declarator) {
    /* Declarators come first */
    type.insert(type.begin(),declarator);
}
void Symbol::addDeclarator(std::shared_ptr<StructDeclarator> declarator) {
    /* Declarators come first */
    type.insert(type.begin(),declarator);
}
void Symbol::addDeclarator(std::shared_ptr<FunctionDeclarator> declarator) {
    /* Declarators come first */
    type.insert(type.begin(),declarator);
}

void Symbol::setRef(const std::shared_ptr<Symbol> &ref) {
    this->ref = ref;
}

const std::shared_ptr<Symbol> &Symbol::getRef() const {
    return ref;
}

void Symbol::setOffset(int offset) {
    Symbol::offset = offset;
}

int Symbol::getOffset() const {
    return offset;
}

/**
 * SymbolTable
 */

/**
 * Add a symbol to the Symbol Table
 * @param symbol    name of the symbol
 * @param at        scope
 */
void    SymbolTable::add(std::shared_ptr<Symbol> symbol, int at) {
    std::map<std::basic_string<char>, std::shared_ptr<Symbol>> scope = symbolTable.at(at);
    /* check if the symbol is already defined */
    auto duplicate = scope.find(symbol->getName());
    if (duplicate  == scope.end()) {
        scope.insert({ symbol->getName(),symbol });
        symbolTable[at] = scope;
    } else {
        /* TODO: compiler class should provide an interface to add error messages */
        std::cout << "@line: " << symbol->getLine() << " symbol: " << symbol->getName() << " already defined @line : " << duplicate->second.get()->getLine()  << std::endl;
    }
}
/**
 * Retrieve a symbol
 * @param name
 * @param at
 * @return
 */
std::shared_ptr<Symbol> SymbolTable::get(std::string name, int at) {
    std::map<std::basic_string<char>, std::shared_ptr<Symbol>> scope = symbolTable.at(0);
    auto symbol = scope.find(name);
    if(symbol != scope.end() ) {
        return symbol->second;
    }
    return nullptr;
}
/**
 * Symbol table resolver algorithm
 * When a symbol refers to another symbol not yet declared it is stored into the UNRESOLVED collection.
 *
 * In RPG a typical example is:
 *
 * B LIKEDS(A)
 * A DS
 *
 * The method process attempts to resolve the UNRESOLVED, if succeded the unresolved collection is empty
 * returns the size of the unresolved collection, if 0 it is ok otherwise
 * the compiler can raise an error and display the list of UNRESOLVED symbols.
 */
void SymbolTable::resolve() {

    std::shared_ptr<std::vector<std::string>> unresolved = this->getUnresolved();
    if(!unresolved->empty()) {
        for (auto name = unresolved->begin(); name != unresolved->end(); ++name) {
            /* Attempt to resolve */
            std::shared_ptr<Symbol> symbol = this->get(name->c_str());
            StructDeclarator* declarator = symbol->getStructDeclarator();
            symbol->dump();
            std::shared_ptr<Symbol> ref = this->get(symbol->getRef()->getName());
            if(ref) {
                StructDeclarator* from = ref->getStructDeclarator();
                if(from) {
                    for (auto it = from->getFields().begin(); it != from->getFields().end(); ++it) {
                        //it->get()->dump();
                        std::string clonedName = RpgSymbolFactory::replace(it->get()->getName(),ref->getName(),symbol->getName());
                        //std::cout << "cloning: " <<  it->get()->getName() << " into " << clonedName << std::endl;
                        std::shared_ptr<Symbol> field = it->get()->clone(clonedName);
                        field->setRef(symbol);
                        declarator->addField(field);
                    }
                    symbol->setState(Symbol::State::RESOLVED);
                }
                for (auto it = declarator->getFields().begin(); it != declarator->getFields().end(); ++it) {
                    std::shared_ptr<Symbol> field = static_cast<std::shared_ptr<Symbol>>(it->get());
                    this->add(field);
                }
                this->replace(symbol);
                symbol->dump();
            }
        }
        this->dump();
    }

}


