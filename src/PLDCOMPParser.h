
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
    NOMVAR = 51, NOMBRE = 52, CHAR = 53, COMMENT = 54, LINECOMMENT = 55, 
    WS = 56, INCLUDE = 57
  };

  enum {
    RuleOpPrioritaire = 0, RuleOpSecondaire = 1, RuleExp = 2, RuleExpPrioritaire = 3, 
    RuleExpParenthese = 4, RuleLvalue = 5, RuleStructure = 6, RuleConstante = 7, 
    RuleType_variable = 8, RuleType_function = 9, RuleIf_statement = 10, 
    RuleWhile_statement = 11, RuleVal = 12, RuleDeclaration_type = 13, RuleEntier = 14, 
    RuleDeclaration_int_generale = 15, RuleDeclaration_char_generale = 16, 
    RuleParam = 17, RuleFonction = 18, RuleDeclaration_variables = 19, RuleBloc = 20, 
    RuleInstruction = 21, RuleProgramme = 22
  };

  PLDCOMPParser(antlr4::TokenStream *input);
  ~PLDCOMPParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class OpPrioritaireContext;
  class OpSecondaireContext;
  class ExpContext;
  class ExpPrioritaireContext;
  class ExpParentheseContext;
  class LvalueContext;
  class StructureContext;
  class ConstanteContext;
  class Type_variableContext;
  class Type_functionContext;
  class If_statementContext;
  class While_statementContext;
  class ValContext;
  class Declaration_typeContext;
  class EntierContext;
  class Declaration_int_generaleContext;
  class Declaration_char_generaleContext;
  class ParamContext;
  class FonctionContext;
  class Declaration_variablesContext;
  class BlocContext;
  class InstructionContext;
  class ProgrammeContext; 

  class  OpPrioritaireContext : public antlr4::ParserRuleContext {
  public:
    OpPrioritaireContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    OpPrioritaireContext() : antlr4::ParserRuleContext() { }
    void copyFrom(OpPrioritaireContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  DivContext : public OpPrioritaireContext {
  public:
    DivContext(OpPrioritaireContext *ctx);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MultContext : public OpPrioritaireContext {
  public:
    MultContext(OpPrioritaireContext *ctx);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AndbContext : public OpPrioritaireContext {
  public:
    AndbContext(OpPrioritaireContext *ctx);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  OpPrioritaireContext* opPrioritaire();

  class  OpSecondaireContext : public antlr4::ParserRuleContext {
  public:
    OpSecondaireContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    OpSecondaireContext() : antlr4::ParserRuleContext() { }
    void copyFrom(OpSecondaireContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ModContext : public OpSecondaireContext {
  public:
    ModContext(OpSecondaireContext *ctx);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  InfsContext : public OpSecondaireContext {
  public:
    InfsContext(OpSecondaireContext *ctx);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AddeqContext : public OpSecondaireContext {
  public:
    AddeqContext(OpSecondaireContext *ctx);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  XoreqContext : public OpSecondaireContext {
  public:
    XoreqContext(OpSecondaireContext *ctx);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AndeqContext : public OpSecondaireContext {
  public:
    AndeqContext(OpSecondaireContext *ctx);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DecgContext : public OpSecondaireContext {
  public:
    DecgContext(OpSecondaireContext *ctx);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DecdContext : public OpSecondaireContext {
  public:
    DecdContext(OpSecondaireContext *ctx);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DiveqContext : public OpSecondaireContext {
  public:
    DiveqContext(OpSecondaireContext *ctx);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SupContext : public OpSecondaireContext {
  public:
    SupContext(OpSecondaireContext *ctx);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SupsContext : public OpSecondaireContext {
  public:
    SupsContext(OpSecondaireContext *ctx);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MoinseqContext : public OpSecondaireContext {
  public:
    MoinseqContext(OpSecondaireContext *ctx);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AndContext : public OpSecondaireContext {
  public:
    AndContext(OpSecondaireContext *ctx);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PowContext : public OpSecondaireContext {
  public:
    PowContext(OpSecondaireContext *ctx);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ModeqContext : public OpSecondaireContext {
  public:
    ModeqContext(OpSecondaireContext *ctx);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  OrbContext : public OpSecondaireContext {
  public:
    OrbContext(OpSecondaireContext *ctx);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AddContext : public OpSecondaireContext {
  public:
    AddContext(OpSecondaireContext *ctx);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  InfContext : public OpSecondaireContext {
  public:
    InfContext(OpSecondaireContext *ctx);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  OrContext : public OpSecondaireContext {
  public:
    OrContext(OpSecondaireContext *ctx);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  EqualbContext : public OpSecondaireContext {
  public:
    EqualbContext(OpSecondaireContext *ctx);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DiffContext : public OpSecondaireContext {
  public:
    DiffContext(OpSecondaireContext *ctx);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  EqualContext : public OpSecondaireContext {
  public:
    EqualContext(OpSecondaireContext *ctx);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CommaContext : public OpSecondaireContext {
  public:
    CommaContext(OpSecondaireContext *ctx);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MoinsContext : public OpSecondaireContext {
  public:
    MoinsContext(OpSecondaireContext *ctx);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  OreqContext : public OpSecondaireContext {
  public:
    OreqContext(OpSecondaireContext *ctx);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MulteqContext : public OpSecondaireContext {
  public:
    MulteqContext(OpSecondaireContext *ctx);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  OpSecondaireContext* opSecondaire();

  class  ExpContext : public antlr4::ParserRuleContext {
  public:
    ExpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExpContext() : antlr4::ParserRuleContext() { }
    void copyFrom(ExpContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  OperateurBinaireSecondaireContext : public ExpContext {
  public:
    OperateurBinaireSecondaireContext(ExpContext *ctx);

    ExpContext *exp();
    OpSecondaireContext *opSecondaire();
    ExpPrioritaireContext *expPrioritaire();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExpressionPrioritaireContext : public ExpContext {
  public:
    ExpressionPrioritaireContext(ExpContext *ctx);

    ExpPrioritaireContext *expPrioritaire();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExpContext* exp();
  ExpContext* exp(int precedence);
  class  ExpPrioritaireContext : public antlr4::ParserRuleContext {
  public:
    ExpPrioritaireContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExpPrioritaireContext() : antlr4::ParserRuleContext() { }
    void copyFrom(ExpPrioritaireContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ExpressionParentheseContext : public ExpPrioritaireContext {
  public:
    ExpressionParentheseContext(ExpPrioritaireContext *ctx);

    ExpParentheseContext *expParenthese();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  OperateurBinairePrioritaireContext : public ExpPrioritaireContext {
  public:
    OperateurBinairePrioritaireContext(ExpPrioritaireContext *ctx);

    ExpPrioritaireContext *expPrioritaire();
    OpPrioritaireContext *opPrioritaire();
    ExpParentheseContext *expParenthese();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExpPrioritaireContext* expPrioritaire();
  ExpPrioritaireContext* expPrioritaire(int precedence);
  class  ExpParentheseContext : public antlr4::ParserRuleContext {
  public:
    ExpParentheseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExpParentheseContext() : antlr4::ParserRuleContext() { }
    void copyFrom(ExpParentheseContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ExpLvalueContext : public ExpParentheseContext {
  public:
    ExpLvalueContext(ExpParentheseContext *ctx);

    LvalueContext *lvalue();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NegationContext : public ExpParentheseContext {
  public:
    NegationContext(ExpParentheseContext *ctx);

    ExpContext *exp();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PpexpContext : public ExpParentheseContext {
  public:
    PpexpContext(ExpParentheseContext *ctx);

    LvalueContext *lvalue();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  InvertContext : public ExpParentheseContext {
  public:
    InvertContext(ExpParentheseContext *ctx);

    ExpContext *exp();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AppelGetcharContext : public ExpParentheseContext {
  public:
    AppelGetcharContext(ExpParentheseContext *ctx);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ConstanteNombreContext : public ExpParentheseContext {
  public:
    ConstanteNombreContext(ExpParentheseContext *ctx);

    antlr4::tree::TerminalNode *NOMBRE();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ParentheseContext : public ExpParentheseContext {
  public:
    ParentheseContext(ExpParentheseContext *ctx);

    ExpContext *exp();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NonContext : public ExpParentheseContext {
  public:
    NonContext(ExpParentheseContext *ctx);

    ExpContext *exp();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ConstanteCaractereContext : public ExpParentheseContext {
  public:
    ConstanteCaractereContext(ExpParentheseContext *ctx);

    antlr4::tree::TerminalNode *CHAR();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AppelDeFonctionContext : public ExpParentheseContext {
  public:
    AppelDeFonctionContext(ExpParentheseContext *ctx);

    antlr4::tree::TerminalNode *NOMVAR();
    std::vector<ExpContext *> exp();
    ExpContext* exp(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MmexpContext : public ExpParentheseContext {
  public:
    MmexpContext(ExpParentheseContext *ctx);

    LvalueContext *lvalue();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AffectationContext : public ExpParentheseContext {
  public:
    AffectationContext(ExpParentheseContext *ctx);

    LvalueContext *lvalue();
    ExpContext *exp();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AppelPutcharContext : public ExpParentheseContext {
  public:
    AppelPutcharContext(ExpParentheseContext *ctx);

    ExpContext *exp();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExpppContext : public ExpParentheseContext {
  public:
    ExpppContext(ExpParentheseContext *ctx);

    LvalueContext *lvalue();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExpmmContext : public ExpParentheseContext {
  public:
    ExpmmContext(ExpParentheseContext *ctx);

    LvalueContext *lvalue();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExpParentheseContext* expParenthese();

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

  class  DeclarationCharMultContext : public Declaration_typeContext {
  public:
    DeclarationCharMultContext(Declaration_typeContext *ctx);

    std::vector<Declaration_char_generaleContext *> declaration_char_generale();
    Declaration_char_generaleContext* declaration_char_generale(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DeclarationIntMultContext : public Declaration_typeContext {
  public:
    DeclarationIntMultContext(Declaration_typeContext *ctx);

    EntierContext *entier();
    std::vector<Declaration_int_generaleContext *> declaration_int_generale();
    Declaration_int_generaleContext* declaration_int_generale(size_t i);
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

  class  EntierContext : public antlr4::ParserRuleContext {
  public:
    EntierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    EntierContext() : antlr4::ParserRuleContext() { }
    void copyFrom(EntierContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Int32Context : public EntierContext {
  public:
    Int32Context(EntierContext *ctx);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Int64Context : public EntierContext {
  public:
    Int64Context(EntierContext *ctx);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  EntierContext* entier();

  class  Declaration_int_generaleContext : public antlr4::ParserRuleContext {
  public:
    Declaration_int_generaleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Declaration_int_generaleContext() : antlr4::ParserRuleContext() { }
    void copyFrom(Declaration_int_generaleContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  DeclarationIntSimpleContext : public Declaration_int_generaleContext {
  public:
    DeclarationIntSimpleContext(Declaration_int_generaleContext *ctx);

    antlr4::tree::TerminalNode *NOMVAR();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DeclarationIntConstanteContext : public Declaration_int_generaleContext {
  public:
    DeclarationIntConstanteContext(Declaration_int_generaleContext *ctx);

    antlr4::tree::TerminalNode *NOMVAR();
    ConstanteContext *constante();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Declaration_int_generaleContext* declaration_int_generale();

  class  Declaration_char_generaleContext : public antlr4::ParserRuleContext {
  public:
    Declaration_char_generaleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Declaration_char_generaleContext() : antlr4::ParserRuleContext() { }
    void copyFrom(Declaration_char_generaleContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  DeclarationCharSimpleContext : public Declaration_char_generaleContext {
  public:
    DeclarationCharSimpleContext(Declaration_char_generaleContext *ctx);

    antlr4::tree::TerminalNode *NOMVAR();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DeclarationCharConstanteContext : public Declaration_char_generaleContext {
  public:
    DeclarationCharConstanteContext(Declaration_char_generaleContext *ctx);

    antlr4::tree::TerminalNode *NOMVAR();
    ConstanteContext *constante();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Declaration_char_generaleContext* declaration_char_generale();

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
  bool expPrioritaireSempred(ExpPrioritaireContext *_localctx, size_t predicateIndex);

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

