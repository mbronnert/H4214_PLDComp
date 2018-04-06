
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


//----------------- OpPrioritaireContext ------------------------------------------------------------------

PLDCOMPParser::OpPrioritaireContext::OpPrioritaireContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PLDCOMPParser::OpPrioritaireContext::getRuleIndex() const {
  return PLDCOMPParser::RuleOpPrioritaire;
}

void PLDCOMPParser::OpPrioritaireContext::copyFrom(OpPrioritaireContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- DivContext ------------------------------------------------------------------

PLDCOMPParser::DivContext::DivContext(OpPrioritaireContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::DivContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitDiv(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MultContext ------------------------------------------------------------------

PLDCOMPParser::MultContext::MultContext(OpPrioritaireContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::MultContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitMult(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ModContext ------------------------------------------------------------------

PLDCOMPParser::ModContext::ModContext(OpPrioritaireContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::ModContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitMod(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AndbContext ------------------------------------------------------------------

PLDCOMPParser::AndbContext::AndbContext(OpPrioritaireContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::AndbContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitAndb(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PowContext ------------------------------------------------------------------

PLDCOMPParser::PowContext::PowContext(OpPrioritaireContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::PowContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitPow(this);
  else
    return visitor->visitChildren(this);
}
PLDCOMPParser::OpPrioritaireContext* PLDCOMPParser::opPrioritaire() {
  OpPrioritaireContext *_localctx = _tracker.createInstance<OpPrioritaireContext>(_ctx, getState());
  enterRule(_localctx, 0, PLDCOMPParser::RuleOpPrioritaire);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(55);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PLDCOMPParser::T__0: {
        _localctx = dynamic_cast<OpPrioritaireContext *>(_tracker.createInstance<PLDCOMPParser::PowContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(50);
        match(PLDCOMPParser::T__0);
        break;
      }

      case PLDCOMPParser::T__1: {
        _localctx = dynamic_cast<OpPrioritaireContext *>(_tracker.createInstance<PLDCOMPParser::MultContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(51);
        match(PLDCOMPParser::T__1);
        break;
      }

      case PLDCOMPParser::T__2: {
        _localctx = dynamic_cast<OpPrioritaireContext *>(_tracker.createInstance<PLDCOMPParser::DivContext>(_localctx));
        enterOuterAlt(_localctx, 3);
        setState(52);
        match(PLDCOMPParser::T__2);
        break;
      }

      case PLDCOMPParser::T__3: {
        _localctx = dynamic_cast<OpPrioritaireContext *>(_tracker.createInstance<PLDCOMPParser::AndbContext>(_localctx));
        enterOuterAlt(_localctx, 4);
        setState(53);
        match(PLDCOMPParser::T__3);
        break;
      }

      case PLDCOMPParser::T__4: {
        _localctx = dynamic_cast<OpPrioritaireContext *>(_tracker.createInstance<PLDCOMPParser::ModContext>(_localctx));
        enterOuterAlt(_localctx, 5);
        setState(54);
        match(PLDCOMPParser::T__4);
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

//----------------- OpSecondaireContext ------------------------------------------------------------------

PLDCOMPParser::OpSecondaireContext::OpSecondaireContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PLDCOMPParser::OpSecondaireContext::getRuleIndex() const {
  return PLDCOMPParser::RuleOpSecondaire;
}

void PLDCOMPParser::OpSecondaireContext::copyFrom(OpSecondaireContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- AddContext ------------------------------------------------------------------

PLDCOMPParser::AddContext::AddContext(OpSecondaireContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::AddContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitAdd(this);
  else
    return visitor->visitChildren(this);
}
//----------------- EqualContext ------------------------------------------------------------------

PLDCOMPParser::EqualContext::EqualContext(OpSecondaireContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::EqualContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitEqual(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MoinsContext ------------------------------------------------------------------

PLDCOMPParser::MoinsContext::MoinsContext(OpSecondaireContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::MoinsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitMoins(this);
  else
    return visitor->visitChildren(this);
}
PLDCOMPParser::OpSecondaireContext* PLDCOMPParser::opSecondaire() {
  OpSecondaireContext *_localctx = _tracker.createInstance<OpSecondaireContext>(_ctx, getState());
  enterRule(_localctx, 2, PLDCOMPParser::RuleOpSecondaire);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(60);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PLDCOMPParser::T__5: {
        _localctx = dynamic_cast<OpSecondaireContext *>(_tracker.createInstance<PLDCOMPParser::AddContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(57);
        match(PLDCOMPParser::T__5);
        break;
      }

      case PLDCOMPParser::T__6: {
        _localctx = dynamic_cast<OpSecondaireContext *>(_tracker.createInstance<PLDCOMPParser::MoinsContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(58);
        match(PLDCOMPParser::T__6);
        break;
      }

      case PLDCOMPParser::T__7: {
        _localctx = dynamic_cast<OpSecondaireContext *>(_tracker.createInstance<PLDCOMPParser::EqualContext>(_localctx));
        enterOuterAlt(_localctx, 3);
        setState(59);
        match(PLDCOMPParser::T__7);
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

//----------------- OpTertiaireContext ------------------------------------------------------------------

PLDCOMPParser::OpTertiaireContext::OpTertiaireContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PLDCOMPParser::OpTertiaireContext::getRuleIndex() const {
  return PLDCOMPParser::RuleOpTertiaire;
}

void PLDCOMPParser::OpTertiaireContext::copyFrom(OpTertiaireContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- InfContext ------------------------------------------------------------------

PLDCOMPParser::InfContext::InfContext(OpTertiaireContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::InfContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitInf(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OrContext ------------------------------------------------------------------

PLDCOMPParser::OrContext::OrContext(OpTertiaireContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::OrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitOr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- InfsContext ------------------------------------------------------------------

PLDCOMPParser::InfsContext::InfsContext(OpTertiaireContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::InfsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitInfs(this);
  else
    return visitor->visitChildren(this);
}
//----------------- EqualbContext ------------------------------------------------------------------

PLDCOMPParser::EqualbContext::EqualbContext(OpTertiaireContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::EqualbContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitEqualb(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AddeqContext ------------------------------------------------------------------

PLDCOMPParser::AddeqContext::AddeqContext(OpTertiaireContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::AddeqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitAddeq(this);
  else
    return visitor->visitChildren(this);
}
//----------------- XoreqContext ------------------------------------------------------------------

PLDCOMPParser::XoreqContext::XoreqContext(OpTertiaireContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::XoreqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitXoreq(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AndeqContext ------------------------------------------------------------------

PLDCOMPParser::AndeqContext::AndeqContext(OpTertiaireContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::AndeqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitAndeq(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DiffContext ------------------------------------------------------------------

PLDCOMPParser::DiffContext::DiffContext(OpTertiaireContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::DiffContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitDiff(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DecgContext ------------------------------------------------------------------

PLDCOMPParser::DecgContext::DecgContext(OpTertiaireContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::DecgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitDecg(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DecdContext ------------------------------------------------------------------

PLDCOMPParser::DecdContext::DecdContext(OpTertiaireContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::DecdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitDecd(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DiveqContext ------------------------------------------------------------------

PLDCOMPParser::DiveqContext::DiveqContext(OpTertiaireContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::DiveqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitDiveq(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SupContext ------------------------------------------------------------------

PLDCOMPParser::SupContext::SupContext(OpTertiaireContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::SupContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitSup(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CommaContext ------------------------------------------------------------------

PLDCOMPParser::CommaContext::CommaContext(OpTertiaireContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::CommaContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitComma(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SupsContext ------------------------------------------------------------------

PLDCOMPParser::SupsContext::SupsContext(OpTertiaireContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::SupsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitSups(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MoinseqContext ------------------------------------------------------------------

PLDCOMPParser::MoinseqContext::MoinseqContext(OpTertiaireContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::MoinseqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitMoinseq(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AndContext ------------------------------------------------------------------

PLDCOMPParser::AndContext::AndContext(OpTertiaireContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::AndContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitAnd(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OreqContext ------------------------------------------------------------------

PLDCOMPParser::OreqContext::OreqContext(OpTertiaireContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::OreqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitOreq(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ModeqContext ------------------------------------------------------------------

PLDCOMPParser::ModeqContext::ModeqContext(OpTertiaireContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::ModeqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitModeq(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OrbContext ------------------------------------------------------------------

PLDCOMPParser::OrbContext::OrbContext(OpTertiaireContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::OrbContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitOrb(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MulteqContext ------------------------------------------------------------------

PLDCOMPParser::MulteqContext::MulteqContext(OpTertiaireContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::MulteqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitMulteq(this);
  else
    return visitor->visitChildren(this);
}
PLDCOMPParser::OpTertiaireContext* PLDCOMPParser::opTertiaire() {
  OpTertiaireContext *_localctx = _tracker.createInstance<OpTertiaireContext>(_ctx, getState());
  enterRule(_localctx, 4, PLDCOMPParser::RuleOpTertiaire);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(82);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PLDCOMPParser::T__8: {
        _localctx = dynamic_cast<OpTertiaireContext *>(_tracker.createInstance<PLDCOMPParser::OrbContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(62);
        match(PLDCOMPParser::T__8);
        break;
      }

      case PLDCOMPParser::T__9: {
        _localctx = dynamic_cast<OpTertiaireContext *>(_tracker.createInstance<PLDCOMPParser::AndContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(63);
        match(PLDCOMPParser::T__9);
        break;
      }

      case PLDCOMPParser::T__10: {
        _localctx = dynamic_cast<OpTertiaireContext *>(_tracker.createInstance<PLDCOMPParser::OrContext>(_localctx));
        enterOuterAlt(_localctx, 3);
        setState(64);
        match(PLDCOMPParser::T__10);
        break;
      }

      case PLDCOMPParser::T__11: {
        _localctx = dynamic_cast<OpTertiaireContext *>(_tracker.createInstance<PLDCOMPParser::AddeqContext>(_localctx));
        enterOuterAlt(_localctx, 4);
        setState(65);
        match(PLDCOMPParser::T__11);
        break;
      }

      case PLDCOMPParser::T__12: {
        _localctx = dynamic_cast<OpTertiaireContext *>(_tracker.createInstance<PLDCOMPParser::MoinseqContext>(_localctx));
        enterOuterAlt(_localctx, 5);
        setState(66);
        match(PLDCOMPParser::T__12);
        break;
      }

      case PLDCOMPParser::T__13: {
        _localctx = dynamic_cast<OpTertiaireContext *>(_tracker.createInstance<PLDCOMPParser::MulteqContext>(_localctx));
        enterOuterAlt(_localctx, 6);
        setState(67);
        match(PLDCOMPParser::T__13);
        break;
      }

      case PLDCOMPParser::T__14: {
        _localctx = dynamic_cast<OpTertiaireContext *>(_tracker.createInstance<PLDCOMPParser::DiveqContext>(_localctx));
        enterOuterAlt(_localctx, 7);
        setState(68);
        match(PLDCOMPParser::T__14);
        break;
      }

      case PLDCOMPParser::T__15: {
        _localctx = dynamic_cast<OpTertiaireContext *>(_tracker.createInstance<PLDCOMPParser::ModeqContext>(_localctx));
        enterOuterAlt(_localctx, 8);
        setState(69);
        match(PLDCOMPParser::T__15);
        break;
      }

      case PLDCOMPParser::T__16: {
        _localctx = dynamic_cast<OpTertiaireContext *>(_tracker.createInstance<PLDCOMPParser::AndeqContext>(_localctx));
        enterOuterAlt(_localctx, 9);
        setState(70);
        match(PLDCOMPParser::T__16);
        break;
      }

      case PLDCOMPParser::T__17: {
        _localctx = dynamic_cast<OpTertiaireContext *>(_tracker.createInstance<PLDCOMPParser::OreqContext>(_localctx));
        enterOuterAlt(_localctx, 10);
        setState(71);
        match(PLDCOMPParser::T__17);
        break;
      }

      case PLDCOMPParser::T__18: {
        _localctx = dynamic_cast<OpTertiaireContext *>(_tracker.createInstance<PLDCOMPParser::XoreqContext>(_localctx));
        enterOuterAlt(_localctx, 11);
        setState(72);
        match(PLDCOMPParser::T__18);
        break;
      }

      case PLDCOMPParser::T__19: {
        _localctx = dynamic_cast<OpTertiaireContext *>(_tracker.createInstance<PLDCOMPParser::InfsContext>(_localctx));
        enterOuterAlt(_localctx, 12);
        setState(73);
        match(PLDCOMPParser::T__19);
        break;
      }

      case PLDCOMPParser::T__20: {
        _localctx = dynamic_cast<OpTertiaireContext *>(_tracker.createInstance<PLDCOMPParser::InfContext>(_localctx));
        enterOuterAlt(_localctx, 13);
        setState(74);
        match(PLDCOMPParser::T__20);
        break;
      }

      case PLDCOMPParser::T__21: {
        _localctx = dynamic_cast<OpTertiaireContext *>(_tracker.createInstance<PLDCOMPParser::SupsContext>(_localctx));
        enterOuterAlt(_localctx, 14);
        setState(75);
        match(PLDCOMPParser::T__21);
        break;
      }

      case PLDCOMPParser::T__22: {
        _localctx = dynamic_cast<OpTertiaireContext *>(_tracker.createInstance<PLDCOMPParser::SupContext>(_localctx));
        enterOuterAlt(_localctx, 15);
        setState(76);
        match(PLDCOMPParser::T__22);
        break;
      }

      case PLDCOMPParser::T__23: {
        _localctx = dynamic_cast<OpTertiaireContext *>(_tracker.createInstance<PLDCOMPParser::DecgContext>(_localctx));
        enterOuterAlt(_localctx, 16);
        setState(77);
        match(PLDCOMPParser::T__23);
        break;
      }

      case PLDCOMPParser::T__24: {
        _localctx = dynamic_cast<OpTertiaireContext *>(_tracker.createInstance<PLDCOMPParser::DecdContext>(_localctx));
        enterOuterAlt(_localctx, 17);
        setState(78);
        match(PLDCOMPParser::T__24);
        break;
      }

      case PLDCOMPParser::T__25: {
        _localctx = dynamic_cast<OpTertiaireContext *>(_tracker.createInstance<PLDCOMPParser::EqualbContext>(_localctx));
        enterOuterAlt(_localctx, 18);
        setState(79);
        match(PLDCOMPParser::T__25);
        break;
      }

      case PLDCOMPParser::T__26: {
        _localctx = dynamic_cast<OpTertiaireContext *>(_tracker.createInstance<PLDCOMPParser::DiffContext>(_localctx));
        enterOuterAlt(_localctx, 19);
        setState(80);
        match(PLDCOMPParser::T__26);
        break;
      }

      case PLDCOMPParser::T__27: {
        _localctx = dynamic_cast<OpTertiaireContext *>(_tracker.createInstance<PLDCOMPParser::CommaContext>(_localctx));
        enterOuterAlt(_localctx, 20);
        setState(81);
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

//----------------- ExpressionSecondaireContext ------------------------------------------------------------------

PLDCOMPParser::ExpSecondaireContext* PLDCOMPParser::ExpressionSecondaireContext::expSecondaire() {
  return getRuleContext<PLDCOMPParser::ExpSecondaireContext>(0);
}

PLDCOMPParser::ExpressionSecondaireContext::ExpressionSecondaireContext(ExpContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::ExpressionSecondaireContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitExpressionSecondaire(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OperateurBinaireTertiaireContext ------------------------------------------------------------------

PLDCOMPParser::ExpContext* PLDCOMPParser::OperateurBinaireTertiaireContext::exp() {
  return getRuleContext<PLDCOMPParser::ExpContext>(0);
}

PLDCOMPParser::OpTertiaireContext* PLDCOMPParser::OperateurBinaireTertiaireContext::opTertiaire() {
  return getRuleContext<PLDCOMPParser::OpTertiaireContext>(0);
}

PLDCOMPParser::ExpSecondaireContext* PLDCOMPParser::OperateurBinaireTertiaireContext::expSecondaire() {
  return getRuleContext<PLDCOMPParser::ExpSecondaireContext>(0);
}

PLDCOMPParser::OperateurBinaireTertiaireContext::OperateurBinaireTertiaireContext(ExpContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::OperateurBinaireTertiaireContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitOperateurBinaireTertiaire(this);
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
  size_t startState = 6;
  enterRecursionRule(_localctx, 6, PLDCOMPParser::RuleExp, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    _localctx = _tracker.createInstance<ExpressionSecondaireContext>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(85);
    expSecondaire(0);
    _ctx->stop = _input->LT(-1);
    setState(93);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<OperateurBinaireTertiaireContext>(_tracker.createInstance<ExpContext>(parentContext, parentState));
        _localctx = newContext;
        pushNewRecursionContext(newContext, startState, RuleExp);
        setState(87);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(88);
        opTertiaire();
        setState(89);
        expSecondaire(0); 
      }
      setState(95);
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

//----------------- ExpSecondaireContext ------------------------------------------------------------------

PLDCOMPParser::ExpSecondaireContext::ExpSecondaireContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PLDCOMPParser::ExpSecondaireContext::getRuleIndex() const {
  return PLDCOMPParser::RuleExpSecondaire;
}

void PLDCOMPParser::ExpSecondaireContext::copyFrom(ExpSecondaireContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- OperateurBinaireSecondaireContext ------------------------------------------------------------------

PLDCOMPParser::ExpSecondaireContext* PLDCOMPParser::OperateurBinaireSecondaireContext::expSecondaire() {
  return getRuleContext<PLDCOMPParser::ExpSecondaireContext>(0);
}

PLDCOMPParser::OpSecondaireContext* PLDCOMPParser::OperateurBinaireSecondaireContext::opSecondaire() {
  return getRuleContext<PLDCOMPParser::OpSecondaireContext>(0);
}

PLDCOMPParser::ExpPrioritaireContext* PLDCOMPParser::OperateurBinaireSecondaireContext::expPrioritaire() {
  return getRuleContext<PLDCOMPParser::ExpPrioritaireContext>(0);
}

PLDCOMPParser::OperateurBinaireSecondaireContext::OperateurBinaireSecondaireContext(ExpSecondaireContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::OperateurBinaireSecondaireContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitOperateurBinaireSecondaire(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExpressionPrioritaireContext ------------------------------------------------------------------

PLDCOMPParser::ExpPrioritaireContext* PLDCOMPParser::ExpressionPrioritaireContext::expPrioritaire() {
  return getRuleContext<PLDCOMPParser::ExpPrioritaireContext>(0);
}

PLDCOMPParser::ExpressionPrioritaireContext::ExpressionPrioritaireContext(ExpSecondaireContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::ExpressionPrioritaireContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitExpressionPrioritaire(this);
  else
    return visitor->visitChildren(this);
}

PLDCOMPParser::ExpSecondaireContext* PLDCOMPParser::expSecondaire() {
   return expSecondaire(0);
}

PLDCOMPParser::ExpSecondaireContext* PLDCOMPParser::expSecondaire(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  PLDCOMPParser::ExpSecondaireContext *_localctx = _tracker.createInstance<ExpSecondaireContext>(_ctx, parentState);
  PLDCOMPParser::ExpSecondaireContext *previousContext = _localctx;
  size_t startState = 8;
  enterRecursionRule(_localctx, 8, PLDCOMPParser::RuleExpSecondaire, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    _localctx = _tracker.createInstance<ExpressionPrioritaireContext>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(97);
    expPrioritaire(0);
    _ctx->stop = _input->LT(-1);
    setState(105);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<OperateurBinaireSecondaireContext>(_tracker.createInstance<ExpSecondaireContext>(parentContext, parentState));
        _localctx = newContext;
        pushNewRecursionContext(newContext, startState, RuleExpSecondaire);
        setState(99);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(100);
        opSecondaire();
        setState(101);
        expPrioritaire(0); 
      }
      setState(107);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ExpPrioritaireContext ------------------------------------------------------------------

PLDCOMPParser::ExpPrioritaireContext::ExpPrioritaireContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PLDCOMPParser::ExpPrioritaireContext::getRuleIndex() const {
  return PLDCOMPParser::RuleExpPrioritaire;
}

void PLDCOMPParser::ExpPrioritaireContext::copyFrom(ExpPrioritaireContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ExpressionParentheseContext ------------------------------------------------------------------

PLDCOMPParser::ExpParentheseContext* PLDCOMPParser::ExpressionParentheseContext::expParenthese() {
  return getRuleContext<PLDCOMPParser::ExpParentheseContext>(0);
}

PLDCOMPParser::ExpressionParentheseContext::ExpressionParentheseContext(ExpPrioritaireContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::ExpressionParentheseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitExpressionParenthese(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OperateurBinairePrioritaireContext ------------------------------------------------------------------

PLDCOMPParser::ExpPrioritaireContext* PLDCOMPParser::OperateurBinairePrioritaireContext::expPrioritaire() {
  return getRuleContext<PLDCOMPParser::ExpPrioritaireContext>(0);
}

PLDCOMPParser::OpPrioritaireContext* PLDCOMPParser::OperateurBinairePrioritaireContext::opPrioritaire() {
  return getRuleContext<PLDCOMPParser::OpPrioritaireContext>(0);
}

PLDCOMPParser::ExpParentheseContext* PLDCOMPParser::OperateurBinairePrioritaireContext::expParenthese() {
  return getRuleContext<PLDCOMPParser::ExpParentheseContext>(0);
}

PLDCOMPParser::OperateurBinairePrioritaireContext::OperateurBinairePrioritaireContext(ExpPrioritaireContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::OperateurBinairePrioritaireContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitOperateurBinairePrioritaire(this);
  else
    return visitor->visitChildren(this);
}

PLDCOMPParser::ExpPrioritaireContext* PLDCOMPParser::expPrioritaire() {
   return expPrioritaire(0);
}

PLDCOMPParser::ExpPrioritaireContext* PLDCOMPParser::expPrioritaire(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  PLDCOMPParser::ExpPrioritaireContext *_localctx = _tracker.createInstance<ExpPrioritaireContext>(_ctx, parentState);
  PLDCOMPParser::ExpPrioritaireContext *previousContext = _localctx;
  size_t startState = 10;
  enterRecursionRule(_localctx, 10, PLDCOMPParser::RuleExpPrioritaire, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    _localctx = _tracker.createInstance<ExpressionParentheseContext>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(109);
    expParenthese();
    _ctx->stop = _input->LT(-1);
    setState(117);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<OperateurBinairePrioritaireContext>(_tracker.createInstance<ExpPrioritaireContext>(parentContext, parentState));
        _localctx = newContext;
        pushNewRecursionContext(newContext, startState, RuleExpPrioritaire);
        setState(111);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(112);
        opPrioritaire();
        setState(113);
        expParenthese(); 
      }
      setState(119);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ExpParentheseContext ------------------------------------------------------------------

PLDCOMPParser::ExpParentheseContext::ExpParentheseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PLDCOMPParser::ExpParentheseContext::getRuleIndex() const {
  return PLDCOMPParser::RuleExpParenthese;
}

void PLDCOMPParser::ExpParentheseContext::copyFrom(ExpParentheseContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ExpLvalueContext ------------------------------------------------------------------

PLDCOMPParser::LvalueContext* PLDCOMPParser::ExpLvalueContext::lvalue() {
  return getRuleContext<PLDCOMPParser::LvalueContext>(0);
}

PLDCOMPParser::ExpLvalueContext::ExpLvalueContext(ExpParentheseContext *ctx) { copyFrom(ctx); }

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

PLDCOMPParser::NegationContext::NegationContext(ExpParentheseContext *ctx) { copyFrom(ctx); }

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

PLDCOMPParser::PpexpContext::PpexpContext(ExpParentheseContext *ctx) { copyFrom(ctx); }

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

PLDCOMPParser::InvertContext::InvertContext(ExpParentheseContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::InvertContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitInvert(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AppelGetcharContext ------------------------------------------------------------------

PLDCOMPParser::AppelGetcharContext::AppelGetcharContext(ExpParentheseContext *ctx) { copyFrom(ctx); }

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

PLDCOMPParser::ConstanteNombreContext::ConstanteNombreContext(ExpParentheseContext *ctx) { copyFrom(ctx); }

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

PLDCOMPParser::ParentheseContext::ParentheseContext(ExpParentheseContext *ctx) { copyFrom(ctx); }

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

PLDCOMPParser::NonContext::NonContext(ExpParentheseContext *ctx) { copyFrom(ctx); }

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

PLDCOMPParser::ConstanteCaractereContext::ConstanteCaractereContext(ExpParentheseContext *ctx) { copyFrom(ctx); }

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

PLDCOMPParser::AppelDeFonctionContext::AppelDeFonctionContext(ExpParentheseContext *ctx) { copyFrom(ctx); }

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

PLDCOMPParser::MmexpContext::MmexpContext(ExpParentheseContext *ctx) { copyFrom(ctx); }

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

PLDCOMPParser::AffectationContext::AffectationContext(ExpParentheseContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::AffectationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitAffectation(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AppelPutcharContext ------------------------------------------------------------------

PLDCOMPParser::ExpContext* PLDCOMPParser::AppelPutcharContext::exp() {
  return getRuleContext<PLDCOMPParser::ExpContext>(0);
}

PLDCOMPParser::AppelPutcharContext::AppelPutcharContext(ExpParentheseContext *ctx) { copyFrom(ctx); }

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

PLDCOMPParser::ExpppContext::ExpppContext(ExpParentheseContext *ctx) { copyFrom(ctx); }

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

PLDCOMPParser::ExpmmContext::ExpmmContext(ExpParentheseContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::ExpmmContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitExpmm(this);
  else
    return visitor->visitChildren(this);
}
PLDCOMPParser::ExpParentheseContext* PLDCOMPParser::expParenthese() {
  ExpParentheseContext *_localctx = _tracker.createInstance<ExpParentheseContext>(_ctx, getState());
  enterRule(_localctx, 12, PLDCOMPParser::RuleExpParenthese);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(167);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<ExpParentheseContext *>(_tracker.createInstance<PLDCOMPParser::ParentheseContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(120);
      match(PLDCOMPParser::T__28);
      setState(121);
      exp(0);
      setState(122);
      match(PLDCOMPParser::T__29);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<ExpParentheseContext *>(_tracker.createInstance<PLDCOMPParser::NonContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(124);
      match(PLDCOMPParser::T__30);
      setState(125);
      exp(0);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<ExpParentheseContext *>(_tracker.createInstance<PLDCOMPParser::NegationContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(126);
      match(PLDCOMPParser::T__6);
      setState(127);
      exp(0);
      break;
    }

    case 4: {
      _localctx = dynamic_cast<ExpParentheseContext *>(_tracker.createInstance<PLDCOMPParser::InvertContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(128);
      match(PLDCOMPParser::T__31);
      setState(129);
      exp(0);
      break;
    }

    case 5: {
      _localctx = dynamic_cast<ExpParentheseContext *>(_tracker.createInstance<PLDCOMPParser::ExpppContext>(_localctx));
      enterOuterAlt(_localctx, 5);
      setState(130);
      lvalue();
      setState(131);
      match(PLDCOMPParser::T__32);
      break;
    }

    case 6: {
      _localctx = dynamic_cast<ExpParentheseContext *>(_tracker.createInstance<PLDCOMPParser::ExpmmContext>(_localctx));
      enterOuterAlt(_localctx, 6);
      setState(133);
      lvalue();
      setState(134);
      match(PLDCOMPParser::T__33);
      break;
    }

    case 7: {
      _localctx = dynamic_cast<ExpParentheseContext *>(_tracker.createInstance<PLDCOMPParser::PpexpContext>(_localctx));
      enterOuterAlt(_localctx, 7);
      setState(136);
      match(PLDCOMPParser::T__32);
      setState(137);
      lvalue();
      break;
    }

    case 8: {
      _localctx = dynamic_cast<ExpParentheseContext *>(_tracker.createInstance<PLDCOMPParser::MmexpContext>(_localctx));
      enterOuterAlt(_localctx, 8);
      setState(138);
      match(PLDCOMPParser::T__33);
      setState(139);
      lvalue();
      break;
    }

    case 9: {
      _localctx = dynamic_cast<ExpParentheseContext *>(_tracker.createInstance<PLDCOMPParser::AffectationContext>(_localctx));
      enterOuterAlt(_localctx, 9);
      setState(140);
      lvalue();
      setState(141);
      match(PLDCOMPParser::T__7);
      setState(142);
      exp(0);
      break;
    }

    case 10: {
      _localctx = dynamic_cast<ExpParentheseContext *>(_tracker.createInstance<PLDCOMPParser::ConstanteNombreContext>(_localctx));
      enterOuterAlt(_localctx, 10);
      setState(144);
      match(PLDCOMPParser::NOMBRE);
      break;
    }

    case 11: {
      _localctx = dynamic_cast<ExpParentheseContext *>(_tracker.createInstance<PLDCOMPParser::ConstanteCaractereContext>(_localctx));
      enterOuterAlt(_localctx, 11);
      setState(145);
      match(PLDCOMPParser::CHAR);
      break;
    }

    case 12: {
      _localctx = dynamic_cast<ExpParentheseContext *>(_tracker.createInstance<PLDCOMPParser::ExpLvalueContext>(_localctx));
      enterOuterAlt(_localctx, 12);
      setState(146);
      lvalue();
      break;
    }

    case 13: {
      _localctx = dynamic_cast<ExpParentheseContext *>(_tracker.createInstance<PLDCOMPParser::AppelDeFonctionContext>(_localctx));
      enterOuterAlt(_localctx, 13);
      setState(147);
      match(PLDCOMPParser::NOMVAR);
      setState(148);
      match(PLDCOMPParser::T__28);
      setState(149);
      exp(0);
      setState(154);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == PLDCOMPParser::T__27) {
        setState(150);
        match(PLDCOMPParser::T__27);
        setState(151);
        exp(0);
        setState(156);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(157);
      match(PLDCOMPParser::T__29);
      break;
    }

    case 14: {
      _localctx = dynamic_cast<ExpParentheseContext *>(_tracker.createInstance<PLDCOMPParser::AppelPutcharContext>(_localctx));
      enterOuterAlt(_localctx, 14);
      setState(159);
      match(PLDCOMPParser::T__34);
      setState(160);
      match(PLDCOMPParser::T__28);
      setState(161);
      exp(0);
      setState(162);
      match(PLDCOMPParser::T__29);
      break;
    }

    case 15: {
      _localctx = dynamic_cast<ExpParentheseContext *>(_tracker.createInstance<PLDCOMPParser::AppelGetcharContext>(_localctx));
      enterOuterAlt(_localctx, 15);
      setState(164);
      match(PLDCOMPParser::T__35);
      setState(165);
      match(PLDCOMPParser::T__28);
      setState(166);
      match(PLDCOMPParser::T__29);
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
  enterRule(_localctx, 14, PLDCOMPParser::RuleLvalue);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(175);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<LvalueContext *>(_tracker.createInstance<PLDCOMPParser::VariableContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(169);
      match(PLDCOMPParser::NOMVAR);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<LvalueContext *>(_tracker.createInstance<PLDCOMPParser::TableauContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(170);
      match(PLDCOMPParser::NOMVAR);
      setState(171);
      match(PLDCOMPParser::T__36);
      setState(172);
      exp(0);
      setState(173);
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
  enterRule(_localctx, 16, PLDCOMPParser::RuleStructure);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(179);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PLDCOMPParser::T__42: {
        _localctx = dynamic_cast<StructureContext *>(_tracker.createInstance<PLDCOMPParser::IfStatementContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(177);
        if_statement();
        break;
      }

      case PLDCOMPParser::T__44: {
        _localctx = dynamic_cast<StructureContext *>(_tracker.createInstance<PLDCOMPParser::WhileStatementContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(178);
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
  enterRule(_localctx, 18, PLDCOMPParser::RuleConstante);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(183);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PLDCOMPParser::NOMBRE: {
        _localctx = dynamic_cast<ConstanteContext *>(_tracker.createInstance<PLDCOMPParser::ConstanteNbContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(181);
        match(PLDCOMPParser::NOMBRE);
        break;
      }

      case PLDCOMPParser::CHAR: {
        _localctx = dynamic_cast<ConstanteContext *>(_tracker.createInstance<PLDCOMPParser::ConstanteCarContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(182);
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
  enterRule(_localctx, 20, PLDCOMPParser::RuleType_variable);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(185);
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
  enterRule(_localctx, 22, PLDCOMPParser::RuleType_function);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(187);
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
  enterRule(_localctx, 24, PLDCOMPParser::RuleIf_statement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(203);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<If_statementContext *>(_tracker.createInstance<PLDCOMPParser::IfContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(189);
      match(PLDCOMPParser::T__42);
      setState(190);
      match(PLDCOMPParser::T__28);
      setState(191);
      exp(0);
      setState(192);
      match(PLDCOMPParser::T__29);
      setState(193);
      instruction();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<If_statementContext *>(_tracker.createInstance<PLDCOMPParser::IfElseContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(195);
      match(PLDCOMPParser::T__42);
      setState(196);
      match(PLDCOMPParser::T__28);
      setState(197);
      exp(0);
      setState(198);
      match(PLDCOMPParser::T__29);
      setState(199);
      instruction();
      setState(200);
      match(PLDCOMPParser::T__43);
      setState(201);
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
  enterRule(_localctx, 26, PLDCOMPParser::RuleWhile_statement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    _localctx = dynamic_cast<While_statementContext *>(_tracker.createInstance<PLDCOMPParser::WhileContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(205);
    match(PLDCOMPParser::T__44);
    setState(206);
    match(PLDCOMPParser::T__28);
    setState(207);
    exp(0);
    setState(208);
    match(PLDCOMPParser::T__29);
    setState(209);
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
  enterRule(_localctx, 28, PLDCOMPParser::RuleVal);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(227);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PLDCOMPParser::NOMBRE: {
        _localctx = dynamic_cast<ValContext *>(_tracker.createInstance<PLDCOMPParser::TableauNombreContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(211);
        match(PLDCOMPParser::NOMBRE);
        setState(216);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == PLDCOMPParser::T__27) {
          setState(212);
          match(PLDCOMPParser::T__27);
          setState(213);
          match(PLDCOMPParser::NOMBRE);
          setState(218);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

      case PLDCOMPParser::CHAR: {
        _localctx = dynamic_cast<ValContext *>(_tracker.createInstance<PLDCOMPParser::TableauCaractereContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(219);
        match(PLDCOMPParser::CHAR);
        setState(224);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == PLDCOMPParser::T__27) {
          setState(220);
          match(PLDCOMPParser::T__27);
          setState(221);
          match(PLDCOMPParser::CHAR);
          setState(226);
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

//----------------- DeclarationCharMultContext ------------------------------------------------------------------

std::vector<PLDCOMPParser::Declaration_char_generaleContext *> PLDCOMPParser::DeclarationCharMultContext::declaration_char_generale() {
  return getRuleContexts<PLDCOMPParser::Declaration_char_generaleContext>();
}

PLDCOMPParser::Declaration_char_generaleContext* PLDCOMPParser::DeclarationCharMultContext::declaration_char_generale(size_t i) {
  return getRuleContext<PLDCOMPParser::Declaration_char_generaleContext>(i);
}

PLDCOMPParser::DeclarationCharMultContext::DeclarationCharMultContext(Declaration_typeContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::DeclarationCharMultContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitDeclarationCharMult(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DeclarationIntMultContext ------------------------------------------------------------------

PLDCOMPParser::EntierContext* PLDCOMPParser::DeclarationIntMultContext::entier() {
  return getRuleContext<PLDCOMPParser::EntierContext>(0);
}

std::vector<PLDCOMPParser::Declaration_int_generaleContext *> PLDCOMPParser::DeclarationIntMultContext::declaration_int_generale() {
  return getRuleContexts<PLDCOMPParser::Declaration_int_generaleContext>();
}

PLDCOMPParser::Declaration_int_generaleContext* PLDCOMPParser::DeclarationIntMultContext::declaration_int_generale(size_t i) {
  return getRuleContext<PLDCOMPParser::Declaration_int_generaleContext>(i);
}

PLDCOMPParser::DeclarationIntMultContext::DeclarationIntMultContext(Declaration_typeContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::DeclarationIntMultContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitDeclarationIntMult(this);
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
  enterRule(_localctx, 30, PLDCOMPParser::RuleDeclaration_type);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(263);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<Declaration_typeContext *>(_tracker.createInstance<PLDCOMPParser::DeclarationIntMultContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(229);
      entier();
      setState(230);
      declaration_int_generale();
      setState(235);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == PLDCOMPParser::T__27) {
        setState(231);
        match(PLDCOMPParser::T__27);
        setState(232);
        declaration_int_generale();
        setState(237);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    case 2: {
      _localctx = dynamic_cast<Declaration_typeContext *>(_tracker.createInstance<PLDCOMPParser::DeclarationCharMultContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(238);
      match(PLDCOMPParser::T__38);
      setState(239);
      declaration_char_generale();
      setState(244);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == PLDCOMPParser::T__27) {
        setState(240);
        match(PLDCOMPParser::T__27);
        setState(241);
        declaration_char_generale();
        setState(246);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    case 3: {
      _localctx = dynamic_cast<Declaration_typeContext *>(_tracker.createInstance<PLDCOMPParser::DeclarationTableauContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(247);
      type_variable();
      setState(248);
      match(PLDCOMPParser::NOMVAR);
      setState(249);
      match(PLDCOMPParser::T__36);
      setState(250);
      match(PLDCOMPParser::NOMBRE);
      setState(251);
      match(PLDCOMPParser::T__37);
      break;
    }

    case 4: {
      _localctx = dynamic_cast<Declaration_typeContext *>(_tracker.createInstance<PLDCOMPParser::DeclarationTableauConstanteContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(253);
      type_variable();
      setState(254);
      match(PLDCOMPParser::NOMVAR);
      setState(255);
      match(PLDCOMPParser::T__36);
      setState(256);
      match(PLDCOMPParser::NOMBRE);
      setState(257);
      match(PLDCOMPParser::T__37);
      setState(258);
      match(PLDCOMPParser::T__7);
      setState(259);
      match(PLDCOMPParser::T__45);
      setState(260);
      val();
      setState(261);
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

//----------------- EntierContext ------------------------------------------------------------------

PLDCOMPParser::EntierContext::EntierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PLDCOMPParser::EntierContext::getRuleIndex() const {
  return PLDCOMPParser::RuleEntier;
}

void PLDCOMPParser::EntierContext::copyFrom(EntierContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Int32Context ------------------------------------------------------------------

PLDCOMPParser::Int32Context::Int32Context(EntierContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::Int32Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitInt32(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Int64Context ------------------------------------------------------------------

PLDCOMPParser::Int64Context::Int64Context(EntierContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::Int64Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitInt64(this);
  else
    return visitor->visitChildren(this);
}
PLDCOMPParser::EntierContext* PLDCOMPParser::entier() {
  EntierContext *_localctx = _tracker.createInstance<EntierContext>(_ctx, getState());
  enterRule(_localctx, 32, PLDCOMPParser::RuleEntier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(267);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PLDCOMPParser::T__39: {
        _localctx = dynamic_cast<EntierContext *>(_tracker.createInstance<PLDCOMPParser::Int32Context>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(265);
        match(PLDCOMPParser::T__39);
        break;
      }

      case PLDCOMPParser::T__40: {
        _localctx = dynamic_cast<EntierContext *>(_tracker.createInstance<PLDCOMPParser::Int64Context>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(266);
        match(PLDCOMPParser::T__40);
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

//----------------- Declaration_int_generaleContext ------------------------------------------------------------------

PLDCOMPParser::Declaration_int_generaleContext::Declaration_int_generaleContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PLDCOMPParser::Declaration_int_generaleContext::getRuleIndex() const {
  return PLDCOMPParser::RuleDeclaration_int_generale;
}

void PLDCOMPParser::Declaration_int_generaleContext::copyFrom(Declaration_int_generaleContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- DeclarationIntSimpleContext ------------------------------------------------------------------

tree::TerminalNode* PLDCOMPParser::DeclarationIntSimpleContext::NOMVAR() {
  return getToken(PLDCOMPParser::NOMVAR, 0);
}

PLDCOMPParser::DeclarationIntSimpleContext::DeclarationIntSimpleContext(Declaration_int_generaleContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::DeclarationIntSimpleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitDeclarationIntSimple(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DeclarationIntConstanteContext ------------------------------------------------------------------

tree::TerminalNode* PLDCOMPParser::DeclarationIntConstanteContext::NOMVAR() {
  return getToken(PLDCOMPParser::NOMVAR, 0);
}

PLDCOMPParser::ConstanteContext* PLDCOMPParser::DeclarationIntConstanteContext::constante() {
  return getRuleContext<PLDCOMPParser::ConstanteContext>(0);
}

PLDCOMPParser::DeclarationIntConstanteContext::DeclarationIntConstanteContext(Declaration_int_generaleContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::DeclarationIntConstanteContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitDeclarationIntConstante(this);
  else
    return visitor->visitChildren(this);
}
PLDCOMPParser::Declaration_int_generaleContext* PLDCOMPParser::declaration_int_generale() {
  Declaration_int_generaleContext *_localctx = _tracker.createInstance<Declaration_int_generaleContext>(_ctx, getState());
  enterRule(_localctx, 34, PLDCOMPParser::RuleDeclaration_int_generale);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(273);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<Declaration_int_generaleContext *>(_tracker.createInstance<PLDCOMPParser::DeclarationIntSimpleContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(269);
      match(PLDCOMPParser::NOMVAR);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<Declaration_int_generaleContext *>(_tracker.createInstance<PLDCOMPParser::DeclarationIntConstanteContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(270);
      match(PLDCOMPParser::NOMVAR);
      setState(271);
      match(PLDCOMPParser::T__7);
      setState(272);
      constante();
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

//----------------- Declaration_char_generaleContext ------------------------------------------------------------------

PLDCOMPParser::Declaration_char_generaleContext::Declaration_char_generaleContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PLDCOMPParser::Declaration_char_generaleContext::getRuleIndex() const {
  return PLDCOMPParser::RuleDeclaration_char_generale;
}

void PLDCOMPParser::Declaration_char_generaleContext::copyFrom(Declaration_char_generaleContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- DeclarationCharSimpleContext ------------------------------------------------------------------

tree::TerminalNode* PLDCOMPParser::DeclarationCharSimpleContext::NOMVAR() {
  return getToken(PLDCOMPParser::NOMVAR, 0);
}

PLDCOMPParser::DeclarationCharSimpleContext::DeclarationCharSimpleContext(Declaration_char_generaleContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::DeclarationCharSimpleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitDeclarationCharSimple(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DeclarationCharConstanteContext ------------------------------------------------------------------

tree::TerminalNode* PLDCOMPParser::DeclarationCharConstanteContext::NOMVAR() {
  return getToken(PLDCOMPParser::NOMVAR, 0);
}

PLDCOMPParser::ConstanteContext* PLDCOMPParser::DeclarationCharConstanteContext::constante() {
  return getRuleContext<PLDCOMPParser::ConstanteContext>(0);
}

PLDCOMPParser::DeclarationCharConstanteContext::DeclarationCharConstanteContext(Declaration_char_generaleContext *ctx) { copyFrom(ctx); }

antlrcpp::Any PLDCOMPParser::DeclarationCharConstanteContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitDeclarationCharConstante(this);
  else
    return visitor->visitChildren(this);
}
PLDCOMPParser::Declaration_char_generaleContext* PLDCOMPParser::declaration_char_generale() {
  Declaration_char_generaleContext *_localctx = _tracker.createInstance<Declaration_char_generaleContext>(_ctx, getState());
  enterRule(_localctx, 36, PLDCOMPParser::RuleDeclaration_char_generale);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(279);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<Declaration_char_generaleContext *>(_tracker.createInstance<PLDCOMPParser::DeclarationCharSimpleContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(275);
      match(PLDCOMPParser::NOMVAR);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<Declaration_char_generaleContext *>(_tracker.createInstance<PLDCOMPParser::DeclarationCharConstanteContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(276);
      match(PLDCOMPParser::NOMVAR);
      setState(277);
      match(PLDCOMPParser::T__7);
      setState(278);
      constante();
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
  enterRule(_localctx, 38, PLDCOMPParser::RuleParam);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(293);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PLDCOMPParser::T__41: {
        _localctx = dynamic_cast<ParamContext *>(_tracker.createInstance<PLDCOMPParser::VoidContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(281);
        match(PLDCOMPParser::T__41);
        break;
      }

      case PLDCOMPParser::T__38:
      case PLDCOMPParser::T__39:
      case PLDCOMPParser::T__40: {
        _localctx = dynamic_cast<ParamContext *>(_tracker.createInstance<PLDCOMPParser::ParametresContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(282);
        type_variable();
        setState(283);
        match(PLDCOMPParser::NOMVAR);
        setState(290);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == PLDCOMPParser::T__27) {
          setState(284);
          match(PLDCOMPParser::T__27);
          setState(285);
          type_variable();
          setState(286);
          match(PLDCOMPParser::NOMVAR);
          setState(292);
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
  enterRule(_localctx, 40, PLDCOMPParser::RuleFonction);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(314);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<FonctionContext *>(_tracker.createInstance<PLDCOMPParser::DeclarationFonctionParamsContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(295);
      type_function();
      setState(296);
      match(PLDCOMPParser::NOMVAR);
      setState(297);
      match(PLDCOMPParser::T__28);
      setState(298);
      param();
      setState(299);
      match(PLDCOMPParser::T__29);
      setState(300);
      match(PLDCOMPParser::T__45);
      setState(301);
      declaration_variables();
      setState(302);
      bloc();
      setState(303);
      match(PLDCOMPParser::T__46);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<FonctionContext *>(_tracker.createInstance<PLDCOMPParser::DeclarationFonctionContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(305);
      type_function();
      setState(306);
      match(PLDCOMPParser::NOMVAR);
      setState(307);
      match(PLDCOMPParser::T__28);
      setState(308);
      match(PLDCOMPParser::T__29);
      setState(309);
      match(PLDCOMPParser::T__45);
      setState(310);
      declaration_variables();
      setState(311);
      bloc();
      setState(312);
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
  enterRule(_localctx, 42, PLDCOMPParser::RuleDeclaration_variables);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    _localctx = dynamic_cast<Declaration_variablesContext *>(_tracker.createInstance<PLDCOMPParser::DeclarationVariablesContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(321);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(316);
        declaration_type();
        setState(317);
        match(PLDCOMPParser::T__47); 
      }
      setState(323);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx);
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
  enterRule(_localctx, 44, PLDCOMPParser::RuleBloc);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(327);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << PLDCOMPParser::T__6)
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
      setState(324);
      instruction();
      setState(329);
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
  enterRule(_localctx, 46, PLDCOMPParser::RuleInstruction);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(344);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PLDCOMPParser::T__45: {
        _localctx = dynamic_cast<InstructionContext *>(_tracker.createInstance<PLDCOMPParser::BlocInstructionContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(330);
        match(PLDCOMPParser::T__45);
        setState(331);
        bloc();
        setState(332);
        match(PLDCOMPParser::T__46);
        break;
      }

      case PLDCOMPParser::T__48: {
        _localctx = dynamic_cast<InstructionContext *>(_tracker.createInstance<PLDCOMPParser::BreakInstructionContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(334);
        match(PLDCOMPParser::T__48);
        setState(335);
        match(PLDCOMPParser::T__47);
        break;
      }

      case PLDCOMPParser::T__42:
      case PLDCOMPParser::T__44: {
        _localctx = dynamic_cast<InstructionContext *>(_tracker.createInstance<PLDCOMPParser::StructureInstructionContext>(_localctx));
        enterOuterAlt(_localctx, 3);
        setState(336);
        structure();
        break;
      }

      case PLDCOMPParser::T__49: {
        _localctx = dynamic_cast<InstructionContext *>(_tracker.createInstance<PLDCOMPParser::ReturnInstructionContext>(_localctx));
        enterOuterAlt(_localctx, 4);
        setState(337);
        match(PLDCOMPParser::T__49);
        setState(338);
        exp(0);
        setState(339);
        match(PLDCOMPParser::T__47);
        break;
      }

      case PLDCOMPParser::T__6:
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
        setState(341);
        exp(0);
        setState(342);
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
  enterRule(_localctx, 48, PLDCOMPParser::RuleProgramme);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(346);
    declaration_variables();
    setState(350);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << PLDCOMPParser::T__38)
      | (1ULL << PLDCOMPParser::T__39)
      | (1ULL << PLDCOMPParser::T__40)
      | (1ULL << PLDCOMPParser::T__41))) != 0)) {
      setState(347);
      fonction();
      setState(352);
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
    case 3: return expSempred(dynamic_cast<ExpContext *>(context), predicateIndex);
    case 4: return expSecondaireSempred(dynamic_cast<ExpSecondaireContext *>(context), predicateIndex);
    case 5: return expPrioritaireSempred(dynamic_cast<ExpPrioritaireContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool PLDCOMPParser::expSempred(ExpContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool PLDCOMPParser::expSecondaireSempred(ExpSecondaireContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 1: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool PLDCOMPParser::expPrioritaireSempred(ExpPrioritaireContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 2: return precpred(_ctx, 2);

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
  "opPrioritaire", "opSecondaire", "opTertiaire", "exp", "expSecondaire", 
  "expPrioritaire", "expParenthese", "lvalue", "structure", "constante", 
  "type_variable", "type_function", "if_statement", "while_statement", "val", 
  "declaration_type", "entier", "declaration_int_generale", "declaration_char_generale", 
  "param", "fonction", "declaration_variables", "bloc", "instruction", "programme"
};

std::vector<std::string> PLDCOMPParser::_literalNames = {
  "", "'^'", "'*'", "'/'", "'&&'", "'%'", "'+'", "'-'", "'='", "'||'", "'&'", 
  "'|'", "'+='", "'-='", "'*='", "'/='", "'%='", "'&='", "'|='", "'^='", 
  "'<'", "'<='", "'>'", "'>='", "'<<'", "'>>'", "'=='", "'!='", "','", "'('", 
  "')'", "'!'", "'~'", "'++'", "'--'", "'putchar'", "'getchar'", "'['", 
  "']'", "'char'", "'int32_t'", "'int64_t'", "'void'", "'if'", "'else'", 
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
    0x3, 0x3b, 0x164, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x3, 0x2, 0x3, 0x2, 
    0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x5, 0x2, 0x3a, 0xa, 0x2, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x5, 0x3, 0x3f, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x55, 0xa, 0x4, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x7, 0x5, 0x5e, 
    0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0x61, 0xb, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 
    0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x7, 0x6, 0x6a, 0xa, 0x6, 
    0xc, 0x6, 0xe, 0x6, 0x6d, 0xb, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x7, 0x7, 0x76, 0xa, 0x7, 0xc, 0x7, 
    0xe, 0x7, 0x79, 0xb, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x7, 
    0x8, 0x9b, 0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 0x9e, 0xb, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x5, 0x8, 0xaa, 0xa, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0xb2, 0xa, 0x9, 0x3, 0xa, 0x3, 
    0xa, 0x5, 0xa, 0xb6, 0xa, 0xa, 0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0xba, 0xa, 
    0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0xce, 0xa, 0xe, 
    0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 
    0x3, 0x10, 0x3, 0x10, 0x7, 0x10, 0xd9, 0xa, 0x10, 0xc, 0x10, 0xe, 0x10, 
    0xdc, 0xb, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x7, 0x10, 0xe1, 0xa, 
    0x10, 0xc, 0x10, 0xe, 0x10, 0xe4, 0xb, 0x10, 0x5, 0x10, 0xe6, 0xa, 0x10, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x7, 0x11, 0xec, 0xa, 0x11, 
    0xc, 0x11, 0xe, 0x11, 0xef, 0xb, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x7, 0x11, 0xf5, 0xa, 0x11, 0xc, 0x11, 0xe, 0x11, 0xf8, 0xb, 
    0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
    0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0x10a, 0xa, 0x11, 
    0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 0x10e, 0xa, 0x12, 0x3, 0x13, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0x114, 0xa, 0x13, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x5, 0x14, 0x11a, 0xa, 0x14, 0x3, 0x15, 0x3, 0x15, 
    0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x7, 0x15, 0x123, 
    0xa, 0x15, 0xc, 0x15, 0xe, 0x15, 0x126, 0xb, 0x15, 0x5, 0x15, 0x128, 
    0xa, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 
    0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 
    0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 
    0x16, 0x5, 0x16, 0x13d, 0xa, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 
    0x7, 0x17, 0x142, 0xa, 0x17, 0xc, 0x17, 0xe, 0x17, 0x145, 0xb, 0x17, 
    0x3, 0x18, 0x7, 0x18, 0x148, 0xa, 0x18, 0xc, 0x18, 0xe, 0x18, 0x14b, 
    0xb, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 
    0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 
    0x3, 0x19, 0x3, 0x19, 0x5, 0x19, 0x15b, 0xa, 0x19, 0x3, 0x1a, 0x3, 0x1a, 
    0x7, 0x1a, 0x15f, 0xa, 0x1a, 0xc, 0x1a, 0xe, 0x1a, 0x162, 0xb, 0x1a, 
    0x3, 0x1a, 0x2, 0x5, 0x8, 0xa, 0xc, 0x1b, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 
    0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 
    0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x2, 0x4, 0x3, 0x2, 0x29, 
    0x2b, 0x3, 0x2, 0x29, 0x2c, 0x2, 0x18e, 0x2, 0x39, 0x3, 0x2, 0x2, 0x2, 
    0x4, 0x3e, 0x3, 0x2, 0x2, 0x2, 0x6, 0x54, 0x3, 0x2, 0x2, 0x2, 0x8, 0x56, 
    0x3, 0x2, 0x2, 0x2, 0xa, 0x62, 0x3, 0x2, 0x2, 0x2, 0xc, 0x6e, 0x3, 0x2, 
    0x2, 0x2, 0xe, 0xa9, 0x3, 0x2, 0x2, 0x2, 0x10, 0xb1, 0x3, 0x2, 0x2, 
    0x2, 0x12, 0xb5, 0x3, 0x2, 0x2, 0x2, 0x14, 0xb9, 0x3, 0x2, 0x2, 0x2, 
    0x16, 0xbb, 0x3, 0x2, 0x2, 0x2, 0x18, 0xbd, 0x3, 0x2, 0x2, 0x2, 0x1a, 
    0xcd, 0x3, 0x2, 0x2, 0x2, 0x1c, 0xcf, 0x3, 0x2, 0x2, 0x2, 0x1e, 0xe5, 
    0x3, 0x2, 0x2, 0x2, 0x20, 0x109, 0x3, 0x2, 0x2, 0x2, 0x22, 0x10d, 0x3, 
    0x2, 0x2, 0x2, 0x24, 0x113, 0x3, 0x2, 0x2, 0x2, 0x26, 0x119, 0x3, 0x2, 
    0x2, 0x2, 0x28, 0x127, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x13c, 0x3, 0x2, 0x2, 
    0x2, 0x2c, 0x143, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x149, 0x3, 0x2, 0x2, 0x2, 
    0x30, 0x15a, 0x3, 0x2, 0x2, 0x2, 0x32, 0x15c, 0x3, 0x2, 0x2, 0x2, 0x34, 
    0x3a, 0x7, 0x3, 0x2, 0x2, 0x35, 0x3a, 0x7, 0x4, 0x2, 0x2, 0x36, 0x3a, 
    0x7, 0x5, 0x2, 0x2, 0x37, 0x3a, 0x7, 0x6, 0x2, 0x2, 0x38, 0x3a, 0x7, 
    0x7, 0x2, 0x2, 0x39, 0x34, 0x3, 0x2, 0x2, 0x2, 0x39, 0x35, 0x3, 0x2, 
    0x2, 0x2, 0x39, 0x36, 0x3, 0x2, 0x2, 0x2, 0x39, 0x37, 0x3, 0x2, 0x2, 
    0x2, 0x39, 0x38, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x3, 0x3, 0x2, 0x2, 0x2, 
    0x3b, 0x3f, 0x7, 0x8, 0x2, 0x2, 0x3c, 0x3f, 0x7, 0x9, 0x2, 0x2, 0x3d, 
    0x3f, 0x7, 0xa, 0x2, 0x2, 0x3e, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x3c, 
    0x3, 0x2, 0x2, 0x2, 0x3e, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x5, 0x3, 
    0x2, 0x2, 0x2, 0x40, 0x55, 0x7, 0xb, 0x2, 0x2, 0x41, 0x55, 0x7, 0xc, 
    0x2, 0x2, 0x42, 0x55, 0x7, 0xd, 0x2, 0x2, 0x43, 0x55, 0x7, 0xe, 0x2, 
    0x2, 0x44, 0x55, 0x7, 0xf, 0x2, 0x2, 0x45, 0x55, 0x7, 0x10, 0x2, 0x2, 
    0x46, 0x55, 0x7, 0x11, 0x2, 0x2, 0x47, 0x55, 0x7, 0x12, 0x2, 0x2, 0x48, 
    0x55, 0x7, 0x13, 0x2, 0x2, 0x49, 0x55, 0x7, 0x14, 0x2, 0x2, 0x4a, 0x55, 
    0x7, 0x15, 0x2, 0x2, 0x4b, 0x55, 0x7, 0x16, 0x2, 0x2, 0x4c, 0x55, 0x7, 
    0x17, 0x2, 0x2, 0x4d, 0x55, 0x7, 0x18, 0x2, 0x2, 0x4e, 0x55, 0x7, 0x19, 
    0x2, 0x2, 0x4f, 0x55, 0x7, 0x1a, 0x2, 0x2, 0x50, 0x55, 0x7, 0x1b, 0x2, 
    0x2, 0x51, 0x55, 0x7, 0x1c, 0x2, 0x2, 0x52, 0x55, 0x7, 0x1d, 0x2, 0x2, 
    0x53, 0x55, 0x7, 0x1e, 0x2, 0x2, 0x54, 0x40, 0x3, 0x2, 0x2, 0x2, 0x54, 
    0x41, 0x3, 0x2, 0x2, 0x2, 0x54, 0x42, 0x3, 0x2, 0x2, 0x2, 0x54, 0x43, 
    0x3, 0x2, 0x2, 0x2, 0x54, 0x44, 0x3, 0x2, 0x2, 0x2, 0x54, 0x45, 0x3, 
    0x2, 0x2, 0x2, 0x54, 0x46, 0x3, 0x2, 0x2, 0x2, 0x54, 0x47, 0x3, 0x2, 
    0x2, 0x2, 0x54, 0x48, 0x3, 0x2, 0x2, 0x2, 0x54, 0x49, 0x3, 0x2, 0x2, 
    0x2, 0x54, 0x4a, 0x3, 0x2, 0x2, 0x2, 0x54, 0x4b, 0x3, 0x2, 0x2, 0x2, 
    0x54, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x54, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x54, 
    0x4e, 0x3, 0x2, 0x2, 0x2, 0x54, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x54, 0x50, 
    0x3, 0x2, 0x2, 0x2, 0x54, 0x51, 0x3, 0x2, 0x2, 0x2, 0x54, 0x52, 0x3, 
    0x2, 0x2, 0x2, 0x54, 0x53, 0x3, 0x2, 0x2, 0x2, 0x55, 0x7, 0x3, 0x2, 
    0x2, 0x2, 0x56, 0x57, 0x8, 0x5, 0x1, 0x2, 0x57, 0x58, 0x5, 0xa, 0x6, 
    0x2, 0x58, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x59, 0x5a, 0xc, 0x4, 0x2, 0x2, 
    0x5a, 0x5b, 0x5, 0x6, 0x4, 0x2, 0x5b, 0x5c, 0x5, 0xa, 0x6, 0x2, 0x5c, 
    0x5e, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x59, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x61, 
    0x3, 0x2, 0x2, 0x2, 0x5f, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x60, 0x3, 
    0x2, 0x2, 0x2, 0x60, 0x9, 0x3, 0x2, 0x2, 0x2, 0x61, 0x5f, 0x3, 0x2, 
    0x2, 0x2, 0x62, 0x63, 0x8, 0x6, 0x1, 0x2, 0x63, 0x64, 0x5, 0xc, 0x7, 
    0x2, 0x64, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x65, 0x66, 0xc, 0x4, 0x2, 0x2, 
    0x66, 0x67, 0x5, 0x4, 0x3, 0x2, 0x67, 0x68, 0x5, 0xc, 0x7, 0x2, 0x68, 
    0x6a, 0x3, 0x2, 0x2, 0x2, 0x69, 0x65, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x6d, 
    0x3, 0x2, 0x2, 0x2, 0x6b, 0x69, 0x3, 0x2, 0x2, 0x2, 0x6b, 0x6c, 0x3, 
    0x2, 0x2, 0x2, 0x6c, 0xb, 0x3, 0x2, 0x2, 0x2, 0x6d, 0x6b, 0x3, 0x2, 
    0x2, 0x2, 0x6e, 0x6f, 0x8, 0x7, 0x1, 0x2, 0x6f, 0x70, 0x5, 0xe, 0x8, 
    0x2, 0x70, 0x77, 0x3, 0x2, 0x2, 0x2, 0x71, 0x72, 0xc, 0x4, 0x2, 0x2, 
    0x72, 0x73, 0x5, 0x2, 0x2, 0x2, 0x73, 0x74, 0x5, 0xe, 0x8, 0x2, 0x74, 
    0x76, 0x3, 0x2, 0x2, 0x2, 0x75, 0x71, 0x3, 0x2, 0x2, 0x2, 0x76, 0x79, 
    0x3, 0x2, 0x2, 0x2, 0x77, 0x75, 0x3, 0x2, 0x2, 0x2, 0x77, 0x78, 0x3, 
    0x2, 0x2, 0x2, 0x78, 0xd, 0x3, 0x2, 0x2, 0x2, 0x79, 0x77, 0x3, 0x2, 
    0x2, 0x2, 0x7a, 0x7b, 0x7, 0x1f, 0x2, 0x2, 0x7b, 0x7c, 0x5, 0x8, 0x5, 
    0x2, 0x7c, 0x7d, 0x7, 0x20, 0x2, 0x2, 0x7d, 0xaa, 0x3, 0x2, 0x2, 0x2, 
    0x7e, 0x7f, 0x7, 0x21, 0x2, 0x2, 0x7f, 0xaa, 0x5, 0x8, 0x5, 0x2, 0x80, 
    0x81, 0x7, 0x9, 0x2, 0x2, 0x81, 0xaa, 0x5, 0x8, 0x5, 0x2, 0x82, 0x83, 
    0x7, 0x22, 0x2, 0x2, 0x83, 0xaa, 0x5, 0x8, 0x5, 0x2, 0x84, 0x85, 0x5, 
    0x10, 0x9, 0x2, 0x85, 0x86, 0x7, 0x23, 0x2, 0x2, 0x86, 0xaa, 0x3, 0x2, 
    0x2, 0x2, 0x87, 0x88, 0x5, 0x10, 0x9, 0x2, 0x88, 0x89, 0x7, 0x24, 0x2, 
    0x2, 0x89, 0xaa, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x8b, 0x7, 0x23, 0x2, 0x2, 
    0x8b, 0xaa, 0x5, 0x10, 0x9, 0x2, 0x8c, 0x8d, 0x7, 0x24, 0x2, 0x2, 0x8d, 
    0xaa, 0x5, 0x10, 0x9, 0x2, 0x8e, 0x8f, 0x5, 0x10, 0x9, 0x2, 0x8f, 0x90, 
    0x7, 0xa, 0x2, 0x2, 0x90, 0x91, 0x5, 0x8, 0x5, 0x2, 0x91, 0xaa, 0x3, 
    0x2, 0x2, 0x2, 0x92, 0xaa, 0x7, 0x36, 0x2, 0x2, 0x93, 0xaa, 0x7, 0x37, 
    0x2, 0x2, 0x94, 0xaa, 0x5, 0x10, 0x9, 0x2, 0x95, 0x96, 0x7, 0x35, 0x2, 
    0x2, 0x96, 0x97, 0x7, 0x1f, 0x2, 0x2, 0x97, 0x9c, 0x5, 0x8, 0x5, 0x2, 
    0x98, 0x99, 0x7, 0x1e, 0x2, 0x2, 0x99, 0x9b, 0x5, 0x8, 0x5, 0x2, 0x9a, 
    0x98, 0x3, 0x2, 0x2, 0x2, 0x9b, 0x9e, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x9a, 
    0x3, 0x2, 0x2, 0x2, 0x9c, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x9d, 0x9f, 0x3, 
    0x2, 0x2, 0x2, 0x9e, 0x9c, 0x3, 0x2, 0x2, 0x2, 0x9f, 0xa0, 0x7, 0x20, 
    0x2, 0x2, 0xa0, 0xaa, 0x3, 0x2, 0x2, 0x2, 0xa1, 0xa2, 0x7, 0x25, 0x2, 
    0x2, 0xa2, 0xa3, 0x7, 0x1f, 0x2, 0x2, 0xa3, 0xa4, 0x5, 0x8, 0x5, 0x2, 
    0xa4, 0xa5, 0x7, 0x20, 0x2, 0x2, 0xa5, 0xaa, 0x3, 0x2, 0x2, 0x2, 0xa6, 
    0xa7, 0x7, 0x26, 0x2, 0x2, 0xa7, 0xa8, 0x7, 0x1f, 0x2, 0x2, 0xa8, 0xaa, 
    0x7, 0x20, 0x2, 0x2, 0xa9, 0x7a, 0x3, 0x2, 0x2, 0x2, 0xa9, 0x7e, 0x3, 
    0x2, 0x2, 0x2, 0xa9, 0x80, 0x3, 0x2, 0x2, 0x2, 0xa9, 0x82, 0x3, 0x2, 
    0x2, 0x2, 0xa9, 0x84, 0x3, 0x2, 0x2, 0x2, 0xa9, 0x87, 0x3, 0x2, 0x2, 
    0x2, 0xa9, 0x8a, 0x3, 0x2, 0x2, 0x2, 0xa9, 0x8c, 0x3, 0x2, 0x2, 0x2, 
    0xa9, 0x8e, 0x3, 0x2, 0x2, 0x2, 0xa9, 0x92, 0x3, 0x2, 0x2, 0x2, 0xa9, 
    0x93, 0x3, 0x2, 0x2, 0x2, 0xa9, 0x94, 0x3, 0x2, 0x2, 0x2, 0xa9, 0x95, 
    0x3, 0x2, 0x2, 0x2, 0xa9, 0xa1, 0x3, 0x2, 0x2, 0x2, 0xa9, 0xa6, 0x3, 
    0x2, 0x2, 0x2, 0xaa, 0xf, 0x3, 0x2, 0x2, 0x2, 0xab, 0xb2, 0x7, 0x35, 
    0x2, 0x2, 0xac, 0xad, 0x7, 0x35, 0x2, 0x2, 0xad, 0xae, 0x7, 0x27, 0x2, 
    0x2, 0xae, 0xaf, 0x5, 0x8, 0x5, 0x2, 0xaf, 0xb0, 0x7, 0x28, 0x2, 0x2, 
    0xb0, 0xb2, 0x3, 0x2, 0x2, 0x2, 0xb1, 0xab, 0x3, 0x2, 0x2, 0x2, 0xb1, 
    0xac, 0x3, 0x2, 0x2, 0x2, 0xb2, 0x11, 0x3, 0x2, 0x2, 0x2, 0xb3, 0xb6, 
    0x5, 0x1a, 0xe, 0x2, 0xb4, 0xb6, 0x5, 0x1c, 0xf, 0x2, 0xb5, 0xb3, 0x3, 
    0x2, 0x2, 0x2, 0xb5, 0xb4, 0x3, 0x2, 0x2, 0x2, 0xb6, 0x13, 0x3, 0x2, 
    0x2, 0x2, 0xb7, 0xba, 0x7, 0x36, 0x2, 0x2, 0xb8, 0xba, 0x7, 0x37, 0x2, 
    0x2, 0xb9, 0xb7, 0x3, 0x2, 0x2, 0x2, 0xb9, 0xb8, 0x3, 0x2, 0x2, 0x2, 
    0xba, 0x15, 0x3, 0x2, 0x2, 0x2, 0xbb, 0xbc, 0x9, 0x2, 0x2, 0x2, 0xbc, 
    0x17, 0x3, 0x2, 0x2, 0x2, 0xbd, 0xbe, 0x9, 0x3, 0x2, 0x2, 0xbe, 0x19, 
    0x3, 0x2, 0x2, 0x2, 0xbf, 0xc0, 0x7, 0x2d, 0x2, 0x2, 0xc0, 0xc1, 0x7, 
    0x1f, 0x2, 0x2, 0xc1, 0xc2, 0x5, 0x8, 0x5, 0x2, 0xc2, 0xc3, 0x7, 0x20, 
    0x2, 0x2, 0xc3, 0xc4, 0x5, 0x30, 0x19, 0x2, 0xc4, 0xce, 0x3, 0x2, 0x2, 
    0x2, 0xc5, 0xc6, 0x7, 0x2d, 0x2, 0x2, 0xc6, 0xc7, 0x7, 0x1f, 0x2, 0x2, 
    0xc7, 0xc8, 0x5, 0x8, 0x5, 0x2, 0xc8, 0xc9, 0x7, 0x20, 0x2, 0x2, 0xc9, 
    0xca, 0x5, 0x30, 0x19, 0x2, 0xca, 0xcb, 0x7, 0x2e, 0x2, 0x2, 0xcb, 0xcc, 
    0x5, 0x30, 0x19, 0x2, 0xcc, 0xce, 0x3, 0x2, 0x2, 0x2, 0xcd, 0xbf, 0x3, 
    0x2, 0x2, 0x2, 0xcd, 0xc5, 0x3, 0x2, 0x2, 0x2, 0xce, 0x1b, 0x3, 0x2, 
    0x2, 0x2, 0xcf, 0xd0, 0x7, 0x2f, 0x2, 0x2, 0xd0, 0xd1, 0x7, 0x1f, 0x2, 
    0x2, 0xd1, 0xd2, 0x5, 0x8, 0x5, 0x2, 0xd2, 0xd3, 0x7, 0x20, 0x2, 0x2, 
    0xd3, 0xd4, 0x5, 0x30, 0x19, 0x2, 0xd4, 0x1d, 0x3, 0x2, 0x2, 0x2, 0xd5, 
    0xda, 0x7, 0x36, 0x2, 0x2, 0xd6, 0xd7, 0x7, 0x1e, 0x2, 0x2, 0xd7, 0xd9, 
    0x7, 0x36, 0x2, 0x2, 0xd8, 0xd6, 0x3, 0x2, 0x2, 0x2, 0xd9, 0xdc, 0x3, 
    0x2, 0x2, 0x2, 0xda, 0xd8, 0x3, 0x2, 0x2, 0x2, 0xda, 0xdb, 0x3, 0x2, 
    0x2, 0x2, 0xdb, 0xe6, 0x3, 0x2, 0x2, 0x2, 0xdc, 0xda, 0x3, 0x2, 0x2, 
    0x2, 0xdd, 0xe2, 0x7, 0x37, 0x2, 0x2, 0xde, 0xdf, 0x7, 0x1e, 0x2, 0x2, 
    0xdf, 0xe1, 0x7, 0x37, 0x2, 0x2, 0xe0, 0xde, 0x3, 0x2, 0x2, 0x2, 0xe1, 
    0xe4, 0x3, 0x2, 0x2, 0x2, 0xe2, 0xe0, 0x3, 0x2, 0x2, 0x2, 0xe2, 0xe3, 
    0x3, 0x2, 0x2, 0x2, 0xe3, 0xe6, 0x3, 0x2, 0x2, 0x2, 0xe4, 0xe2, 0x3, 
    0x2, 0x2, 0x2, 0xe5, 0xd5, 0x3, 0x2, 0x2, 0x2, 0xe5, 0xdd, 0x3, 0x2, 
    0x2, 0x2, 0xe6, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xe8, 0x5, 0x22, 0x12, 
    0x2, 0xe8, 0xed, 0x5, 0x24, 0x13, 0x2, 0xe9, 0xea, 0x7, 0x1e, 0x2, 0x2, 
    0xea, 0xec, 0x5, 0x24, 0x13, 0x2, 0xeb, 0xe9, 0x3, 0x2, 0x2, 0x2, 0xec, 
    0xef, 0x3, 0x2, 0x2, 0x2, 0xed, 0xeb, 0x3, 0x2, 0x2, 0x2, 0xed, 0xee, 
    0x3, 0x2, 0x2, 0x2, 0xee, 0x10a, 0x3, 0x2, 0x2, 0x2, 0xef, 0xed, 0x3, 
    0x2, 0x2, 0x2, 0xf0, 0xf1, 0x7, 0x29, 0x2, 0x2, 0xf1, 0xf6, 0x5, 0x26, 
    0x14, 0x2, 0xf2, 0xf3, 0x7, 0x1e, 0x2, 0x2, 0xf3, 0xf5, 0x5, 0x26, 0x14, 
    0x2, 0xf4, 0xf2, 0x3, 0x2, 0x2, 0x2, 0xf5, 0xf8, 0x3, 0x2, 0x2, 0x2, 
    0xf6, 0xf4, 0x3, 0x2, 0x2, 0x2, 0xf6, 0xf7, 0x3, 0x2, 0x2, 0x2, 0xf7, 
    0x10a, 0x3, 0x2, 0x2, 0x2, 0xf8, 0xf6, 0x3, 0x2, 0x2, 0x2, 0xf9, 0xfa, 
    0x5, 0x16, 0xc, 0x2, 0xfa, 0xfb, 0x7, 0x35, 0x2, 0x2, 0xfb, 0xfc, 0x7, 
    0x27, 0x2, 0x2, 0xfc, 0xfd, 0x7, 0x36, 0x2, 0x2, 0xfd, 0xfe, 0x7, 0x28, 
    0x2, 0x2, 0xfe, 0x10a, 0x3, 0x2, 0x2, 0x2, 0xff, 0x100, 0x5, 0x16, 0xc, 
    0x2, 0x100, 0x101, 0x7, 0x35, 0x2, 0x2, 0x101, 0x102, 0x7, 0x27, 0x2, 
    0x2, 0x102, 0x103, 0x7, 0x36, 0x2, 0x2, 0x103, 0x104, 0x7, 0x28, 0x2, 
    0x2, 0x104, 0x105, 0x7, 0xa, 0x2, 0x2, 0x105, 0x106, 0x7, 0x30, 0x2, 
    0x2, 0x106, 0x107, 0x5, 0x1e, 0x10, 0x2, 0x107, 0x108, 0x7, 0x31, 0x2, 
    0x2, 0x108, 0x10a, 0x3, 0x2, 0x2, 0x2, 0x109, 0xe7, 0x3, 0x2, 0x2, 0x2, 
    0x109, 0xf0, 0x3, 0x2, 0x2, 0x2, 0x109, 0xf9, 0x3, 0x2, 0x2, 0x2, 0x109, 
    0xff, 0x3, 0x2, 0x2, 0x2, 0x10a, 0x21, 0x3, 0x2, 0x2, 0x2, 0x10b, 0x10e, 
    0x7, 0x2a, 0x2, 0x2, 0x10c, 0x10e, 0x7, 0x2b, 0x2, 0x2, 0x10d, 0x10b, 
    0x3, 0x2, 0x2, 0x2, 0x10d, 0x10c, 0x3, 0x2, 0x2, 0x2, 0x10e, 0x23, 0x3, 
    0x2, 0x2, 0x2, 0x10f, 0x114, 0x7, 0x35, 0x2, 0x2, 0x110, 0x111, 0x7, 
    0x35, 0x2, 0x2, 0x111, 0x112, 0x7, 0xa, 0x2, 0x2, 0x112, 0x114, 0x5, 
    0x14, 0xb, 0x2, 0x113, 0x10f, 0x3, 0x2, 0x2, 0x2, 0x113, 0x110, 0x3, 
    0x2, 0x2, 0x2, 0x114, 0x25, 0x3, 0x2, 0x2, 0x2, 0x115, 0x11a, 0x7, 0x35, 
    0x2, 0x2, 0x116, 0x117, 0x7, 0x35, 0x2, 0x2, 0x117, 0x118, 0x7, 0xa, 
    0x2, 0x2, 0x118, 0x11a, 0x5, 0x14, 0xb, 0x2, 0x119, 0x115, 0x3, 0x2, 
    0x2, 0x2, 0x119, 0x116, 0x3, 0x2, 0x2, 0x2, 0x11a, 0x27, 0x3, 0x2, 0x2, 
    0x2, 0x11b, 0x128, 0x7, 0x2c, 0x2, 0x2, 0x11c, 0x11d, 0x5, 0x16, 0xc, 
    0x2, 0x11d, 0x124, 0x7, 0x35, 0x2, 0x2, 0x11e, 0x11f, 0x7, 0x1e, 0x2, 
    0x2, 0x11f, 0x120, 0x5, 0x16, 0xc, 0x2, 0x120, 0x121, 0x7, 0x35, 0x2, 
    0x2, 0x121, 0x123, 0x3, 0x2, 0x2, 0x2, 0x122, 0x11e, 0x3, 0x2, 0x2, 
    0x2, 0x123, 0x126, 0x3, 0x2, 0x2, 0x2, 0x124, 0x122, 0x3, 0x2, 0x2, 
    0x2, 0x124, 0x125, 0x3, 0x2, 0x2, 0x2, 0x125, 0x128, 0x3, 0x2, 0x2, 
    0x2, 0x126, 0x124, 0x3, 0x2, 0x2, 0x2, 0x127, 0x11b, 0x3, 0x2, 0x2, 
    0x2, 0x127, 0x11c, 0x3, 0x2, 0x2, 0x2, 0x128, 0x29, 0x3, 0x2, 0x2, 0x2, 
    0x129, 0x12a, 0x5, 0x18, 0xd, 0x2, 0x12a, 0x12b, 0x7, 0x35, 0x2, 0x2, 
    0x12b, 0x12c, 0x7, 0x1f, 0x2, 0x2, 0x12c, 0x12d, 0x5, 0x28, 0x15, 0x2, 
    0x12d, 0x12e, 0x7, 0x20, 0x2, 0x2, 0x12e, 0x12f, 0x7, 0x30, 0x2, 0x2, 
    0x12f, 0x130, 0x5, 0x2c, 0x17, 0x2, 0x130, 0x131, 0x5, 0x2e, 0x18, 0x2, 
    0x131, 0x132, 0x7, 0x31, 0x2, 0x2, 0x132, 0x13d, 0x3, 0x2, 0x2, 0x2, 
    0x133, 0x134, 0x5, 0x18, 0xd, 0x2, 0x134, 0x135, 0x7, 0x35, 0x2, 0x2, 
    0x135, 0x136, 0x7, 0x1f, 0x2, 0x2, 0x136, 0x137, 0x7, 0x20, 0x2, 0x2, 
    0x137, 0x138, 0x7, 0x30, 0x2, 0x2, 0x138, 0x139, 0x5, 0x2c, 0x17, 0x2, 
    0x139, 0x13a, 0x5, 0x2e, 0x18, 0x2, 0x13a, 0x13b, 0x7, 0x31, 0x2, 0x2, 
    0x13b, 0x13d, 0x3, 0x2, 0x2, 0x2, 0x13c, 0x129, 0x3, 0x2, 0x2, 0x2, 
    0x13c, 0x133, 0x3, 0x2, 0x2, 0x2, 0x13d, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x13e, 
    0x13f, 0x5, 0x20, 0x11, 0x2, 0x13f, 0x140, 0x7, 0x32, 0x2, 0x2, 0x140, 
    0x142, 0x3, 0x2, 0x2, 0x2, 0x141, 0x13e, 0x3, 0x2, 0x2, 0x2, 0x142, 
    0x145, 0x3, 0x2, 0x2, 0x2, 0x143, 0x141, 0x3, 0x2, 0x2, 0x2, 0x143, 
    0x144, 0x3, 0x2, 0x2, 0x2, 0x144, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x145, 0x143, 
    0x3, 0x2, 0x2, 0x2, 0x146, 0x148, 0x5, 0x30, 0x19, 0x2, 0x147, 0x146, 
    0x3, 0x2, 0x2, 0x2, 0x148, 0x14b, 0x3, 0x2, 0x2, 0x2, 0x149, 0x147, 
    0x3, 0x2, 0x2, 0x2, 0x149, 0x14a, 0x3, 0x2, 0x2, 0x2, 0x14a, 0x2f, 0x3, 
    0x2, 0x2, 0x2, 0x14b, 0x149, 0x3, 0x2, 0x2, 0x2, 0x14c, 0x14d, 0x7, 
    0x30, 0x2, 0x2, 0x14d, 0x14e, 0x5, 0x2e, 0x18, 0x2, 0x14e, 0x14f, 0x7, 
    0x31, 0x2, 0x2, 0x14f, 0x15b, 0x3, 0x2, 0x2, 0x2, 0x150, 0x151, 0x7, 
    0x33, 0x2, 0x2, 0x151, 0x15b, 0x7, 0x32, 0x2, 0x2, 0x152, 0x15b, 0x5, 
    0x12, 0xa, 0x2, 0x153, 0x154, 0x7, 0x34, 0x2, 0x2, 0x154, 0x155, 0x5, 
    0x8, 0x5, 0x2, 0x155, 0x156, 0x7, 0x32, 0x2, 0x2, 0x156, 0x15b, 0x3, 
    0x2, 0x2, 0x2, 0x157, 0x158, 0x5, 0x8, 0x5, 0x2, 0x158, 0x159, 0x7, 
    0x32, 0x2, 0x2, 0x159, 0x15b, 0x3, 0x2, 0x2, 0x2, 0x15a, 0x14c, 0x3, 
    0x2, 0x2, 0x2, 0x15a, 0x150, 0x3, 0x2, 0x2, 0x2, 0x15a, 0x152, 0x3, 
    0x2, 0x2, 0x2, 0x15a, 0x153, 0x3, 0x2, 0x2, 0x2, 0x15a, 0x157, 0x3, 
    0x2, 0x2, 0x2, 0x15b, 0x31, 0x3, 0x2, 0x2, 0x2, 0x15c, 0x160, 0x5, 0x2c, 
    0x17, 0x2, 0x15d, 0x15f, 0x5, 0x2a, 0x16, 0x2, 0x15e, 0x15d, 0x3, 0x2, 
    0x2, 0x2, 0x15f, 0x162, 0x3, 0x2, 0x2, 0x2, 0x160, 0x15e, 0x3, 0x2, 
    0x2, 0x2, 0x160, 0x161, 0x3, 0x2, 0x2, 0x2, 0x161, 0x33, 0x3, 0x2, 0x2, 
    0x2, 0x162, 0x160, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x39, 0x3e, 0x54, 0x5f, 
    0x6b, 0x77, 0x9c, 0xa9, 0xb1, 0xb5, 0xb9, 0xcd, 0xda, 0xe2, 0xe5, 0xed, 
    0xf6, 0x109, 0x10d, 0x113, 0x119, 0x124, 0x127, 0x13c, 0x143, 0x149, 
    0x15a, 0x160, 
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
