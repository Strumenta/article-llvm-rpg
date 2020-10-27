//
// Created by madytyoo on 2/23/20.
//

#pragma once
#include "antlr4-runtime.h"
#include "RpgParserBaseVisitor.h"

#include "ast.h"
#include "compiler.h"



class RpgCodeVisitor : public RpgVisitor {
public:
    RpgCodeVisitor(const std::string &filename, const Compiler *compiler);

    antlrcpp::Any visitR(antlrcpprpg::RpgParser::RContext *ctx) override;

    antlrcpp::Any visitCsEXSR(antlrcpprpg::RpgParser::CsEXSRContext *ctx) override;

    antlrcpp::Any visitCsBEGSR(antlrcpprpg::RpgParser::CsBEGSRContext *ctx) override;
    antlrcpp::Any visitCsENDSR(antlrcpprpg::RpgParser::CsENDSRContext *ctx) override;

    antlrcpp::Any visitCsEVAL(antlrcpprpg::RpgParser::CsEVALContext *ctx) override;

    antlrcpp::Any visitBeginselect(antlrcpprpg::RpgParser::BeginselectContext *ctx) override;
    antlrcpp::Any visitWhenstatement(antlrcpprpg::RpgParser::WhenstatementContext *ctx) override;
    antlrcpp::Any visitCsOTHER(antlrcpprpg::RpgParser::CsOTHERContext *ctx) override;
    antlrcpp::Any visitEndselect(antlrcpprpg::RpgParser::EndselectContext *ctx) override;

    antlrcpp::Any visitCsFOR(antlrcpprpg::RpgParser::CsFORContext *ctx) override;
    antlrcpp::Any visitEndfor(antlrcpprpg::RpgParser::EndforContext *ctx) override;

    void addNode(std::shared_ptr<Node> node) {
        if(scope.size() > 0) {
            std::shared_ptr<Node> current = scope.top();
            current.get()->addNode(node);
        } else {
            compiler->ast->add(node);
        }
    }
    std::shared_ptr<Expression>  parseExpression(antlrcpprpg::RpgParser::ExpressionContext *ctx);

    void dump() { }

    antlrcpp::Any visitCsDSPLY(antlrcpprpg::RpgParser::CsDSPLYContext *ctx) override;


private:
    std::stack<std::shared_ptr<Node>> scope;


};
