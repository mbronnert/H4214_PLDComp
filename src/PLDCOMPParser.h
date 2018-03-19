
// Generated from PLDCOMP.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"




class  PLDCOMPParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, T__19 = 20, 
    T__20 = 21, T__21 = 22, T__22 = 23, T__23 = 24, T__24 = 25, T__25 = 26, 
    T__26 = 27, T__27 = 28, T__28 = 29, T__29 = 30, T__30 = 31, T__31 = 32, 
    T__32 = 33, T__33 = 34, T__34 = 35, T__35 = 36, T__36 = 37, T__37 = 38, 
    T__38 = 39, T__39 = 40, T__40 = 41, T__41 = 42, T__42 = 43, T__43 = 44, 
    T__44 = 45, T__45 = 46, T__46 = 47, T__47 = 48, T__48 = 49, T__49 = 50, 
    NOMVAR = 51, NOMBRE = 52, CHAR = 53, COMMENT = 54, WS = 55, INCLUDE = 56
  };

  enum {
    RuleOp = 0, RuleExp = 1, RuleLvalue = 2, RuleStructure = 3, RuleConstante = 4, 
    RuleType_variable = 5, RuleType_function = 6, RuleIf_statement = 7, 
    RuleWhile_statement = 8, RuleVal = 9, RuleDeclaration_type = 10, RuleParam = 11, 
    RuleFonction = 12, RuleDeclaration_variables = 13, RuleBloc = 14, RuleInstruction = 15, 
    RuleProgramme = 16
  };

  PLDCOMPParser(antlr4::TokenStream *input);
  ~PLDCOMPParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class OpContext;
  class ExpContext;
  class LvalueContext;
  class StructureContext;
  class ConstanteContext;
  class Type_variableContext;
  class Type_functionContext;
  class If_statementContext;
  class While_statementContext;
  class ValContext;
  class Declaration_typeContext;
  class ParamContext;
  class FonctionContext;
  class Declaration_variablesContext;
  class BlocContext;
  class InstructionContext;
  class ProgrammeContext; 

  class  OpContext : public antlr4::ParserRuleContext {
  public:
    OpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    OpContext() : antlr4::ParserRuleContext() { }
    void copyFrom(OpContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  MultContext : public OpContext {
  public:
    MultContext(OpContext *ctx);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ModContext : public OpContext {
  public:
    ModContext(OpContext *ctx);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  InfsContext : public OpContext {
  public:
    InfsContext(OpContext *ctx);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AndbContext : public OpContext {
  public:
    AndbContext(OpContext *ctx);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AddeqContext : public OpContext {
  public:
    AddeqContext(OpContext *ctx);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  XoreqContext : public OpContext {
  public:
    XoreqContext(OpContext *ctx);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AndeqContext : public OpContext {
  public:
    AndeqContext(OpContext *ctx);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DecgContext : public OpContext {
  public:
    DecgContext(OpContext *ctx);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DecdContext : public OpContext {
  public:
    DecdContext(OpContext *ctx);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DiveqContext : public OpContext {
  public:
    DiveqContext(OpContext *ctx);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SupContext : public OpContext {
  public:
    SupContext(OpContext *ctx);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DivContext : public OpContext {
  public:
    DivContext(OpContext *ctx);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SupsContext : public OpContext {
  public:
    SupsContext(OpContext *ctx);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MoinseqContext : public OpContext {
  public:
    MoinseqContext(OpContext *ctx);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AndContext : public OpContext {
  public:
    AndContext(OpContext *ctx);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PowContext : public OpContext {
  public:
    PowContext(OpContext *ctx);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ModeqContext : public OpContext {
  public:
    ModeqContext(OpContext *ctx);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  OrbContext : public OpContext {
  public:
    OrbContext(OpContext *ctx);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AddContext : public OpContext {
  public:
    AddContext(OpContext *ctx);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  InfContext : public OpContext {
  public:
    InfContext(OpContext *ctx);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  OrContext : public OpContext {
  public:
    OrContext(OpContext *ctx);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  EqualbContext : public OpContext {
  public:
    EqualbContext(OpContext *ctx);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DiffContext : public OpContext {
  public:
    DiffContext(OpContext *ctx);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  EqualContext : public OpContext {
  public:
    EqualContext(OpContext *ctx);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MoinsContext : public OpContext {
  public:
    MoinsContext(OpContext *ctx);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  OreqContext : public OpContext {
  public:
    OreqContext(OpContext *ctx);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MulteqContext : public OpContext {
  public:
    MulteqContext(OpContext *ctx);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  OpContext* op();

  class  ExpContext : public antlr4::ParserRuleContext {
  public:
    ExpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExpContext() : antlr4::ParserRuleContext() { }
    void copyFrom(ExpContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ExpLvalueContext : public ExpContext {
  public:
    ExpLvalueContext(ExpContext *ctx);

    LvalueContext *lvalue();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NegationContext : public ExpContext {
  public:
    NegationContext(ExpContext *ctx);

    ExpContext *exp();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PpexpContext : public ExpContext {
  public:
    PpexpContext(ExpContext *ctx);

    LvalueContext *lvalue();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  InvertContext : public ExpContext {
  public:
    InvertContext(ExpContext *ctx);

    ExpContext *exp();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AppelGetcharContext : public ExpContext {
  public:
    AppelGetcharContext(ExpContext *ctx);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ConstanteNombreContext : public ExpContext {
  public:
    ConstanteNombreContext(ExpContext *ctx);

    antlr4::tree::TerminalNode *NOMBRE();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ParentheseContext : public ExpContext {
  public:
    ParentheseContext(ExpContext *ctx);

    ExpContext *exp();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NonContext : public ExpContext {
  public:
    NonContext(ExpContext *ctx);

    ExpContext *exp();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ConstanteCaractereContext : public ExpContext {
  public:
    ConstanteCaractereContext(ExpContext *ctx);

    antlr4::tree::TerminalNode *CHAR();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AppelDeFonctionContext : public ExpContext {
  public:
    AppelDeFonctionContext(ExpContext *ctx);

    antlr4::tree::TerminalNode *NOMVAR();
    std::vector<ExpContext *> exp();
    ExpContext* exp(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MmexpContext : public ExpContext {
  public:
    MmexpContext(ExpContext *ctx);

    LvalueContext *lvalue();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AffectationContext : public ExpContext {
  public:
    AffectationContext(ExpContext *ctx);

    LvalueContext *lvalue();
    ExpContext *exp();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  OperateurBinaireContext : public ExpContext {
  public:
    OperateurBinaireContext(ExpContext *ctx);

    std::vector<ExpContext *> exp();
    ExpContext* exp(size_t i);
    OpContext *op();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AppelPutcharContext : public ExpContext {
  public:
    AppelPutcharContext(ExpContext *ctx);

    ExpContext *exp();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExpppContext : public ExpContext {
  public:
    ExpppContext(ExpContext *ctx);

    LvalueContext *lvalue();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExpmmContext : public ExpContext {
  public:
    ExpmmContext(ExpContext *ctx);

    LvalueContext *lvalue();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExpContext* exp();
  ExpContext* exp(int precedence);
  class  LvalueContext : public antlr4::ParserRuleContext {
  public:
    LvalueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    LvalueContext() : antlr4::ParserRuleContext() { }
    void copyFrom(LvalueContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  TableauContext : public LvalueContext {
  public:
    TableauContext(LvalueContext *ctx);

    antlr4::tree::TerminalNode *NOMVAR();
    ExpContext *exp();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  VariableContext : public LvalueContext {
  public:
    VariableContext(LvalueContext *ctx);

    antlr4::tree::TerminalNode *NOMVAR();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  LvalueContext* lvalue();

  class  StructureContext : public antlr4::ParserRuleContext {
  public:
    StructureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    StructureContext() : antlr4::ParserRuleContext() { }
    void copyFrom(StructureContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  WhileStatementContext : public StructureContext {
  public:
    WhileStatementContext(StructureContext *ctx);

    While_statementContext *while_statement();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IfStatementContext : public StructureContext {
  public:
    IfStatementContext(StructureContext *ctx);

    If_statementContext *if_statement();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  StructureContext* structure();

  class  ConstanteContext : public antlr4::ParserRuleContext {
  public:
    ConstanteContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ConstanteContext() : antlr4::ParserRuleContext() { }
    void copyFrom(ConstanteContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ConstanteNbContext : public ConstanteContext {
  public:
    ConstanteNbContext(ConstanteContext *ctx);

    antlr4::tree::TerminalNode *NOMBRE();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ConstanteCarContext : public ConstanteContext {
  public:
    ConstanteCarContext(ConstanteContext *ctx);

    antlr4::tree::TerminalNode *CHAR();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ConstanteContext* constante();

  class  Type_variableContext : public antlr4::ParserRuleContext {
  public:
    Type_variableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Type_variableContext* type_variable();

  class  Type_functionContext : public antlr4::ParserRuleContext {
  public:
    Type_functionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Type_functionContext* type_function();

  class  If_statementContext : public antlr4::ParserRuleContext {
  public:
    If_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    If_statementContext() : antlr4::ParserRuleContext() { }
    void copyFrom(If_statementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  IfContext : public If_statementContext {
  public:
    IfContext(If_statementContext *ctx);

    ExpContext *exp();
    InstructionContext *instruction();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IfElseContext : public If_statementContext {
  public:
    IfElseContext(If_statementContext *ctx);

    ExpContext *exp();
    std::vector<InstructionContext *> instruction();
    InstructionContext* instruction(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  If_statementContext* if_statement();

  class  While_statementContext : public antlr4::ParserRuleContext {
  public:
    While_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    While_statementContext() : antlr4::ParserRuleContext() { }
    void copyFrom(While_statementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  WhileContext : public While_statementContext {
  public:
    WhileContext(While_statementContext *ctx);

    ExpContext *exp();
    InstructionContext *instruction();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  While_statementContext* while_statement();

  class  ValContext : public antlr4::ParserRuleContext {
  public:
    ValContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ValContext() : antlr4::ParserRuleContext() { }
    void copyFrom(ValContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  TableauNombreContext : public ValContext {
  public:
    TableauNombreContext(ValContext *ctx);

    std::vector<antlr4::tree::TerminalNode *> NOMBRE();
    antlr4::tree::TerminalNode* NOMBRE(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TableauCaractereContext : public ValContext {
  public:
    TableauCaractereContext(ValContext *ctx);

    std::vector<antlr4::tree::TerminalNode *> CHAR();
    antlr4::tree::TerminalNode* CHAR(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ValContext* val();

  class  Declaration_typeContext : public antlr4::ParserRuleContext {
  public:
    Declaration_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Declaration_typeContext() : antlr4::ParserRuleContext() { }
    void copyFrom(Declaration_typeContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  DeclarationConstanteContext : public Declaration_typeContext {
  public:
    DeclarationConstanteContext(Declaration_typeContext *ctx);

    Type_variableContext *type_variable();
    std::vector<antlr4::tree::TerminalNode *> NOMVAR();
    antlr4::tree::TerminalNode* NOMVAR(size_t i);
    std::vector<ConstanteContext *> constante();
    ConstanteContext* constante(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DeclarationTableauContext : public Declaration_typeContext {
  public:
    DeclarationTableauContext(Declaration_typeContext *ctx);

    Type_variableContext *type_variable();
    antlr4::tree::TerminalNode *NOMVAR();
    antlr4::tree::TerminalNode *NOMBRE();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DeclarationContext : public Declaration_typeContext {
  public:
    DeclarationContext(Declaration_typeContext *ctx);

    Type_variableContext *type_variable();
    std::vector<antlr4::tree::TerminalNode *> NOMVAR();
    antlr4::tree::TerminalNode* NOMVAR(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DeclarationTableauConstanteContext : public Declaration_typeContext {
  public:
    DeclarationTableauConstanteContext(Declaration_typeContext *ctx);

    Type_variableContext *type_variable();
    antlr4::tree::TerminalNode *NOMVAR();
    antlr4::tree::TerminalNode *NOMBRE();
    ValContext *val();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Declaration_typeContext* declaration_type();

  class  ParamContext : public antlr4::ParserRuleContext {
  public:
    ParamContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ParamContext() : antlr4::ParserRuleContext() { }
    void copyFrom(ParamContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  VoidContext : public ParamContext {
  public:
    VoidContext(ParamContext *ctx);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ParametresContext : public ParamContext {
  public:
    ParametresContext(ParamContext *ctx);

    std::vector<Type_variableContext *> type_variable();
    Type_variableContext* type_variable(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NOMVAR();
    antlr4::tree::TerminalNode* NOMVAR(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ParamContext* param();

  class  FonctionContext : public antlr4::ParserRuleContext {
  public:
    FonctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    FonctionContext() : antlr4::ParserRuleContext() { }
    void copyFrom(FonctionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  DeclarationFonctionParamsContext : public FonctionContext {
  public:
    DeclarationFonctionParamsContext(FonctionContext *ctx);

    Type_functionContext *type_function();
    antlr4::tree::TerminalNode *NOMVAR();
    ParamContext *param();
    Declaration_variablesContext *declaration_variables();
    BlocContext *bloc();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DeclarationFonctionContext : public FonctionContext {
  public:
    DeclarationFonctionContext(FonctionContext *ctx);

    Type_functionContext *type_function();
    antlr4::tree::TerminalNode *NOMVAR();
    Declaration_variablesContext *declaration_variables();
    BlocContext *bloc();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  FonctionContext* fonction();

  class  Declaration_variablesContext : public antlr4::ParserRuleContext {
  public:
    Declaration_variablesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Declaration_variablesContext() : antlr4::ParserRuleContext() { }
    void copyFrom(Declaration_variablesContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  DeclarationVariablesContext : public Declaration_variablesContext {
  public:
    DeclarationVariablesContext(Declaration_variablesContext *ctx);

    std::vector<Declaration_typeContext *> declaration_type();
    Declaration_typeContext* declaration_type(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Declaration_variablesContext* declaration_variables();

  class  BlocContext : public antlr4::ParserRuleContext {
  public:
    BlocContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<InstructionContext *> instruction();
    InstructionContext* instruction(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlocContext* bloc();

  class  InstructionContext : public antlr4::ParserRuleContext {
  public:
    InstructionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    InstructionContext() : antlr4::ParserRuleContext() { }
    void copyFrom(InstructionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  BlocInstructionContext : public InstructionContext {
  public:
    BlocInstructionContext(InstructionContext *ctx);

    BlocContext *bloc();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ReturnInstructionContext : public InstructionContext {
  public:
    ReturnInstructionContext(InstructionContext *ctx);

    ExpContext *exp();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExpInstructionContext : public InstructionContext {
  public:
    ExpInstructionContext(InstructionContext *ctx);

    ExpContext *exp();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BreakInstructionContext : public InstructionContext {
  public:
    BreakInstructionContext(InstructionContext *ctx);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StructureInstructionContext : public InstructionContext {
  public:
    StructureInstructionContext(InstructionContext *ctx);

    StructureContext *structure();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  InstructionContext* instruction();

  class  ProgrammeContext : public antlr4::ParserRuleContext {
  public:
    ProgrammeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Declaration_variablesContext *declaration_variables();
    std::vector<FonctionContext *> fonction();
    FonctionContext* fonction(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgrammeContext* programme();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool expSempred(ExpContext *_localctx, size_t predicateIndex);

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

