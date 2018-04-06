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

    antlrcpp::Any visitAddeq(PLDCOMPParser::AddeqContext *ctx) override {
        return (Symbole) ADDEQ;
    }

    antlrcpp::Any visitMoinseq(PLDCOMPParser::MoinseqContext *ctx) override {
        return (Symbole) MOINSEQ;
    }

    antlrcpp::Any visitMulteq(PLDCOMPParser::MulteqContext *ctx) override {
        return (Symbole) MULTEQ;
    }

    antlrcpp::Any visitDiveq(PLDCOMPParser::DiveqContext *ctx) override {
        return (Symbole) DIVEQ;
    }

    antlrcpp::Any visitModeq(PLDCOMPParser::ModeqContext *ctx) override {
        return (Symbole) MODEQ;
    }

    antlrcpp::Any visitAndeq(PLDCOMPParser::AndeqContext *ctx) override {
        return (Symbole) ANDEQ;
    }

    antlrcpp::Any visitOreq(PLDCOMPParser::OreqContext *ctx) override {
        return (Symbole) OREQ;
    }

    antlrcpp::Any visitXoreq(PLDCOMPParser::XoreqContext *ctx) override {
        return (Symbole) XOREQ;
    }

    antlrcpp::Any visitComma(PLDCOMPParser::CommaContext *ctx) override {
        return (Symbole) COMMA;
    }

    antlrcpp::Any visitExpLvalue(PLDCOMPParser::ExpLvalueContext *ctx) override {
        AppelDeVariable * var = (AppelDeVariable *) visit(ctx->lvalue());
        return (Expression *) var;
    }

    antlrcpp::Any visitNegation(PLDCOMPParser::NegationContext *ctx) override {
        return (Expression *) new ExprUnaire((Expression*) visit(ctx->exp()), (Symbole) NEGATION);
    }

    antlrcpp::Any visitInvert(PLDCOMPParser::InvertContext *ctx) override {
        return (Expression *) new ExprUnaire((Expression *) visit(ctx->exp()), (Symbole) INVERT);
    }

    antlrcpp::Any visitPpexp(PLDCOMPParser::PpexpContext *ctx) override {
        AppelDeVariable * var = (AppelDeVariable *) visit(ctx->lvalue());
        return (Expression *) new ExprUnaire((Expression *) var, (Symbole) PPEXP);
    }

    antlrcpp::Any visitAppelGetchar(PLDCOMPParser::AppelGetcharContext *ctx) override {
        list<Expression*> * l = new list<Expression*>();
        return (Expression *) new AppelDeFonction("getchar", l);
    }

    antlrcpp::Any visitConstanteNombre(PLDCOMPParser::ConstanteNombreContext *ctx) override {
        return (Expression *) new Nombre((int) stoi(ctx->NOMBRE()->getText()));
    }

    antlrcpp::Any visitParenthese(PLDCOMPParser::ParentheseContext *ctx) override {
        return (Expression *) new ExprUnaire((Expression *) visit(ctx->exp()), (Symbole) PAR);
    }

    antlrcpp::Any visitNon(PLDCOMPParser::NonContext *ctx) override {
        return (Expression *) new ExprUnaire((Expression *) visit(ctx->exp()), (Symbole) NON);
    }

    antlrcpp::Any visitConstanteCaractere(PLDCOMPParser::ConstanteCaractereContext *ctx) override {
        char c = (char) ctx->CHAR()->getText()[1];
        if (c == '\\') {
            cout << ctx->CHAR()->getText() << endl;
            if (ctx->CHAR()->getText() == "\'\\n\'") {
                c = '\n';
            } else if (ctx->CHAR()->getText() == "\'\\r\'") {
                c = '\r';
            } else if (ctx->CHAR()->getText() == "\'\\t\'") {
                c = '\t';
            }
        }
        return (Expression *) new Caractere((char) c);
    }

    antlrcpp::Any visitAppelDeFonction(PLDCOMPParser::AppelDeFonctionContext *ctx) override {
        list<Expression*> * l = new list<Expression*>();
        auto liste = ctx->exp();

        for(auto i=liste.begin();i!=liste.end();i++) {
            l->push_back((Expression*) visit(*i));
        }
        return (Expression *) new AppelDeFonction((string) ctx->NOMVAR()->getText(), l);
    }

    antlrcpp::Any visitMmexp(PLDCOMPParser::MmexpContext *ctx) override {
        AppelDeVariable * var = (AppelDeVariable *) visit(ctx->lvalue());
        return (Expression *) new ExprUnaire((Expression *) var, (Symbole) MMEXP);
    }

    antlrcpp::Any visitAffectation(PLDCOMPParser::AffectationContext *ctx) override {
        return (Expression *) new Affectation((AppelDeVariable *) visit(ctx->lvalue()), (Expression *) visit(ctx->exp()));
    }

    antlrcpp::Any visitOperateurBinaireSecondaire(PLDCOMPParser::OperateurBinaireSecondaireContext *ctx) override {
      return (Expression *) new ExprBin ((Expression *) visit(ctx->exp()), (Expression *) visit(ctx->expPrioritaire()), (Symbole) visit(ctx->opSecondaire()));
    }

    antlrcpp::Any visitExpressionPrioritaire(PLDCOMPParser::ExpressionPrioritaireContext *ctx) override {
      return (Expression *) visit(ctx->expPrioritaire());
    }

    antlrcpp::Any visitExpressionParenthese(PLDCOMPParser::ExpressionParentheseContext *ctx) override {
      return (Expression *) visit(ctx->expParenthese());
    }

    antlrcpp::Any visitOperateurBinairePrioritaire(PLDCOMPParser::OperateurBinairePrioritaireContext *ctx) override {
        return (Expression *) new ExprBin ((Expression *) visit(ctx->expPrioritaire()), (Expression *) visit(ctx->expParenthese()), (Symbole) visit(ctx->opPrioritaire()));
    }

    antlrcpp::Any visitAppelPutchar(PLDCOMPParser::AppelPutcharContext *ctx) override {
        list<Expression*> * l = new list<Expression*>();
        l->push_back((Expression*) visit(ctx->exp()));
        return (Expression *) new AppelDeFonction("putchar", l);
    }

    antlrcpp::Any visitExppp(PLDCOMPParser::ExpppContext *ctx) override {
        AppelDeVariable * var = (AppelDeVariable *) visit(ctx->lvalue());
        return (Expression *) new ExprUnaire((Expression *) var, (Symbole) EXPPP);
    }

    antlrcpp::Any visitExpmm(PLDCOMPParser::ExpmmContext *ctx) override {
        AppelDeVariable * var = (AppelDeVariable *) visit(ctx->lvalue());
        return (Expression *) new ExprUnaire((Expression *) var, (Symbole) EXPMM);
    }

    antlrcpp::Any visitVariable(PLDCOMPParser::VariableContext *ctx) override {
        return (AppelDeVariable *) new AppelDeVariableSimple((string) ctx->NOMVAR()->getText());
    }

    antlrcpp::Any visitTableau(PLDCOMPParser::TableauContext *ctx) override {
        return (AppelDeVariable *) new AppelDeTableau((string) ctx->NOMVAR()->getText(), (Expression *) visit(ctx->exp()));
    }

    antlrcpp::Any visitIfStatement(PLDCOMPParser::IfStatementContext *ctx) override {
        return (Instruction *) visit(ctx->if_statement());
    }

    antlrcpp::Any visitWhileStatement(PLDCOMPParser::WhileStatementContext *ctx) override {
        return (Instruction *) visit(ctx->while_statement());
    }

    antlrcpp::Any visitConstanteNb(PLDCOMPParser::ConstanteNbContext *ctx) override {
        return (Nombre *) new Nombre((int) stoi(ctx->NOMBRE()->getText()));
    }

    antlrcpp::Any visitConstanteCar(PLDCOMPParser::ConstanteCarContext *ctx) override {
        char c = (char) ctx->CHAR()->getText()[1];
        if (c == '\\') {
            if (ctx->CHAR()->getText() == "\'\\n\'") {
                c = '\n';
            } else if (ctx->CHAR()->getText() == "\'\\r\'") {
                c = '\r';
            } else if (ctx->CHAR()->getText() == "\'\\t\'") {
                c = '\t';
            }
        }
        return (Caractere *) new Caractere((char) c);
    }

    antlrcpp::Any visitType_variable(PLDCOMPParser::Type_variableContext *ctx) override {
        string type = ctx->getText();
        if (type=="char")
            return (Type) CHAR;
        else if (type=="int32_t")
            return (Type) INT32;
        else
            return (Type) INT64;
    }

    antlrcpp::Any visitType_function(PLDCOMPParser::Type_functionContext *ctx) override {
        string type = ctx->getText();

        if (type=="char")
            return (Type) CHAR;
        else if (type=="int32_t")
            return (Type) INT32;
        else if (type=="int64_t")
            return (Type) INT64;
        else
            return (Type) VOID;
    }

    antlrcpp::Any visitIf(PLDCOMPParser::IfContext *ctx) override {
        return (Instruction *) new If((Expression *) visit(ctx->exp()), (Instruction *) visit(ctx->instruction()));
    }

    antlrcpp::Any visitIfElse(PLDCOMPParser::IfElseContext *ctx) override {
        return (Instruction *) new IfElse((Expression *) visit(ctx->exp()), (Instruction *) visit(ctx->instruction(0)), (Instruction *) visit(ctx->instruction(1)));
    }

    antlrcpp::Any visitWhile(PLDCOMPParser::WhileContext *ctx) override {
        return (Instruction *) new While((Expression *) visit(ctx->exp()), (Instruction *) visit(ctx->instruction()));
    }

    antlrcpp::Any visitTableauNombre(PLDCOMPParser::TableauNombreContext *ctx) override {
        list<Nombre*> * nombres = new list<Nombre*>();
        auto l = ctx->NOMBRE();

        for(auto i=l.begin() ; i!=l.end() ; i++) {
            nombres->push_back((Nombre*) new Nombre((int) stoi((*i)->getText())));
        }
        return (list<Nombre*> *) nombres;
    }

    antlrcpp::Any visitTableauCaractere(PLDCOMPParser::TableauCaractereContext *ctx) override {
        list<Caractere*> * caracteres = new list<Caractere*>();
        auto l = ctx->CHAR();

        for(auto i=l.begin() ; i!=l.end() ; i++) {
            char c = (char) (*i)->getText()[1];
            if (c == '\\') {
                cout << (*i)->getText() << endl;
                if ((*i)->getText() == "\'\\n\'") {
                    c = '\n';
                } else if ((*i)->getText() == "\'\\r\'") {
                    c = '\r';
                } else if ((*i)->getText() == "\'\\t\'") {
                    c = '\t';
                }
            }
            caracteres->push_back((Caractere*) new Caractere((char) c));
        }
        return (list<Caractere*> *) caracteres;

    }

    antlrcpp::Any visitDeclarationIntSimple(PLDCOMPParser::DeclarationIntSimpleContext *ctx) override {
        return (VariableSimple *) new VariableSimple((string) ctx->NOMVAR()->getText());
    }

    antlrcpp::Any visitDeclarationIntConstante(PLDCOMPParser::DeclarationIntConstanteContext *ctx) override {
        return (VariableSimple *) new VariableSimple((string) ctx->NOMVAR()->getText(), (Nombre *) visit(ctx->constante()));
    }

    antlrcpp::Any visitDeclarationCharSimple(PLDCOMPParser::DeclarationCharSimpleContext *ctx) override {
        return (VariableSimple *) new VariableSimple((string) ctx->NOMVAR()->getText());
    }

    antlrcpp::Any visitDeclarationCharConstante(PLDCOMPParser::DeclarationCharConstanteContext *ctx) override {
        return (VariableSimple *) new VariableSimple((string) ctx->NOMVAR()->getText(), (Caractere *) visit(ctx->constante()));
    }


    antlrcpp::Any visitDeclarationIntMult(PLDCOMPParser::DeclarationIntMultContext *ctx) override {
        list<Declaration*> * declarations = new list<Declaration*>();
        auto l = ctx->declaration_int_generale();

        for(auto i=l.begin();i!=l.end();i++) {
            declarations->push_back((Declaration *) new Declaration((Type) visit(ctx->entier()), (VariableSimple *) visit(*i)));
        }

        return (list<Declaration*> *) declarations;
    }

    antlrcpp::Any visitDeclarationCharMult(PLDCOMPParser::DeclarationCharMultContext *ctx) override {
        list<Declaration*> * declarations = new list<Declaration*>();
        auto l = ctx->declaration_char_generale();

        for(auto i=l.begin();i!=l.end();i++) {
            declarations->push_back((Declaration *) new Declaration((Type) CHAR, (VariableSimple *) visit(*i)));
        }

        return (list<Declaration*> *) declarations;
    }

    antlrcpp::Any visitDeclarationTableau(PLDCOMPParser::DeclarationTableauContext *ctx) override {
        list<Declaration*> * declarations = new list<Declaration*>();
        declarations->push_back((Declaration*) new DeclarationTableau((Type) visit(ctx->type_variable()), new Tableau((string) ctx->NOMVAR()->getText()), (int) stoi(ctx->NOMBRE()->getText())));
        return (list<Declaration*> *) declarations;
    }

    antlrcpp::Any visitDeclarationTableauConstante(PLDCOMPParser::DeclarationTableauConstanteContext *ctx) override {
        Type type = (Type) visit(ctx->type_variable());
        list<Declaration*> * declarations = new list<Declaration*>();
        if (type==CHAR) {
            declarations->push_back((Declaration*) new DeclarationTableau(type, new Tableau((string) ctx->NOMVAR()->getText(), (list<Caractere*>*) visit(ctx->val())), (int) stoi(ctx->NOMBRE()->getText())));
        }
        else if (type==INT32 || type==INT64) {
            declarations->push_back((Declaration*) new DeclarationTableau(type, new Tableau((string) ctx->NOMVAR()->getText(), (list<Nombre*>*) visit(ctx->val())), (int) stoi(ctx->NOMBRE()->getText())));
        }
        return (list<Declaration*> *) declarations;
    }

    antlrcpp::Any visitInt32(PLDCOMPParser::Int32Context *ctx) override {
      return (Type) INT32;
    }

    antlrcpp::Any visitInt64(PLDCOMPParser::Int64Context *ctx) override {
      return (Type) INT64;
    }

    antlrcpp::Any visitVoid(PLDCOMPParser::VoidContext *ctx) override {
        list<Parametre*> * param = new list<Parametre*>();
        return (list<Parametre*> *) param;
    }

    antlrcpp::Any visitParametres(PLDCOMPParser::ParametresContext *ctx) override {
        list<Parametre*> * l = new list<Parametre*>();
        auto liste = ctx->type_variable();
        int cpt = 0;

        for(auto i=liste.begin();i!=liste.end();i++) {
            l->push_back((Parametre*) new Parametre((Type) visit(*i), (string) ctx->NOMVAR(cpt)->getText()));
            cpt++;
        }
        return (list<Parametre*> *) l;
    }

    antlrcpp::Any visitDeclarationFonctionParams(PLDCOMPParser::DeclarationFonctionParamsContext *ctx) override {
        //return (Fonction *) new Fonction((Type) VOID, (string) "test", (list<Parametre*> *) new list<Parametre*>, (list<Declaration*> *) new list<Declaration*>, (Bloc*) new Bloc());
        return (Fonction *) new Fonction((Type) visit(ctx->type_function()), (string) ctx->NOMVAR()->getText(), (list<Parametre*> *) visit(ctx->param()), (list<Declaration*> *) visit(ctx->declaration_variables()), (Bloc *) visit(ctx->bloc()));
    }

    antlrcpp::Any visitDeclarationFonction(PLDCOMPParser::DeclarationFonctionContext *ctx) override {
        //return (Fonction *) new Fonction((Type) VOID, (string) "test", (list<Parametre*> *) new list<Parametre*>, (list<Declaration*> *) new list<Declaration*>, (Bloc*) new Bloc());
        list<Parametre*> * param = new list<Parametre*>();
        return (Fonction *) new Fonction((Type) visit(ctx->type_function()), (string) ctx->NOMVAR()->getText(), (list<Parametre*> *) param, (list<Declaration*> *) visit(ctx->declaration_variables()), (Bloc *) visit(ctx->bloc()));
    }

    antlrcpp::Any visitDeclarationVariables(PLDCOMPParser::DeclarationVariablesContext *ctx) override {
    list<Declaration*> * declarations = new list<Declaration*>();
        auto liste = ctx->declaration_type();

        for(auto i=liste.begin();i!=liste.end();i++) {
            list<Declaration*> * l = (list<Declaration*> *) visit(*i);

            for (auto it=l->begin();it!=l->end();it++) {
                declarations->push_back((Declaration*) (*it));
            }
        }
        return (list<Declaration*> *) declarations;
    }

    antlrcpp::Any visitBloc(PLDCOMPParser::BlocContext *ctx) override {
        list<Instruction*> * l = new list<Instruction*>();
        auto liste = ctx->instruction();

        for(auto i=liste.begin();i!=liste.end();i++) {
            l->push_back((Instruction *) visit(*i));
        }
        return (Bloc *) new Bloc(l);
    }

    antlrcpp::Any visitBlocInstruction(PLDCOMPParser::BlocInstructionContext *ctx) override {
        Bloc * bloc = (Bloc *) visit(ctx->bloc());
        return (Instruction *) bloc;
    }

    antlrcpp::Any visitBreakInstruction(PLDCOMPParser::BreakInstructionContext *ctx) override {
        return (Instruction *) new Break();
    }

    antlrcpp::Any visitStructureInstruction(PLDCOMPParser::StructureInstructionContext *ctx) override {
        return (Instruction *) visit(ctx->structure());
    }

    antlrcpp::Any visitReturnInstruction(PLDCOMPParser::ReturnInstructionContext *ctx) override {
        return (Instruction *) new Return((Expression *) visit(ctx->exp()));
    }

    antlrcpp::Any visitExpInstruction(PLDCOMPParser::ExpInstructionContext *ctx) override {
        Expression * expression = (Expression *) visit(ctx->exp());
        return (Instruction *) expression;
    }

    antlrcpp::Any visitProgramme(PLDCOMPParser::ProgrammeContext *ctx) override {
        list<Fonction*> * l = new list<Fonction*>();
        auto liste = ctx->fonction();

        for(auto i=liste.begin();i!=liste.end();i++) {
            l->push_back((Fonction *) visit(*i));
        }
        return (Programme *) new Programme((list<Declaration*> *) visit(ctx->declaration_variables()), (list<Fonction*> *) l);
    }


};
