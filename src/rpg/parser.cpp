//
// Created by madytyoo on 2/23/20.
//

#include "log.h"
#include "antlr4-runtime.h"
#include "RpgParser.h"
#include "parser.h"



RpgCodeVisitor::RpgCodeVisitor(const std::string &filename, const Compiler *compiler) : RpgVisitor(
        filename, compiler) {}

/**
 * Parse the compilation unit
 * Pushes the main subroutine in the scope
 * @param ctx
 * @return
 */
antlrcpp::Any RpgCodeVisitor::visitR(antlrcpprpg::RpgParser::RContext *ctx) {
    LOG(CODE) << "----- Processing code statements -----";
    std::shared_ptr<SubroutineDeclaration> subroutine = SubroutineDeclaration::create("main");
    scope.push(subroutine);

    return RpgParserBaseVisitor::visitR(ctx);
}

/**
 * Parse an execute subroutine statment (EXSR)
 * Adds a SubroutineInvocation node to the AST
 * @param ctx
 * @return
 */
antlrcpp::Any RpgCodeVisitor::visitCsEXSR(antlrcpprpg::RpgParser::CsEXSRContext *ctx) {
    /* Subroutine Name */
    std::string name = ctx->cspec_fixed_standard_parts() ? ctx->cspec_fixed_standard_parts()->getText() : "";
    LOG(CODE) << this->filename << "(" << ctx->getStart()->getLine() << ")" <<  " : EXSR " << trim(name);

    if(ctx->cspec_fixed_standard_parts()) {
        std::shared_ptr<SubroutineInvocation> invocation =  SubroutineInvocation::create(trim(name),ctx->getStart()->getLine());
        addNode(invocation);
    }
    return RpgParserBaseVisitor::visitCsEXSR(ctx);
}

/**
 * Parse an begin subroutine statement (BEGSR)
 * Adds a SubroutineDeclaration instance to the scope
 * @param ctx
 * @return
 */
antlrcpp::Any RpgCodeVisitor::visitCsBEGSR(antlrcpprpg::RpgParser::CsBEGSRContext *ctx) {
    LOG(CODE) << this->filename << "(" << ctx->getStart()->getLine() << ")" <<  " : BEGSR " <<  ctx->factor()->getText();

    std::shared_ptr<Node> main = scope.top();
    scope.pop();
    addNode(main);

    /* Subroutine Name */
    std::string name =  ctx->factor()->getText();

    std::shared_ptr<SubroutineDeclaration> subroutine = SubroutineDeclaration::create(name,ctx->getStart()->getLine());
    scope.push(subroutine);

    return RpgParserBaseVisitor::visitCsBEGSR(ctx);
}
/**
 * Parse the End Subroutine statement (ENDSR)
 * Adds  SubroutineDeclaration node to the AST
 * @param ctx
 * @return
 */
antlrcpp::Any RpgCodeVisitor::visitCsENDSR(antlrcpprpg::RpgParser::CsENDSRContext *ctx) {
    LOG(CODE) << this->filename << "(" << ctx->getStart()->getLine() << ")" <<  " : ENDSR ";

    if(scope.size() > 0) {
        std::shared_ptr<Node> subroutine = scope.top();
        scope.pop();
        addNode(subroutine);
    }
    return RpgParserBaseVisitor::visitCsENDSR(ctx);
}

/**
 * Parse an assigment statement (ENDSR)
 * Adds  AssignmentStatement node to the AST
 * @param ctx
 * @return
 */
antlrcpp::Any RpgCodeVisitor::visitCsEVAL(antlrcpprpg::RpgParser::CsEVALContext *ctx) {
    std::string s = ctx->fixedexpression->expression() ? ctx->fixedexpression->expression()->getText() : "";
    LOG(CODE) << this->filename << "(" << ctx->getStart()->getLine() << ") : EVAL " << ctx->target()->getText() << " = " << s;

    if(ctx->target()) {
        try {
            std::string target = ctx->target()->getText();
            std::shared_ptr<Symbol> symbol =  this->compiler->symbolTable->get(target);
            if(!symbol) {
                throw RpgException(ctx->target()->getText() + " UNDEFINED identifier");
            }

            std::shared_ptr<Expression> expression = RpgVisitor::parseExpression(ctx->fixedexpression->expression());

            std::shared_ptr<AssignmentStatement> assignment = AssignmentStatement::create(target, expression,ctx->getStart()->getLine());
            addNode(assignment);
        } catch(RpgException& e) {
            std::cerr << "rpg: " <<  this->filename << ":" << ctx->getStart()->getLine() << ":" << ctx->getStart()->getCharPositionInLine() + 1 << " error: "  << e.getMessage() << std::endl;
            exit(1);
        }
    }

    return RpgParserBaseVisitor::visitCsEVAL(ctx);
}

