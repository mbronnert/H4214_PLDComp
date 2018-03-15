#pragma once

#include "antlr4-runtime.h"
#include "PLDCOMPBaseVisitor.h"
#include "Instruction.h"
#include "Declaration.h"
#include "Fonction.h"
#include "Programme.h"

#include <list>

using namespace std;

class Programme;

class Visitor : public PLDCOMPBaseVisitor {

    virtual antlrcpp::Any visitAdd(PLDCOMPParser::AddContext *ctx) override {
        return (Symbole) ADD;
    }

    virtual antlrcpp::Any visitMoins(PLDCOMPParser::MoinsContext *ctx) override {
        return (Symbole) MOINS;
    }

    virtual antlrcpp::Any visitMult(PLDCOMPParser::MultContext *ctx) override {
        return (Symbole) MULT;
    }

    virtual antlrcpp::Any visitDiv(PLDCOMPParser::DivContext *ctx) override {
        return (Symbole) DIV;
    }

    virtual antlrcpp::Any visitMod(PLDCOMPParser::ModContext *ctx) override {
      return (Symbole) MOD;
    }

    virtual antlrcpp::Any visitPow(PLDCOMPParser::PowContext *ctx) override {
      return (Symbole) POW;
    }

    virtual antlrcpp::Any visitAnd(PLDCOMPParser::AndContext *ctx) override {
      return (Symbole) AND;
    }

    virtual antlrcpp::Any visitOr(PLDCOMPParser::OrContext *ctx) override {
      return (Symbole) OR;
    }

    virtual antlrcpp::Any visitEqual(PLDCOMPParser::EqualContext *ctx) override {
      return (Symbole) EQUAL;
    }

    virtual antlrcpp::Any visitInfs(PLDCOMPParser::InfsContext *ctx) override {
      return (Symbole) INFS;
    }

    virtual antlrcpp::Any visitInf(PLDCOMPParser::InfContext *ctx) override {
      return (Symbole) INF;
    }

    virtual antlrcpp::Any visitSups(PLDCOMPParser::SupsContext *ctx) override {
      return (Symbole) SUPS;
    }

    virtual antlrcpp::Any visitSup(PLDCOMPParser::SupContext *ctx) override {
      return (Symbole) SUP;
    }

    virtual antlrcpp::Any visitDecg(PLDCOMPParser::DecgContext *ctx) override {
      return (Symbole) DECG;
    }

    virtual antlrcpp::Any visitDecd(PLDCOMPParser::DecdContext *ctx) override {
      return (Symbole) DECD;
    }

    virtual antlrcpp::Any visitEqualb(PLDCOMPParser::EqualbContext *ctx) override {
      return (Symbole) EQUALB;
    }

    virtual antlrcpp::Any visitDiff(PLDCOMPParser::DiffContext *ctx) override {
      return (Symbole) DIFF;
    }

    virtual antlrcpp::Any visitAndb(PLDCOMPParser::AndbContext *ctx) override {
      return (Symbole) ANDB;
    }

    virtual antlrcpp::Any visitOrb(PLDCOMPParser::OrbContext *ctx) override {
      return (Symbole) ORB;
    }

