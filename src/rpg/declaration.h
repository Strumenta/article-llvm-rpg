//
// Created by madytyoo on 2/11/20.
//

#pragma once

#include <list>
#include "antlr4-runtime.h"
#include "RpgLexer.h"
#include "RpgParser.h"
#include "RpgParserBaseVisitor.h"

#include "symbtab.h"
#include "compiler.h"


class RpgSymbolFactory {
public:
    RpgSymbolFactory(const Compiler *compiler) : compiler(compiler) {}

public:
    std::shared_ptr<Symbol> create(antlrcpprpg::RpgParser::DspecContext* ctx);
    std::shared_ptr<Symbol> create(antlrcpprpg::RpgParser::DspecConstantContext* ctx);
    std::shared_ptr<Symbol> create(antlrcpprpg::RpgParser::Dcl_dsContext* ctx,std::shared_ptr<SymbolTable>);
    std::shared_ptr<Symbol> create(antlrcpprpg::RpgParser::Parm_fixedContext* ctx,std::string name, bool qualified,std::shared_ptr<SymbolTable>);
    std::shared_ptr<Symbol> create(antlrcpprpg::RpgParser::CsBEGSRContext* ctx,std::shared_ptr<SymbolTable>);

    static std::string replace(std::string str, const std::string& from, const std::string& to) {
        size_t start_pos = 0;
        while((start_pos = str.find(from, start_pos)) != std::string::npos) {
            str.replace(start_pos, from.length(), to);
            start_pos += to.length(); // Handles case where 'to' is a substring of 'from'
        }
        return str;
    }
private:
    const Compiler* compiler;
    bool is_number(const std::string& s)
    {
        return !s.empty() && std::find_if(s.begin(),
                                          s.end(), [](unsigned char c) { return !std::isdigit(c); }) == s.end();
    }
};


class RpgDeclarationVisitor : public RpgVisitor {

public:
    RpgDeclarationVisitor(const std::string &filename, const Compiler *compiler);

    antlrcpp::Any visitDspec(antlrcpprpg::RpgParser::DspecContext *ctx) override;
    antlrcpp::Any visitDcl_ds(antlrcpprpg::RpgParser::Dcl_dsContext *ctx) override;

    antlrcpp::Any visitCsBEGSR(antlrcpprpg::RpgParser::CsBEGSRContext *ctx) override;

    antlrcpp::Any visitR(antlrcpprpg::RpgParser::RContext *ctx) override;

private:
    std::shared_ptr<RpgSymbolFactory> symbolFactory;

    std::shared_ptr<Symbol> parseSymbol(antlrcpprpg::RpgParser::DspecContext *ctx);
    std::shared_ptr<Symbol> parseSubroutine(antlrcpprpg::RpgParser::CsBEGSRContext* ctx);

};