/**
 * Parse an select/when statement (SELECT)
 * Pushes  the SelectStatement into the scope
 * @param ctx
 * @return
 */
antlrcpp::Any RpgCodeVisitor::visitBeginselect(antlrcpprpg::RpgParser::BeginselectContext *ctx) {
    LOG(CODE) << this->filename << "(" << ctx->getStart()->getLine() << ")" <<  " : SELECT ";

    std::shared_ptr<SelectStatement> select = SelectStatement::create(ctx->getStart()->getLine());
    scope.push(select);
    return RpgParserBaseVisitor::visitBeginselect(ctx);

}
/**
 * Parse an when condition (WHEN)
 * Add  the SelectWhenClause to the current SelectStatement
 * @param ctx
 * @return
 */
antlrcpp::Any RpgCodeVisitor::visitWhenstatement(antlrcpprpg::RpgParser::WhenstatementContext *ctx) {
    std::string s = ctx->when()->csWHEN()->fixedexpression ? ctx->when()->csWHEN()->fixedexpression->expression()->getText() : "";
    LOG(CODE) << this->filename << "(" << ctx->getStart()->getLine() << ")" <<  " : WHEN " <<  s ;

    try {
        std::shared_ptr<Expression> expression = RpgVisitor::parseExpression(ctx->when()->csWHEN()->fixedexpression->expression());
        std::shared_ptr<SelectWhenClause> when = SelectWhenClause::create(expression, ctx->when()->csWHEN()->fixedexpression->expression()->getStart()->getLine());

        /* Check if it is processing a WHEN */
        if(SelectWhenClause* v = dynamic_cast<SelectWhenClause*>(scope.top().get())) {
            scope.pop();
        }
        /* Get the select statement from the scope stack and add the when condition */
        if(SelectStatement* select = dynamic_cast<SelectStatement*>(scope.top().get())) {
            select->add(when);
            scope.push(when);
        }
    } catch(RpgException& e) {
        std::cerr << "rpg: " <<  this->filename << ":" << ctx->getStart()->getLine() << ":" << ctx->getStart()->getCharPositionInLine() + 1 << " error: "  << e.getMessage() << std::endl;
        exit(-1);
    }

    return RpgParserBaseVisitor::visitWhenstatement(ctx);
}

/**
 * Parse an other condition (OTHER)
 * Add  the SelectOtherClause to the current SelectStatement
 * @param ctx
 * @return
 */
antlrcpp::Any RpgCodeVisitor::visitCsOTHER(antlrcpprpg::RpgParser::CsOTHERContext *ctx) {
    LOG(CODE) << this->filename << "(" << ctx->getStart()->getLine() << ")" <<  " : OTHER ";

    std::shared_ptr<SelectOtherClause> other = SelectOtherClause::create(ctx->getStart()->getLine());
    // This is a workaround to address a grammar issue, the OTHER comes as part of
    // the last WHEN

    /* Removes the last WHEN */
    if(SelectWhenClause* v = dynamic_cast<SelectWhenClause*>(scope.top().get())) {
        scope.pop();
    }
    /* Get the select statement from the scope stack and add the OTHER condition */
    if(SelectStatement* select = dynamic_cast<SelectStatement*>(scope.top().get())) {
        select->setOther(other);
        scope.push(other);
    }

    return RpgParserBaseVisitor::visitCsOTHER(ctx);
}

/**
 * Process the end select (ENDSELECT)
 * Adds the current SelectStatement to the AST
 * @param ctx
 * @return
 */
antlrcpp::Any RpgCodeVisitor::visitEndselect(antlrcpprpg::RpgParser::EndselectContext *ctx) {
    LOG(CODE) << this->filename << "(" << ctx->getStart()->getLine() << ")" <<  " : ENDSL ";

    /* Get the select statement from the scope stack and add the other condition */
    if(dynamic_cast<SelectWhenClause*>(scope.top().get()) || dynamic_cast<SelectOtherClause*>(scope.top().get())) {
        scope.pop();
    }

    if(scope.size() > 0) {
        std::shared_ptr<Node> select = scope.top();
        scope.pop();
        addNode(select);
    }
    return RpgParserBaseVisitor::visitEndselect(ctx);
}


/**
 * Parse the for loop statement (FOR)
 *
 * @param ctx
 * @return
 */
