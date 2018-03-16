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

     antlrcpp::Any visitAdd(PLDCOMPParser::AddContext *ctx) override {
        return (Symbole) ADD;
    }

     antlrcpp::Any visitMoins(PLDCOMPParser::MoinsContext *ctx) override {
        return (Symbole) MOINS;
    }

     antlrcpp::Any visitMult(PLDCOMPParser::MultContext *ctx) override {
        return (Symbole) MULT;
    }

     antlrcpp::Any visitDiv(PLDCOMPParser::DivContext *ctx) override {
        return (Symbole) DIV;
    }

     antlrcpp::Any visitMod(PLDCOMPParser::ModContext *ctx) override {
      return (Symbole) MOD;
    }

     antlrcpp::Any visitPow(PLDCOMPParser::PowContext *ctx) override {
      return (Symbole) POW;
    }

     antlrcpp::Any visitAnd(PLDCOMPParser::AndContext *ctx) override {
      return (Symbole) AND;
    }

     antlrcpp::Any visitOr(PLDCOMPParser::OrContext *ctx) override {
      return (Symbole) OR;
    }

     antlrcpp::Any visitEqual(PLDCOMPParser::EqualContext *ctx) override {
      return (Symbole) EQUAL;
    }

     antlrcpp::Any visitInfs(PLDCOMPParser::InfsContext *ctx) override {
      return (Symbole) INFS;
    }

     antlrcpp::Any visitInf(PLDCOMPParser::InfContext *ctx) override {
      return (Symbole) INF;
    }

     antlrcpp::Any visitSups(PLDCOMPParser::SupsContext *ctx) override {
      return (Symbole) SUPS;
    }

     antlrcpp::Any visitSup(PLDCOMPParser::SupContext *ctx) override {
      return (Symbole) SUP;
    }

     antlrcpp::Any visitDecg(PLDCOMPParser::DecgContext *ctx) override {
      return (Symbole) DECG;
    }

     antlrcpp::Any visitDecd(PLDCOMPParser::DecdContext *ctx) override {
      return (Symbole) DECD;
    }

     antlrcpp::Any visitEqualb(PLDCOMPParser::EqualbContext *ctx) override {
      return (Symbole) EQUALB;
    }

     antlrcpp::Any visitDiff(PLDCOMPParser::DiffContext *ctx) override {
      return (Symbole) DIFF;
    }

     antlrcpp::Any visitAndb(PLDCOMPParser::AndbContext *ctx) override {
      return (Symbole) ANDB;
    }

     antlrcpp::Any visitOrb(PLDCOMPParser::OrbContext *ctx) override {
      return (Symbole) ORB;
    }

     antlrcpp::Any visitExpLvalue(PLDCOMPParser::ExpLvalueContext *ctx) override {
        return visitChildren(ctx);
    }

     antlrcpp::Any visitPpexp(PLDCOMPParser::PpexpContext *ctx) override {
        return visitChildren(ctx);
    }

     antlrcpp::Any visitAppelGetchar(PLDCOMPParser::AppelGetcharContext *ctx) override {
        return visitChildren(ctx);
    }

     antlrcpp::Any visitConstanteNombre(PLDCOMPParser::ConstanteNombreContext *ctx) override {
        return visitChildren(ctx);
    }

     antlrcpp::Any visitParenthese(PLDCOMPParser::ParentheseContext *ctx) override {
        return visitChildren(ctx);
    }

     antlrcpp::Any visitNon(PLDCOMPParser::NonContext *ctx) override {
        return visitChildren(ctx);
    }

     antlrcpp::Any visitConstanteCaractere(PLDCOMPParser::ConstanteCaractereContext *ctx) override {
        return visitChildren(ctx);
    }

     antlrcpp::Any visitAppelDeFonction(PLDCOMPParser::AppelDeFonctionContext *ctx) override {
        return visitChildren(ctx);
    }

     antlrcpp::Any visitMmexp(PLDCOMPParser::MmexpContext *ctx) override {
        return visitChildren(ctx);
    }

     antlrcpp::Any visitAffectation(PLDCOMPParser::AffectationContext *ctx) override {
        return visitChildren(ctx);
    }

     antlrcpp::Any visitOperateurBinaire(PLDCOMPParser::OperateurBinaireContext *ctx) override {
        return (Expression *) new ExprBin (visit(ctx->exp(0)), visit(ctx->op()), visit(ctx->exp(1)));
    }

     antlrcpp::Any visitAppelPutchar(PLDCOMPParser::AppelPutcharContext *ctx) override {
        return visitChildren(ctx);
    }

     antlrcpp::Any visitExppp(PLDCOMPParser::ExpppContext *ctx) override {
        return visitChildren(ctx);
    }

     antlrcpp::Any visitExpmm(PLDCOMPParser::ExpmmContext *ctx) override {
        return visitChildren(ctx);
    }

     antlrcpp::Any visitVariable(PLDCOMPParser::VariableContext *ctx) override {
        cout<<"dans visit_variable"<<endl;
        return visitChildren(ctx);
    }

     antlrcpp::Any visitTableau(PLDCOMPParser::TableauContext *ctx) override {
        return visitChildren(ctx);
    }

     antlrcpp::Any visitStructure(PLDCOMPParser::StructureContext *ctx) override {
        return visitChildren(ctx);
    }

     antlrcpp::Any visitConstante(PLDCOMPParser::ConstanteContext *ctx) override {
        return visitChildren(ctx);
    }

     antlrcpp::Any visitType_variable(PLDCOMPParser::Type_variableContext *ctx) override {
        cout<<"dans type_variable"<<endl;
        string type = ctx->getText();

        if (type=="char"){
            cout<<type<<endl;
            return CHAR;
        }    
        else if (type=="int_32")
          return INT32;
        else if (type=="int_64")
          return INT64;
        else
          return false;
    }

     antlrcpp::Any visitType_function(PLDCOMPParser::Type_functionContext *ctx) override {
        return visitChildren(ctx);
    }

     antlrcpp::Any visitIf_statement(PLDCOMPParser::If_statementContext *ctx) override {
      return visitChildren(ctx);
        //return (If *) new If(visit(ctx->exp()));
    }

     antlrcpp::Any visitWhile(PLDCOMPParser::WhileContext *ctx) override {
      return visitChildren(ctx);
        //return (While *) new While(visit(ctx->exp()));
    }

     antlrcpp::Any visitValeur(PLDCOMPParser::ValeurContext *ctx) override {
        return visitChildren(ctx);
    }

     antlrcpp::Any visitDeclarationConstante(PLDCOMPParser::DeclarationConstanteContext *ctx) override {
        return (Declaration *) new Declaration (visit(ctx->type_variable()), ctx->NOMVAR()->getText());
    }

     antlrcpp::Any visitDeclaration(PLDCOMPParser::DeclarationContext *ctx) override {
        cout<<"dans declaration"<<endl;
        //cout<<ctx->NOMVAR()->getText()<<endl;
       // Declaration * d = new Declaration(visit(ctx->type_variable()), ctx->NOMVAR()->getText());
        //cout<<d->getType()<<" "<<d->getNom()<<endl;
        return (Declaration *) new Declaration(visit(ctx->type_variable()), ctx->NOMVAR()->getText()) ;
    }

     antlrcpp::Any visitDeclarationTableau(PLDCOMPParser::DeclarationTableauContext *ctx) override {
        return (Declaration *) new Declaration (visit(ctx->type_variable()), ctx->NOMVAR()->getText());
    }

     antlrcpp::Any visitDeclarationTableauConstante(PLDCOMPParser::DeclarationTableauConstanteContext *ctx) override {
        return (Declaration *) new Declaration (visit(ctx->type_variable()), ctx->NOMVAR()->getText());
    }

     antlrcpp::Any visitVoid(PLDCOMPParser::VoidContext *ctx) override {
        return visitChildren(ctx);
    }

     antlrcpp::Any visitParametres(PLDCOMPParser::ParametresContext *ctx) override {
        return visitChildren(ctx);
    }

     antlrcpp::Any visitDeclarationFoncionParams(PLDCOMPParser::DeclarationFoncionParamsContext *ctx) override {
        return visitChildren(ctx);
    }

     antlrcpp::Any visitDeclarationFoncion(PLDCOMPParser::DeclarationFoncionContext *ctx) override {
        return visitChildren(ctx);
    }

     antlrcpp::Any visitDeclarationVariables(PLDCOMPParser::DeclarationVariablesContext *ctx) override {
        cout<<"dans déclaration_variable"<<endl;
        cout << "ok" << endl;
        //list<Declaration*> declarations;
        //visitChildren(ctx);
        //Declaration * d = ;
        /*for(list<Declaration>::iterator i=declarations.begin(); i!=declarations.end() ; ++i) {
            cout << "Declaration x" << endl;
        }*/
        return (Declaration *) visitChildren(ctx);//declarations;
        // return visitChildren(ctx);
    }

     antlrcpp::Any visitBloc(PLDCOMPParser::BlocContext *ctx) override {
        return visitChildren(ctx);
    }

     antlrcpp::Any visitBlocInstruction(PLDCOMPParser::BlocInstructionContext *ctx) override {
        return visitChildren(ctx);
    }

     antlrcpp::Any visitBreakInstruction(PLDCOMPParser::BreakInstructionContext *ctx) override {
        return visitChildren(ctx);
    }

     antlrcpp::Any visitStructureInstruction(PLDCOMPParser::StructureInstructionContext *ctx) override {
        return visitChildren(ctx);
    }

     antlrcpp::Any visitReturnInstruction(PLDCOMPParser::ReturnInstructionContext *ctx) override {
        return visitChildren(ctx);
    }

     antlrcpp::Any visitExpInstruction(PLDCOMPParser::ExpInstructionContext *ctx) override {
        return visitChildren(ctx);
    }

     antlrcpp::Any visitProgramme(PLDCOMPParser::ProgrammeContext *ctx) override {
        cout << "Dans programme" << endl;
        visitChildren(ctx);
        cout<<"prog"<<endl;
        return 1;//(Programme*) new Programme(visit(ctx->declaration_variables()), null);
    }


};
