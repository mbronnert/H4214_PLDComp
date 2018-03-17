#pragma once

#include "antlr4-runtime.h"
#include "PLDCOMPBaseVisitor.h"
#include "Instruction.h"
#include "Declaration.h"
#include "Fonction.h"
#include "Programme.h"
#include <typeinfo>

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

    antlrcpp::Any visitConstanteNb(PLDCOMPParser::ConstanteNbContext *ctx) override {
        return (int) stoi(ctx->NOMBRE()->getText());
    }

    antlrcpp::Any visitConstanteCar(PLDCOMPParser::ConstanteCarContext *ctx) override {
        return (char) ctx->CHAR()->getText()[0];
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

    antlrcpp::Any visitTableauNombre(PLDCOMPParser::TableauNombreContext *ctx) override {
      list<int> * l;

      for(int i=0;/*TODO: condition d'arret ?*/;i++) {
         l->push_back((int) stoi(ctx->NOMBRE(i)->getText()));
      }
      return (list<int> *) l;
    }

    antlrcpp::Any visitTableauCaractere(PLDCOMPParser::TableauCaractereContext *ctx) override {
      list<char> * l;

      for(int i=0;/*TODO: condition d'arret ?*/;i++) {
         l->push_back((char) stoi(ctx->CHAR(i)->getText()));
      }
      return (list<char> *) l;

    }

     antlrcpp::Any visitDeclarationConstante(PLDCOMPParser::DeclarationConstanteContext *ctx) override {
       Type type = visit(ctx->type_variable());
       if (type==CHAR) {
         return (Declaration *) new Declaration (type, new VariableSimple(ctx->NOMVAR()->getText(), visit(ctx->type_variable()), (char) visit(ctx->constante())));
       }
       else if (type==INT32 || type==INT64) {
         return (Declaration *) new Declaration (type, new VariableSimple(ctx->NOMVAR()->getText(), visit(ctx->type_variable()), (int) visit(ctx->constante())));
       }
       else {
         return NULL; //TODO : réfléchir à ça : cas d'erreur
       }
    }

     antlrcpp::Any visitDeclaration(PLDCOMPParser::DeclarationContext *ctx) override {
        cout<<"dans declaration"<<endl;
        return (Declaration *) new Declaration (visit(ctx->type_variable()), new VariableSimple(ctx->NOMVAR()->getText(), visit(ctx->type_variable())));
    }

     antlrcpp::Any visitDeclarationTableau(PLDCOMPParser::DeclarationTableauContext *ctx) override {
       return (Declaration *) new Declaration (visit(ctx->type_variable()), new Tableau(ctx->NOMVAR()->getText(), visit(ctx->type_variable()), (int) stoi(ctx->NOMBRE()->getText())));
    }

     antlrcpp::Any visitDeclarationTableauConstante(PLDCOMPParser::DeclarationTableauConstanteContext *ctx) override {
       Type type = visit(ctx->type_variable());
       if (type==CHAR) {
         return (Declaration *) new Declaration (type, new Tableau(ctx->NOMVAR()->getText(), type, (int) stoi(ctx->NOMBRE()->getText()), (list<char>*) visit(ctx->val())));
       }
       else if (type==INT32 || type==INT64) {
         return (Declaration *) new Declaration (type, new Tableau(ctx->NOMVAR()->getText(), type, (int) stoi(ctx->NOMBRE()->getText()), (list<int>*) visit(ctx->val())));
       }
       else {
         return NULL; //TODO : réfléchir à ça : cas d'erreur
       }
    }

     antlrcpp::Any visitVoid(PLDCOMPParser::VoidContext *ctx) override {
       list<Parametre> * param = new list<Parametre>();
        return (list<Parametre>* ) param;
    }

     antlrcpp::Any visitParametres(PLDCOMPParser::ParametresContext *ctx) override {
       list<Parametre*> * l = new list<Parametre*>();
       auto liste = ctx->type_variable();
       int cpt = 0;

       for(auto i=liste.begin();i!=liste.end();i++) {
          l->push_back(new Parametre(visit(*i), ctx->NOMVAR(cpt)->getText()));
          cpt++;
       }
       return (list<Parametre *> *) l;
    }

    antlrcpp::Any visitDeclarationFonctionParams(PLDCOMPParser::DeclarationFonctionParamsContext *ctx) override {
      return (Fonction *) new Fonction (visit(ctx->type_function()), ctx->NOMVAR()->getText(), visit(ctx->param()), visit(ctx->declaration_variables()), visit(ctx->bloc()));
    }

    antlrcpp::Any visitDeclarationFonction(PLDCOMPParser::DeclarationFonctionContext *ctx) override {
      list<Parametre> * param = new list<Parametre>();
      return (Fonction *) new Fonction (visit(ctx->type_function()), ctx->NOMVAR()->getText(), param, visit(ctx->declaration_variables()), visit(ctx->bloc()));
    }

     antlrcpp::Any visitDeclarationVariables(PLDCOMPParser::DeclarationVariablesContext *ctx) override {
        cout<<"dans déclaration_variable"<<endl;
        list<Declaration*> * l = new list<Declaration*>();
        auto liste = ctx->declaration_type();

        for(auto i=liste.begin();i!=liste.end();i++) {
           l->push_back(visit(*i));
        }
        return (list<Declaration *> *) l;
    }

     antlrcpp::Any visitBloc(PLDCOMPParser::BlocContext *ctx) override {
       list<Instruction> * l = new list<Instruction>;
       auto liste = ctx->instruction();

       for(auto i=liste.begin();i!=liste.end();i++) {
          l->push_back(visit(*i));
       }
       return (Bloc*) new Bloc(l);
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
        list<Declaration *> * l = visit(ctx->declaration_variables());
        cout<<"prog"<<endl;
        return 1;
    }


};
