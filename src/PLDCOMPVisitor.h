
// Generated from PLDCOMP.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "PLDCOMPParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by PLDCOMPParser.
 */
class  PLDCOMPVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by PLDCOMPParser.
   */
    virtual antlrcpp::Any visitMult(PLDCOMPParser::MultContext *context) = 0;

    virtual antlrcpp::Any visitDiv(PLDCOMPParser::DivContext *context) = 0;

    virtual antlrcpp::Any visitAndb(PLDCOMPParser::AndbContext *context) = 0;

    virtual antlrcpp::Any visitAdd(PLDCOMPParser::AddContext *context) = 0;

    virtual antlrcpp::Any visitMoins(PLDCOMPParser::MoinsContext *context) = 0;

    virtual antlrcpp::Any visitOrb(PLDCOMPParser::OrbContext *context) = 0;

    virtual antlrcpp::Any visitMod(PLDCOMPParser::ModContext *context) = 0;

    virtual antlrcpp::Any visitPow(PLDCOMPParser::PowContext *context) = 0;

    virtual antlrcpp::Any visitAnd(PLDCOMPParser::AndContext *context) = 0;

    virtual antlrcpp::Any visitOr(PLDCOMPParser::OrContext *context) = 0;

    virtual antlrcpp::Any visitEqual(PLDCOMPParser::EqualContext *context) = 0;

    virtual antlrcpp::Any visitAddeq(PLDCOMPParser::AddeqContext *context) = 0;

    virtual antlrcpp::Any visitMoinseq(PLDCOMPParser::MoinseqContext *context) = 0;

    virtual antlrcpp::Any visitMulteq(PLDCOMPParser::MulteqContext *context) = 0;

    virtual antlrcpp::Any visitDiveq(PLDCOMPParser::DiveqContext *context) = 0;

    virtual antlrcpp::Any visitModeq(PLDCOMPParser::ModeqContext *context) = 0;

    virtual antlrcpp::Any visitAndeq(PLDCOMPParser::AndeqContext *context) = 0;

    virtual antlrcpp::Any visitOreq(PLDCOMPParser::OreqContext *context) = 0;

    virtual antlrcpp::Any visitXoreq(PLDCOMPParser::XoreqContext *context) = 0;

    virtual antlrcpp::Any visitInfs(PLDCOMPParser::InfsContext *context) = 0;

    virtual antlrcpp::Any visitInf(PLDCOMPParser::InfContext *context) = 0;

    virtual antlrcpp::Any visitSups(PLDCOMPParser::SupsContext *context) = 0;

    virtual antlrcpp::Any visitSup(PLDCOMPParser::SupContext *context) = 0;

    virtual antlrcpp::Any visitDecg(PLDCOMPParser::DecgContext *context) = 0;

    virtual antlrcpp::Any visitDecd(PLDCOMPParser::DecdContext *context) = 0;

    virtual antlrcpp::Any visitEqualb(PLDCOMPParser::EqualbContext *context) = 0;

    virtual antlrcpp::Any visitDiff(PLDCOMPParser::DiffContext *context) = 0;

    virtual antlrcpp::Any visitComma(PLDCOMPParser::CommaContext *context) = 0;

    virtual antlrcpp::Any visitExpLvalue(PLDCOMPParser::ExpLvalueContext *context) = 0;

    virtual antlrcpp::Any visitNegation(PLDCOMPParser::NegationContext *context) = 0;

    virtual antlrcpp::Any visitPpexp(PLDCOMPParser::PpexpContext *context) = 0;

    virtual antlrcpp::Any visitInvert(PLDCOMPParser::InvertContext *context) = 0;

    virtual antlrcpp::Any visitAppelGetchar(PLDCOMPParser::AppelGetcharContext *context) = 0;

    virtual antlrcpp::Any visitConstanteNombre(PLDCOMPParser::ConstanteNombreContext *context) = 0;

    virtual antlrcpp::Any visitOperateurBinaireSecondaire(PLDCOMPParser::OperateurBinaireSecondaireContext *context) = 0;

    virtual antlrcpp::Any visitExpressionPrioritaire(PLDCOMPParser::ExpressionPrioritaireContext *context) = 0;

    virtual antlrcpp::Any visitNon(PLDCOMPParser::NonContext *context) = 0;

    virtual antlrcpp::Any visitConstanteCaractere(PLDCOMPParser::ConstanteCaractereContext *context) = 0;

    virtual antlrcpp::Any visitAppelDeFonction(PLDCOMPParser::AppelDeFonctionContext *context) = 0;

    virtual antlrcpp::Any visitMmexp(PLDCOMPParser::MmexpContext *context) = 0;

    virtual antlrcpp::Any visitAffectation(PLDCOMPParser::AffectationContext *context) = 0;

    virtual antlrcpp::Any visitAppelPutchar(PLDCOMPParser::AppelPutcharContext *context) = 0;

    virtual antlrcpp::Any visitExppp(PLDCOMPParser::ExpppContext *context) = 0;

    virtual antlrcpp::Any visitExpmm(PLDCOMPParser::ExpmmContext *context) = 0;

    virtual antlrcpp::Any visitExpressionParenthese(PLDCOMPParser::ExpressionParentheseContext *context) = 0;

    virtual antlrcpp::Any visitOperateurBinairePrioritaire(PLDCOMPParser::OperateurBinairePrioritaireContext *context) = 0;

    virtual antlrcpp::Any visitParenthese(PLDCOMPParser::ParentheseContext *context) = 0;

    virtual antlrcpp::Any visitExpressionNombre(PLDCOMPParser::ExpressionNombreContext *context) = 0;

    virtual antlrcpp::Any visitVariable(PLDCOMPParser::VariableContext *context) = 0;

    virtual antlrcpp::Any visitTableau(PLDCOMPParser::TableauContext *context) = 0;

    virtual antlrcpp::Any visitIfStatement(PLDCOMPParser::IfStatementContext *context) = 0;

    virtual antlrcpp::Any visitWhileStatement(PLDCOMPParser::WhileStatementContext *context) = 0;

    virtual antlrcpp::Any visitConstanteNb(PLDCOMPParser::ConstanteNbContext *context) = 0;

    virtual antlrcpp::Any visitConstanteCar(PLDCOMPParser::ConstanteCarContext *context) = 0;

    virtual antlrcpp::Any visitType_variable(PLDCOMPParser::Type_variableContext *context) = 0;

    virtual antlrcpp::Any visitType_function(PLDCOMPParser::Type_functionContext *context) = 0;

    virtual antlrcpp::Any visitIf(PLDCOMPParser::IfContext *context) = 0;

    virtual antlrcpp::Any visitIfElse(PLDCOMPParser::IfElseContext *context) = 0;

    virtual antlrcpp::Any visitWhile(PLDCOMPParser::WhileContext *context) = 0;

    virtual antlrcpp::Any visitTableauNombre(PLDCOMPParser::TableauNombreContext *context) = 0;

    virtual antlrcpp::Any visitTableauCaractere(PLDCOMPParser::TableauCaractereContext *context) = 0;

    virtual antlrcpp::Any visitDeclarationIntMult(PLDCOMPParser::DeclarationIntMultContext *context) = 0;

    virtual antlrcpp::Any visitDeclarationCharMult(PLDCOMPParser::DeclarationCharMultContext *context) = 0;

    virtual antlrcpp::Any visitDeclarationTableau(PLDCOMPParser::DeclarationTableauContext *context) = 0;

    virtual antlrcpp::Any visitDeclarationTableauConstante(PLDCOMPParser::DeclarationTableauConstanteContext *context) = 0;

    virtual antlrcpp::Any visitInt32(PLDCOMPParser::Int32Context *context) = 0;

    virtual antlrcpp::Any visitInt64(PLDCOMPParser::Int64Context *context) = 0;

    virtual antlrcpp::Any visitDeclarationIntSimple(PLDCOMPParser::DeclarationIntSimpleContext *context) = 0;

    virtual antlrcpp::Any visitDeclarationIntConstante(PLDCOMPParser::DeclarationIntConstanteContext *context) = 0;

    virtual antlrcpp::Any visitDeclarationCharSimple(PLDCOMPParser::DeclarationCharSimpleContext *context) = 0;

    virtual antlrcpp::Any visitDeclarationCharConstante(PLDCOMPParser::DeclarationCharConstanteContext *context) = 0;

    virtual antlrcpp::Any visitVoid(PLDCOMPParser::VoidContext *context) = 0;

    virtual antlrcpp::Any visitParametres(PLDCOMPParser::ParametresContext *context) = 0;

    virtual antlrcpp::Any visitDeclarationFonctionParams(PLDCOMPParser::DeclarationFonctionParamsContext *context) = 0;

    virtual antlrcpp::Any visitDeclarationFonction(PLDCOMPParser::DeclarationFonctionContext *context) = 0;

    virtual antlrcpp::Any visitDeclarationVariables(PLDCOMPParser::DeclarationVariablesContext *context) = 0;

    virtual antlrcpp::Any visitBloc(PLDCOMPParser::BlocContext *context) = 0;

    virtual antlrcpp::Any visitBlocInstruction(PLDCOMPParser::BlocInstructionContext *context) = 0;

    virtual antlrcpp::Any visitBreakInstruction(PLDCOMPParser::BreakInstructionContext *context) = 0;

    virtual antlrcpp::Any visitStructureInstruction(PLDCOMPParser::StructureInstructionContext *context) = 0;

    virtual antlrcpp::Any visitReturnInstruction(PLDCOMPParser::ReturnInstructionContext *context) = 0;

    virtual antlrcpp::Any visitExpInstruction(PLDCOMPParser::ExpInstructionContext *context) = 0;

    virtual antlrcpp::Any visitProgramme(PLDCOMPParser::ProgrammeContext *context) = 0;


};