antlrcpp::Any RpgCodeVisitor::visitCsFOR(antlrcpprpg::RpgParser::CsFORContext *ctx) {
    std::string se  =  ctx->expression(0) ? ctx->expression(0)->getText() : "";
    std::string st  =  ctx->stopExpression() ? ctx->stopExpression()->expression()->getText() : "";
    std::string by  =  ctx->byExpression() ? " BY " + ctx->byExpression()->expression()->getText() : " BY 1 ";
    std::string to  =  ctx->FREE_DOWNTO() ? " DOWNTO " : " TO ";

    LOG(CODE) << this->filename << "(" << ctx->getStart()->getLine() << ") : FOR " << se << by << to << st;

    try {
        std::shared_ptr<Expression> expression = RpgVisitor::parseExpression(ctx->expression(0));

        /* The Equal expression can be used for a comparison or an assignment depending on the context
           In this case is transformed to a @AssignementStament, to make it handy to the generator */
        if(ComparisonExpression* convert = dynamic_cast<ComparisonExpression*>(expression.get())) {

            /* The left expression must be an identifier */
            if( Identifier* identifier = dynamic_cast<Identifier*>(convert->getLeft().get()) ) {
                std::string target = identifier->getValue();
                std::shared_ptr<AssignmentStatement> start = AssignmentStatement::create(target, convert->getRight(),ctx->getStart()->getLine());

                /* To balance the complexity of generator and parser, the expression is computed during the parse phase */
                std::shared_ptr<Expression> endExpression = RpgVisitor::parseExpression(ctx->stopExpression()->expression());
                std::shared_ptr<ComparisonExpression> end = ComparisonExpression::create(Identifier::create(target), "<=", endExpression, ctx->getStart()->getLine());


                /* Compute the step value */
                std::string op  =  ctx->FREE_DOWNTO() ? "-" : "+";
                std::shared_ptr<AssignmentStatement> stepBy;
                if(ctx->byExpression()) {
                    std::shared_ptr<Expression> byExpression = RpgVisitor::parseExpression(ctx->byExpression()->expression());
                    std::shared_ptr<Expression> stepByExpression = MathExpression::create(convert->getLeft(), op, byExpression, ctx->getStart()->getLine());
                    stepBy = AssignmentStatement::create(target, stepByExpression,ctx->getStart()->getLine());
                } else {
                    std::shared_ptr<Expression> byExpression =  IntegerLiteral::create("1",ctx->getStart()->getLine());
                    std::shared_ptr<Expression> stepByExpression = MathExpression::create(convert->getLeft(), op, byExpression, ctx->getStart()->getLine());
                    stepBy = AssignmentStatement::create(target, stepByExpression,ctx->getStart()->getLine());
                }

                std::shared_ptr<ForStatement> loop = ForStatement::create(start, end, stepBy,ctx->getStart()->getLine());
                scope.push(loop);
            }
        }
    } catch(RpgException& e) {
        //std::cerr << "\033[1;31mrpg: error " <<  this->filename << "(" << symbol->second->getLine() << ") : "  << e.getMessage() << "\033[0m" << std::endl;
        std::cerr << "rpg: error " <<  this->filename << "(" << ctx->getStart()->getLine() << ") : "  << e.getMessage() << std::endl;
        exit(-1);
    }

    return RpgParserBaseVisitor::visitCsFOR(ctx);
}

/**
 * ENDFOR
 * @param ctx
 * @return
 */

antlrcpp::Any RpgCodeVisitor::visitEndfor(antlrcpprpg::RpgParser::EndforContext *ctx) {
    LOG(CODE) << this->filename << "(" << ctx->getStart()->getLine() << ")" << " : ENDFOR";
    if(scope.size() > 0) {
        std::shared_ptr<Node> loop = scope.top();
        scope.pop();
        addNode(loop);
    }
    return RpgParserBaseVisitor::visitEndfor(ctx);
}

antlrcpp::Any RpgCodeVisitor::visitCsDSPLY(antlrcpprpg::RpgParser::CsDSPLYContext *ctx) {
    LOG(CODE) << this->filename << "(" << ctx->getStart()->getLine() << ")" << " : DSPLY";
    try {
        if(ctx->cspec_fixed_standard_parts()->factor()) {
            std::string target = ctx->cspec_fixed_standard_parts()->factor()->factorContent().at(0)->getText();
            std::shared_ptr<Symbol> symbol =  this->compiler->symbolTable->get(target);
            if(!symbol) {
                throw RpgException(target + " UNDEFINED identifier");
            }
            std::shared_ptr<Identifier> identifier = Identifier::create(target,ctx->getStart()->getLine());

            std::shared_ptr<DisplayStatement> dsply = DisplayStatement::create(identifier,ctx->getStart()->getLine());

            addNode(dsply);
        }
    } catch (RpgException e) {
        throw  RpgException(ctx->getText() + "SYNTAX error");
        exit(-1);

    }
    return RpgParserBaseVisitor::visitCsDSPLY(ctx);
}


