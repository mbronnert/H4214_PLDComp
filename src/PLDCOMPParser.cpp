
// Generated from PLDCOMP.g4 by ANTLR 4.7.1


#include "PLDCOMPVisitor.h"

#include "PLDCOMPParser.h"


using namespace antlrcpp;
using namespace antlr4;

PLDCOMPParser::PLDCOMPParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

PLDCOMPParser::~PLDCOMPParser() {
  delete _interpreter;
}

std::string PLDCOMPParser::getGrammarFileName() const {
  return "PLDCOMP.g4";
}

const std::vector<std::string>& PLDCOMPParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& PLDCOMPParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- OpContext ------------------------------------------------------------------

PLDCOMPParser::OpContext::OpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PLDCOMPParser::OpContext::getRuleIndex() const {
  return PLDCOMPParser::RuleOp;
}

void PLDCOMPParser::OpContext::copyFrom(OpContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- MultContext ------------------------------------------------------------------

PLDCOMPParser::MultContext::MultContext(OpContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::MultContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitMult(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ModContext ------------------------------------------------------------------

PLDCOMPParser::ModContext::ModContext(OpContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::ModContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitMod(this);
  else
    return visitor->visitChildren(this);
}
//----------------- InfsContext ------------------------------------------------------------------

PLDCOMPParser::InfsContext::InfsContext(OpContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::InfsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitInfs(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AndbContext ------------------------------------------------------------------

PLDCOMPParser::AndbContext::AndbContext(OpContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::AndbContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitAndb(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AddeqContext ------------------------------------------------------------------

PLDCOMPParser::AddeqContext::AddeqContext(OpContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::AddeqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitAddeq(this);
  else
    return visitor->visitChildren(this);
}
//----------------- XoreqContext ------------------------------------------------------------------

PLDCOMPParser::XoreqContext::XoreqContext(OpContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::XoreqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitXoreq(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AndeqContext ------------------------------------------------------------------

PLDCOMPParser::AndeqContext::AndeqContext(OpContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::AndeqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitAndeq(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DecgContext ------------------------------------------------------------------

PLDCOMPParser::DecgContext::DecgContext(OpContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::DecgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitDecg(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DecdContext ------------------------------------------------------------------

PLDCOMPParser::DecdContext::DecdContext(OpContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::DecdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitDecd(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DiveqContext ------------------------------------------------------------------

PLDCOMPParser::DiveqContext::DiveqContext(OpContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::DiveqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitDiveq(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SupContext ------------------------------------------------------------------

PLDCOMPParser::SupContext::SupContext(OpContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::SupContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitSup(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DivContext ------------------------------------------------------------------

PLDCOMPParser::DivContext::DivContext(OpContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::DivContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitDiv(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SupsContext ------------------------------------------------------------------

PLDCOMPParser::SupsContext::SupsContext(OpContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::SupsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitSups(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MoinseqContext ------------------------------------------------------------------

PLDCOMPParser::MoinseqContext::MoinseqContext(OpContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::MoinseqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitMoinseq(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AndContext ------------------------------------------------------------------

PLDCOMPParser::AndContext::AndContext(OpContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::AndContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitAnd(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PowContext ------------------------------------------------------------------

PLDCOMPParser::PowContext::PowContext(OpContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::PowContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitPow(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ModeqContext ------------------------------------------------------------------

PLDCOMPParser::ModeqContext::ModeqContext(OpContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::ModeqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitModeq(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OrbContext ------------------------------------------------------------------

PLDCOMPParser::OrbContext::OrbContext(OpContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::OrbContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitOrb(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AddContext ------------------------------------------------------------------

PLDCOMPParser::AddContext::AddContext(OpContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::AddContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitAdd(this);
  else
    return visitor->visitChildren(this);
}
//----------------- InfContext ------------------------------------------------------------------

PLDCOMPParser::InfContext::InfContext(OpContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::InfContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitInf(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OrContext ------------------------------------------------------------------

PLDCOMPParser::OrContext::OrContext(OpContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::OrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitOr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- EqualbContext ------------------------------------------------------------------

PLDCOMPParser::EqualbContext::EqualbContext(OpContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::EqualbContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitEqualb(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DiffContext ------------------------------------------------------------------

PLDCOMPParser::DiffContext::DiffContext(OpContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::DiffContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitDiff(this);
  else
    return visitor->visitChildren(this);
}
//----------------- EqualContext ------------------------------------------------------------------

PLDCOMPParser::EqualContext::EqualContext(OpContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::EqualContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitEqual(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CommaContext ------------------------------------------------------------------

PLDCOMPParser::CommaContext::CommaContext(OpContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::CommaContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitComma(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MoinsContext ------------------------------------------------------------------

PLDCOMPParser::MoinsContext::MoinsContext(OpContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::MoinsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitMoins(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OreqContext ------------------------------------------------------------------

PLDCOMPParser::OreqContext::OreqContext(OpContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::OreqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitOreq(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MulteqContext ------------------------------------------------------------------

PLDCOMPParser::MulteqContext::MulteqContext(OpContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::MulteqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitMulteq(this);
  else
    return visitor->visitChildren(this);
}
PLDCOMPParser::OpContext* PLDCOMPParser::op() {
  OpContext *_localctx = _tracker.createInstance<OpContext>(_ctx, getState());
  enterRule(_localctx, 0, PLDCOMPParser::RuleOp);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(62);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PLDCOMPParser::T__0: {
        _localctx = dynamic_cast<OpContext *>(_tracker.createInstance<PLDCOMPParser::AddContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(34);
        match(PLDCOMPParser::T__0);
        break;
      }

      case PLDCOMPParser::T__1: {
        _localctx = dynamic_cast<OpContext *>(_tracker.createInstance<PLDCOMPParser::MoinsContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(35);
        match(PLDCOMPParser::T__1);
        break;
      }

      case PLDCOMPParser::T__2: {
        _localctx = dynamic_cast<OpContext *>(_tracker.createInstance<PLDCOMPParser::MultContext>(_localctx));
        enterOuterAlt(_localctx, 3);
        setState(36);
        match(PLDCOMPParser::T__2);
        break;
      }

      case PLDCOMPParser::T__3: {
        _localctx = dynamic_cast<OpContext *>(_tracker.createInstance<PLDCOMPParser::DivContext>(_localctx));
        enterOuterAlt(_localctx, 4);
        setState(37);
        match(PLDCOMPParser::T__3);
        break;
      }

      case PLDCOMPParser::T__4: {
        _localctx = dynamic_cast<OpContext *>(_tracker.createInstance<PLDCOMPParser::ModContext>(_localctx));
        enterOuterAlt(_localctx, 5);
        setState(38);
        match(PLDCOMPParser::T__4);
        break;
      }

      case PLDCOMPParser::T__5: {
        _localctx = dynamic_cast<OpContext *>(_tracker.createInstance<PLDCOMPParser::PowContext>(_localctx));
        enterOuterAlt(_localctx, 6);
        setState(39);
        match(PLDCOMPParser::T__5);
        break;
      }

      case PLDCOMPParser::T__6: {
        _localctx = dynamic_cast<OpContext *>(_tracker.createInstance<PLDCOMPParser::AndContext>(_localctx));
        enterOuterAlt(_localctx, 7);
        setState(40);
        match(PLDCOMPParser::T__6);
        break;
      }

      case PLDCOMPParser::T__7: {
        _localctx = dynamic_cast<OpContext *>(_tracker.createInstance<PLDCOMPParser::OrContext>(_localctx));
        enterOuterAlt(_localctx, 8);
        setState(41);
        match(PLDCOMPParser::T__7);
        break;
      }

      case PLDCOMPParser::T__8: {
        _localctx = dynamic_cast<OpContext *>(_tracker.createInstance<PLDCOMPParser::EqualContext>(_localctx));
        enterOuterAlt(_localctx, 9);
        setState(42);
        match(PLDCOMPParser::T__8);
        break;
      }

      case PLDCOMPParser::T__9: {
        _localctx = dynamic_cast<OpContext *>(_tracker.createInstance<PLDCOMPParser::AddeqContext>(_localctx));
        enterOuterAlt(_localctx, 10);
        setState(43);
        match(PLDCOMPParser::T__9);
        break;
      }

      case PLDCOMPParser::T__10: {
        _localctx = dynamic_cast<OpContext *>(_tracker.createInstance<PLDCOMPParser::MoinseqContext>(_localctx));
        enterOuterAlt(_localctx, 11);
        setState(44);
        match(PLDCOMPParser::T__10);
        break;
      }

      case PLDCOMPParser::T__11: {
        _localctx = dynamic_cast<OpContext *>(_tracker.createInstance<PLDCOMPParser::MulteqContext>(_localctx));
        enterOuterAlt(_localctx, 12);
        setState(45);
        match(PLDCOMPParser::T__11);
        break;
      }

      case PLDCOMPParser::T__12: {
        _localctx = dynamic_cast<OpContext *>(_tracker.createInstance<PLDCOMPParser::DiveqContext>(_localctx));
        enterOuterAlt(_localctx, 13);
        setState(46);
        match(PLDCOMPParser::T__12);
        break;
      }

      case PLDCOMPParser::T__13: {
        _localctx = dynamic_cast<OpContext *>(_tracker.createInstance<PLDCOMPParser::ModeqContext>(_localctx));
        enterOuterAlt(_localctx, 14);
        setState(47);
        match(PLDCOMPParser::T__13);
        break;
      }

      case PLDCOMPParser::T__14: {
        _localctx = dynamic_cast<OpContext *>(_tracker.createInstance<PLDCOMPParser::AndeqContext>(_localctx));
        enterOuterAlt(_localctx, 15);
        setState(48);
        match(PLDCOMPParser::T__14);
        break;
      }

      case PLDCOMPParser::T__15: {
        _localctx = dynamic_cast<OpContext *>(_tracker.createInstance<PLDCOMPParser::OreqContext>(_localctx));
        enterOuterAlt(_localctx, 16);
        setState(49);
        match(PLDCOMPParser::T__15);
        break;
      }

      case PLDCOMPParser::T__16: {
        _localctx = dynamic_cast<OpContext *>(_tracker.createInstance<PLDCOMPParser::XoreqContext>(_localctx));
        enterOuterAlt(_localctx, 17);
        setState(50);
        match(PLDCOMPParser::T__16);
        break;
      }

      case PLDCOMPParser::T__17: {
        _localctx = dynamic_cast<OpContext *>(_tracker.createInstance<PLDCOMPParser::InfsContext>(_localctx));
        enterOuterAlt(_localctx, 18);
        setState(51);
        match(PLDCOMPParser::T__17);
        break;
      }

      case PLDCOMPParser::T__18: {
        _localctx = dynamic_cast<OpContext *>(_tracker.createInstance<PLDCOMPParser::InfContext>(_localctx));
        enterOuterAlt(_localctx, 19);
        setState(52);
        match(PLDCOMPParser::T__18);
        break;
      }

      case PLDCOMPParser::T__19: {
        _localctx = dynamic_cast<OpContext *>(_tracker.createInstance<PLDCOMPParser::SupsContext>(_localctx));
        enterOuterAlt(_localctx, 20);
        setState(53);
        match(PLDCOMPParser::T__19);
        break;
      }

      case PLDCOMPParser::T__20: {
        _localctx = dynamic_cast<OpContext *>(_tracker.createInstance<PLDCOMPParser::SupContext>(_localctx));
        enterOuterAlt(_localctx, 21);
        setState(54);
        match(PLDCOMPParser::T__20);
        break;
      }

      case PLDCOMPParser::T__21: {
        _localctx = dynamic_cast<OpContext *>(_tracker.createInstance<PLDCOMPParser::DecgContext>(_localctx));
        enterOuterAlt(_localctx, 22);
        setState(55);
        match(PLDCOMPParser::T__21);
        break;
      }

      case PLDCOMPParser::T__22: {
        _localctx = dynamic_cast<OpContext *>(_tracker.createInstance<PLDCOMPParser::DecdContext>(_localctx));
        enterOuterAlt(_localctx, 23);
        setState(56);
        match(PLDCOMPParser::T__22);
        break;
      }

      case PLDCOMPParser::T__23: {
        _localctx = dynamic_cast<OpContext *>(_tracker.createInstance<PLDCOMPParser::EqualbContext>(_localctx));
        enterOuterAlt(_localctx, 24);
        setState(57);
        match(PLDCOMPParser::T__23);
        break;
      }

      case PLDCOMPParser::T__24: {
        _localctx = dynamic_cast<OpContext *>(_tracker.createInstance<PLDCOMPParser::DiffContext>(_localctx));
        enterOuterAlt(_localctx, 25);
        setState(58);
        match(PLDCOMPParser::T__24);
        break;
      }

      case PLDCOMPParser::T__25: {
        _localctx = dynamic_cast<OpContext *>(_tracker.createInstance<PLDCOMPParser::AndbContext>(_localctx));
        enterOuterAlt(_localctx, 26);
        setState(59);
        match(PLDCOMPParser::T__25);
        break;
      }

      case PLDCOMPParser::T__26: {
        _localctx = dynamic_cast<OpContext *>(_tracker.createInstance<PLDCOMPParser::OrbContext>(_localctx));
        enterOuterAlt(_localctx, 27);
        setState(60);
        match(PLDCOMPParser::T__26);
        break;
      }

      case PLDCOMPParser::T__27: {
        _localctx = dynamic_cast<OpContext *>(_tracker.createInstance<PLDCOMPParser::CommaContext>(_localctx));
        enterOuterAlt(_localctx, 28);
        setState(61);
        match(PLDCOMPParser::T__27);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpContext ------------------------------------------------------------------

PLDCOMPParser::ExpContext::ExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PLDCOMPParser::ExpContext::getRuleIndex() const {
  return PLDCOMPParser::RuleExp;
}

void PLDCOMPParser::ExpContext::copyFrom(ExpContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ExpLvalueContext ------------------------------------------------------------------

PLDCOMPParser::LvalueContext* PLDCOMPParser::ExpLvalueContext::lvalue() {
  return getRuleContext<PLDCOMPParser::LvalueContext>(0);
}

PLDCOMPParser::ExpLvalueContext::ExpLvalueContext(ExpContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::ExpLvalueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitExpLvalue(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NegationContext ------------------------------------------------------------------

PLDCOMPParser::ExpContext* PLDCOMPParser::NegationContext::exp() {
  return getRuleContext<PLDCOMPParser::ExpContext>(0);
}

PLDCOMPParser::NegationContext::NegationContext(ExpContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::NegationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitNegation(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PpexpContext ------------------------------------------------------------------

PLDCOMPParser::LvalueContext* PLDCOMPParser::PpexpContext::lvalue() {
  return getRuleContext<PLDCOMPParser::LvalueContext>(0);
}

PLDCOMPParser::PpexpContext::PpexpContext(ExpContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::PpexpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitPpexp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- InvertContext ------------------------------------------------------------------

PLDCOMPParser::ExpContext* PLDCOMPParser::InvertContext::exp() {
  return getRuleContext<PLDCOMPParser::ExpContext>(0);
}

PLDCOMPParser::InvertContext::InvertContext(ExpContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::InvertContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitInvert(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AppelGetcharContext ------------------------------------------------------------------

PLDCOMPParser::AppelGetcharContext::AppelGetcharContext(ExpContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::AppelGetcharContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitAppelGetchar(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ConstanteNombreContext ------------------------------------------------------------------

tree::TerminalNode* PLDCOMPParser::ConstanteNombreContext::NOMBRE() {
  return getToken(PLDCOMPParser::NOMBRE, 0);
}

PLDCOMPParser::ConstanteNombreContext::ConstanteNombreContext(ExpContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::ConstanteNombreContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitConstanteNombre(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParentheseContext ------------------------------------------------------------------

PLDCOMPParser::ExpContext* PLDCOMPParser::ParentheseContext::exp() {
  return getRuleContext<PLDCOMPParser::ExpContext>(0);
}

PLDCOMPParser::ParentheseContext::ParentheseContext(ExpContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::ParentheseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitParenthese(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NonContext ------------------------------------------------------------------

PLDCOMPParser::ExpContext* PLDCOMPParser::NonContext::exp() {
  return getRuleContext<PLDCOMPParser::ExpContext>(0);
}

PLDCOMPParser::NonContext::NonContext(ExpContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::NonContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitNon(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ConstanteCaractereContext ------------------------------------------------------------------

tree::TerminalNode* PLDCOMPParser::ConstanteCaractereContext::CHAR() {
  return getToken(PLDCOMPParser::CHAR, 0);
}

PLDCOMPParser::ConstanteCaractereContext::ConstanteCaractereContext(ExpContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::ConstanteCaractereContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitConstanteCaractere(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AppelDeFonctionContext ------------------------------------------------------------------

tree::TerminalNode* PLDCOMPParser::AppelDeFonctionContext::NOMVAR() {
  return getToken(PLDCOMPParser::NOMVAR, 0);
}

std::vector<PLDCOMPParser::ExpContext *> PLDCOMPParser::AppelDeFonctionContext::exp() {
  return getRuleContexts<PLDCOMPParser::ExpContext>();
}

PLDCOMPParser::ExpContext* PLDCOMPParser::AppelDeFonctionContext::exp(size_t i) {
  return getRuleContext<PLDCOMPParser::ExpContext>(i);
}

PLDCOMPParser::AppelDeFonctionContext::AppelDeFonctionContext(ExpContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::AppelDeFonctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitAppelDeFonction(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MmexpContext ------------------------------------------------------------------

PLDCOMPParser::LvalueContext* PLDCOMPParser::MmexpContext::lvalue() {
  return getRuleContext<PLDCOMPParser::LvalueContext>(0);
}

PLDCOMPParser::MmexpContext::MmexpContext(ExpContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::MmexpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitMmexp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AffectationContext ------------------------------------------------------------------

PLDCOMPParser::LvalueContext* PLDCOMPParser::AffectationContext::lvalue() {
  return getRuleContext<PLDCOMPParser::LvalueContext>(0);
}

PLDCOMPParser::ExpContext* PLDCOMPParser::AffectationContext::exp() {
  return getRuleContext<PLDCOMPParser::ExpContext>(0);
}

PLDCOMPParser::AffectationContext::AffectationContext(ExpContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::AffectationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitAffectation(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OperateurBinaireContext ------------------------------------------------------------------

std::vector<PLDCOMPParser::ExpContext *> PLDCOMPParser::OperateurBinaireContext::exp() {
  return getRuleContexts<PLDCOMPParser::ExpContext>();
}

PLDCOMPParser::ExpContext* PLDCOMPParser::OperateurBinaireContext::exp(size_t i) {
  return getRuleContext<PLDCOMPParser::ExpContext>(i);
}

PLDCOMPParser::OpContext* PLDCOMPParser::OperateurBinaireContext::op() {
  return getRuleContext<PLDCOMPParser::OpContext>(0);
}

PLDCOMPParser::OperateurBinaireContext::OperateurBinaireContext(ExpContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::OperateurBinaireContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitOperateurBinaire(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AppelPutcharContext ------------------------------------------------------------------

PLDCOMPParser::ExpContext* PLDCOMPParser::AppelPutcharContext::exp() {
  return getRuleContext<PLDCOMPParser::ExpContext>(0);
}

PLDCOMPParser::AppelPutcharContext::AppelPutcharContext(ExpContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::AppelPutcharContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitAppelPutchar(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExpppContext ------------------------------------------------------------------

PLDCOMPParser::LvalueContext* PLDCOMPParser::ExpppContext::lvalue() {
  return getRuleContext<PLDCOMPParser::LvalueContext>(0);
}

PLDCOMPParser::ExpppContext::ExpppContext(ExpContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::ExpppContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitExppp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExpmmContext ------------------------------------------------------------------

PLDCOMPParser::LvalueContext* PLDCOMPParser::ExpmmContext::lvalue() {
  return getRuleContext<PLDCOMPParser::LvalueContext>(0);
}

PLDCOMPParser::ExpmmContext::ExpmmContext(ExpContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::ExpmmContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitExpmm(this);
  else
    return visitor->visitChildren(this);
}

PLDCOMPParser::ExpContext* PLDCOMPParser::exp() {
   return exp(0);
}

PLDCOMPParser::ExpContext* PLDCOMPParser::exp(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  PLDCOMPParser::ExpContext *_localctx = _tracker.createInstance<ExpContext>(_ctx, parentState);
  PLDCOMPParser::ExpContext *previousContext = _localctx;
  size_t startState = 2;
  enterRecursionRule(_localctx, 2, PLDCOMPParser::RuleExp, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(112);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<ParentheseContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(65);
      match(PLDCOMPParser::T__28);
      setState(66);
      exp(0);
      setState(67);
      match(PLDCOMPParser::T__29);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<NonContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(69);
      match(PLDCOMPParser::T__30);
      setState(70);
      exp(14);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<NegationContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(71);
      match(PLDCOMPParser::T__1);
      setState(72);
      exp(13);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<InvertContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(73);
      match(PLDCOMPParser::T__31);
      setState(74);
      exp(12);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<ExpppContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(75);
      lvalue();
      setState(76);
      match(PLDCOMPParser::T__32);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<ExpmmContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(78);
      lvalue();
      setState(79);
      match(PLDCOMPParser::T__33);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<PpexpContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(81);
      match(PLDCOMPParser::T__32);
      setState(82);
      lvalue();
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<MmexpContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(83);
      match(PLDCOMPParser::T__33);
      setState(84);
      lvalue();
      break;
    }

    case 9: {
      _localctx = _tracker.createInstance<AffectationContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(85);
      lvalue();
      setState(86);
      match(PLDCOMPParser::T__8);
      setState(87);
      exp(7);
      break;
    }

    case 10: {
      _localctx = _tracker.createInstance<ConstanteNombreContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(89);
      match(PLDCOMPParser::NOMBRE);
      break;
    }

    case 11: {
      _localctx = _tracker.createInstance<ConstanteCaractereContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(90);
      match(PLDCOMPParser::CHAR);
      break;
    }

    case 12: {
      _localctx = _tracker.createInstance<ExpLvalueContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(91);
      lvalue();
      break;
    }

    case 13: {
      _localctx = _tracker.createInstance<AppelDeFonctionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(92);
      match(PLDCOMPParser::NOMVAR);
      setState(93);
      match(PLDCOMPParser::T__28);
      setState(94);
      exp(0);
      setState(99);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == PLDCOMPParser::T__27) {
        setState(95);
        match(PLDCOMPParser::T__27);
        setState(96);
        exp(0);
        setState(101);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(102);
      match(PLDCOMPParser::T__29);
      break;
    }

    case 14: {
      _localctx = _tracker.createInstance<AppelPutcharContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(104);
      match(PLDCOMPParser::T__34);
      setState(105);
      match(PLDCOMPParser::T__28);
      setState(106);
      exp(0);
      setState(107);
      match(PLDCOMPParser::T__29);
      break;
    }

    case 15: {
      _localctx = _tracker.createInstance<AppelGetcharContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(109);
      match(PLDCOMPParser::T__35);
      setState(110);
      match(PLDCOMPParser::T__28);
      setState(111);
      match(PLDCOMPParser::T__29);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(120);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<OperateurBinaireContext>(_tracker.createInstance<ExpContext>(parentContext, parentState));
        _localctx = newContext;
        pushNewRecursionContext(newContext, startState, RuleExp);
        setState(114);

        if (!(precpred(_ctx, 16))) throw FailedPredicateException(this, "precpred(_ctx, 16)");
        setState(115);
        op();
        setState(116);
        exp(17); 
      }
      setState(122);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- LvalueContext ------------------------------------------------------------------

PLDCOMPParser::LvalueContext::LvalueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PLDCOMPParser::LvalueContext::getRuleIndex() const {
  return PLDCOMPParser::RuleLvalue;
}

void PLDCOMPParser::LvalueContext::copyFrom(LvalueContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- TableauContext ------------------------------------------------------------------

tree::TerminalNode* PLDCOMPParser::TableauContext::NOMVAR() {
  return getToken(PLDCOMPParser::NOMVAR, 0);
}

PLDCOMPParser::ExpContext* PLDCOMPParser::TableauContext::exp() {
  return getRuleContext<PLDCOMPParser::ExpContext>(0);
}

PLDCOMPParser::TableauContext::TableauContext(LvalueContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::TableauContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitTableau(this);
  else
    return visitor->visitChildren(this);
}
//----------------- VariableContext ------------------------------------------------------------------

tree::TerminalNode* PLDCOMPParser::VariableContext::NOMVAR() {
  return getToken(PLDCOMPParser::NOMVAR, 0);
}

PLDCOMPParser::VariableContext::VariableContext(LvalueContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::VariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitVariable(this);
  else
    return visitor->visitChildren(this);
}
PLDCOMPParser::LvalueContext* PLDCOMPParser::lvalue() {
  LvalueContext *_localctx = _tracker.createInstance<LvalueContext>(_ctx, getState());
  enterRule(_localctx, 4, PLDCOMPParser::RuleLvalue);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(129);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<LvalueContext *>(_tracker.createInstance<PLDCOMPParser::VariableContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(123);
      match(PLDCOMPParser::NOMVAR);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<LvalueContext *>(_tracker.createInstance<PLDCOMPParser::TableauContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(124);
      match(PLDCOMPParser::NOMVAR);
      setState(125);
      match(PLDCOMPParser::T__36);
      setState(126);
      exp(0);
      setState(127);
      match(PLDCOMPParser::T__37);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StructureContext ------------------------------------------------------------------

PLDCOMPParser::StructureContext::StructureContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PLDCOMPParser::StructureContext::getRuleIndex() const {
  return PLDCOMPParser::RuleStructure;
}

void PLDCOMPParser::StructureContext::copyFrom(StructureContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- WhileStatementContext ------------------------------------------------------------------

PLDCOMPParser::While_statementContext* PLDCOMPParser::WhileStatementContext::while_statement() {
  return getRuleContext<PLDCOMPParser::While_statementContext>(0);
}

PLDCOMPParser::WhileStatementContext::WhileStatementContext(StructureContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::WhileStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitWhileStatement(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IfStatementContext ------------------------------------------------------------------

PLDCOMPParser::If_statementContext* PLDCOMPParser::IfStatementContext::if_statement() {
  return getRuleContext<PLDCOMPParser::If_statementContext>(0);
}

PLDCOMPParser::IfStatementContext::IfStatementContext(StructureContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::IfStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitIfStatement(this);
  else
    return visitor->visitChildren(this);
}
PLDCOMPParser::StructureContext* PLDCOMPParser::structure() {
  StructureContext *_localctx = _tracker.createInstance<StructureContext>(_ctx, getState());
  enterRule(_localctx, 6, PLDCOMPParser::RuleStructure);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(133);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PLDCOMPParser::T__42: {
        _localctx = dynamic_cast<StructureContext *>(_tracker.createInstance<PLDCOMPParser::IfStatementContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(131);
        if_statement();
        break;
      }

      case PLDCOMPParser::T__44: {
        _localctx = dynamic_cast<StructureContext *>(_tracker.createInstance<PLDCOMPParser::WhileStatementContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(132);
        while_statement();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstanteContext ------------------------------------------------------------------

PLDCOMPParser::ConstanteContext::ConstanteContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PLDCOMPParser::ConstanteContext::getRuleIndex() const {
  return PLDCOMPParser::RuleConstante;
}

void PLDCOMPParser::ConstanteContext::copyFrom(ConstanteContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ConstanteNbContext ------------------------------------------------------------------

tree::TerminalNode* PLDCOMPParser::ConstanteNbContext::NOMBRE() {
  return getToken(PLDCOMPParser::NOMBRE, 0);
}

PLDCOMPParser::ConstanteNbContext::ConstanteNbContext(ConstanteContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::ConstanteNbContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitConstanteNb(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ConstanteCarContext ------------------------------------------------------------------

tree::TerminalNode* PLDCOMPParser::ConstanteCarContext::CHAR() {
  return getToken(PLDCOMPParser::CHAR, 0);
}

PLDCOMPParser::ConstanteCarContext::ConstanteCarContext(ConstanteContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::ConstanteCarContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitConstanteCar(this);
  else
    return visitor->visitChildren(this);
}
PLDCOMPParser::ConstanteContext* PLDCOMPParser::constante() {
  ConstanteContext *_localctx = _tracker.createInstance<ConstanteContext>(_ctx, getState());
  enterRule(_localctx, 8, PLDCOMPParser::RuleConstante);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(137);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PLDCOMPParser::NOMBRE: {
        _localctx = dynamic_cast<ConstanteContext *>(_tracker.createInstance<PLDCOMPParser::ConstanteNbContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(135);
        match(PLDCOMPParser::NOMBRE);
        break;
      }

      case PLDCOMPParser::CHAR: {
        _localctx = dynamic_cast<ConstanteContext *>(_tracker.createInstance<PLDCOMPParser::ConstanteCarContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(136);
        match(PLDCOMPParser::CHAR);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Type_variableContext ------------------------------------------------------------------

PLDCOMPParser::Type_variableContext::Type_variableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PLDCOMPParser::Type_variableContext::getRuleIndex() const {
  return PLDCOMPParser::RuleType_variable;
}

antlrcpp::Any PLDCOMPParser::Type_variableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitType_variable(this);
  else
    return visitor->visitChildren(this);
}

PLDCOMPParser::Type_variableContext* PLDCOMPParser::type_variable() {
  Type_variableContext *_localctx = _tracker.createInstance<Type_variableContext>(_ctx, getState());
  enterRule(_localctx, 10, PLDCOMPParser::RuleType_variable);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(139);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << PLDCOMPParser::T__38)
      | (1ULL << PLDCOMPParser::T__39)
      | (1ULL << PLDCOMPParser::T__40))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Type_functionContext ------------------------------------------------------------------

PLDCOMPParser::Type_functionContext::Type_functionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PLDCOMPParser::Type_functionContext::getRuleIndex() const {
  return PLDCOMPParser::RuleType_function;
}

antlrcpp::Any PLDCOMPParser::Type_functionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitType_function(this);
  else
    return visitor->visitChildren(this);
}

PLDCOMPParser::Type_functionContext* PLDCOMPParser::type_function() {
  Type_functionContext *_localctx = _tracker.createInstance<Type_functionContext>(_ctx, getState());
  enterRule(_localctx, 12, PLDCOMPParser::RuleType_function);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(141);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << PLDCOMPParser::T__38)
      | (1ULL << PLDCOMPParser::T__39)
      | (1ULL << PLDCOMPParser::T__40)
      | (1ULL << PLDCOMPParser::T__41))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- If_statementContext ------------------------------------------------------------------

PLDCOMPParser::If_statementContext::If_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PLDCOMPParser::If_statementContext::getRuleIndex() const {
  return PLDCOMPParser::RuleIf_statement;
}

void PLDCOMPParser::If_statementContext::copyFrom(If_statementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- IfContext ------------------------------------------------------------------

PLDCOMPParser::ExpContext* PLDCOMPParser::IfContext::exp() {
  return getRuleContext<PLDCOMPParser::ExpContext>(0);
}

PLDCOMPParser::InstructionContext* PLDCOMPParser::IfContext::instruction() {
  return getRuleContext<PLDCOMPParser::InstructionContext>(0);
}

PLDCOMPParser::IfContext::IfContext(If_statementContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::IfContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitIf(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IfElseContext ------------------------------------------------------------------

PLDCOMPParser::ExpContext* PLDCOMPParser::IfElseContext::exp() {
  return getRuleContext<PLDCOMPParser::ExpContext>(0);
}

std::vector<PLDCOMPParser::InstructionContext *> PLDCOMPParser::IfElseContext::instruction() {
  return getRuleContexts<PLDCOMPParser::InstructionContext>();
}

PLDCOMPParser::InstructionContext* PLDCOMPParser::IfElseContext::instruction(size_t i) {
  return getRuleContext<PLDCOMPParser::InstructionContext>(i);
}

PLDCOMPParser::IfElseContext::IfElseContext(If_statementContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::IfElseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitIfElse(this);
  else
    return visitor->visitChildren(this);
}
PLDCOMPParser::If_statementContext* PLDCOMPParser::if_statement() {
  If_statementContext *_localctx = _tracker.createInstance<If_statementContext>(_ctx, getState());
  enterRule(_localctx, 14, PLDCOMPParser::RuleIf_statement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(157);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<If_statementContext *>(_tracker.createInstance<PLDCOMPParser::IfContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(143);
      match(PLDCOMPParser::T__42);
      setState(144);
      match(PLDCOMPParser::T__28);
      setState(145);
      exp(0);
      setState(146);
      match(PLDCOMPParser::T__29);
      setState(147);
      instruction();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<If_statementContext *>(_tracker.createInstance<PLDCOMPParser::IfElseContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(149);
      match(PLDCOMPParser::T__42);
      setState(150);
      match(PLDCOMPParser::T__28);
      setState(151);
      exp(0);
      setState(152);
      match(PLDCOMPParser::T__29);
      setState(153);
      instruction();
      setState(154);
      match(PLDCOMPParser::T__43);
      setState(155);
      instruction();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- While_statementContext ------------------------------------------------------------------

PLDCOMPParser::While_statementContext::While_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PLDCOMPParser::While_statementContext::getRuleIndex() const {
  return PLDCOMPParser::RuleWhile_statement;
}

void PLDCOMPParser::While_statementContext::copyFrom(While_statementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- WhileContext ------------------------------------------------------------------

PLDCOMPParser::ExpContext* PLDCOMPParser::WhileContext::exp() {
  return getRuleContext<PLDCOMPParser::ExpContext>(0);
}

PLDCOMPParser::InstructionContext* PLDCOMPParser::WhileContext::instruction() {
  return getRuleContext<PLDCOMPParser::InstructionContext>(0);
}

PLDCOMPParser::WhileContext::WhileContext(While_statementContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::WhileContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitWhile(this);
  else
    return visitor->visitChildren(this);
}
PLDCOMPParser::While_statementContext* PLDCOMPParser::while_statement() {
  While_statementContext *_localctx = _tracker.createInstance<While_statementContext>(_ctx, getState());
  enterRule(_localctx, 16, PLDCOMPParser::RuleWhile_statement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    _localctx = dynamic_cast<While_statementContext *>(_tracker.createInstance<PLDCOMPParser::WhileContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(159);
    match(PLDCOMPParser::T__44);
    setState(160);
    match(PLDCOMPParser::T__28);
    setState(161);
    exp(0);
    setState(162);
    match(PLDCOMPParser::T__29);
    setState(163);
    instruction();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ValContext ------------------------------------------------------------------

PLDCOMPParser::ValContext::ValContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PLDCOMPParser::ValContext::getRuleIndex() const {
  return PLDCOMPParser::RuleVal;
}

void PLDCOMPParser::ValContext::copyFrom(ValContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- TableauNombreContext ------------------------------------------------------------------

std::vector<tree::TerminalNode *> PLDCOMPParser::TableauNombreContext::NOMBRE() {
  return getTokens(PLDCOMPParser::NOMBRE);
}

tree::TerminalNode* PLDCOMPParser::TableauNombreContext::NOMBRE(size_t i) {
  return getToken(PLDCOMPParser::NOMBRE, i);
}

PLDCOMPParser::TableauNombreContext::TableauNombreContext(ValContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::TableauNombreContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitTableauNombre(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TableauCaractereContext ------------------------------------------------------------------

std::vector<tree::TerminalNode *> PLDCOMPParser::TableauCaractereContext::CHAR() {
  return getTokens(PLDCOMPParser::CHAR);
}

tree::TerminalNode* PLDCOMPParser::TableauCaractereContext::CHAR(size_t i) {
  return getToken(PLDCOMPParser::CHAR, i);
}

PLDCOMPParser::TableauCaractereContext::TableauCaractereContext(ValContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::TableauCaractereContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitTableauCaractere(this);
  else
    return visitor->visitChildren(this);
}
PLDCOMPParser::ValContext* PLDCOMPParser::val() {
  ValContext *_localctx = _tracker.createInstance<ValContext>(_ctx, getState());
  enterRule(_localctx, 18, PLDCOMPParser::RuleVal);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(181);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PLDCOMPParser::NOMBRE: {
        _localctx = dynamic_cast<ValContext *>(_tracker.createInstance<PLDCOMPParser::TableauNombreContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(165);
        match(PLDCOMPParser::NOMBRE);
        setState(170);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == PLDCOMPParser::T__27) {
          setState(166);
          match(PLDCOMPParser::T__27);
          setState(167);
          match(PLDCOMPParser::NOMBRE);
          setState(172);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

      case PLDCOMPParser::CHAR: {
        _localctx = dynamic_cast<ValContext *>(_tracker.createInstance<PLDCOMPParser::TableauCaractereContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(173);
        match(PLDCOMPParser::CHAR);
        setState(178);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == PLDCOMPParser::T__27) {
          setState(174);
          match(PLDCOMPParser::T__27);
          setState(175);
          match(PLDCOMPParser::CHAR);
          setState(180);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Declaration_typeContext ------------------------------------------------------------------

PLDCOMPParser::Declaration_typeContext::Declaration_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PLDCOMPParser::Declaration_typeContext::getRuleIndex() const {
  return PLDCOMPParser::RuleDeclaration_type;
}

void PLDCOMPParser::Declaration_typeContext::copyFrom(Declaration_typeContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- DeclarationConstanteContext ------------------------------------------------------------------

PLDCOMPParser::Type_variableContext* PLDCOMPParser::DeclarationConstanteContext::type_variable() {
  return getRuleContext<PLDCOMPParser::Type_variableContext>(0);
}

tree::TerminalNode* PLDCOMPParser::DeclarationConstanteContext::NOMVAR() {
  return getToken(PLDCOMPParser::NOMVAR, 0);
}

PLDCOMPParser::ConstanteContext* PLDCOMPParser::DeclarationConstanteContext::constante() {
  return getRuleContext<PLDCOMPParser::ConstanteContext>(0);
}

PLDCOMPParser::DeclarationConstanteContext::DeclarationConstanteContext(Declaration_typeContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::DeclarationConstanteContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitDeclarationConstante(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DeclarationMultContext ------------------------------------------------------------------

PLDCOMPParser::Type_variableContext* PLDCOMPParser::DeclarationMultContext::type_variable() {
  return getRuleContext<PLDCOMPParser::Type_variableContext>(0);
}

std::vector<tree::TerminalNode *> PLDCOMPParser::DeclarationMultContext::NOMVAR() {
  return getTokens(PLDCOMPParser::NOMVAR);
}

tree::TerminalNode* PLDCOMPParser::DeclarationMultContext::NOMVAR(size_t i) {
  return getToken(PLDCOMPParser::NOMVAR, i);
}

PLDCOMPParser::DeclarationMultContext::DeclarationMultContext(Declaration_typeContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::DeclarationMultContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitDeclarationMult(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DeclarationTableauContext ------------------------------------------------------------------

PLDCOMPParser::Type_variableContext* PLDCOMPParser::DeclarationTableauContext::type_variable() {
  return getRuleContext<PLDCOMPParser::Type_variableContext>(0);
}

tree::TerminalNode* PLDCOMPParser::DeclarationTableauContext::NOMVAR() {
  return getToken(PLDCOMPParser::NOMVAR, 0);
}

tree::TerminalNode* PLDCOMPParser::DeclarationTableauContext::NOMBRE() {
  return getToken(PLDCOMPParser::NOMBRE, 0);
}

PLDCOMPParser::DeclarationTableauContext::DeclarationTableauContext(Declaration_typeContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::DeclarationTableauContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitDeclarationTableau(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DeclarationContext ------------------------------------------------------------------

PLDCOMPParser::Type_variableContext* PLDCOMPParser::DeclarationContext::type_variable() {
  return getRuleContext<PLDCOMPParser::Type_variableContext>(0);
}

tree::TerminalNode* PLDCOMPParser::DeclarationContext::NOMVAR() {
  return getToken(PLDCOMPParser::NOMVAR, 0);
}

PLDCOMPParser::DeclarationContext::DeclarationContext(Declaration_typeContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::DeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitDeclaration(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DeclarationTableauConstanteContext ------------------------------------------------------------------

PLDCOMPParser::Type_variableContext* PLDCOMPParser::DeclarationTableauConstanteContext::type_variable() {
  return getRuleContext<PLDCOMPParser::Type_variableContext>(0);
}

tree::TerminalNode* PLDCOMPParser::DeclarationTableauConstanteContext::NOMVAR() {
  return getToken(PLDCOMPParser::NOMVAR, 0);
}

tree::TerminalNode* PLDCOMPParser::DeclarationTableauConstanteContext::NOMBRE() {
  return getToken(PLDCOMPParser::NOMBRE, 0);
}

PLDCOMPParser::ValContext* PLDCOMPParser::DeclarationTableauConstanteContext::val() {
  return getRuleContext<PLDCOMPParser::ValContext>(0);
}

PLDCOMPParser::DeclarationTableauConstanteContext::DeclarationTableauConstanteContext(Declaration_typeContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::DeclarationTableauConstanteContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitDeclarationTableauConstante(this);
  else
    return visitor->visitChildren(this);
}
PLDCOMPParser::Declaration_typeContext* PLDCOMPParser::declaration_type() {
  Declaration_typeContext *_localctx = _tracker.createInstance<Declaration_typeContext>(_ctx, getState());
  enterRule(_localctx, 20, PLDCOMPParser::RuleDeclaration_type);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(215);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<Declaration_typeContext *>(_tracker.createInstance<PLDCOMPParser::DeclarationConstanteContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(183);
      type_variable();
      setState(184);
      match(PLDCOMPParser::NOMVAR);
      setState(185);
      match(PLDCOMPParser::T__8);
      setState(186);
      constante();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<Declaration_typeContext *>(_tracker.createInstance<PLDCOMPParser::DeclarationContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(188);
      type_variable();
      setState(189);
      match(PLDCOMPParser::NOMVAR);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<Declaration_typeContext *>(_tracker.createInstance<PLDCOMPParser::DeclarationMultContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(191);
      type_variable();
      setState(192);
      match(PLDCOMPParser::NOMVAR);
      setState(195); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(193);
        match(PLDCOMPParser::T__27);
        setState(194);
        match(PLDCOMPParser::NOMVAR);
        setState(197); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == PLDCOMPParser::T__27);
      break;
    }

    case 4: {
      _localctx = dynamic_cast<Declaration_typeContext *>(_tracker.createInstance<PLDCOMPParser::DeclarationTableauContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(199);
      type_variable();
      setState(200);
      match(PLDCOMPParser::NOMVAR);
      setState(201);
      match(PLDCOMPParser::T__36);
      setState(202);
      match(PLDCOMPParser::NOMBRE);
      setState(203);
      match(PLDCOMPParser::T__37);
      break;
    }

    case 5: {
      _localctx = dynamic_cast<Declaration_typeContext *>(_tracker.createInstance<PLDCOMPParser::DeclarationTableauConstanteContext>(_localctx));
      enterOuterAlt(_localctx, 5);
      setState(205);
      type_variable();
      setState(206);
      match(PLDCOMPParser::NOMVAR);
      setState(207);
      match(PLDCOMPParser::T__36);
      setState(208);
      match(PLDCOMPParser::NOMBRE);
      setState(209);
      match(PLDCOMPParser::T__37);
      setState(210);
      match(PLDCOMPParser::T__8);
      setState(211);
      match(PLDCOMPParser::T__45);
      setState(212);
      val();
      setState(213);
      match(PLDCOMPParser::T__46);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParamContext ------------------------------------------------------------------

PLDCOMPParser::ParamContext::ParamContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PLDCOMPParser::ParamContext::getRuleIndex() const {
  return PLDCOMPParser::RuleParam;
}

void PLDCOMPParser::ParamContext::copyFrom(ParamContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- VoidContext ------------------------------------------------------------------

PLDCOMPParser::VoidContext::VoidContext(ParamContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::VoidContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitVoid(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParametresContext ------------------------------------------------------------------

std::vector<PLDCOMPParser::Type_variableContext *> PLDCOMPParser::ParametresContext::type_variable() {
  return getRuleContexts<PLDCOMPParser::Type_variableContext>();
}

PLDCOMPParser::Type_variableContext* PLDCOMPParser::ParametresContext::type_variable(size_t i) {
  return getRuleContext<PLDCOMPParser::Type_variableContext>(i);
}

std::vector<tree::TerminalNode *> PLDCOMPParser::ParametresContext::NOMVAR() {
  return getTokens(PLDCOMPParser::NOMVAR);
}

tree::TerminalNode* PLDCOMPParser::ParametresContext::NOMVAR(size_t i) {
  return getToken(PLDCOMPParser::NOMVAR, i);
}

PLDCOMPParser::ParametresContext::ParametresContext(ParamContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::ParametresContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitParametres(this);
  else
    return visitor->visitChildren(this);
}
PLDCOMPParser::ParamContext* PLDCOMPParser::param() {
  ParamContext *_localctx = _tracker.createInstance<ParamContext>(_ctx, getState());
  enterRule(_localctx, 22, PLDCOMPParser::RuleParam);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(229);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PLDCOMPParser::T__41: {
        _localctx = dynamic_cast<ParamContext *>(_tracker.createInstance<PLDCOMPParser::VoidContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(217);
        match(PLDCOMPParser::T__41);
        break;
      }

      case PLDCOMPParser::T__38:
      case PLDCOMPParser::T__39:
      case PLDCOMPParser::T__40: {
        _localctx = dynamic_cast<ParamContext *>(_tracker.createInstance<PLDCOMPParser::ParametresContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(218);
        type_variable();
        setState(219);
        match(PLDCOMPParser::NOMVAR);
        setState(226);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == PLDCOMPParser::T__27) {
          setState(220);
          match(PLDCOMPParser::T__27);
          setState(221);
          type_variable();
          setState(222);
          match(PLDCOMPParser::NOMVAR);
          setState(228);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FonctionContext ------------------------------------------------------------------

PLDCOMPParser::FonctionContext::FonctionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PLDCOMPParser::FonctionContext::getRuleIndex() const {
  return PLDCOMPParser::RuleFonction;
}

void PLDCOMPParser::FonctionContext::copyFrom(FonctionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- DeclarationFonctionParamsContext ------------------------------------------------------------------

PLDCOMPParser::Type_functionContext* PLDCOMPParser::DeclarationFonctionParamsContext::type_function() {
  return getRuleContext<PLDCOMPParser::Type_functionContext>(0);
}

tree::TerminalNode* PLDCOMPParser::DeclarationFonctionParamsContext::NOMVAR() {
  return getToken(PLDCOMPParser::NOMVAR, 0);
}

PLDCOMPParser::ParamContext* PLDCOMPParser::DeclarationFonctionParamsContext::param() {
  return getRuleContext<PLDCOMPParser::ParamContext>(0);
}

PLDCOMPParser::Declaration_variablesContext* PLDCOMPParser::DeclarationFonctionParamsContext::declaration_variables() {
  return getRuleContext<PLDCOMPParser::Declaration_variablesContext>(0);
}

PLDCOMPParser::BlocContext* PLDCOMPParser::DeclarationFonctionParamsContext::bloc() {
  return getRuleContext<PLDCOMPParser::BlocContext>(0);
}

PLDCOMPParser::DeclarationFonctionParamsContext::DeclarationFonctionParamsContext(FonctionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::DeclarationFonctionParamsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitDeclarationFonctionParams(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DeclarationFonctionContext ------------------------------------------------------------------

PLDCOMPParser::Type_functionContext* PLDCOMPParser::DeclarationFonctionContext::type_function() {
  return getRuleContext<PLDCOMPParser::Type_functionContext>(0);
}

tree::TerminalNode* PLDCOMPParser::DeclarationFonctionContext::NOMVAR() {
  return getToken(PLDCOMPParser::NOMVAR, 0);
}

PLDCOMPParser::Declaration_variablesContext* PLDCOMPParser::DeclarationFonctionContext::declaration_variables() {
  return getRuleContext<PLDCOMPParser::Declaration_variablesContext>(0);
}

PLDCOMPParser::BlocContext* PLDCOMPParser::DeclarationFonctionContext::bloc() {
  return getRuleContext<PLDCOMPParser::BlocContext>(0);
}

PLDCOMPParser::DeclarationFonctionContext::DeclarationFonctionContext(FonctionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::DeclarationFonctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitDeclarationFonction(this);
  else
    return visitor->visitChildren(this);
}
PLDCOMPParser::FonctionContext* PLDCOMPParser::fonction() {
  FonctionContext *_localctx = _tracker.createInstance<FonctionContext>(_ctx, getState());
  enterRule(_localctx, 24, PLDCOMPParser::RuleFonction);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(250);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<FonctionContext *>(_tracker.createInstance<PLDCOMPParser::DeclarationFonctionParamsContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(231);
      type_function();
      setState(232);
      match(PLDCOMPParser::NOMVAR);
      setState(233);
      match(PLDCOMPParser::T__28);
      setState(234);
      param();
      setState(235);
      match(PLDCOMPParser::T__29);
      setState(236);
      match(PLDCOMPParser::T__45);
      setState(237);
      declaration_variables();
      setState(238);
      bloc();
      setState(239);
      match(PLDCOMPParser::T__46);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<FonctionContext *>(_tracker.createInstance<PLDCOMPParser::DeclarationFonctionContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(241);
      type_function();
      setState(242);
      match(PLDCOMPParser::NOMVAR);
      setState(243);
      match(PLDCOMPParser::T__28);
      setState(244);
      match(PLDCOMPParser::T__29);
      setState(245);
      match(PLDCOMPParser::T__45);
      setState(246);
      declaration_variables();
      setState(247);
      bloc();
      setState(248);
      match(PLDCOMPParser::T__46);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Declaration_variablesContext ------------------------------------------------------------------

PLDCOMPParser::Declaration_variablesContext::Declaration_variablesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PLDCOMPParser::Declaration_variablesContext::getRuleIndex() const {
  return PLDCOMPParser::RuleDeclaration_variables;
}

void PLDCOMPParser::Declaration_variablesContext::copyFrom(Declaration_variablesContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- DeclarationVariablesContext ------------------------------------------------------------------

std::vector<PLDCOMPParser::Declaration_typeContext *> PLDCOMPParser::DeclarationVariablesContext::declaration_type() {
  return getRuleContexts<PLDCOMPParser::Declaration_typeContext>();
}

PLDCOMPParser::Declaration_typeContext* PLDCOMPParser::DeclarationVariablesContext::declaration_type(size_t i) {
  return getRuleContext<PLDCOMPParser::Declaration_typeContext>(i);
}

PLDCOMPParser::DeclarationVariablesContext::DeclarationVariablesContext(Declaration_variablesContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::DeclarationVariablesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitDeclarationVariables(this);
  else
    return visitor->visitChildren(this);
}
PLDCOMPParser::Declaration_variablesContext* PLDCOMPParser::declaration_variables() {
  Declaration_variablesContext *_localctx = _tracker.createInstance<Declaration_variablesContext>(_ctx, getState());
  enterRule(_localctx, 26, PLDCOMPParser::RuleDeclaration_variables);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    _localctx = dynamic_cast<Declaration_variablesContext *>(_tracker.createInstance<PLDCOMPParser::DeclarationVariablesContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(257);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(252);
        declaration_type();
        setState(253);
        match(PLDCOMPParser::T__47); 
      }
      setState(259);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlocContext ------------------------------------------------------------------

PLDCOMPParser::BlocContext::BlocContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<PLDCOMPParser::InstructionContext *> PLDCOMPParser::BlocContext::instruction() {
  return getRuleContexts<PLDCOMPParser::InstructionContext>();
}

PLDCOMPParser::InstructionContext* PLDCOMPParser::BlocContext::instruction(size_t i) {
  return getRuleContext<PLDCOMPParser::InstructionContext>(i);
}


size_t PLDCOMPParser::BlocContext::getRuleIndex() const {
  return PLDCOMPParser::RuleBloc;
}

antlrcpp::Any PLDCOMPParser::BlocContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitBloc(this);
  else
    return visitor->visitChildren(this);
}

PLDCOMPParser::BlocContext* PLDCOMPParser::bloc() {
  BlocContext *_localctx = _tracker.createInstance<BlocContext>(_ctx, getState());
  enterRule(_localctx, 28, PLDCOMPParser::RuleBloc);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(263);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << PLDCOMPParser::T__1)
      | (1ULL << PLDCOMPParser::T__28)
      | (1ULL << PLDCOMPParser::T__30)
      | (1ULL << PLDCOMPParser::T__31)
      | (1ULL << PLDCOMPParser::T__32)
      | (1ULL << PLDCOMPParser::T__33)
      | (1ULL << PLDCOMPParser::T__34)
      | (1ULL << PLDCOMPParser::T__35)
      | (1ULL << PLDCOMPParser::T__42)
      | (1ULL << PLDCOMPParser::T__44)
      | (1ULL << PLDCOMPParser::T__45)
      | (1ULL << PLDCOMPParser::T__48)
      | (1ULL << PLDCOMPParser::T__49)
      | (1ULL << PLDCOMPParser::NOMVAR)
      | (1ULL << PLDCOMPParser::NOMBRE)
      | (1ULL << PLDCOMPParser::CHAR))) != 0)) {
      setState(260);
      instruction();
      setState(265);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InstructionContext ------------------------------------------------------------------

PLDCOMPParser::InstructionContext::InstructionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PLDCOMPParser::InstructionContext::getRuleIndex() const {
  return PLDCOMPParser::RuleInstruction;
}

void PLDCOMPParser::InstructionContext::copyFrom(InstructionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- BlocInstructionContext ------------------------------------------------------------------

PLDCOMPParser::BlocContext* PLDCOMPParser::BlocInstructionContext::bloc() {
  return getRuleContext<PLDCOMPParser::BlocContext>(0);
}

PLDCOMPParser::BlocInstructionContext::BlocInstructionContext(InstructionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::BlocInstructionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitBlocInstruction(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ReturnInstructionContext ------------------------------------------------------------------

PLDCOMPParser::ExpContext* PLDCOMPParser::ReturnInstructionContext::exp() {
  return getRuleContext<PLDCOMPParser::ExpContext>(0);
}

PLDCOMPParser::ReturnInstructionContext::ReturnInstructionContext(InstructionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::ReturnInstructionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitReturnInstruction(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExpInstructionContext ------------------------------------------------------------------

PLDCOMPParser::ExpContext* PLDCOMPParser::ExpInstructionContext::exp() {
  return getRuleContext<PLDCOMPParser::ExpContext>(0);
}

PLDCOMPParser::ExpInstructionContext::ExpInstructionContext(InstructionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::ExpInstructionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitExpInstruction(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BreakInstructionContext ------------------------------------------------------------------

PLDCOMPParser::BreakInstructionContext::BreakInstructionContext(InstructionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::BreakInstructionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitBreakInstruction(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StructureInstructionContext ------------------------------------------------------------------

PLDCOMPParser::StructureContext* PLDCOMPParser::StructureInstructionContext::structure() {
  return getRuleContext<PLDCOMPParser::StructureContext>(0);
}

PLDCOMPParser::StructureInstructionContext::StructureInstructionContext(InstructionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::StructureInstructionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitStructureInstruction(this);
  else
    return visitor->visitChildren(this);
}
PLDCOMPParser::InstructionContext* PLDCOMPParser::instruction() {
  InstructionContext *_localctx = _tracker.createInstance<InstructionContext>(_ctx, getState());
  enterRule(_localctx, 30, PLDCOMPParser::RuleInstruction);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(280);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PLDCOMPParser::T__45: {
        _localctx = dynamic_cast<InstructionContext *>(_tracker.createInstance<PLDCOMPParser::BlocInstructionContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(266);
        match(PLDCOMPParser::T__45);
        setState(267);
        bloc();
        setState(268);
        match(PLDCOMPParser::T__46);
        break;
      }

      case PLDCOMPParser::T__48: {
        _localctx = dynamic_cast<InstructionContext *>(_tracker.createInstance<PLDCOMPParser::BreakInstructionContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(270);
        match(PLDCOMPParser::T__48);
        setState(271);
        match(PLDCOMPParser::T__47);
        break;
      }

      case PLDCOMPParser::T__42:
      case PLDCOMPParser::T__44: {
        _localctx = dynamic_cast<InstructionContext *>(_tracker.createInstance<PLDCOMPParser::StructureInstructionContext>(_localctx));
        enterOuterAlt(_localctx, 3);
        setState(272);
        structure();
        break;
      }

      case PLDCOMPParser::T__49: {
        _localctx = dynamic_cast<InstructionContext *>(_tracker.createInstance<PLDCOMPParser::ReturnInstructionContext>(_localctx));
        enterOuterAlt(_localctx, 4);
        setState(273);
        match(PLDCOMPParser::T__49);
        setState(274);
        exp(0);
        setState(275);
        match(PLDCOMPParser::T__47);
        break;
      }

      case PLDCOMPParser::T__1:
      case PLDCOMPParser::T__28:
      case PLDCOMPParser::T__30:
      case PLDCOMPParser::T__31:
      case PLDCOMPParser::T__32:
      case PLDCOMPParser::T__33:
      case PLDCOMPParser::T__34:
      case PLDCOMPParser::T__35:
      case PLDCOMPParser::NOMVAR:
      case PLDCOMPParser::NOMBRE:
      case PLDCOMPParser::CHAR: {
        _localctx = dynamic_cast<InstructionContext *>(_tracker.createInstance<PLDCOMPParser::ExpInstructionContext>(_localctx));
        enterOuterAlt(_localctx, 5);
        setState(277);
        exp(0);
        setState(278);
        match(PLDCOMPParser::T__47);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProgrammeContext ------------------------------------------------------------------

PLDCOMPParser::ProgrammeContext::ProgrammeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PLDCOMPParser::Declaration_variablesContext* PLDCOMPParser::ProgrammeContext::declaration_variables() {
  return getRuleContext<PLDCOMPParser::Declaration_variablesContext>(0);
}

std::vector<PLDCOMPParser::FonctionContext *> PLDCOMPParser::ProgrammeContext::fonction() {
  return getRuleContexts<PLDCOMPParser::FonctionContext>();
}

PLDCOMPParser::FonctionContext* PLDCOMPParser::ProgrammeContext::fonction(size_t i) {
  return getRuleContext<PLDCOMPParser::FonctionContext>(i);
}


size_t PLDCOMPParser::ProgrammeContext::getRuleIndex() const {
  return PLDCOMPParser::RuleProgramme;
}

antlrcpp::Any PLDCOMPParser::ProgrammeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitProgramme(this);
  else
    return visitor->visitChildren(this);
}

PLDCOMPParser::ProgrammeContext* PLDCOMPParser::programme() {
  ProgrammeContext *_localctx = _tracker.createInstance<ProgrammeContext>(_ctx, getState());
  enterRule(_localctx, 32, PLDCOMPParser::RuleProgramme);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(282);
    declaration_variables();
    setState(286);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << PLDCOMPParser::T__38)
      | (1ULL << PLDCOMPParser::T__39)
      | (1ULL << PLDCOMPParser::T__40)
      | (1ULL << PLDCOMPParser::T__41))) != 0)) {
      setState(283);
      fonction();
      setState(288);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool PLDCOMPParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 1: return expSempred(dynamic_cast<ExpContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool PLDCOMPParser::expSempred(ExpContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 16);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> PLDCOMPParser::_decisionToDFA;
atn::PredictionContextCache PLDCOMPParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN PLDCOMPParser::_atn;
std::vector<uint16_t> PLDCOMPParser::_serializedATN;

std::vector<std::string> PLDCOMPParser::_ruleNames = {
  "op", "exp", "lvalue", "structure", "constante", "type_variable", "type_function", 
  "if_statement", "while_statement", "val", "declaration_type", "param", 
  "fonction", "declaration_variables", "bloc", "instruction", "programme"
};

std::vector<std::string> PLDCOMPParser::_literalNames = {
  "", "'+'", "'-'", "'*'", "'/'", "'%'", "'^'", "'&'", "'|'", "'='", "'+='", 
  "'-='", "'*='", "'/='", "'%='", "'&='", "'|='", "'^='", "'<'", "'<='", 
  "'>'", "'>='", "'<<'", "'>>'", "'=='", "'!='", "'&&'", "'||'", "','", 
  "'('", "')'", "'!'", "'~'", "'++'", "'--'", "'putchar'", "'getchar'", 
  "'['", "']'", "'char'", "'int32_t'", "'int64_t'", "'void'", "'if'", "'else'", 
  "'while'", "'{'", "'}'", "';'", "'break'", "'return'"
};

std::vector<std::string> PLDCOMPParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "NOMVAR", 
  "NOMBRE", "CHAR", "COMMENT", "LINECOMMENT", "WS", "INCLUDE"
};

dfa::Vocabulary PLDCOMPParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> PLDCOMPParser::_tokenNames;

PLDCOMPParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x3b, 0x124, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x2, 0x3, 0x2, 0x5, 0x2, 0x41, 0xa, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x64, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x67, 
    0xb, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x73, 0xa, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x79, 0xa, 0x3, 0xc, 0x3, 
    0xe, 0x3, 0x7c, 0xb, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x5, 0x4, 0x84, 0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 
    0x88, 0xa, 0x5, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x8c, 0xa, 0x6, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0xa0, 0xa, 0x9, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 
    0xb, 0x7, 0xb, 0xab, 0xa, 0xb, 0xc, 0xb, 0xe, 0xb, 0xae, 0xb, 0xb, 0x3, 
    0xb, 0x3, 0xb, 0x3, 0xb, 0x7, 0xb, 0xb3, 0xa, 0xb, 0xc, 0xb, 0xe, 0xb, 
    0xb6, 0xb, 0xb, 0x5, 0xb, 0xb8, 0xa, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x3, 0xc, 0x6, 0xc, 0xc6, 0xa, 0xc, 0xd, 0xc, 0xe, 0xc, 0xc7, 
    0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0xda, 0xa, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x7, 0xd, 0xe3, 0xa, 0xd, 
    0xc, 0xd, 0xe, 0xd, 0xe6, 0xb, 0xd, 0x5, 0xd, 0xe8, 0xa, 0xd, 0x3, 0xe, 
    0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 
    0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 
    0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0xfd, 0xa, 0xe, 0x3, 
    0xf, 0x3, 0xf, 0x3, 0xf, 0x7, 0xf, 0x102, 0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 
    0x105, 0xb, 0xf, 0x3, 0x10, 0x7, 0x10, 0x108, 0xa, 0x10, 0xc, 0x10, 
    0xe, 0x10, 0x10b, 0xb, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
    0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0x11b, 0xa, 0x11, 
    0x3, 0x12, 0x3, 0x12, 0x7, 0x12, 0x11f, 0xa, 0x12, 0xc, 0x12, 0xe, 0x12, 
    0x122, 0xb, 0x12, 0x3, 0x12, 0x2, 0x3, 0x4, 0x13, 0x2, 0x4, 0x6, 0x8, 
    0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 
    0x22, 0x2, 0x4, 0x3, 0x2, 0x29, 0x2b, 0x3, 0x2, 0x29, 0x2c, 0x2, 0x153, 
    0x2, 0x40, 0x3, 0x2, 0x2, 0x2, 0x4, 0x72, 0x3, 0x2, 0x2, 0x2, 0x6, 0x83, 
    0x3, 0x2, 0x2, 0x2, 0x8, 0x87, 0x3, 0x2, 0x2, 0x2, 0xa, 0x8b, 0x3, 0x2, 
    0x2, 0x2, 0xc, 0x8d, 0x3, 0x2, 0x2, 0x2, 0xe, 0x8f, 0x3, 0x2, 0x2, 0x2, 
    0x10, 0x9f, 0x3, 0x2, 0x2, 0x2, 0x12, 0xa1, 0x3, 0x2, 0x2, 0x2, 0x14, 
    0xb7, 0x3, 0x2, 0x2, 0x2, 0x16, 0xd9, 0x3, 0x2, 0x2, 0x2, 0x18, 0xe7, 
    0x3, 0x2, 0x2, 0x2, 0x1a, 0xfc, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x103, 0x3, 
    0x2, 0x2, 0x2, 0x1e, 0x109, 0x3, 0x2, 0x2, 0x2, 0x20, 0x11a, 0x3, 0x2, 
    0x2, 0x2, 0x22, 0x11c, 0x3, 0x2, 0x2, 0x2, 0x24, 0x41, 0x7, 0x3, 0x2, 
    0x2, 0x25, 0x41, 0x7, 0x4, 0x2, 0x2, 0x26, 0x41, 0x7, 0x5, 0x2, 0x2, 
    0x27, 0x41, 0x7, 0x6, 0x2, 0x2, 0x28, 0x41, 0x7, 0x7, 0x2, 0x2, 0x29, 
    0x41, 0x7, 0x8, 0x2, 0x2, 0x2a, 0x41, 0x7, 0x9, 0x2, 0x2, 0x2b, 0x41, 
    0x7, 0xa, 0x2, 0x2, 0x2c, 0x41, 0x7, 0xb, 0x2, 0x2, 0x2d, 0x41, 0x7, 
    0xc, 0x2, 0x2, 0x2e, 0x41, 0x7, 0xd, 0x2, 0x2, 0x2f, 0x41, 0x7, 0xe, 
    0x2, 0x2, 0x30, 0x41, 0x7, 0xf, 0x2, 0x2, 0x31, 0x41, 0x7, 0x10, 0x2, 
    0x2, 0x32, 0x41, 0x7, 0x11, 0x2, 0x2, 0x33, 0x41, 0x7, 0x12, 0x2, 0x2, 
    0x34, 0x41, 0x7, 0x13, 0x2, 0x2, 0x35, 0x41, 0x7, 0x14, 0x2, 0x2, 0x36, 
    0x41, 0x7, 0x15, 0x2, 0x2, 0x37, 0x41, 0x7, 0x16, 0x2, 0x2, 0x38, 0x41, 
    0x7, 0x17, 0x2, 0x2, 0x39, 0x41, 0x7, 0x18, 0x2, 0x2, 0x3a, 0x41, 0x7, 
    0x19, 0x2, 0x2, 0x3b, 0x41, 0x7, 0x1a, 0x2, 0x2, 0x3c, 0x41, 0x7, 0x1b, 
    0x2, 0x2, 0x3d, 0x41, 0x7, 0x1c, 0x2, 0x2, 0x3e, 0x41, 0x7, 0x1d, 0x2, 
    0x2, 0x3f, 0x41, 0x7, 0x1e, 0x2, 0x2, 0x40, 0x24, 0x3, 0x2, 0x2, 0x2, 
    0x40, 0x25, 0x3, 0x2, 0x2, 0x2, 0x40, 0x26, 0x3, 0x2, 0x2, 0x2, 0x40, 
    0x27, 0x3, 0x2, 0x2, 0x2, 0x40, 0x28, 0x3, 0x2, 0x2, 0x2, 0x40, 0x29, 
    0x3, 0x2, 0x2, 0x2, 0x40, 0x2a, 0x3, 0x2, 0x2, 0x2, 0x40, 0x2b, 0x3, 
    0x2, 0x2, 0x2, 0x40, 0x2c, 0x3, 0x2, 0x2, 0x2, 0x40, 0x2d, 0x3, 0x2, 
    0x2, 0x2, 0x40, 0x2e, 0x3, 0x2, 0x2, 0x2, 0x40, 0x2f, 0x3, 0x2, 0x2, 
    0x2, 0x40, 0x30, 0x3, 0x2, 0x2, 0x2, 0x40, 0x31, 0x3, 0x2, 0x2, 0x2, 
    0x40, 0x32, 0x3, 0x2, 0x2, 0x2, 0x40, 0x33, 0x3, 0x2, 0x2, 0x2, 0x40, 
    0x34, 0x3, 0x2, 0x2, 0x2, 0x40, 0x35, 0x3, 0x2, 0x2, 0x2, 0x40, 0x36, 
    0x3, 0x2, 0x2, 0x2, 0x40, 0x37, 0x3, 0x2, 0x2, 0x2, 0x40, 0x38, 0x3, 
    0x2, 0x2, 0x2, 0x40, 0x39, 0x3, 0x2, 0x2, 0x2, 0x40, 0x3a, 0x3, 0x2, 
    0x2, 0x2, 0x40, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x40, 0x3c, 0x3, 0x2, 0x2, 
    0x2, 0x40, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x40, 0x3e, 0x3, 0x2, 0x2, 0x2, 
    0x40, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x41, 0x3, 0x3, 0x2, 0x2, 0x2, 0x42, 
    0x43, 0x8, 0x3, 0x1, 0x2, 0x43, 0x44, 0x7, 0x1f, 0x2, 0x2, 0x44, 0x45, 
    0x5, 0x4, 0x3, 0x2, 0x45, 0x46, 0x7, 0x20, 0x2, 0x2, 0x46, 0x73, 0x3, 
    0x2, 0x2, 0x2, 0x47, 0x48, 0x7, 0x21, 0x2, 0x2, 0x48, 0x73, 0x5, 0x4, 
    0x3, 0x10, 0x49, 0x4a, 0x7, 0x4, 0x2, 0x2, 0x4a, 0x73, 0x5, 0x4, 0x3, 
    0xf, 0x4b, 0x4c, 0x7, 0x22, 0x2, 0x2, 0x4c, 0x73, 0x5, 0x4, 0x3, 0xe, 
    0x4d, 0x4e, 0x5, 0x6, 0x4, 0x2, 0x4e, 0x4f, 0x7, 0x23, 0x2, 0x2, 0x4f, 
    0x73, 0x3, 0x2, 0x2, 0x2, 0x50, 0x51, 0x5, 0x6, 0x4, 0x2, 0x51, 0x52, 
    0x7, 0x24, 0x2, 0x2, 0x52, 0x73, 0x3, 0x2, 0x2, 0x2, 0x53, 0x54, 0x7, 
    0x23, 0x2, 0x2, 0x54, 0x73, 0x5, 0x6, 0x4, 0x2, 0x55, 0x56, 0x7, 0x24, 
    0x2, 0x2, 0x56, 0x73, 0x5, 0x6, 0x4, 0x2, 0x57, 0x58, 0x5, 0x6, 0x4, 
    0x2, 0x58, 0x59, 0x7, 0xb, 0x2, 0x2, 0x59, 0x5a, 0x5, 0x4, 0x3, 0x9, 
    0x5a, 0x73, 0x3, 0x2, 0x2, 0x2, 0x5b, 0x73, 0x7, 0x36, 0x2, 0x2, 0x5c, 
    0x73, 0x7, 0x37, 0x2, 0x2, 0x5d, 0x73, 0x5, 0x6, 0x4, 0x2, 0x5e, 0x5f, 
    0x7, 0x35, 0x2, 0x2, 0x5f, 0x60, 0x7, 0x1f, 0x2, 0x2, 0x60, 0x65, 0x5, 
    0x4, 0x3, 0x2, 0x61, 0x62, 0x7, 0x1e, 0x2, 0x2, 0x62, 0x64, 0x5, 0x4, 
    0x3, 0x2, 0x63, 0x61, 0x3, 0x2, 0x2, 0x2, 0x64, 0x67, 0x3, 0x2, 0x2, 
    0x2, 0x65, 0x63, 0x3, 0x2, 0x2, 0x2, 0x65, 0x66, 0x3, 0x2, 0x2, 0x2, 
    0x66, 0x68, 0x3, 0x2, 0x2, 0x2, 0x67, 0x65, 0x3, 0x2, 0x2, 0x2, 0x68, 
    0x69, 0x7, 0x20, 0x2, 0x2, 0x69, 0x73, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x6b, 
    0x7, 0x25, 0x2, 0x2, 0x6b, 0x6c, 0x7, 0x1f, 0x2, 0x2, 0x6c, 0x6d, 0x5, 
    0x4, 0x3, 0x2, 0x6d, 0x6e, 0x7, 0x20, 0x2, 0x2, 0x6e, 0x73, 0x3, 0x2, 
    0x2, 0x2, 0x6f, 0x70, 0x7, 0x26, 0x2, 0x2, 0x70, 0x71, 0x7, 0x1f, 0x2, 
    0x2, 0x71, 0x73, 0x7, 0x20, 0x2, 0x2, 0x72, 0x42, 0x3, 0x2, 0x2, 0x2, 
    0x72, 0x47, 0x3, 0x2, 0x2, 0x2, 0x72, 0x49, 0x3, 0x2, 0x2, 0x2, 0x72, 
    0x4b, 0x3, 0x2, 0x2, 0x2, 0x72, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x72, 0x50, 
    0x3, 0x2, 0x2, 0x2, 0x72, 0x53, 0x3, 0x2, 0x2, 0x2, 0x72, 0x55, 0x3, 
    0x2, 0x2, 0x2, 0x72, 0x57, 0x3, 0x2, 0x2, 0x2, 0x72, 0x5b, 0x3, 0x2, 
    0x2, 0x2, 0x72, 0x5c, 0x3, 0x2, 0x2, 0x2, 0x72, 0x5d, 0x3, 0x2, 0x2, 
    0x2, 0x72, 0x5e, 0x3, 0x2, 0x2, 0x2, 0x72, 0x6a, 0x3, 0x2, 0x2, 0x2, 
    0x72, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x73, 0x7a, 0x3, 0x2, 0x2, 0x2, 0x74, 
    0x75, 0xc, 0x12, 0x2, 0x2, 0x75, 0x76, 0x5, 0x2, 0x2, 0x2, 0x76, 0x77, 
    0x5, 0x4, 0x3, 0x13, 0x77, 0x79, 0x3, 0x2, 0x2, 0x2, 0x78, 0x74, 0x3, 
    0x2, 0x2, 0x2, 0x79, 0x7c, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x78, 0x3, 0x2, 
    0x2, 0x2, 0x7a, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x5, 0x3, 0x2, 0x2, 
    0x2, 0x7c, 0x7a, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x84, 0x7, 0x35, 0x2, 0x2, 
    0x7e, 0x7f, 0x7, 0x35, 0x2, 0x2, 0x7f, 0x80, 0x7, 0x27, 0x2, 0x2, 0x80, 
    0x81, 0x5, 0x4, 0x3, 0x2, 0x81, 0x82, 0x7, 0x28, 0x2, 0x2, 0x82, 0x84, 
    0x3, 0x2, 0x2, 0x2, 0x83, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x83, 0x7e, 0x3, 
    0x2, 0x2, 0x2, 0x84, 0x7, 0x3, 0x2, 0x2, 0x2, 0x85, 0x88, 0x5, 0x10, 
    0x9, 0x2, 0x86, 0x88, 0x5, 0x12, 0xa, 0x2, 0x87, 0x85, 0x3, 0x2, 0x2, 
    0x2, 0x87, 0x86, 0x3, 0x2, 0x2, 0x2, 0x88, 0x9, 0x3, 0x2, 0x2, 0x2, 
    0x89, 0x8c, 0x7, 0x36, 0x2, 0x2, 0x8a, 0x8c, 0x7, 0x37, 0x2, 0x2, 0x8b, 
    0x89, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x8a, 0x3, 0x2, 0x2, 0x2, 0x8c, 0xb, 
    0x3, 0x2, 0x2, 0x2, 0x8d, 0x8e, 0x9, 0x2, 0x2, 0x2, 0x8e, 0xd, 0x3, 
    0x2, 0x2, 0x2, 0x8f, 0x90, 0x9, 0x3, 0x2, 0x2, 0x90, 0xf, 0x3, 0x2, 
    0x2, 0x2, 0x91, 0x92, 0x7, 0x2d, 0x2, 0x2, 0x92, 0x93, 0x7, 0x1f, 0x2, 
    0x2, 0x93, 0x94, 0x5, 0x4, 0x3, 0x2, 0x94, 0x95, 0x7, 0x20, 0x2, 0x2, 
    0x95, 0x96, 0x5, 0x20, 0x11, 0x2, 0x96, 0xa0, 0x3, 0x2, 0x2, 0x2, 0x97, 
    0x98, 0x7, 0x2d, 0x2, 0x2, 0x98, 0x99, 0x7, 0x1f, 0x2, 0x2, 0x99, 0x9a, 
    0x5, 0x4, 0x3, 0x2, 0x9a, 0x9b, 0x7, 0x20, 0x2, 0x2, 0x9b, 0x9c, 0x5, 
    0x20, 0x11, 0x2, 0x9c, 0x9d, 0x7, 0x2e, 0x2, 0x2, 0x9d, 0x9e, 0x5, 0x20, 
    0x11, 0x2, 0x9e, 0xa0, 0x3, 0x2, 0x2, 0x2, 0x9f, 0x91, 0x3, 0x2, 0x2, 
    0x2, 0x9f, 0x97, 0x3, 0x2, 0x2, 0x2, 0xa0, 0x11, 0x3, 0x2, 0x2, 0x2, 
    0xa1, 0xa2, 0x7, 0x2f, 0x2, 0x2, 0xa2, 0xa3, 0x7, 0x1f, 0x2, 0x2, 0xa3, 
    0xa4, 0x5, 0x4, 0x3, 0x2, 0xa4, 0xa5, 0x7, 0x20, 0x2, 0x2, 0xa5, 0xa6, 
    0x5, 0x20, 0x11, 0x2, 0xa6, 0x13, 0x3, 0x2, 0x2, 0x2, 0xa7, 0xac, 0x7, 
    0x36, 0x2, 0x2, 0xa8, 0xa9, 0x7, 0x1e, 0x2, 0x2, 0xa9, 0xab, 0x7, 0x36, 
    0x2, 0x2, 0xaa, 0xa8, 0x3, 0x2, 0x2, 0x2, 0xab, 0xae, 0x3, 0x2, 0x2, 
    0x2, 0xac, 0xaa, 0x3, 0x2, 0x2, 0x2, 0xac, 0xad, 0x3, 0x2, 0x2, 0x2, 
    0xad, 0xb8, 0x3, 0x2, 0x2, 0x2, 0xae, 0xac, 0x3, 0x2, 0x2, 0x2, 0xaf, 
    0xb4, 0x7, 0x37, 0x2, 0x2, 0xb0, 0xb1, 0x7, 0x1e, 0x2, 0x2, 0xb1, 0xb3, 
    0x7, 0x37, 0x2, 0x2, 0xb2, 0xb0, 0x3, 0x2, 0x2, 0x2, 0xb3, 0xb6, 0x3, 
    0x2, 0x2, 0x2, 0xb4, 0xb2, 0x3, 0x2, 0x2, 0x2, 0xb4, 0xb5, 0x3, 0x2, 
    0x2, 0x2, 0xb5, 0xb8, 0x3, 0x2, 0x2, 0x2, 0xb6, 0xb4, 0x3, 0x2, 0x2, 
    0x2, 0xb7, 0xa7, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xaf, 0x3, 0x2, 0x2, 0x2, 
    0xb8, 0x15, 0x3, 0x2, 0x2, 0x2, 0xb9, 0xba, 0x5, 0xc, 0x7, 0x2, 0xba, 
    0xbb, 0x7, 0x35, 0x2, 0x2, 0xbb, 0xbc, 0x7, 0xb, 0x2, 0x2, 0xbc, 0xbd, 
    0x5, 0xa, 0x6, 0x2, 0xbd, 0xda, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xbf, 0x5, 
    0xc, 0x7, 0x2, 0xbf, 0xc0, 0x7, 0x35, 0x2, 0x2, 0xc0, 0xda, 0x3, 0x2, 
    0x2, 0x2, 0xc1, 0xc2, 0x5, 0xc, 0x7, 0x2, 0xc2, 0xc5, 0x7, 0x35, 0x2, 
    0x2, 0xc3, 0xc4, 0x7, 0x1e, 0x2, 0x2, 0xc4, 0xc6, 0x7, 0x35, 0x2, 0x2, 
    0xc5, 0xc3, 0x3, 0x2, 0x2, 0x2, 0xc6, 0xc7, 0x3, 0x2, 0x2, 0x2, 0xc7, 
    0xc5, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xc8, 0x3, 0x2, 0x2, 0x2, 0xc8, 0xda, 
    0x3, 0x2, 0x2, 0x2, 0xc9, 0xca, 0x5, 0xc, 0x7, 0x2, 0xca, 0xcb, 0x7, 
    0x35, 0x2, 0x2, 0xcb, 0xcc, 0x7, 0x27, 0x2, 0x2, 0xcc, 0xcd, 0x7, 0x36, 
    0x2, 0x2, 0xcd, 0xce, 0x7, 0x28, 0x2, 0x2, 0xce, 0xda, 0x3, 0x2, 0x2, 
    0x2, 0xcf, 0xd0, 0x5, 0xc, 0x7, 0x2, 0xd0, 0xd1, 0x7, 0x35, 0x2, 0x2, 
    0xd1, 0xd2, 0x7, 0x27, 0x2, 0x2, 0xd2, 0xd3, 0x7, 0x36, 0x2, 0x2, 0xd3, 
    0xd4, 0x7, 0x28, 0x2, 0x2, 0xd4, 0xd5, 0x7, 0xb, 0x2, 0x2, 0xd5, 0xd6, 
    0x7, 0x30, 0x2, 0x2, 0xd6, 0xd7, 0x5, 0x14, 0xb, 0x2, 0xd7, 0xd8, 0x7, 
    0x31, 0x2, 0x2, 0xd8, 0xda, 0x3, 0x2, 0x2, 0x2, 0xd9, 0xb9, 0x3, 0x2, 
    0x2, 0x2, 0xd9, 0xbe, 0x3, 0x2, 0x2, 0x2, 0xd9, 0xc1, 0x3, 0x2, 0x2, 
    0x2, 0xd9, 0xc9, 0x3, 0x2, 0x2, 0x2, 0xd9, 0xcf, 0x3, 0x2, 0x2, 0x2, 
    0xda, 0x17, 0x3, 0x2, 0x2, 0x2, 0xdb, 0xe8, 0x7, 0x2c, 0x2, 0x2, 0xdc, 
    0xdd, 0x5, 0xc, 0x7, 0x2, 0xdd, 0xe4, 0x7, 0x35, 0x2, 0x2, 0xde, 0xdf, 
    0x7, 0x1e, 0x2, 0x2, 0xdf, 0xe0, 0x5, 0xc, 0x7, 0x2, 0xe0, 0xe1, 0x7, 
    0x35, 0x2, 0x2, 0xe1, 0xe3, 0x3, 0x2, 0x2, 0x2, 0xe2, 0xde, 0x3, 0x2, 
    0x2, 0x2, 0xe3, 0xe6, 0x3, 0x2, 0x2, 0x2, 0xe4, 0xe2, 0x3, 0x2, 0x2, 
    0x2, 0xe4, 0xe5, 0x3, 0x2, 0x2, 0x2, 0xe5, 0xe8, 0x3, 0x2, 0x2, 0x2, 
    0xe6, 0xe4, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xdb, 0x3, 0x2, 0x2, 0x2, 0xe7, 
    0xdc, 0x3, 0x2, 0x2, 0x2, 0xe8, 0x19, 0x3, 0x2, 0x2, 0x2, 0xe9, 0xea, 
    0x5, 0xe, 0x8, 0x2, 0xea, 0xeb, 0x7, 0x35, 0x2, 0x2, 0xeb, 0xec, 0x7, 
    0x1f, 0x2, 0x2, 0xec, 0xed, 0x5, 0x18, 0xd, 0x2, 0xed, 0xee, 0x7, 0x20, 
    0x2, 0x2, 0xee, 0xef, 0x7, 0x30, 0x2, 0x2, 0xef, 0xf0, 0x5, 0x1c, 0xf, 
    0x2, 0xf0, 0xf1, 0x5, 0x1e, 0x10, 0x2, 0xf1, 0xf2, 0x7, 0x31, 0x2, 0x2, 
    0xf2, 0xfd, 0x3, 0x2, 0x2, 0x2, 0xf3, 0xf4, 0x5, 0xe, 0x8, 0x2, 0xf4, 
    0xf5, 0x7, 0x35, 0x2, 0x2, 0xf5, 0xf6, 0x7, 0x1f, 0x2, 0x2, 0xf6, 0xf7, 
    0x7, 0x20, 0x2, 0x2, 0xf7, 0xf8, 0x7, 0x30, 0x2, 0x2, 0xf8, 0xf9, 0x5, 
    0x1c, 0xf, 0x2, 0xf9, 0xfa, 0x5, 0x1e, 0x10, 0x2, 0xfa, 0xfb, 0x7, 0x31, 
    0x2, 0x2, 0xfb, 0xfd, 0x3, 0x2, 0x2, 0x2, 0xfc, 0xe9, 0x3, 0x2, 0x2, 
    0x2, 0xfc, 0xf3, 0x3, 0x2, 0x2, 0x2, 0xfd, 0x1b, 0x3, 0x2, 0x2, 0x2, 
    0xfe, 0xff, 0x5, 0x16, 0xc, 0x2, 0xff, 0x100, 0x7, 0x32, 0x2, 0x2, 0x100, 
    0x102, 0x3, 0x2, 0x2, 0x2, 0x101, 0xfe, 0x3, 0x2, 0x2, 0x2, 0x102, 0x105, 
    0x3, 0x2, 0x2, 0x2, 0x103, 0x101, 0x3, 0x2, 0x2, 0x2, 0x103, 0x104, 
    0x3, 0x2, 0x2, 0x2, 0x104, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x105, 0x103, 0x3, 
    0x2, 0x2, 0x2, 0x106, 0x108, 0x5, 0x20, 0x11, 0x2, 0x107, 0x106, 0x3, 
    0x2, 0x2, 0x2, 0x108, 0x10b, 0x3, 0x2, 0x2, 0x2, 0x109, 0x107, 0x3, 
    0x2, 0x2, 0x2, 0x109, 0x10a, 0x3, 0x2, 0x2, 0x2, 0x10a, 0x1f, 0x3, 0x2, 
    0x2, 0x2, 0x10b, 0x109, 0x3, 0x2, 0x2, 0x2, 0x10c, 0x10d, 0x7, 0x30, 
    0x2, 0x2, 0x10d, 0x10e, 0x5, 0x1e, 0x10, 0x2, 0x10e, 0x10f, 0x7, 0x31, 
    0x2, 0x2, 0x10f, 0x11b, 0x3, 0x2, 0x2, 0x2, 0x110, 0x111, 0x7, 0x33, 
    0x2, 0x2, 0x111, 0x11b, 0x7, 0x32, 0x2, 0x2, 0x112, 0x11b, 0x5, 0x8, 
    0x5, 0x2, 0x113, 0x114, 0x7, 0x34, 0x2, 0x2, 0x114, 0x115, 0x5, 0x4, 
    0x3, 0x2, 0x115, 0x116, 0x7, 0x32, 0x2, 0x2, 0x116, 0x11b, 0x3, 0x2, 
    0x2, 0x2, 0x117, 0x118, 0x5, 0x4, 0x3, 0x2, 0x118, 0x119, 0x7, 0x32, 
    0x2, 0x2, 0x119, 0x11b, 0x3, 0x2, 0x2, 0x2, 0x11a, 0x10c, 0x3, 0x2, 
    0x2, 0x2, 0x11a, 0x110, 0x3, 0x2, 0x2, 0x2, 0x11a, 0x112, 0x3, 0x2, 
    0x2, 0x2, 0x11a, 0x113, 0x3, 0x2, 0x2, 0x2, 0x11a, 0x117, 0x3, 0x2, 
    0x2, 0x2, 0x11b, 0x21, 0x3, 0x2, 0x2, 0x2, 0x11c, 0x120, 0x5, 0x1c, 
    0xf, 0x2, 0x11d, 0x11f, 0x5, 0x1a, 0xe, 0x2, 0x11e, 0x11d, 0x3, 0x2, 
    0x2, 0x2, 0x11f, 0x122, 0x3, 0x2, 0x2, 0x2, 0x120, 0x11e, 0x3, 0x2, 
    0x2, 0x2, 0x120, 0x121, 0x3, 0x2, 0x2, 0x2, 0x121, 0x23, 0x3, 0x2, 0x2, 
    0x2, 0x122, 0x120, 0x3, 0x2, 0x2, 0x2, 0x16, 0x40, 0x65, 0x72, 0x7a, 
    0x83, 0x87, 0x8b, 0x9f, 0xac, 0xb4, 0xb7, 0xc7, 0xd9, 0xe4, 0xe7, 0xfc, 
    0x103, 0x109, 0x11a, 0x120, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

PLDCOMPParser::Initializer PLDCOMPParser::_init;
