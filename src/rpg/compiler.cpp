//
// Created by madytyoo on 2/6/20.
//

#include <iostream>
#include <memory>

#include "antlr4-runtime.h"
#include "RpgLexer.h"
#include "RpgParser.h"
#include "log.h"
#include "compiler.h"
#include "parser.h"
#include "declaration.h"
#include "generator.h"


void Compiler::setEmitLogInfo(bool enable) {
    LogMessage::setEnable(enable);
}
void Compiler::addSource(const char* filename) {
    this->sources.push_back(filename);
}

void Compiler::readSource(const std::string  &filename,std::string &file_contents)  {
    std::string str;
    std::ifstream stream;

    stream.open(filename);
    std::string m = filename;

    /*  read the input line by line to avoid any linux/windows/mac newline problem */
    while (getline(stream, str))
    {
       // Pad the string
       if(str.size() < 80)
           str.append( 80 - str.size(), ' ');
       file_contents += str;
       file_contents.push_back('\n');
    }

    stream.close();
}
int Compiler::compile() {
    std::string file_contents;

    for (std::string const& file: this->sources) {
        std::cerr << "Compiling file:" << file << "\n";
        readSource(file,file_contents);

        antlr4::ANTLRInputStream input(file_contents);

        antlrcpprpg::RpgLexer  lexer(&input);

        antlr4::CommonTokenStream tokens(&lexer);

        antlrcpprpg::RpgParser parser(&tokens);
        parser.removeErrorListeners();

        antlrcpprpg::RpgParser::RContext *tree = parser.r();
        //std::cout << tree->toStringTree(&parser) << std::endl << std::endl;
        // First Pass parse declarations
        RpgDeclarationVisitor declarationVisitor(file, this);
        declarationVisitor.visit(tree);
        //symbolTable->dump();
        symbolTable->resolve();

        // Second  Pass parse statements
        RpgCodeVisitor codeVisitor(file, this);
        codeVisitor.visit(tree);
        //codeVisitor.dump();

        // Code Generation
        GeneratorLLVM *generator =  new GeneratorLLVM(file,emitDebugInfo);
        generator->process(symbolTable,ast);
        generator->dump();

    }
    return 0;

}

