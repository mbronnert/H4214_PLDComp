
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

  virtual void enterExpLvalue(PLDCOMPParser::ExpLvalueContext *ctx) = 0;
  virtual void exitExpLvalue(PLDCOMPParser::ExpLvalueContext *ctx) = 0;

  virtual void enterPpexp(PLDCOMPParser::PpexpContext *ctx) = 0;
  virtual void exitPpexp(PLDCOMPParser::PpexpContext *ctx) = 0;

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

  virtual void enterStructure(PLDCOMPParser::StructureContext *ctx) = 0;
  virtual void exitStructure(PLDCOMPParser::StructureContext *ctx) = 0;

  virtual void enterConstante(PLDCOMPParser::ConstanteContext *ctx) = 0;
  virtual void exitConstante(PLDCOMPParser::ConstanteContext *ctx) = 0;

  virtual void enterType_variable(PLDCOMPParser::Type_variableContext *ctx) = 0;
  virtual void exitType_variable(PLDCOMPParser::Type_variableContext *ctx) = 0;

  virtual void enterType_function(PLDCOMPParser::Type_functionContext *ctx) = 0;
  virtual void exitType_function(PLDCOMPParser::Type_functionContext *ctx) = 0;

  virtual void enterIf_statement(PLDCOMPParser::If_statementContext *ctx) = 0;
  virtual void exitIf_statement(PLDCOMPParser::If_statementContext *ctx) = 0;

  virtual void enterWhile(PLDCOMPParser::WhileContext *ctx) = 0;
  virtual void exitWhile(PLDCOMPParser::WhileContext *ctx) = 0;

  virtual void enterValeur(PLDCOMPParser::ValeurContext *ctx) = 0;
  virtual void exitValeur(PLDCOMPParser::ValeurContext *ctx) = 0;

  virtual void enterDeclaration_type(PLDCOMPParser::Declaration_typeContext *ctx) = 0;
  virtual void exitDeclaration_type(PLDCOMPParser::Declaration_typeContext *ctx) = 0;

  virtual void enterVoid(PLDCOMPParser::VoidContext *ctx) = 0;
  virtual void exitVoid(PLDCOMPParser::VoidContext *ctx) = 0;

  virtual void enterParametres(PLDCOMPParser::ParametresContext *ctx) = 0;
  virtual void exitParametres(PLDCOMPParser::ParametresContext *ctx) = 0;

  virtual void enterDeclarationFoncionParams(PLDCOMPParser::DeclarationFoncionParamsContext *ctx) = 0;
  virtual void exitDeclarationFoncionParams(PLDCOMPParser::DeclarationFoncionParamsContext *ctx) = 0;

  virtual void enterDeclarationFoncion(PLDCOMPParser::DeclarationFoncionContext *ctx) = 0;
  virtual void exitDeclarationFoncion(PLDCOMPParser::DeclarationFoncionContext *ctx) = 0;

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