    virtual antlrcpp::Any visitExpLvalue(PLDCOMPParser::ExpLvalueContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitPpexp(PLDCOMPParser::PpexpContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitAppelGetchar(PLDCOMPParser::AppelGetcharContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitConstanteNombre(PLDCOMPParser::ConstanteNombreContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitParenthese(PLDCOMPParser::ParentheseContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitNon(PLDCOMPParser::NonContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitConstanteCaractere(PLDCOMPParser::ConstanteCaractereContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitAppelDeFonction(PLDCOMPParser::AppelDeFonctionContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitMmexp(PLDCOMPParser::MmexpContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitAffectation(PLDCOMPParser::AffectationContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitOperateurBinaire(PLDCOMPParser::OperateurBinaireContext *ctx) override {
        return (Expression *) new ExprBin (visit(ctx->exp(0)), visit(ctx->op()), visit(ctx->exp(1)));
    }

    virtual antlrcpp::Any visitAppelPutchar(PLDCOMPParser::AppelPutcharContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitExppp(PLDCOMPParser::ExpppContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitExpmm(PLDCOMPParser::ExpmmContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitVariable(PLDCOMPParser::VariableContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitTableau(PLDCOMPParser::TableauContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitStructure(PLDCOMPParser::StructureContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitConstante(PLDCOMPParser::ConstanteContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitType_variable(PLDCOMPParser::Type_variableContext *ctx) override {
        cout<<"dans type_variable"<<endl;
        string type = ctx->getText();
        if (type=="char")
          return CHAR;
        else if (type=="int_32")
          return INT32;
        else if (type=="int_64")
          return INT64;
        else
          return false;
    }

    virtual antlrcpp::Any visitType_function(PLDCOMPParser::Type_functionContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitIf_statement(PLDCOMPParser::If_statementContext *ctx) override {
      return visitChildren(ctx);
        //return (If *) new If(visit(ctx->exp()));
    }

    virtual antlrcpp::Any visitWhile(PLDCOMPParser::WhileContext *ctx) override {
      return visitChildren(ctx);
        //return (While *) new While(visit(ctx->exp()));
    }

    virtual antlrcpp::Any visitValeur(PLDCOMPParser::ValeurContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitDeclarationConstante(PLDCOMPParser::DeclarationConstanteContext *ctx) override {
        return (Declaration *) new Declaration (visit(ctx->type_variable()), ctx->NOMVAR()->getText());
    }

    virtual antlrcpp::Any visitDeclaration(PLDCOMPParser::DeclarationContext *ctx) override {
        cout<<"dans declaration"<<endl;
        return (Declaration *) new Declaration(visit(ctx->type_variable()), ctx->NOMVAR()->getText()) ;
    }

    virtual antlrcpp::Any visitDeclarationTableau(PLDCOMPParser::DeclarationTableauContext *ctx) override {
        return (Declaration*) new Declaration (visit(ctx->type_variable()), ctx->NOMVAR()->getText());
    }

    virtual antlrcpp::Any visitDeclarationTableauConstante(PLDCOMPParser::DeclarationTableauConstanteContext *ctx) override {
        return (Declaration *) new Declaration (visit(ctx->type_variable()), ctx->NOMVAR()->getText());
    }

    virtual antlrcpp::Any visitVoid(PLDCOMPParser::VoidContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitParametres(PLDCOMPParser::ParametresContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitDeclarationFoncionParams(PLDCOMPParser::DeclarationFoncionParamsContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitDeclarationFoncion(PLDCOMPParser::DeclarationFoncionContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitDeclarationVariables(PLDCOMPParser::DeclarationVariablesContext *ctx) override {
        cout<<"dans déclaration_variable"<<endl;
        //cout << "ok" << endl;
        //list<Declaration*> declarations;
        //visitChildren(ctx);
        //Declaration * d = ;
        cout << "ok";
        /*for(list<Declaration>::iterator i=declarations.begin(); i!=declarations.end() ; ++i) {
            cout << "Declaration x" << endl;
        }*/
        return (Declaration*) visitChildren(ctx);//declarations;
    }

    virtual antlrcpp::Any visitBloc(PLDCOMPParser::BlocContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitBlocInstruction(PLDCOMPParser::BlocInstructionContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitBreakInstruction(PLDCOMPParser::BreakInstructionContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitStructureInstruction(PLDCOMPParser::StructureInstructionContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitReturnInstruction(PLDCOMPParser::ReturnInstructionContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitExpInstruction(PLDCOMPParser::ExpInstructionContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitProgramme(PLDCOMPParser::ProgrammeContext *ctx) override {
        cout << "Dans programme" << endl;
        return visitChildren(ctx);//(Programme*) new Programme(visit(ctx->declaration_variables()), null);
    }


};
