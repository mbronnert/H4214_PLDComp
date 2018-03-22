
// Generated from PLDCOMP.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "PLDCOMPParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by PLDCOMPParser.
 */
class  PLDCOMPListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterAdd(PLDCOMPParser::AddContext *ctx) = 0;
  virtual void exitAdd(PLDCOMPParser::AddContext *ctx) = 0;

  virtual void enterMoins(PLDCOMPParser::MoinsContext *ctx) = 0;
  virtual void exitMoins(PLDCOMPParser::MoinsContext *ctx) = 0;

  virtual void enterMult(PLDCOMPParser::MultContext *ctx) = 0;
  virtual void exitMult(PLDCOMPParser::MultContext *ctx) = 0;

  virtual void enterDiv(PLDCOMPParser::DivContext *ctx) = 0;
  virtual void exitDiv(PLDCOMPParser::DivContext *ctx) = 0;

  virtual void enterMod(PLDCOMPParser::ModContext *ctx) = 0;
  virtual void exitMod(PLDCOMPParser::ModContext *ctx) = 0;

  virtual void enterPow(PLDCOMPParser::PowContext *ctx) = 0;
  virtual void exitPow(PLDCOMPParser::PowContext *ctx) = 0;

  virtual void enterAnd(PLDCOMPParser::AndContext *ctx) = 0;
  virtual void exitAnd(PLDCOMPParser::AndContext *ctx) = 0;

  virtual void enterOr(PLDCOMPParser::OrContext *ctx) = 0;
  virtual void exitOr(PLDCOMPParser::OrContext *ctx) = 0;

  virtual void enterEqual(PLDCOMPParser::EqualContext *ctx) = 0;
  virtual void exitEqual(PLDCOMPParser::EqualContext *ctx) = 0;

  virtual void enterAddeq(PLDCOMPParser::AddeqContext *ctx) = 0;
  virtual void exitAddeq(PLDCOMPParser::AddeqContext *ctx) = 0;

  virtual void enterMoinseq(PLDCOMPParser::MoinseqContext *ctx) = 0;
  virtual void exitMoinseq(PLDCOMPParser::MoinseqContext *ctx) = 0;

  virtual void enterMulteq(PLDCOMPParser::MulteqContext *ctx) = 0;
  virtual void exitMulteq(PLDCOMPParser::MulteqContext *ctx) = 0;

  virtual void enterDiveq(PLDCOMPParser::DiveqContext *ctx) = 0;
  virtual void exitDiveq(PLDCOMPParser::DiveqContext *ctx) = 0;

  virtual void enterModeq(PLDCOMPParser::ModeqContext *ctx) = 0;
  virtual void exitModeq(PLDCOMPParser::ModeqContext *ctx) = 0;

  virtual void enterAndeq(PLDCOMPParser::AndeqContext *ctx) = 0;
  virtual void exitAndeq(PLDCOMPParser::AndeqContext *ctx) = 0;

  virtual void enterOreq(PLDCOMPParser::OreqContext *ctx) = 0;
  virtual void exitOreq(PLDCOMPParser::OreqContext *ctx) = 0;

  virtual void enterXoreq(PLDCOMPParser::XoreqContext *ctx) = 0;
  virtual void exitXoreq(PLDCOMPParser::XoreqContext *ctx) = 0;

  virtual void enterInfs(PLDCOMPParser::InfsContext *ctx) = 0;
  virtual void exitInfs(PLDCOMPParser::InfsContext *ctx) = 0;

  virtual void enterInf(PLDCOMPParser::InfContext *ctx) = 0;
  virtual void exitInf(PLDCOMPParser::InfContext *ctx) = 0;

  virtual void enterSups(PLDCOMPParser::SupsContext *ctx) = 0;
  virtual void exitSups(PLDCOMPParser::SupsContext *ctx) = 0;

  virtual void enterSup(PLDCOMPParser::SupContext *ctx) = 0;
  virtual void exitSup(PLDCOMPParser::SupContext *ctx) = 0;

  virtual void enterDecg(PLDCOMPParser::DecgContext *ctx) = 0;
  virtual void exitDecg(PLDCOMPParser::DecgContext *ctx) = 0;

  virtual void enterDecd(PLDCOMPParser::DecdContext *ctx) = 0;
  virtual void exitDecd(PLDCOMPParser::DecdContext *ctx) = 0;

  virtual void enterEqualb(PLDCOMPParser::EqualbContext *ctx) = 0;
  virtual void exitEqualb(PLDCOMPParser::EqualbContext *ctx) = 0;

  virtual void enterDiff(PLDCOMPParser::DiffContext *ctx) = 0;
  virtual void exitDiff(PLDCOMPParser::DiffContext *ctx) = 0;

  virtual void enterAndb(PLDCOMPParser::AndbContext *ctx) = 0;
  virtual void exitAndb(PLDCOMPParser::AndbContext *ctx) = 0;

  virtual void enterOrb(PLDCOMPParser::OrbContext *ctx) = 0;
  virtual void exitOrb(PLDCOMPParser::OrbContext *ctx) = 0;

  virtual void enterComma(PLDCOMPParser::CommaContext *ctx) = 0;
  virtual void exitComma(PLDCOMPParser::CommaContext *ctx) = 0;

  virtual void enterExpLvalue(PLDCOMPParser::ExpLvalueContext *ctx) = 0;
  virtual void exitExpLvalue(PLDCOMPParser::ExpLvalueContext *ctx) = 0;

  virtual void enterNegation(PLDCOMPParser::NegationContext *ctx) = 0;
  virtual void exitNegation(PLDCOMPParser::NegationContext *ctx) = 0;

  virtual void enterPpexp(PLDCOMPParser::PpexpContext *ctx) = 0;
  virtual void exitPpexp(PLDCOMPParser::PpexpContext *ctx) = 0;

  virtual void enterInvert(PLDCOMPParser::InvertContext *ctx) = 0;
  virtual void exitInvert(PLDCOMPParser::InvertContext *ctx) = 0;

  virtual void enterAppelGetchar(PLDCOMPParser::AppelGetcharContext *ctx) = 0;
  virtual void exitAppelGetchar(PLDCOMPParser::AppelGetcharContext *ctx) = 0;

  virtual void enterConstanteNombre(PLDCOMPParser::ConstanteNombreContext *ctx) = 0;
  virtual void exitConstanteNombre(PLDCOMPParser::ConstanteNombreContext *ctx) = 0;

  virtual void enterParenthese(PLDCOMPParser::ParentheseContext *ctx) = 0;
  virtual void exitParenthese(PLDCOMPParser::ParentheseContext *ctx) = 0;

  virtual void enterNon(PLDCOMPParser::NonContext *ctx) = 0;
  virtual void exitNon(PLDCOMPParser::NonContext *ctx) = 0;

  virtual void enterConstanteCaractere(PLDCOMPParser::ConstanteCaractereContext *ctx) = 0;
  virtual void exitConstanteCaractere(PLDCOMPParser::ConstanteCaractereContext *ctx) = 0;

  virtual void enterAppelDeFonction(PLDCOMPParser::AppelDeFonctionContext *ctx) = 0;
  virtual void exitAppelDeFonction(PLDCOMPParser::AppelDeFonctionContext *ctx) = 0;

  virtual void enterMmexp(PLDCOMPParser::MmexpContext *ctx) = 0;
  virtual void exitMmexp(PLDCOMPParser::MmexpContext *ctx) = 0;

  virtual void enterAffectation(PLDCOMPParser::AffectationContext *ctx) = 0;
  virtual void exitAffectation(PLDCOMPParser::AffectationContext *ctx) = 0;

  virtual void enterOperateurBinaire(PLDCOMPParser::OperateurBinaireContext *ctx) = 0;
  virtual void exitOperateurBinaire(PLDCOMPParser::OperateurBinaireContext *ctx) = 0;

  virtual void enterAppelPutchar(PLDCOMPParser::AppelPutcharContext *ctx) = 0;
  virtual void exitAppelPutchar(PLDCOMPParser::AppelPutcharContext *ctx) = 0;

  virtual void enterExppp(PLDCOMPParser::ExpppContext *ctx) = 0;
  virtual void exitExppp(PLDCOMPParser::ExpppContext *ctx) = 0;

  virtual void enterExpmm(PLDCOMPParser::ExpmmContext *ctx) = 0;
  virtual void exitExpmm(PLDCOMPParser::ExpmmContext *ctx) = 0;

  virtual void enterVariable(PLDCOMPParser::VariableContext *ctx) = 0;
  virtual void exitVariable(PLDCOMPParser::VariableContext *ctx) = 0;

  virtual void enterTableau(PLDCOMPParser::TableauContext *ctx) = 0;
  virtual void exitTableau(PLDCOMPParser::TableauContext *ctx) = 0;

  virtual void enterIfStatement(PLDCOMPParser::IfStatementContext *ctx) = 0;
  virtual void exitIfStatement(PLDCOMPParser::IfStatementContext *ctx) = 0;

  virtual void enterWhileStatement(PLDCOMPParser::WhileStatementContext *ctx) = 0;
  virtual void exitWhileStatement(PLDCOMPParser::WhileStatementContext *ctx) = 0;

  virtual void enterConstanteNb(PLDCOMPParser::ConstanteNbContext *ctx) = 0;
  virtual void exitConstanteNb(PLDCOMPParser::ConstanteNbContext *ctx) = 0;

  virtual void enterConstanteCar(PLDCOMPParser::ConstanteCarContext *ctx) = 0;
  virtual void exitConstanteCar(PLDCOMPParser::ConstanteCarContext *ctx) = 0;

  virtual void enterType_variable(PLDCOMPParser::Type_variableContext *ctx) = 0;
  virtual void exitType_variable(PLDCOMPParser::Type_variableContext *ctx) = 0;

  virtual void enterType_function(PLDCOMPParser::Type_functionContext *ctx) = 0;
  virtual void exitType_function(PLDCOMPParser::Type_functionContext *ctx) = 0;

  virtual void enterIf(PLDCOMPParser::IfContext *ctx) = 0;
  virtual void exitIf(PLDCOMPParser::IfContext *ctx) = 0;

  virtual void enterIfElse(PLDCOMPParser::IfElseContext *ctx) = 0;
  virtual void exitIfElse(PLDCOMPParser::IfElseContext *ctx) = 0;

  virtual void enterWhile(PLDCOMPParser::WhileContext *ctx) = 0;
  virtual void exitWhile(PLDCOMPParser::WhileContext *ctx) = 0;

  virtual void enterTableauNombre(PLDCOMPParser::TableauNombreContext *ctx) = 0;
  virtual void exitTableauNombre(PLDCOMPParser::TableauNombreContext *ctx) = 0;

  virtual void enterTableauCaractere(PLDCOMPParser::TableauCaractereContext *ctx) = 0;
  virtual void exitTableauCaractere(PLDCOMPParser::TableauCaractereContext *ctx) = 0;

  virtual void enterDeclarationIntMult(PLDCOMPParser::DeclarationIntMultContext *ctx) = 0;
  virtual void exitDeclarationIntMult(PLDCOMPParser::DeclarationIntMultContext *ctx) = 0;

  virtual void enterDeclarationCharMult(PLDCOMPParser::DeclarationCharMultContext *ctx) = 0;
  virtual void exitDeclarationCharMult(PLDCOMPParser::DeclarationCharMultContext *ctx) = 0;

  virtual void enterDeclarationTableau(PLDCOMPParser::DeclarationTableauContext *ctx) = 0;
  virtual void exitDeclarationTableau(PLDCOMPParser::DeclarationTableauContext *ctx) = 0;

  virtual void enterDeclarationTableauConstante(PLDCOMPParser::DeclarationTableauConstanteContext *ctx) = 0;
  virtual void exitDeclarationTableauConstante(PLDCOMPParser::DeclarationTableauConstanteContext *ctx) = 0;

  virtual void enterInt32(PLDCOMPParser::Int32Context *ctx) = 0;
  virtual void exitInt32(PLDCOMPParser::Int32Context *ctx) = 0;

  virtual void enterInt64(PLDCOMPParser::Int64Context *ctx) = 0;
  virtual void exitInt64(PLDCOMPParser::Int64Context *ctx) = 0;

  virtual void enterDeclarationIntSimple(PLDCOMPParser::DeclarationIntSimpleContext *ctx) = 0;
  virtual void exitDeclarationIntSimple(PLDCOMPParser::DeclarationIntSimpleContext *ctx) = 0;

  virtual void enterDeclarationIntConstante(PLDCOMPParser::DeclarationIntConstanteContext *ctx) = 0;
  virtual void exitDeclarationIntConstante(PLDCOMPParser::DeclarationIntConstanteContext *ctx) = 0;

  virtual void enterDeclarationCharSimple(PLDCOMPParser::DeclarationCharSimpleContext *ctx) = 0;
  virtual void exitDeclarationCharSimple(PLDCOMPParser::DeclarationCharSimpleContext *ctx) = 0;

  virtual void enterDeclarationCharConstante(PLDCOMPParser::DeclarationCharConstanteContext *ctx) = 0;
  virtual void exitDeclarationCharConstante(PLDCOMPParser::DeclarationCharConstanteContext *ctx) = 0;

  virtual void enterVoid(PLDCOMPParser::VoidContext *ctx) = 0;
  virtual void exitVoid(PLDCOMPParser::VoidContext *ctx) = 0;

  virtual void enterParametres(PLDCOMPParser::ParametresContext *ctx) = 0;
  virtual void exitParametres(PLDCOMPParser::ParametresContext *ctx) = 0;

  virtual void enterDeclarationFonctionParams(PLDCOMPParser::DeclarationFonctionParamsContext *ctx) = 0;
  virtual void exitDeclarationFonctionParams(PLDCOMPParser::DeclarationFonctionParamsContext *ctx) = 0;

  virtual void enterDeclarationFonction(PLDCOMPParser::DeclarationFonctionContext *ctx) = 0;
  virtual void exitDeclarationFonction(PLDCOMPParser::DeclarationFonctionContext *ctx) = 0;

  virtual void enterDeclarationVariables(PLDCOMPParser::DeclarationVariablesContext *ctx) = 0;
  virtual void exitDeclarationVariables(PLDCOMPParser::DeclarationVariablesContext *ctx) = 0;

  virtual void enterBloc(PLDCOMPParser::BlocContext *ctx) = 0;
  virtual void exitBloc(PLDCOMPParser::BlocContext *ctx) = 0;

  virtual void enterBlocInstruction(PLDCOMPParser::BlocInstructionContext *ctx) = 0;
  virtual void exitBlocInstruction(PLDCOMPParser::BlocInstructionContext *ctx) = 0;

  virtual void enterBreakInstruction(PLDCOMPParser::BreakInstructionContext *ctx) = 0;
  virtual void exitBreakInstruction(PLDCOMPParser::BreakInstructionContext *ctx) = 0;

  virtual void enterStructureInstruction(PLDCOMPParser::StructureInstructionContext *ctx) = 0;
  virtual void exitStructureInstruction(PLDCOMPParser::StructureInstructionContext *ctx) = 0;

  virtual void enterReturnInstruction(PLDCOMPParser::ReturnInstructionContext *ctx) = 0;
  virtual void exitReturnInstruction(PLDCOMPParser::ReturnInstructionContext *ctx) = 0;

  virtual void enterExpInstruction(PLDCOMPParser::ExpInstructionContext *ctx) = 0;
  virtual void exitExpInstruction(PLDCOMPParser::ExpInstructionContext *ctx) = 0;

  virtual void enterProgramme(PLDCOMPParser::ProgrammeContext *ctx) = 0;
  virtual void exitProgramme(PLDCOMPParser::ProgrammeContext *ctx) = 0;


};

