
// Generated from PLDCOMP.g4 by ANTLR 4.7.1


#include "PLDCOMPListener.h"
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

void PLDCOMPParser::DivContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDiv(this);
}
void PLDCOMPParser::DivContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDiv(this);
}

antlrcpp::Any PLDCOMPParser::DivContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitDiv(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MultContext ------------------------------------------------------------------

PLDCOMPParser::MultContext::MultContext(OpPrioritaireContext *ctx) { copyFrom(ctx); }

void PLDCOMPParser::MultContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMult(this);
}
void PLDCOMPParser::MultContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMult(this);
}

antlrcpp::Any PLDCOMPParser::MultContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitMult(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AndbContext ------------------------------------------------------------------

PLDCOMPParser::AndbContext::AndbContext(OpPrioritaireContext *ctx) { copyFrom(ctx); }

void PLDCOMPParser::AndbContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAndb(this);
}
void PLDCOMPParser::AndbContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAndb(this);
}

antlrcpp::Any PLDCOMPParser::AndbContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitAndb(this);
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
    setState(49);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PLDCOMPParser::T__0: {
        _localctx = dynamic_cast<OpPrioritaireContext *>(_tracker.createInstance<PLDCOMPParser::MultContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(46);
        match(PLDCOMPParser::T__0);
        break;
      }

      case PLDCOMPParser::T__1: {
        _localctx = dynamic_cast<OpPrioritaireContext *>(_tracker.createInstance<PLDCOMPParser::DivContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(47);
        match(PLDCOMPParser::T__1);
        break;
      }

      case PLDCOMPParser::T__2: {
        _localctx = dynamic_cast<OpPrioritaireContext *>(_tracker.createInstance<PLDCOMPParser::AndbContext>(_localctx));
        enterOuterAlt(_localctx, 3);
        setState(48);
        match(PLDCOMPParser::T__2);
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

//----------------- ModContext ------------------------------------------------------------------

PLDCOMPParser::ModContext::ModContext(OpSecondaireContext *ctx) { copyFrom(ctx); }

void PLDCOMPParser::ModContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMod(this);
}
void PLDCOMPParser::ModContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMod(this);
}

antlrcpp::Any PLDCOMPParser::ModContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitMod(this);
  else
    return visitor->visitChildren(this);
}
//----------------- InfsContext ------------------------------------------------------------------

PLDCOMPParser::InfsContext::InfsContext(OpSecondaireContext *ctx) { copyFrom(ctx); }

void PLDCOMPParser::InfsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInfs(this);
}
void PLDCOMPParser::InfsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInfs(this);
}

antlrcpp::Any PLDCOMPParser::InfsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitInfs(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AddeqContext ------------------------------------------------------------------

PLDCOMPParser::AddeqContext::AddeqContext(OpSecondaireContext *ctx) { copyFrom(ctx); }

void PLDCOMPParser::AddeqContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAddeq(this);
}
void PLDCOMPParser::AddeqContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAddeq(this);
}

antlrcpp::Any PLDCOMPParser::AddeqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitAddeq(this);
  else
    return visitor->visitChildren(this);
}
//----------------- XoreqContext ------------------------------------------------------------------

PLDCOMPParser::XoreqContext::XoreqContext(OpSecondaireContext *ctx) { copyFrom(ctx); }

void PLDCOMPParser::XoreqContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterXoreq(this);
}
void PLDCOMPParser::XoreqContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitXoreq(this);
}

antlrcpp::Any PLDCOMPParser::XoreqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitXoreq(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AndeqContext ------------------------------------------------------------------

PLDCOMPParser::AndeqContext::AndeqContext(OpSecondaireContext *ctx) { copyFrom(ctx); }

void PLDCOMPParser::AndeqContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAndeq(this);
}
void PLDCOMPParser::AndeqContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAndeq(this);
}

antlrcpp::Any PLDCOMPParser::AndeqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitAndeq(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DecgContext ------------------------------------------------------------------

PLDCOMPParser::DecgContext::DecgContext(OpSecondaireContext *ctx) { copyFrom(ctx); }

void PLDCOMPParser::DecgContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDecg(this);
}
void PLDCOMPParser::DecgContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDecg(this);
}

antlrcpp::Any PLDCOMPParser::DecgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitDecg(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DecdContext ------------------------------------------------------------------

PLDCOMPParser::DecdContext::DecdContext(OpSecondaireContext *ctx) { copyFrom(ctx); }

void PLDCOMPParser::DecdContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDecd(this);
}
void PLDCOMPParser::DecdContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDecd(this);
}

antlrcpp::Any PLDCOMPParser::DecdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitDecd(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DiveqContext ------------------------------------------------------------------

PLDCOMPParser::DiveqContext::DiveqContext(OpSecondaireContext *ctx) { copyFrom(ctx); }

void PLDCOMPParser::DiveqContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDiveq(this);
}
void PLDCOMPParser::DiveqContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDiveq(this);
}

antlrcpp::Any PLDCOMPParser::DiveqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitDiveq(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SupContext ------------------------------------------------------------------

PLDCOMPParser::SupContext::SupContext(OpSecondaireContext *ctx) { copyFrom(ctx); }

void PLDCOMPParser::SupContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSup(this);
}
void PLDCOMPParser::SupContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSup(this);
}

antlrcpp::Any PLDCOMPParser::SupContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitSup(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SupsContext ------------------------------------------------------------------

PLDCOMPParser::SupsContext::SupsContext(OpSecondaireContext *ctx) { copyFrom(ctx); }

void PLDCOMPParser::SupsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSups(this);
}
void PLDCOMPParser::SupsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSups(this);
}

antlrcpp::Any PLDCOMPParser::SupsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitSups(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MoinseqContext ------------------------------------------------------------------

PLDCOMPParser::MoinseqContext::MoinseqContext(OpSecondaireContext *ctx) { copyFrom(ctx); }

void PLDCOMPParser::MoinseqContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMoinseq(this);
}
void PLDCOMPParser::MoinseqContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMoinseq(this);
}

antlrcpp::Any PLDCOMPParser::MoinseqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitMoinseq(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AndContext ------------------------------------------------------------------

PLDCOMPParser::AndContext::AndContext(OpSecondaireContext *ctx) { copyFrom(ctx); }

void PLDCOMPParser::AndContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnd(this);
}
void PLDCOMPParser::AndContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnd(this);
}

antlrcpp::Any PLDCOMPParser::AndContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitAnd(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PowContext ------------------------------------------------------------------

PLDCOMPParser::PowContext::PowContext(OpSecondaireContext *ctx) { copyFrom(ctx); }

void PLDCOMPParser::PowContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPow(this);
}
void PLDCOMPParser::PowContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPow(this);
}

antlrcpp::Any PLDCOMPParser::PowContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitPow(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ModeqContext ------------------------------------------------------------------

PLDCOMPParser::ModeqContext::ModeqContext(OpSecondaireContext *ctx) { copyFrom(ctx); }

void PLDCOMPParser::ModeqContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterModeq(this);
}
void PLDCOMPParser::ModeqContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitModeq(this);
}

antlrcpp::Any PLDCOMPParser::ModeqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitModeq(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OrbContext ------------------------------------------------------------------

PLDCOMPParser::OrbContext::OrbContext(OpSecondaireContext *ctx) { copyFrom(ctx); }

void PLDCOMPParser::OrbContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOrb(this);
}
void PLDCOMPParser::OrbContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOrb(this);
}

antlrcpp::Any PLDCOMPParser::OrbContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitOrb(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AddContext ------------------------------------------------------------------

PLDCOMPParser::AddContext::AddContext(OpSecondaireContext *ctx) { copyFrom(ctx); }

void PLDCOMPParser::AddContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAdd(this);
}
void PLDCOMPParser::AddContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAdd(this);
}

antlrcpp::Any PLDCOMPParser::AddContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitAdd(this);
  else
    return visitor->visitChildren(this);
}
//----------------- InfContext ------------------------------------------------------------------

PLDCOMPParser::InfContext::InfContext(OpSecondaireContext *ctx) { copyFrom(ctx); }

void PLDCOMPParser::InfContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInf(this);
}
void PLDCOMPParser::InfContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInf(this);
}

antlrcpp::Any PLDCOMPParser::InfContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitInf(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OrContext ------------------------------------------------------------------

PLDCOMPParser::OrContext::OrContext(OpSecondaireContext *ctx) { copyFrom(ctx); }

void PLDCOMPParser::OrContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOr(this);
}
void PLDCOMPParser::OrContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOr(this);
}

antlrcpp::Any PLDCOMPParser::OrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitOr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- EqualbContext ------------------------------------------------------------------

PLDCOMPParser::EqualbContext::EqualbContext(OpSecondaireContext *ctx) { copyFrom(ctx); }

void PLDCOMPParser::EqualbContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEqualb(this);
}
void PLDCOMPParser::EqualbContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEqualb(this);
}

antlrcpp::Any PLDCOMPParser::EqualbContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitEqualb(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DiffContext ------------------------------------------------------------------

PLDCOMPParser::DiffContext::DiffContext(OpSecondaireContext *ctx) { copyFrom(ctx); }

void PLDCOMPParser::DiffContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDiff(this);
}
void PLDCOMPParser::DiffContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDiff(this);
}

antlrcpp::Any PLDCOMPParser::DiffContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitDiff(this);
  else
    return visitor->visitChildren(this);
}
//----------------- EqualContext ------------------------------------------------------------------

PLDCOMPParser::EqualContext::EqualContext(OpSecondaireContext *ctx) { copyFrom(ctx); }

void PLDCOMPParser::EqualContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEqual(this);
}
void PLDCOMPParser::EqualContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEqual(this);
}

antlrcpp::Any PLDCOMPParser::EqualContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitEqual(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CommaContext ------------------------------------------------------------------

PLDCOMPParser::CommaContext::CommaContext(OpSecondaireContext *ctx) { copyFrom(ctx); }

void PLDCOMPParser::CommaContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComma(this);
}
void PLDCOMPParser::CommaContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComma(this);
}

antlrcpp::Any PLDCOMPParser::CommaContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitComma(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MoinsContext ------------------------------------------------------------------

PLDCOMPParser::MoinsContext::MoinsContext(OpSecondaireContext *ctx) { copyFrom(ctx); }

void PLDCOMPParser::MoinsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMoins(this);
}
void PLDCOMPParser::MoinsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMoins(this);
}

antlrcpp::Any PLDCOMPParser::MoinsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitMoins(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OreqContext ------------------------------------------------------------------

PLDCOMPParser::OreqContext::OreqContext(OpSecondaireContext *ctx) { copyFrom(ctx); }

void PLDCOMPParser::OreqContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOreq(this);
}
void PLDCOMPParser::OreqContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOreq(this);
}

antlrcpp::Any PLDCOMPParser::OreqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitOreq(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MulteqContext ------------------------------------------------------------------

PLDCOMPParser::MulteqContext::MulteqContext(OpSecondaireContext *ctx) { copyFrom(ctx); }

void PLDCOMPParser::MulteqContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMulteq(this);
}
void PLDCOMPParser::MulteqContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMulteq(this);
}

antlrcpp::Any PLDCOMPParser::MulteqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitMulteq(this);
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
    setState(76);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PLDCOMPParser::T__3: {
        _localctx = dynamic_cast<OpSecondaireContext *>(_tracker.createInstance<PLDCOMPParser::AddContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(51);
        match(PLDCOMPParser::T__3);
        break;
      }

      case PLDCOMPParser::T__4: {
        _localctx = dynamic_cast<OpSecondaireContext *>(_tracker.createInstance<PLDCOMPParser::MoinsContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(52);
        match(PLDCOMPParser::T__4);
        break;
      }

      case PLDCOMPParser::T__5: {
        _localctx = dynamic_cast<OpSecondaireContext *>(_tracker.createInstance<PLDCOMPParser::OrbContext>(_localctx));
        enterOuterAlt(_localctx, 3);
        setState(53);
        match(PLDCOMPParser::T__5);
        break;
      }

      case PLDCOMPParser::T__6: {
        _localctx = dynamic_cast<OpSecondaireContext *>(_tracker.createInstance<PLDCOMPParser::ModContext>(_localctx));
        enterOuterAlt(_localctx, 4);
        setState(54);
        match(PLDCOMPParser::T__6);
        break;
      }

      case PLDCOMPParser::T__7: {
        _localctx = dynamic_cast<OpSecondaireContext *>(_tracker.createInstance<PLDCOMPParser::PowContext>(_localctx));
        enterOuterAlt(_localctx, 5);
        setState(55);
        match(PLDCOMPParser::T__7);
        break;
      }

      case PLDCOMPParser::T__8: {
        _localctx = dynamic_cast<OpSecondaireContext *>(_tracker.createInstance<PLDCOMPParser::AndContext>(_localctx));
        enterOuterAlt(_localctx, 6);
        setState(56);
        match(PLDCOMPParser::T__8);
        break;
      }

      case PLDCOMPParser::T__9: {
        _localctx = dynamic_cast<OpSecondaireContext *>(_tracker.createInstance<PLDCOMPParser::OrContext>(_localctx));
        enterOuterAlt(_localctx, 7);
        setState(57);
        match(PLDCOMPParser::T__9);
        break;
      }

      case PLDCOMPParser::T__10: {
        _localctx = dynamic_cast<OpSecondaireContext *>(_tracker.createInstance<PLDCOMPParser::EqualContext>(_localctx));
        enterOuterAlt(_localctx, 8);
        setState(58);
        match(PLDCOMPParser::T__10);
        break;
      }

      case PLDCOMPParser::T__11: {
        _localctx = dynamic_cast<OpSecondaireContext *>(_tracker.createInstance<PLDCOMPParser::AddeqContext>(_localctx));
        enterOuterAlt(_localctx, 9);
        setState(59);
        match(PLDCOMPParser::T__11);
        break;
      }

      case PLDCOMPParser::T__12: {
        _localctx = dynamic_cast<OpSecondaireContext *>(_tracker.createInstance<PLDCOMPParser::MoinseqContext>(_localctx));
        enterOuterAlt(_localctx, 10);
        setState(60);
        match(PLDCOMPParser::T__12);
        break;
      }

      case PLDCOMPParser::T__13: {
        _localctx = dynamic_cast<OpSecondaireContext *>(_tracker.createInstance<PLDCOMPParser::MulteqContext>(_localctx));
        enterOuterAlt(_localctx, 11);
        setState(61);
        match(PLDCOMPParser::T__13);
        break;
      }

      case PLDCOMPParser::T__14: {
        _localctx = dynamic_cast<OpSecondaireContext *>(_tracker.createInstance<PLDCOMPParser::DiveqContext>(_localctx));
        enterOuterAlt(_localctx, 12);
        setState(62);
        match(PLDCOMPParser::T__14);
        break;
      }

      case PLDCOMPParser::T__15: {
        _localctx = dynamic_cast<OpSecondaireContext *>(_tracker.createInstance<PLDCOMPParser::ModeqContext>(_localctx));
        enterOuterAlt(_localctx, 13);
        setState(63);
        match(PLDCOMPParser::T__15);
        break;
      }

      case PLDCOMPParser::T__16: {
        _localctx = dynamic_cast<OpSecondaireContext *>(_tracker.createInstance<PLDCOMPParser::AndeqContext>(_localctx));
        enterOuterAlt(_localctx, 14);
        setState(64);
        match(PLDCOMPParser::T__16);
        break;
      }

      case PLDCOMPParser::T__17: {
        _localctx = dynamic_cast<OpSecondaireContext *>(_tracker.createInstance<PLDCOMPParser::OreqContext>(_localctx));
        enterOuterAlt(_localctx, 15);
        setState(65);
        match(PLDCOMPParser::T__17);
        break;
      }

      case PLDCOMPParser::T__18: {
        _localctx = dynamic_cast<OpSecondaireContext *>(_tracker.createInstance<PLDCOMPParser::XoreqContext>(_localctx));
        enterOuterAlt(_localctx, 16);
        setState(66);
        match(PLDCOMPParser::T__18);
        break;
      }

      case PLDCOMPParser::T__19: {
        _localctx = dynamic_cast<OpSecondaireContext *>(_tracker.createInstance<PLDCOMPParser::InfsContext>(_localctx));
        enterOuterAlt(_localctx, 17);
        setState(67);
        match(PLDCOMPParser::T__19);
        break;
      }

      case PLDCOMPParser::T__20: {
        _localctx = dynamic_cast<OpSecondaireContext *>(_tracker.createInstance<PLDCOMPParser::InfContext>(_localctx));
        enterOuterAlt(_localctx, 18);
        setState(68);
        match(PLDCOMPParser::T__20);
        break;
      }

      case PLDCOMPParser::T__21: {
        _localctx = dynamic_cast<OpSecondaireContext *>(_tracker.createInstance<PLDCOMPParser::SupsContext>(_localctx));
        enterOuterAlt(_localctx, 19);
        setState(69);
        match(PLDCOMPParser::T__21);
        break;
      }

      case PLDCOMPParser::T__22: {
        _localctx = dynamic_cast<OpSecondaireContext *>(_tracker.createInstance<PLDCOMPParser::SupContext>(_localctx));
        enterOuterAlt(_localctx, 20);
        setState(70);
        match(PLDCOMPParser::T__22);
        break;
      }

      case PLDCOMPParser::T__23: {
        _localctx = dynamic_cast<OpSecondaireContext *>(_tracker.createInstance<PLDCOMPParser::DecgContext>(_localctx));
        enterOuterAlt(_localctx, 21);
        setState(71);
        match(PLDCOMPParser::T__23);
        break;
      }

      case PLDCOMPParser::T__24: {
        _localctx = dynamic_cast<OpSecondaireContext *>(_tracker.createInstance<PLDCOMPParser::DecdContext>(_localctx));
        enterOuterAlt(_localctx, 22);
        setState(72);
        match(PLDCOMPParser::T__24);
        break;
      }

      case PLDCOMPParser::T__25: {
        _localctx = dynamic_cast<OpSecondaireContext *>(_tracker.createInstance<PLDCOMPParser::EqualbContext>(_localctx));
        enterOuterAlt(_localctx, 23);
        setState(73);
        match(PLDCOMPParser::T__25);
        break;
      }

      case PLDCOMPParser::T__26: {
        _localctx = dynamic_cast<OpSecondaireContext *>(_tracker.createInstance<PLDCOMPParser::DiffContext>(_localctx));
        enterOuterAlt(_localctx, 24);
        setState(74);
        match(PLDCOMPParser::T__26);
        break;
      }

      case PLDCOMPParser::T__27: {
        _localctx = dynamic_cast<OpSecondaireContext *>(_tracker.createInstance<PLDCOMPParser::CommaContext>(_localctx));
        enterOuterAlt(_localctx, 25);
        setState(75);
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

void PLDCOMPParser::ExpLvalueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpLvalue(this);
}
void PLDCOMPParser::ExpLvalueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpLvalue(this);
}

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

void PLDCOMPParser::NegationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNegation(this);
}
void PLDCOMPParser::NegationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNegation(this);
}

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

void PLDCOMPParser::PpexpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPpexp(this);
}
void PLDCOMPParser::PpexpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPpexp(this);
}

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

void PLDCOMPParser::InvertContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInvert(this);
}
void PLDCOMPParser::InvertContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInvert(this);
}

antlrcpp::Any PLDCOMPParser::InvertContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitInvert(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AppelGetcharContext ------------------------------------------------------------------

PLDCOMPParser::AppelGetcharContext::AppelGetcharContext(ExpContext *ctx) { copyFrom(ctx); }

void PLDCOMPParser::AppelGetcharContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAppelGetchar(this);
}
void PLDCOMPParser::AppelGetcharContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAppelGetchar(this);
}

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

void PLDCOMPParser::ConstanteNombreContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstanteNombre(this);
}
void PLDCOMPParser::ConstanteNombreContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstanteNombre(this);
}

antlrcpp::Any PLDCOMPParser::ConstanteNombreContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitConstanteNombre(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OperateurBinaireSecondaireContext ------------------------------------------------------------------

PLDCOMPParser::ExpContext* PLDCOMPParser::OperateurBinaireSecondaireContext::exp() {
  return getRuleContext<PLDCOMPParser::ExpContext>(0);
}

PLDCOMPParser::OpSecondaireContext* PLDCOMPParser::OperateurBinaireSecondaireContext::opSecondaire() {
  return getRuleContext<PLDCOMPParser::OpSecondaireContext>(0);
}

PLDCOMPParser::ExpPrioritaireContext* PLDCOMPParser::OperateurBinaireSecondaireContext::expPrioritaire() {
  return getRuleContext<PLDCOMPParser::ExpPrioritaireContext>(0);
}

PLDCOMPParser::OperateurBinaireSecondaireContext::OperateurBinaireSecondaireContext(ExpContext *ctx) { copyFrom(ctx); }

void PLDCOMPParser::OperateurBinaireSecondaireContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperateurBinaireSecondaire(this);
}
void PLDCOMPParser::OperateurBinaireSecondaireContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperateurBinaireSecondaire(this);
}

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

PLDCOMPParser::ExpressionPrioritaireContext::ExpressionPrioritaireContext(ExpContext *ctx) { copyFrom(ctx); }

void PLDCOMPParser::ExpressionPrioritaireContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpressionPrioritaire(this);
}
void PLDCOMPParser::ExpressionPrioritaireContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpressionPrioritaire(this);
}

antlrcpp::Any PLDCOMPParser::ExpressionPrioritaireContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitExpressionPrioritaire(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NonContext ------------------------------------------------------------------

PLDCOMPParser::ExpContext* PLDCOMPParser::NonContext::exp() {
  return getRuleContext<PLDCOMPParser::ExpContext>(0);
}

PLDCOMPParser::NonContext::NonContext(ExpContext *ctx) { copyFrom(ctx); }

void PLDCOMPParser::NonContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNon(this);
}
void PLDCOMPParser::NonContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNon(this);
}

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

void PLDCOMPParser::ConstanteCaractereContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstanteCaractere(this);
}
void PLDCOMPParser::ConstanteCaractereContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstanteCaractere(this);
}

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

void PLDCOMPParser::AppelDeFonctionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAppelDeFonction(this);
}
void PLDCOMPParser::AppelDeFonctionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAppelDeFonction(this);
}

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

void PLDCOMPParser::MmexpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMmexp(this);
}
void PLDCOMPParser::MmexpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMmexp(this);
}

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

void PLDCOMPParser::AffectationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAffectation(this);
}
void PLDCOMPParser::AffectationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAffectation(this);
}

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

PLDCOMPParser::AppelPutcharContext::AppelPutcharContext(ExpContext *ctx) { copyFrom(ctx); }

void PLDCOMPParser::AppelPutcharContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAppelPutchar(this);
}
void PLDCOMPParser::AppelPutcharContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAppelPutchar(this);
}

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

void PLDCOMPParser::ExpppContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExppp(this);
}
void PLDCOMPParser::ExpppContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExppp(this);
}

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

void PLDCOMPParser::ExpmmContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpmm(this);
}
void PLDCOMPParser::ExpmmContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpmm(this);
}

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
  size_t startState = 4;
  enterRecursionRule(_localctx, 4, PLDCOMPParser::RuleExp, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(123);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<ExpressionPrioritaireContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(79);
      expPrioritaire(0);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<NonContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(80);
      match(PLDCOMPParser::T__28);
      setState(81);
      exp(14);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<NegationContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(82);
      match(PLDCOMPParser::T__4);
      setState(83);
      exp(13);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<InvertContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(84);
      match(PLDCOMPParser::T__29);
      setState(85);
      exp(12);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<ExpppContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(86);
      lvalue();
      setState(87);
      match(PLDCOMPParser::T__30);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<ExpmmContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(89);
      lvalue();
      setState(90);
      match(PLDCOMPParser::T__31);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<PpexpContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(92);
      match(PLDCOMPParser::T__30);
      setState(93);
      lvalue();
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<MmexpContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(94);
      match(PLDCOMPParser::T__31);
      setState(95);
      lvalue();
      break;
    }

    case 9: {
      _localctx = _tracker.createInstance<AffectationContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(96);
      lvalue();
      setState(97);
      match(PLDCOMPParser::T__10);
      setState(98);
      exp(7);
      break;
    }

    case 10: {
      _localctx = _tracker.createInstance<ConstanteNombreContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(100);
      match(PLDCOMPParser::NOMBRE);
      break;
    }

    case 11: {
      _localctx = _tracker.createInstance<ConstanteCaractereContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(101);
      match(PLDCOMPParser::CHAR);
      break;
    }

    case 12: {
      _localctx = _tracker.createInstance<ExpLvalueContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(102);
      lvalue();
      break;
    }

    case 13: {
      _localctx = _tracker.createInstance<AppelDeFonctionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(103);
      match(PLDCOMPParser::NOMVAR);
      setState(104);
      match(PLDCOMPParser::T__32);
      setState(105);
      exp(0);
      setState(110);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == PLDCOMPParser::T__27) {
        setState(106);
        match(PLDCOMPParser::T__27);
        setState(107);
        exp(0);
        setState(112);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(113);
      match(PLDCOMPParser::T__33);
      break;
    }

    case 14: {
      _localctx = _tracker.createInstance<AppelPutcharContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(115);
      match(PLDCOMPParser::T__34);
      setState(116);
      match(PLDCOMPParser::T__32);
      setState(117);
      exp(0);
      setState(118);
      match(PLDCOMPParser::T__33);
      break;
    }

    case 15: {
      _localctx = _tracker.createInstance<AppelGetcharContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(120);
      match(PLDCOMPParser::T__35);
      setState(121);
      match(PLDCOMPParser::T__32);
      setState(122);
      match(PLDCOMPParser::T__33);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(131);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<OperateurBinaireSecondaireContext>(_tracker.createInstance<ExpContext>(parentContext, parentState));
        _localctx = newContext;
        pushNewRecursionContext(newContext, startState, RuleExp);
        setState(125);

        if (!(precpred(_ctx, 16))) throw FailedPredicateException(this, "precpred(_ctx, 16)");
        setState(126);
        opSecondaire();
        setState(127);
        expPrioritaire(0); 
      }
      setState(133);
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

void PLDCOMPParser::ExpressionParentheseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpressionParenthese(this);
}
void PLDCOMPParser::ExpressionParentheseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpressionParenthese(this);
}

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

void PLDCOMPParser::OperateurBinairePrioritaireContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperateurBinairePrioritaire(this);
}
void PLDCOMPParser::OperateurBinairePrioritaireContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperateurBinairePrioritaire(this);
}

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
  size_t startState = 6;
  enterRecursionRule(_localctx, 6, PLDCOMPParser::RuleExpPrioritaire, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    _localctx = _tracker.createInstance<ExpressionParentheseContext>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(135);
    expParenthese();
    _ctx->stop = _input->LT(-1);
    setState(143);
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
        setState(137);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(138);
        opPrioritaire();
        setState(139);
        expParenthese(); 
      }
      setState(145);
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

//----------------- ExpressionNombreContext ------------------------------------------------------------------

tree::TerminalNode* PLDCOMPParser::ExpressionNombreContext::NOMBRE() {
  return getToken(PLDCOMPParser::NOMBRE, 0);
}

PLDCOMPParser::ExpressionNombreContext::ExpressionNombreContext(ExpParentheseContext *ctx) { copyFrom(ctx); }

void PLDCOMPParser::ExpressionNombreContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpressionNombre(this);
}
void PLDCOMPParser::ExpressionNombreContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpressionNombre(this);
}

antlrcpp::Any PLDCOMPParser::ExpressionNombreContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitExpressionNombre(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExpressionCaractereContext ------------------------------------------------------------------

tree::TerminalNode* PLDCOMPParser::ExpressionCaractereContext::CHAR() {
  return getToken(PLDCOMPParser::CHAR, 0);
}

PLDCOMPParser::ExpressionCaractereContext::ExpressionCaractereContext(ExpParentheseContext *ctx) { copyFrom(ctx); }

void PLDCOMPParser::ExpressionCaractereContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpressionCaractere(this);
}
void PLDCOMPParser::ExpressionCaractereContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpressionCaractere(this);
}

antlrcpp::Any PLDCOMPParser::ExpressionCaractereContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitExpressionCaractere(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParentheseContext ------------------------------------------------------------------

PLDCOMPParser::ExpContext* PLDCOMPParser::ParentheseContext::exp() {
  return getRuleContext<PLDCOMPParser::ExpContext>(0);
}

PLDCOMPParser::ParentheseContext::ParentheseContext(ExpParentheseContext *ctx) { copyFrom(ctx); }

void PLDCOMPParser::ParentheseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParenthese(this);
}
void PLDCOMPParser::ParentheseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParenthese(this);
}

antlrcpp::Any PLDCOMPParser::ParentheseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitParenthese(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExpressionLvalueContext ------------------------------------------------------------------

PLDCOMPParser::LvalueContext* PLDCOMPParser::ExpressionLvalueContext::lvalue() {
  return getRuleContext<PLDCOMPParser::LvalueContext>(0);
}

PLDCOMPParser::ExpressionLvalueContext::ExpressionLvalueContext(ExpParentheseContext *ctx) { copyFrom(ctx); }

void PLDCOMPParser::ExpressionLvalueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpressionLvalue(this);
}
void PLDCOMPParser::ExpressionLvalueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpressionLvalue(this);
}

antlrcpp::Any PLDCOMPParser::ExpressionLvalueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitExpressionLvalue(this);
  else
    return visitor->visitChildren(this);
}
PLDCOMPParser::ExpParentheseContext* PLDCOMPParser::expParenthese() {
  ExpParentheseContext *_localctx = _tracker.createInstance<ExpParentheseContext>(_ctx, getState());
  enterRule(_localctx, 8, PLDCOMPParser::RuleExpParenthese);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(153);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PLDCOMPParser::T__32: {
        _localctx = dynamic_cast<ExpParentheseContext *>(_tracker.createInstance<PLDCOMPParser::ParentheseContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(146);
        match(PLDCOMPParser::T__32);
        setState(147);
        exp(0);
        setState(148);
        match(PLDCOMPParser::T__33);
        break;
      }

      case PLDCOMPParser::NOMBRE: {
        _localctx = dynamic_cast<ExpParentheseContext *>(_tracker.createInstance<PLDCOMPParser::ExpressionNombreContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(150);
        match(PLDCOMPParser::NOMBRE);
        break;
      }

      case PLDCOMPParser::CHAR: {
        _localctx = dynamic_cast<ExpParentheseContext *>(_tracker.createInstance<PLDCOMPParser::ExpressionCaractereContext>(_localctx));
        enterOuterAlt(_localctx, 3);
        setState(151);
        match(PLDCOMPParser::CHAR);
        break;
      }

      case PLDCOMPParser::NOMVAR: {
        _localctx = dynamic_cast<ExpParentheseContext *>(_tracker.createInstance<PLDCOMPParser::ExpressionLvalueContext>(_localctx));
        enterOuterAlt(_localctx, 4);
        setState(152);
        lvalue();
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

void PLDCOMPParser::TableauContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTableau(this);
}
void PLDCOMPParser::TableauContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTableau(this);
}

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

void PLDCOMPParser::VariableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariable(this);
}
void PLDCOMPParser::VariableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariable(this);
}

antlrcpp::Any PLDCOMPParser::VariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitVariable(this);
  else
    return visitor->visitChildren(this);
}
PLDCOMPParser::LvalueContext* PLDCOMPParser::lvalue() {
  LvalueContext *_localctx = _tracker.createInstance<LvalueContext>(_ctx, getState());
  enterRule(_localctx, 10, PLDCOMPParser::RuleLvalue);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(161);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<LvalueContext *>(_tracker.createInstance<PLDCOMPParser::VariableContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(155);
      match(PLDCOMPParser::NOMVAR);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<LvalueContext *>(_tracker.createInstance<PLDCOMPParser::TableauContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(156);
      match(PLDCOMPParser::NOMVAR);
      setState(157);
      match(PLDCOMPParser::T__36);
      setState(158);
      exp(0);
      setState(159);
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

void PLDCOMPParser::WhileStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhileStatement(this);
}
void PLDCOMPParser::WhileStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhileStatement(this);
}

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

void PLDCOMPParser::IfStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfStatement(this);
}
void PLDCOMPParser::IfStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfStatement(this);
}

antlrcpp::Any PLDCOMPParser::IfStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitIfStatement(this);
  else
    return visitor->visitChildren(this);
}
PLDCOMPParser::StructureContext* PLDCOMPParser::structure() {
  StructureContext *_localctx = _tracker.createInstance<StructureContext>(_ctx, getState());
  enterRule(_localctx, 12, PLDCOMPParser::RuleStructure);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(165);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PLDCOMPParser::T__42: {
        _localctx = dynamic_cast<StructureContext *>(_tracker.createInstance<PLDCOMPParser::IfStatementContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(163);
        if_statement();
        break;
      }

      case PLDCOMPParser::T__44: {
        _localctx = dynamic_cast<StructureContext *>(_tracker.createInstance<PLDCOMPParser::WhileStatementContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(164);
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

void PLDCOMPParser::ConstanteNbContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstanteNb(this);
}
void PLDCOMPParser::ConstanteNbContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstanteNb(this);
}

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

void PLDCOMPParser::ConstanteCarContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstanteCar(this);
}
void PLDCOMPParser::ConstanteCarContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstanteCar(this);
}

antlrcpp::Any PLDCOMPParser::ConstanteCarContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitConstanteCar(this);
  else
    return visitor->visitChildren(this);
}
PLDCOMPParser::ConstanteContext* PLDCOMPParser::constante() {
  ConstanteContext *_localctx = _tracker.createInstance<ConstanteContext>(_ctx, getState());
  enterRule(_localctx, 14, PLDCOMPParser::RuleConstante);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(169);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PLDCOMPParser::NOMBRE: {
        _localctx = dynamic_cast<ConstanteContext *>(_tracker.createInstance<PLDCOMPParser::ConstanteNbContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(167);
        match(PLDCOMPParser::NOMBRE);
        break;
      }

      case PLDCOMPParser::CHAR: {
        _localctx = dynamic_cast<ConstanteContext *>(_tracker.createInstance<PLDCOMPParser::ConstanteCarContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(168);
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

void PLDCOMPParser::Type_variableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType_variable(this);
}

void PLDCOMPParser::Type_variableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType_variable(this);
}


antlrcpp::Any PLDCOMPParser::Type_variableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitType_variable(this);
  else
    return visitor->visitChildren(this);
}

PLDCOMPParser::Type_variableContext* PLDCOMPParser::type_variable() {
  Type_variableContext *_localctx = _tracker.createInstance<Type_variableContext>(_ctx, getState());
  enterRule(_localctx, 16, PLDCOMPParser::RuleType_variable);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(171);
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

void PLDCOMPParser::Type_functionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType_function(this);
}

void PLDCOMPParser::Type_functionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType_function(this);
}


antlrcpp::Any PLDCOMPParser::Type_functionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitType_function(this);
  else
    return visitor->visitChildren(this);
}

PLDCOMPParser::Type_functionContext* PLDCOMPParser::type_function() {
  Type_functionContext *_localctx = _tracker.createInstance<Type_functionContext>(_ctx, getState());
  enterRule(_localctx, 18, PLDCOMPParser::RuleType_function);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(173);
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

void PLDCOMPParser::IfContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIf(this);
}
void PLDCOMPParser::IfContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIf(this);
}

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

void PLDCOMPParser::IfElseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfElse(this);
}
void PLDCOMPParser::IfElseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfElse(this);
}

antlrcpp::Any PLDCOMPParser::IfElseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitIfElse(this);
  else
    return visitor->visitChildren(this);
}
PLDCOMPParser::If_statementContext* PLDCOMPParser::if_statement() {
  If_statementContext *_localctx = _tracker.createInstance<If_statementContext>(_ctx, getState());
  enterRule(_localctx, 20, PLDCOMPParser::RuleIf_statement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(189);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<If_statementContext *>(_tracker.createInstance<PLDCOMPParser::IfContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(175);
      match(PLDCOMPParser::T__42);
      setState(176);
      match(PLDCOMPParser::T__32);
      setState(177);
      exp(0);
      setState(178);
      match(PLDCOMPParser::T__33);
      setState(179);
      instruction();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<If_statementContext *>(_tracker.createInstance<PLDCOMPParser::IfElseContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(181);
      match(PLDCOMPParser::T__42);
      setState(182);
      match(PLDCOMPParser::T__32);
      setState(183);
      exp(0);
      setState(184);
      match(PLDCOMPParser::T__33);
      setState(185);
      instruction();
      setState(186);
      match(PLDCOMPParser::T__43);
      setState(187);
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

void PLDCOMPParser::WhileContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhile(this);
}
void PLDCOMPParser::WhileContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhile(this);
}

antlrcpp::Any PLDCOMPParser::WhileContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitWhile(this);
  else
    return visitor->visitChildren(this);
}
PLDCOMPParser::While_statementContext* PLDCOMPParser::while_statement() {
  While_statementContext *_localctx = _tracker.createInstance<While_statementContext>(_ctx, getState());
  enterRule(_localctx, 22, PLDCOMPParser::RuleWhile_statement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    _localctx = dynamic_cast<While_statementContext *>(_tracker.createInstance<PLDCOMPParser::WhileContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(191);
    match(PLDCOMPParser::T__44);
    setState(192);
    match(PLDCOMPParser::T__32);
    setState(193);
    exp(0);
    setState(194);
    match(PLDCOMPParser::T__33);
    setState(195);
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

void PLDCOMPParser::TableauNombreContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTableauNombre(this);
}
void PLDCOMPParser::TableauNombreContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTableauNombre(this);
}

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

void PLDCOMPParser::TableauCaractereContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTableauCaractere(this);
}
void PLDCOMPParser::TableauCaractereContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTableauCaractere(this);
}

antlrcpp::Any PLDCOMPParser::TableauCaractereContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitTableauCaractere(this);
  else
    return visitor->visitChildren(this);
}
PLDCOMPParser::ValContext* PLDCOMPParser::val() {
  ValContext *_localctx = _tracker.createInstance<ValContext>(_ctx, getState());
  enterRule(_localctx, 24, PLDCOMPParser::RuleVal);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(213);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PLDCOMPParser::NOMBRE: {
        _localctx = dynamic_cast<ValContext *>(_tracker.createInstance<PLDCOMPParser::TableauNombreContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(197);
        match(PLDCOMPParser::NOMBRE);
        setState(202);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == PLDCOMPParser::T__27) {
          setState(198);
          match(PLDCOMPParser::T__27);
          setState(199);
          match(PLDCOMPParser::NOMBRE);
          setState(204);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

      case PLDCOMPParser::CHAR: {
        _localctx = dynamic_cast<ValContext *>(_tracker.createInstance<PLDCOMPParser::TableauCaractereContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(205);
        match(PLDCOMPParser::CHAR);
        setState(210);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == PLDCOMPParser::T__27) {
          setState(206);
          match(PLDCOMPParser::T__27);
          setState(207);
          match(PLDCOMPParser::CHAR);
          setState(212);
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

void PLDCOMPParser::DeclarationCharMultContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclarationCharMult(this);
}
void PLDCOMPParser::DeclarationCharMultContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclarationCharMult(this);
}

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

void PLDCOMPParser::DeclarationIntMultContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclarationIntMult(this);
}
void PLDCOMPParser::DeclarationIntMultContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclarationIntMult(this);
}

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

void PLDCOMPParser::DeclarationTableauContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclarationTableau(this);
}
void PLDCOMPParser::DeclarationTableauContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclarationTableau(this);
}

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

void PLDCOMPParser::DeclarationTableauConstanteContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclarationTableauConstante(this);
}
void PLDCOMPParser::DeclarationTableauConstanteContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclarationTableauConstante(this);
}

antlrcpp::Any PLDCOMPParser::DeclarationTableauConstanteContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitDeclarationTableauConstante(this);
  else
    return visitor->visitChildren(this);
}
PLDCOMPParser::Declaration_typeContext* PLDCOMPParser::declaration_type() {
  Declaration_typeContext *_localctx = _tracker.createInstance<Declaration_typeContext>(_ctx, getState());
  enterRule(_localctx, 26, PLDCOMPParser::RuleDeclaration_type);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(249);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<Declaration_typeContext *>(_tracker.createInstance<PLDCOMPParser::DeclarationIntMultContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(215);
      entier();
      setState(216);
      declaration_int_generale();
      setState(221);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == PLDCOMPParser::T__27) {
        setState(217);
        match(PLDCOMPParser::T__27);
        setState(218);
        declaration_int_generale();
        setState(223);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    case 2: {
      _localctx = dynamic_cast<Declaration_typeContext *>(_tracker.createInstance<PLDCOMPParser::DeclarationCharMultContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(224);
      match(PLDCOMPParser::T__38);
      setState(225);
      declaration_char_generale();
      setState(230);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == PLDCOMPParser::T__27) {
        setState(226);
        match(PLDCOMPParser::T__27);
        setState(227);
        declaration_char_generale();
        setState(232);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    case 3: {
      _localctx = dynamic_cast<Declaration_typeContext *>(_tracker.createInstance<PLDCOMPParser::DeclarationTableauContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(233);
      type_variable();
      setState(234);
      match(PLDCOMPParser::NOMVAR);
      setState(235);
      match(PLDCOMPParser::T__36);
      setState(236);
      match(PLDCOMPParser::NOMBRE);
      setState(237);
      match(PLDCOMPParser::T__37);
      break;
    }

    case 4: {
      _localctx = dynamic_cast<Declaration_typeContext *>(_tracker.createInstance<PLDCOMPParser::DeclarationTableauConstanteContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(239);
      type_variable();
      setState(240);
      match(PLDCOMPParser::NOMVAR);
      setState(241);
      match(PLDCOMPParser::T__36);
      setState(242);
      match(PLDCOMPParser::NOMBRE);
      setState(243);
      match(PLDCOMPParser::T__37);
      setState(244);
      match(PLDCOMPParser::T__10);
      setState(245);
      match(PLDCOMPParser::T__45);
      setState(246);
      val();
      setState(247);
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

void PLDCOMPParser::Int32Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInt32(this);
}
void PLDCOMPParser::Int32Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInt32(this);
}

antlrcpp::Any PLDCOMPParser::Int32Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitInt32(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Int64Context ------------------------------------------------------------------

PLDCOMPParser::Int64Context::Int64Context(EntierContext *ctx) { copyFrom(ctx); }

void PLDCOMPParser::Int64Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInt64(this);
}
void PLDCOMPParser::Int64Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInt64(this);
}

antlrcpp::Any PLDCOMPParser::Int64Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitInt64(this);
  else
    return visitor->visitChildren(this);
}
PLDCOMPParser::EntierContext* PLDCOMPParser::entier() {
  EntierContext *_localctx = _tracker.createInstance<EntierContext>(_ctx, getState());
  enterRule(_localctx, 28, PLDCOMPParser::RuleEntier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(253);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PLDCOMPParser::T__39: {
        _localctx = dynamic_cast<EntierContext *>(_tracker.createInstance<PLDCOMPParser::Int32Context>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(251);
        match(PLDCOMPParser::T__39);
        break;
      }

      case PLDCOMPParser::T__40: {
        _localctx = dynamic_cast<EntierContext *>(_tracker.createInstance<PLDCOMPParser::Int64Context>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(252);
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

void PLDCOMPParser::DeclarationIntSimpleContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclarationIntSimple(this);
}
void PLDCOMPParser::DeclarationIntSimpleContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclarationIntSimple(this);
}

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

void PLDCOMPParser::DeclarationIntConstanteContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclarationIntConstante(this);
}
void PLDCOMPParser::DeclarationIntConstanteContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclarationIntConstante(this);
}

antlrcpp::Any PLDCOMPParser::DeclarationIntConstanteContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitDeclarationIntConstante(this);
  else
    return visitor->visitChildren(this);
}
PLDCOMPParser::Declaration_int_generaleContext* PLDCOMPParser::declaration_int_generale() {
  Declaration_int_generaleContext *_localctx = _tracker.createInstance<Declaration_int_generaleContext>(_ctx, getState());
  enterRule(_localctx, 30, PLDCOMPParser::RuleDeclaration_int_generale);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(259);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<Declaration_int_generaleContext *>(_tracker.createInstance<PLDCOMPParser::DeclarationIntSimpleContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(255);
      match(PLDCOMPParser::NOMVAR);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<Declaration_int_generaleContext *>(_tracker.createInstance<PLDCOMPParser::DeclarationIntConstanteContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(256);
      match(PLDCOMPParser::NOMVAR);
      setState(257);
      match(PLDCOMPParser::T__10);
      setState(258);
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

void PLDCOMPParser::DeclarationCharSimpleContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclarationCharSimple(this);
}
void PLDCOMPParser::DeclarationCharSimpleContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclarationCharSimple(this);
}

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

void PLDCOMPParser::DeclarationCharConstanteContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclarationCharConstante(this);
}
void PLDCOMPParser::DeclarationCharConstanteContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclarationCharConstante(this);
}

antlrcpp::Any PLDCOMPParser::DeclarationCharConstanteContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitDeclarationCharConstante(this);
  else
    return visitor->visitChildren(this);
}
PLDCOMPParser::Declaration_char_generaleContext* PLDCOMPParser::declaration_char_generale() {
  Declaration_char_generaleContext *_localctx = _tracker.createInstance<Declaration_char_generaleContext>(_ctx, getState());
  enterRule(_localctx, 32, PLDCOMPParser::RuleDeclaration_char_generale);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(265);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<Declaration_char_generaleContext *>(_tracker.createInstance<PLDCOMPParser::DeclarationCharSimpleContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(261);
      match(PLDCOMPParser::NOMVAR);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<Declaration_char_generaleContext *>(_tracker.createInstance<PLDCOMPParser::DeclarationCharConstanteContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(262);
      match(PLDCOMPParser::NOMVAR);
      setState(263);
      match(PLDCOMPParser::T__10);
      setState(264);
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

void PLDCOMPParser::VoidContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVoid(this);
}
void PLDCOMPParser::VoidContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVoid(this);
}

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

void PLDCOMPParser::ParametresContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParametres(this);
}
void PLDCOMPParser::ParametresContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParametres(this);
}

antlrcpp::Any PLDCOMPParser::ParametresContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitParametres(this);
  else
    return visitor->visitChildren(this);
}
PLDCOMPParser::ParamContext* PLDCOMPParser::param() {
  ParamContext *_localctx = _tracker.createInstance<ParamContext>(_ctx, getState());
  enterRule(_localctx, 34, PLDCOMPParser::RuleParam);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(279);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PLDCOMPParser::T__41: {
        _localctx = dynamic_cast<ParamContext *>(_tracker.createInstance<PLDCOMPParser::VoidContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(267);
        match(PLDCOMPParser::T__41);
        break;
      }

      case PLDCOMPParser::T__38:
      case PLDCOMPParser::T__39:
      case PLDCOMPParser::T__40: {
        _localctx = dynamic_cast<ParamContext *>(_tracker.createInstance<PLDCOMPParser::ParametresContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(268);
        type_variable();
        setState(269);
        match(PLDCOMPParser::NOMVAR);
        setState(276);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == PLDCOMPParser::T__27) {
          setState(270);
          match(PLDCOMPParser::T__27);
          setState(271);
          type_variable();
          setState(272);
          match(PLDCOMPParser::NOMVAR);
          setState(278);
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

void PLDCOMPParser::DeclarationFonctionParamsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclarationFonctionParams(this);
}
void PLDCOMPParser::DeclarationFonctionParamsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclarationFonctionParams(this);
}

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

void PLDCOMPParser::DeclarationFonctionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclarationFonction(this);
}
void PLDCOMPParser::DeclarationFonctionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclarationFonction(this);
}

antlrcpp::Any PLDCOMPParser::DeclarationFonctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitDeclarationFonction(this);
  else
    return visitor->visitChildren(this);
}
PLDCOMPParser::FonctionContext* PLDCOMPParser::fonction() {
  FonctionContext *_localctx = _tracker.createInstance<FonctionContext>(_ctx, getState());
  enterRule(_localctx, 36, PLDCOMPParser::RuleFonction);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(300);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<FonctionContext *>(_tracker.createInstance<PLDCOMPParser::DeclarationFonctionParamsContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(281);
      type_function();
      setState(282);
      match(PLDCOMPParser::NOMVAR);
      setState(283);
      match(PLDCOMPParser::T__32);
      setState(284);
      param();
      setState(285);
      match(PLDCOMPParser::T__33);
      setState(286);
      match(PLDCOMPParser::T__45);
      setState(287);
      declaration_variables();
      setState(288);
      bloc();
      setState(289);
      match(PLDCOMPParser::T__46);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<FonctionContext *>(_tracker.createInstance<PLDCOMPParser::DeclarationFonctionContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(291);
      type_function();
      setState(292);
      match(PLDCOMPParser::NOMVAR);
      setState(293);
      match(PLDCOMPParser::T__32);
      setState(294);
      match(PLDCOMPParser::T__33);
      setState(295);
      match(PLDCOMPParser::T__45);
      setState(296);
      declaration_variables();
      setState(297);
      bloc();
      setState(298);
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

void PLDCOMPParser::DeclarationVariablesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclarationVariables(this);
}
void PLDCOMPParser::DeclarationVariablesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclarationVariables(this);
}

antlrcpp::Any PLDCOMPParser::DeclarationVariablesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitDeclarationVariables(this);
  else
    return visitor->visitChildren(this);
}
PLDCOMPParser::Declaration_variablesContext* PLDCOMPParser::declaration_variables() {
  Declaration_variablesContext *_localctx = _tracker.createInstance<Declaration_variablesContext>(_ctx, getState());
  enterRule(_localctx, 38, PLDCOMPParser::RuleDeclaration_variables);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    _localctx = dynamic_cast<Declaration_variablesContext *>(_tracker.createInstance<PLDCOMPParser::DeclarationVariablesContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(307);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(302);
        declaration_type();
        setState(303);
        match(PLDCOMPParser::T__47); 
      }
      setState(309);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx);
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

void PLDCOMPParser::BlocContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBloc(this);
}

void PLDCOMPParser::BlocContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBloc(this);
}


antlrcpp::Any PLDCOMPParser::BlocContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitBloc(this);
  else
    return visitor->visitChildren(this);
}

PLDCOMPParser::BlocContext* PLDCOMPParser::bloc() {
  BlocContext *_localctx = _tracker.createInstance<BlocContext>(_ctx, getState());
  enterRule(_localctx, 40, PLDCOMPParser::RuleBloc);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(313);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << PLDCOMPParser::T__4)
      | (1ULL << PLDCOMPParser::T__28)
      | (1ULL << PLDCOMPParser::T__29)
      | (1ULL << PLDCOMPParser::T__30)
      | (1ULL << PLDCOMPParser::T__31)
      | (1ULL << PLDCOMPParser::T__32)
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
      setState(310);
      instruction();
      setState(315);
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

void PLDCOMPParser::BlocInstructionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlocInstruction(this);
}
void PLDCOMPParser::BlocInstructionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlocInstruction(this);
}

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

void PLDCOMPParser::ReturnInstructionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturnInstruction(this);
}
void PLDCOMPParser::ReturnInstructionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturnInstruction(this);
}

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

void PLDCOMPParser::ExpInstructionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpInstruction(this);
}
void PLDCOMPParser::ExpInstructionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpInstruction(this);
}

antlrcpp::Any PLDCOMPParser::ExpInstructionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitExpInstruction(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BreakInstructionContext ------------------------------------------------------------------

PLDCOMPParser::BreakInstructionContext::BreakInstructionContext(InstructionContext *ctx) { copyFrom(ctx); }

void PLDCOMPParser::BreakInstructionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBreakInstruction(this);
}
void PLDCOMPParser::BreakInstructionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBreakInstruction(this);
}

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

void PLDCOMPParser::StructureInstructionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStructureInstruction(this);
}
void PLDCOMPParser::StructureInstructionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStructureInstruction(this);
}

antlrcpp::Any PLDCOMPParser::StructureInstructionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitStructureInstruction(this);
  else
    return visitor->visitChildren(this);
}
PLDCOMPParser::InstructionContext* PLDCOMPParser::instruction() {
  InstructionContext *_localctx = _tracker.createInstance<InstructionContext>(_ctx, getState());
  enterRule(_localctx, 42, PLDCOMPParser::RuleInstruction);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(330);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PLDCOMPParser::T__45: {
        _localctx = dynamic_cast<InstructionContext *>(_tracker.createInstance<PLDCOMPParser::BlocInstructionContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(316);
        match(PLDCOMPParser::T__45);
        setState(317);
        bloc();
        setState(318);
        match(PLDCOMPParser::T__46);
        break;
      }

      case PLDCOMPParser::T__48: {
        _localctx = dynamic_cast<InstructionContext *>(_tracker.createInstance<PLDCOMPParser::BreakInstructionContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(320);
        match(PLDCOMPParser::T__48);
        setState(321);
        match(PLDCOMPParser::T__47);
        break;
      }

      case PLDCOMPParser::T__42:
      case PLDCOMPParser::T__44: {
        _localctx = dynamic_cast<InstructionContext *>(_tracker.createInstance<PLDCOMPParser::StructureInstructionContext>(_localctx));
        enterOuterAlt(_localctx, 3);
        setState(322);
        structure();
        break;
      }

      case PLDCOMPParser::T__49: {
        _localctx = dynamic_cast<InstructionContext *>(_tracker.createInstance<PLDCOMPParser::ReturnInstructionContext>(_localctx));
        enterOuterAlt(_localctx, 4);
        setState(323);
        match(PLDCOMPParser::T__49);
        setState(324);
        exp(0);
        setState(325);
        match(PLDCOMPParser::T__47);
        break;
      }

      case PLDCOMPParser::T__4:
      case PLDCOMPParser::T__28:
      case PLDCOMPParser::T__29:
      case PLDCOMPParser::T__30:
      case PLDCOMPParser::T__31:
      case PLDCOMPParser::T__32:
      case PLDCOMPParser::T__34:
      case PLDCOMPParser::T__35:
      case PLDCOMPParser::NOMVAR:
      case PLDCOMPParser::NOMBRE:
      case PLDCOMPParser::CHAR: {
        _localctx = dynamic_cast<InstructionContext *>(_tracker.createInstance<PLDCOMPParser::ExpInstructionContext>(_localctx));
        enterOuterAlt(_localctx, 5);
        setState(327);
        exp(0);
        setState(328);
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

void PLDCOMPParser::ProgrammeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgramme(this);
}

void PLDCOMPParser::ProgrammeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PLDCOMPListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgramme(this);
}


antlrcpp::Any PLDCOMPParser::ProgrammeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PLDCOMPVisitor*>(visitor))
    return parserVisitor->visitProgramme(this);
  else
    return visitor->visitChildren(this);
}

PLDCOMPParser::ProgrammeContext* PLDCOMPParser::programme() {
  ProgrammeContext *_localctx = _tracker.createInstance<ProgrammeContext>(_ctx, getState());
  enterRule(_localctx, 44, PLDCOMPParser::RuleProgramme);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(332);
    declaration_variables();
    setState(336);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << PLDCOMPParser::T__38)
      | (1ULL << PLDCOMPParser::T__39)
      | (1ULL << PLDCOMPParser::T__40)
      | (1ULL << PLDCOMPParser::T__41))) != 0)) {
      setState(333);
      fonction();
      setState(338);
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
    case 2: return expSempred(dynamic_cast<ExpContext *>(context), predicateIndex);
    case 3: return expPrioritaireSempred(dynamic_cast<ExpPrioritaireContext *>(context), predicateIndex);

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

bool PLDCOMPParser::expPrioritaireSempred(ExpPrioritaireContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 1: return precpred(_ctx, 2);

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
  "opPrioritaire", "opSecondaire", "exp", "expPrioritaire", "expParenthese", 
  "lvalue", "structure", "constante", "type_variable", "type_function", 
  "if_statement", "while_statement", "val", "declaration_type", "entier", 
  "declaration_int_generale", "declaration_char_generale", "param", "fonction", 
  "declaration_variables", "bloc", "instruction", "programme"
};

std::vector<std::string> PLDCOMPParser::_literalNames = {
  "", "'*'", "'/'", "'&&'", "'+'", "'-'", "'||'", "'%'", "'^'", "'&'", "'|'", 
  "'='", "'+='", "'-='", "'*='", "'/='", "'%='", "'&='", "'|='", "'^='", 
  "'<'", "'<='", "'>'", "'>='", "'<<'", "'>>'", "'=='", "'!='", "','", "'!'", 
  "'~'", "'++'", "'--'", "'('", "')'", "'putchar'", "'getchar'", "'['", 
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
    0x3, 0x3b, 0x156, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x5, 0x2, 0x34, 0xa, 0x2, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x4f, 0xa, 0x3, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x7, 0x4, 0x6f, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0x72, 0xb, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x7e, 0xa, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x7, 0x4, 0x84, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0x87, 
    0xb, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x7, 0x5, 0x90, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0x93, 0xb, 0x5, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x5, 0x6, 0x9c, 0xa, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x5, 0x7, 0xa4, 0xa, 0x7, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 
    0xa8, 0xa, 0x8, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0xac, 0xa, 0x9, 0x3, 0xa, 
    0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0xc0, 0xa, 0xc, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x7, 0xe, 0xcb, 0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 0xce, 0xb, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x7, 0xe, 0xd3, 0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 
    0xd6, 0xb, 0xe, 0x5, 0xe, 0xd8, 0xa, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 
    0x3, 0xf, 0x7, 0xf, 0xde, 0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 0xe1, 0xb, 0xf, 
    0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x7, 0xf, 0xe7, 0xa, 0xf, 0xc, 
    0xf, 0xe, 0xf, 0xea, 0xb, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0xfc, 0xa, 
    0xf, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0x100, 0xa, 0x10, 0x3, 0x11, 0x3, 
    0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0x106, 0xa, 0x11, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 0x10c, 0xa, 0x12, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x7, 
    0x13, 0x115, 0xa, 0x13, 0xc, 0x13, 0xe, 0x13, 0x118, 0xb, 0x13, 0x5, 
    0x13, 0x11a, 0xa, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 
    0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x5, 0x14, 0x12f, 0xa, 0x14, 0x3, 0x15, 0x3, 0x15, 
    0x3, 0x15, 0x7, 0x15, 0x134, 0xa, 0x15, 0xc, 0x15, 0xe, 0x15, 0x137, 
    0xb, 0x15, 0x3, 0x16, 0x7, 0x16, 0x13a, 0xa, 0x16, 0xc, 0x16, 0xe, 0x16, 
    0x13d, 0xb, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 
    0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 
    0x17, 0x3, 0x17, 0x3, 0x17, 0x5, 0x17, 0x14d, 0xa, 0x17, 0x3, 0x18, 
    0x3, 0x18, 0x7, 0x18, 0x151, 0xa, 0x18, 0xc, 0x18, 0xe, 0x18, 0x154, 
    0xb, 0x18, 0x3, 0x18, 0x2, 0x4, 0x6, 0x8, 0x19, 0x2, 0x4, 0x6, 0x8, 
    0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 
    0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x2, 0x4, 0x3, 0x2, 0x29, 
    0x2b, 0x3, 0x2, 0x29, 0x2c, 0x2, 0x185, 0x2, 0x33, 0x3, 0x2, 0x2, 0x2, 
    0x4, 0x4e, 0x3, 0x2, 0x2, 0x2, 0x6, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x8, 0x88, 
    0x3, 0x2, 0x2, 0x2, 0xa, 0x9b, 0x3, 0x2, 0x2, 0x2, 0xc, 0xa3, 0x3, 0x2, 
    0x2, 0x2, 0xe, 0xa7, 0x3, 0x2, 0x2, 0x2, 0x10, 0xab, 0x3, 0x2, 0x2, 
    0x2, 0x12, 0xad, 0x3, 0x2, 0x2, 0x2, 0x14, 0xaf, 0x3, 0x2, 0x2, 0x2, 
    0x16, 0xbf, 0x3, 0x2, 0x2, 0x2, 0x18, 0xc1, 0x3, 0x2, 0x2, 0x2, 0x1a, 
    0xd7, 0x3, 0x2, 0x2, 0x2, 0x1c, 0xfb, 0x3, 0x2, 0x2, 0x2, 0x1e, 0xff, 
    0x3, 0x2, 0x2, 0x2, 0x20, 0x105, 0x3, 0x2, 0x2, 0x2, 0x22, 0x10b, 0x3, 
    0x2, 0x2, 0x2, 0x24, 0x119, 0x3, 0x2, 0x2, 0x2, 0x26, 0x12e, 0x3, 0x2, 
    0x2, 0x2, 0x28, 0x135, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x13b, 0x3, 0x2, 0x2, 
    0x2, 0x2c, 0x14c, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x14e, 0x3, 0x2, 0x2, 0x2, 
    0x30, 0x34, 0x7, 0x3, 0x2, 0x2, 0x31, 0x34, 0x7, 0x4, 0x2, 0x2, 0x32, 
    0x34, 0x7, 0x5, 0x2, 0x2, 0x33, 0x30, 0x3, 0x2, 0x2, 0x2, 0x33, 0x31, 
    0x3, 0x2, 0x2, 0x2, 0x33, 0x32, 0x3, 0x2, 0x2, 0x2, 0x34, 0x3, 0x3, 
    0x2, 0x2, 0x2, 0x35, 0x4f, 0x7, 0x6, 0x2, 0x2, 0x36, 0x4f, 0x7, 0x7, 
    0x2, 0x2, 0x37, 0x4f, 0x7, 0x8, 0x2, 0x2, 0x38, 0x4f, 0x7, 0x9, 0x2, 
    0x2, 0x39, 0x4f, 0x7, 0xa, 0x2, 0x2, 0x3a, 0x4f, 0x7, 0xb, 0x2, 0x2, 
    0x3b, 0x4f, 0x7, 0xc, 0x2, 0x2, 0x3c, 0x4f, 0x7, 0xd, 0x2, 0x2, 0x3d, 
    0x4f, 0x7, 0xe, 0x2, 0x2, 0x3e, 0x4f, 0x7, 0xf, 0x2, 0x2, 0x3f, 0x4f, 
    0x7, 0x10, 0x2, 0x2, 0x40, 0x4f, 0x7, 0x11, 0x2, 0x2, 0x41, 0x4f, 0x7, 
    0x12, 0x2, 0x2, 0x42, 0x4f, 0x7, 0x13, 0x2, 0x2, 0x43, 0x4f, 0x7, 0x14, 
    0x2, 0x2, 0x44, 0x4f, 0x7, 0x15, 0x2, 0x2, 0x45, 0x4f, 0x7, 0x16, 0x2, 
    0x2, 0x46, 0x4f, 0x7, 0x17, 0x2, 0x2, 0x47, 0x4f, 0x7, 0x18, 0x2, 0x2, 
    0x48, 0x4f, 0x7, 0x19, 0x2, 0x2, 0x49, 0x4f, 0x7, 0x1a, 0x2, 0x2, 0x4a, 
    0x4f, 0x7, 0x1b, 0x2, 0x2, 0x4b, 0x4f, 0x7, 0x1c, 0x2, 0x2, 0x4c, 0x4f, 
    0x7, 0x1d, 0x2, 0x2, 0x4d, 0x4f, 0x7, 0x1e, 0x2, 0x2, 0x4e, 0x35, 0x3, 
    0x2, 0x2, 0x2, 0x4e, 0x36, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x37, 0x3, 0x2, 
    0x2, 0x2, 0x4e, 0x38, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x39, 0x3, 0x2, 0x2, 
    0x2, 0x4e, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x3b, 0x3, 0x2, 0x2, 0x2, 
    0x4e, 0x3c, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x4e, 
    0x3e, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x40, 
    0x3, 0x2, 0x2, 0x2, 0x4e, 0x41, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x42, 0x3, 
    0x2, 0x2, 0x2, 0x4e, 0x43, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x44, 0x3, 0x2, 
    0x2, 0x2, 0x4e, 0x45, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x46, 0x3, 0x2, 0x2, 
    0x2, 0x4e, 0x47, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x48, 0x3, 0x2, 0x2, 0x2, 
    0x4e, 0x49, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x4a, 0x3, 0x2, 0x2, 0x2, 0x4e, 
    0x4b, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x4d, 
    0x3, 0x2, 0x2, 0x2, 0x4f, 0x5, 0x3, 0x2, 0x2, 0x2, 0x50, 0x51, 0x8, 
    0x4, 0x1, 0x2, 0x51, 0x7e, 0x5, 0x8, 0x5, 0x2, 0x52, 0x53, 0x7, 0x1f, 
    0x2, 0x2, 0x53, 0x7e, 0x5, 0x6, 0x4, 0x10, 0x54, 0x55, 0x7, 0x7, 0x2, 
    0x2, 0x55, 0x7e, 0x5, 0x6, 0x4, 0xf, 0x56, 0x57, 0x7, 0x20, 0x2, 0x2, 
    0x57, 0x7e, 0x5, 0x6, 0x4, 0xe, 0x58, 0x59, 0x5, 0xc, 0x7, 0x2, 0x59, 
    0x5a, 0x7, 0x21, 0x2, 0x2, 0x5a, 0x7e, 0x3, 0x2, 0x2, 0x2, 0x5b, 0x5c, 
    0x5, 0xc, 0x7, 0x2, 0x5c, 0x5d, 0x7, 0x22, 0x2, 0x2, 0x5d, 0x7e, 0x3, 
    0x2, 0x2, 0x2, 0x5e, 0x5f, 0x7, 0x21, 0x2, 0x2, 0x5f, 0x7e, 0x5, 0xc, 
    0x7, 0x2, 0x60, 0x61, 0x7, 0x22, 0x2, 0x2, 0x61, 0x7e, 0x5, 0xc, 0x7, 
    0x2, 0x62, 0x63, 0x5, 0xc, 0x7, 0x2, 0x63, 0x64, 0x7, 0xd, 0x2, 0x2, 
    0x64, 0x65, 0x5, 0x6, 0x4, 0x9, 0x65, 0x7e, 0x3, 0x2, 0x2, 0x2, 0x66, 
    0x7e, 0x7, 0x36, 0x2, 0x2, 0x67, 0x7e, 0x7, 0x37, 0x2, 0x2, 0x68, 0x7e, 
    0x5, 0xc, 0x7, 0x2, 0x69, 0x6a, 0x7, 0x35, 0x2, 0x2, 0x6a, 0x6b, 0x7, 
    0x23, 0x2, 0x2, 0x6b, 0x70, 0x5, 0x6, 0x4, 0x2, 0x6c, 0x6d, 0x7, 0x1e, 
    0x2, 0x2, 0x6d, 0x6f, 0x5, 0x6, 0x4, 0x2, 0x6e, 0x6c, 0x3, 0x2, 0x2, 
    0x2, 0x6f, 0x72, 0x3, 0x2, 0x2, 0x2, 0x70, 0x6e, 0x3, 0x2, 0x2, 0x2, 
    0x70, 0x71, 0x3, 0x2, 0x2, 0x2, 0x71, 0x73, 0x3, 0x2, 0x2, 0x2, 0x72, 
    0x70, 0x3, 0x2, 0x2, 0x2, 0x73, 0x74, 0x7, 0x24, 0x2, 0x2, 0x74, 0x7e, 
    0x3, 0x2, 0x2, 0x2, 0x75, 0x76, 0x7, 0x25, 0x2, 0x2, 0x76, 0x77, 0x7, 
    0x23, 0x2, 0x2, 0x77, 0x78, 0x5, 0x6, 0x4, 0x2, 0x78, 0x79, 0x7, 0x24, 
    0x2, 0x2, 0x79, 0x7e, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x7b, 0x7, 0x26, 0x2, 
    0x2, 0x7b, 0x7c, 0x7, 0x23, 0x2, 0x2, 0x7c, 0x7e, 0x7, 0x24, 0x2, 0x2, 
    0x7d, 0x50, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x52, 0x3, 0x2, 0x2, 0x2, 0x7d, 
    0x54, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x56, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x58, 
    0x3, 0x2, 0x2, 0x2, 0x7d, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x5e, 0x3, 
    0x2, 0x2, 0x2, 0x7d, 0x60, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x62, 0x3, 0x2, 
    0x2, 0x2, 0x7d, 0x66, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x67, 0x3, 0x2, 0x2, 
    0x2, 0x7d, 0x68, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x69, 0x3, 0x2, 0x2, 0x2, 
    0x7d, 0x75, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x7a, 0x3, 0x2, 0x2, 0x2, 0x7e, 
    0x85, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x80, 0xc, 0x12, 0x2, 0x2, 0x80, 0x81, 
    0x5, 0x4, 0x3, 0x2, 0x81, 0x82, 0x5, 0x8, 0x5, 0x2, 0x82, 0x84, 0x3, 
    0x2, 0x2, 0x2, 0x83, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x84, 0x87, 0x3, 0x2, 
    0x2, 0x2, 0x85, 0x83, 0x3, 0x2, 0x2, 0x2, 0x85, 0x86, 0x3, 0x2, 0x2, 
    0x2, 0x86, 0x7, 0x3, 0x2, 0x2, 0x2, 0x87, 0x85, 0x3, 0x2, 0x2, 0x2, 
    0x88, 0x89, 0x8, 0x5, 0x1, 0x2, 0x89, 0x8a, 0x5, 0xa, 0x6, 0x2, 0x8a, 
    0x91, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x8c, 0xc, 0x4, 0x2, 0x2, 0x8c, 0x8d, 
    0x5, 0x2, 0x2, 0x2, 0x8d, 0x8e, 0x5, 0xa, 0x6, 0x2, 0x8e, 0x90, 0x3, 
    0x2, 0x2, 0x2, 0x8f, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x90, 0x93, 0x3, 0x2, 
    0x2, 0x2, 0x91, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x91, 0x92, 0x3, 0x2, 0x2, 
    0x2, 0x92, 0x9, 0x3, 0x2, 0x2, 0x2, 0x93, 0x91, 0x3, 0x2, 0x2, 0x2, 
    0x94, 0x95, 0x7, 0x23, 0x2, 0x2, 0x95, 0x96, 0x5, 0x6, 0x4, 0x2, 0x96, 
    0x97, 0x7, 0x24, 0x2, 0x2, 0x97, 0x9c, 0x3, 0x2, 0x2, 0x2, 0x98, 0x9c, 
    0x7, 0x36, 0x2, 0x2, 0x99, 0x9c, 0x7, 0x37, 0x2, 0x2, 0x9a, 0x9c, 0x5, 
    0xc, 0x7, 0x2, 0x9b, 0x94, 0x3, 0x2, 0x2, 0x2, 0x9b, 0x98, 0x3, 0x2, 
    0x2, 0x2, 0x9b, 0x99, 0x3, 0x2, 0x2, 0x2, 0x9b, 0x9a, 0x3, 0x2, 0x2, 
    0x2, 0x9c, 0xb, 0x3, 0x2, 0x2, 0x2, 0x9d, 0xa4, 0x7, 0x35, 0x2, 0x2, 
    0x9e, 0x9f, 0x7, 0x35, 0x2, 0x2, 0x9f, 0xa0, 0x7, 0x27, 0x2, 0x2, 0xa0, 
    0xa1, 0x5, 0x6, 0x4, 0x2, 0xa1, 0xa2, 0x7, 0x28, 0x2, 0x2, 0xa2, 0xa4, 
    0x3, 0x2, 0x2, 0x2, 0xa3, 0x9d, 0x3, 0x2, 0x2, 0x2, 0xa3, 0x9e, 0x3, 
    0x2, 0x2, 0x2, 0xa4, 0xd, 0x3, 0x2, 0x2, 0x2, 0xa5, 0xa8, 0x5, 0x16, 
    0xc, 0x2, 0xa6, 0xa8, 0x5, 0x18, 0xd, 0x2, 0xa7, 0xa5, 0x3, 0x2, 0x2, 
    0x2, 0xa7, 0xa6, 0x3, 0x2, 0x2, 0x2, 0xa8, 0xf, 0x3, 0x2, 0x2, 0x2, 
    0xa9, 0xac, 0x7, 0x36, 0x2, 0x2, 0xaa, 0xac, 0x7, 0x37, 0x2, 0x2, 0xab, 
    0xa9, 0x3, 0x2, 0x2, 0x2, 0xab, 0xaa, 0x3, 0x2, 0x2, 0x2, 0xac, 0x11, 
    0x3, 0x2, 0x2, 0x2, 0xad, 0xae, 0x9, 0x2, 0x2, 0x2, 0xae, 0x13, 0x3, 
    0x2, 0x2, 0x2, 0xaf, 0xb0, 0x9, 0x3, 0x2, 0x2, 0xb0, 0x15, 0x3, 0x2, 
    0x2, 0x2, 0xb1, 0xb2, 0x7, 0x2d, 0x2, 0x2, 0xb2, 0xb3, 0x7, 0x23, 0x2, 
    0x2, 0xb3, 0xb4, 0x5, 0x6, 0x4, 0x2, 0xb4, 0xb5, 0x7, 0x24, 0x2, 0x2, 
    0xb5, 0xb6, 0x5, 0x2c, 0x17, 0x2, 0xb6, 0xc0, 0x3, 0x2, 0x2, 0x2, 0xb7, 
    0xb8, 0x7, 0x2d, 0x2, 0x2, 0xb8, 0xb9, 0x7, 0x23, 0x2, 0x2, 0xb9, 0xba, 
    0x5, 0x6, 0x4, 0x2, 0xba, 0xbb, 0x7, 0x24, 0x2, 0x2, 0xbb, 0xbc, 0x5, 
    0x2c, 0x17, 0x2, 0xbc, 0xbd, 0x7, 0x2e, 0x2, 0x2, 0xbd, 0xbe, 0x5, 0x2c, 
    0x17, 0x2, 0xbe, 0xc0, 0x3, 0x2, 0x2, 0x2, 0xbf, 0xb1, 0x3, 0x2, 0x2, 
    0x2, 0xbf, 0xb7, 0x3, 0x2, 0x2, 0x2, 0xc0, 0x17, 0x3, 0x2, 0x2, 0x2, 
    0xc1, 0xc2, 0x7, 0x2f, 0x2, 0x2, 0xc2, 0xc3, 0x7, 0x23, 0x2, 0x2, 0xc3, 
    0xc4, 0x5, 0x6, 0x4, 0x2, 0xc4, 0xc5, 0x7, 0x24, 0x2, 0x2, 0xc5, 0xc6, 
    0x5, 0x2c, 0x17, 0x2, 0xc6, 0x19, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xcc, 0x7, 
    0x36, 0x2, 0x2, 0xc8, 0xc9, 0x7, 0x1e, 0x2, 0x2, 0xc9, 0xcb, 0x7, 0x36, 
    0x2, 0x2, 0xca, 0xc8, 0x3, 0x2, 0x2, 0x2, 0xcb, 0xce, 0x3, 0x2, 0x2, 
    0x2, 0xcc, 0xca, 0x3, 0x2, 0x2, 0x2, 0xcc, 0xcd, 0x3, 0x2, 0x2, 0x2, 
    0xcd, 0xd8, 0x3, 0x2, 0x2, 0x2, 0xce, 0xcc, 0x3, 0x2, 0x2, 0x2, 0xcf, 
    0xd4, 0x7, 0x37, 0x2, 0x2, 0xd0, 0xd1, 0x7, 0x1e, 0x2, 0x2, 0xd1, 0xd3, 
    0x7, 0x37, 0x2, 0x2, 0xd2, 0xd0, 0x3, 0x2, 0x2, 0x2, 0xd3, 0xd6, 0x3, 
    0x2, 0x2, 0x2, 0xd4, 0xd2, 0x3, 0x2, 0x2, 0x2, 0xd4, 0xd5, 0x3, 0x2, 
    0x2, 0x2, 0xd5, 0xd8, 0x3, 0x2, 0x2, 0x2, 0xd6, 0xd4, 0x3, 0x2, 0x2, 
    0x2, 0xd7, 0xc7, 0x3, 0x2, 0x2, 0x2, 0xd7, 0xcf, 0x3, 0x2, 0x2, 0x2, 
    0xd8, 0x1b, 0x3, 0x2, 0x2, 0x2, 0xd9, 0xda, 0x5, 0x1e, 0x10, 0x2, 0xda, 
    0xdf, 0x5, 0x20, 0x11, 0x2, 0xdb, 0xdc, 0x7, 0x1e, 0x2, 0x2, 0xdc, 0xde, 
    0x5, 0x20, 0x11, 0x2, 0xdd, 0xdb, 0x3, 0x2, 0x2, 0x2, 0xde, 0xe1, 0x3, 
    0x2, 0x2, 0x2, 0xdf, 0xdd, 0x3, 0x2, 0x2, 0x2, 0xdf, 0xe0, 0x3, 0x2, 
    0x2, 0x2, 0xe0, 0xfc, 0x3, 0x2, 0x2, 0x2, 0xe1, 0xdf, 0x3, 0x2, 0x2, 
    0x2, 0xe2, 0xe3, 0x7, 0x29, 0x2, 0x2, 0xe3, 0xe8, 0x5, 0x22, 0x12, 0x2, 
    0xe4, 0xe5, 0x7, 0x1e, 0x2, 0x2, 0xe5, 0xe7, 0x5, 0x22, 0x12, 0x2, 0xe6, 
    0xe4, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xea, 0x3, 0x2, 0x2, 0x2, 0xe8, 0xe6, 
    0x3, 0x2, 0x2, 0x2, 0xe8, 0xe9, 0x3, 0x2, 0x2, 0x2, 0xe9, 0xfc, 0x3, 
    0x2, 0x2, 0x2, 0xea, 0xe8, 0x3, 0x2, 0x2, 0x2, 0xeb, 0xec, 0x5, 0x12, 
    0xa, 0x2, 0xec, 0xed, 0x7, 0x35, 0x2, 0x2, 0xed, 0xee, 0x7, 0x27, 0x2, 
    0x2, 0xee, 0xef, 0x7, 0x36, 0x2, 0x2, 0xef, 0xf0, 0x7, 0x28, 0x2, 0x2, 
    0xf0, 0xfc, 0x3, 0x2, 0x2, 0x2, 0xf1, 0xf2, 0x5, 0x12, 0xa, 0x2, 0xf2, 
    0xf3, 0x7, 0x35, 0x2, 0x2, 0xf3, 0xf4, 0x7, 0x27, 0x2, 0x2, 0xf4, 0xf5, 
    0x7, 0x36, 0x2, 0x2, 0xf5, 0xf6, 0x7, 0x28, 0x2, 0x2, 0xf6, 0xf7, 0x7, 
    0xd, 0x2, 0x2, 0xf7, 0xf8, 0x7, 0x30, 0x2, 0x2, 0xf8, 0xf9, 0x5, 0x1a, 
    0xe, 0x2, 0xf9, 0xfa, 0x7, 0x31, 0x2, 0x2, 0xfa, 0xfc, 0x3, 0x2, 0x2, 
    0x2, 0xfb, 0xd9, 0x3, 0x2, 0x2, 0x2, 0xfb, 0xe2, 0x3, 0x2, 0x2, 0x2, 
    0xfb, 0xeb, 0x3, 0x2, 0x2, 0x2, 0xfb, 0xf1, 0x3, 0x2, 0x2, 0x2, 0xfc, 
    0x1d, 0x3, 0x2, 0x2, 0x2, 0xfd, 0x100, 0x7, 0x2a, 0x2, 0x2, 0xfe, 0x100, 
    0x7, 0x2b, 0x2, 0x2, 0xff, 0xfd, 0x3, 0x2, 0x2, 0x2, 0xff, 0xfe, 0x3, 
    0x2, 0x2, 0x2, 0x100, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x101, 0x106, 0x7, 0x35, 
    0x2, 0x2, 0x102, 0x103, 0x7, 0x35, 0x2, 0x2, 0x103, 0x104, 0x7, 0xd, 
    0x2, 0x2, 0x104, 0x106, 0x5, 0x10, 0x9, 0x2, 0x105, 0x101, 0x3, 0x2, 
    0x2, 0x2, 0x105, 0x102, 0x3, 0x2, 0x2, 0x2, 0x106, 0x21, 0x3, 0x2, 0x2, 
    0x2, 0x107, 0x10c, 0x7, 0x35, 0x2, 0x2, 0x108, 0x109, 0x7, 0x35, 0x2, 
    0x2, 0x109, 0x10a, 0x7, 0xd, 0x2, 0x2, 0x10a, 0x10c, 0x5, 0x10, 0x9, 
    0x2, 0x10b, 0x107, 0x3, 0x2, 0x2, 0x2, 0x10b, 0x108, 0x3, 0x2, 0x2, 
    0x2, 0x10c, 0x23, 0x3, 0x2, 0x2, 0x2, 0x10d, 0x11a, 0x7, 0x2c, 0x2, 
    0x2, 0x10e, 0x10f, 0x5, 0x12, 0xa, 0x2, 0x10f, 0x116, 0x7, 0x35, 0x2, 
    0x2, 0x110, 0x111, 0x7, 0x1e, 0x2, 0x2, 0x111, 0x112, 0x5, 0x12, 0xa, 
    0x2, 0x112, 0x113, 0x7, 0x35, 0x2, 0x2, 0x113, 0x115, 0x3, 0x2, 0x2, 
    0x2, 0x114, 0x110, 0x3, 0x2, 0x2, 0x2, 0x115, 0x118, 0x3, 0x2, 0x2, 
    0x2, 0x116, 0x114, 0x3, 0x2, 0x2, 0x2, 0x116, 0x117, 0x3, 0x2, 0x2, 
    0x2, 0x117, 0x11a, 0x3, 0x2, 0x2, 0x2, 0x118, 0x116, 0x3, 0x2, 0x2, 
    0x2, 0x119, 0x10d, 0x3, 0x2, 0x2, 0x2, 0x119, 0x10e, 0x3, 0x2, 0x2, 
    0x2, 0x11a, 0x25, 0x3, 0x2, 0x2, 0x2, 0x11b, 0x11c, 0x5, 0x14, 0xb, 
    0x2, 0x11c, 0x11d, 0x7, 0x35, 0x2, 0x2, 0x11d, 0x11e, 0x7, 0x23, 0x2, 
    0x2, 0x11e, 0x11f, 0x5, 0x24, 0x13, 0x2, 0x11f, 0x120, 0x7, 0x24, 0x2, 
    0x2, 0x120, 0x121, 0x7, 0x30, 0x2, 0x2, 0x121, 0x122, 0x5, 0x28, 0x15, 
    0x2, 0x122, 0x123, 0x5, 0x2a, 0x16, 0x2, 0x123, 0x124, 0x7, 0x31, 0x2, 
    0x2, 0x124, 0x12f, 0x3, 0x2, 0x2, 0x2, 0x125, 0x126, 0x5, 0x14, 0xb, 
    0x2, 0x126, 0x127, 0x7, 0x35, 0x2, 0x2, 0x127, 0x128, 0x7, 0x23, 0x2, 
    0x2, 0x128, 0x129, 0x7, 0x24, 0x2, 0x2, 0x129, 0x12a, 0x7, 0x30, 0x2, 
    0x2, 0x12a, 0x12b, 0x5, 0x28, 0x15, 0x2, 0x12b, 0x12c, 0x5, 0x2a, 0x16, 
    0x2, 0x12c, 0x12d, 0x7, 0x31, 0x2, 0x2, 0x12d, 0x12f, 0x3, 0x2, 0x2, 
    0x2, 0x12e, 0x11b, 0x3, 0x2, 0x2, 0x2, 0x12e, 0x125, 0x3, 0x2, 0x2, 
    0x2, 0x12f, 0x27, 0x3, 0x2, 0x2, 0x2, 0x130, 0x131, 0x5, 0x1c, 0xf, 
    0x2, 0x131, 0x132, 0x7, 0x32, 0x2, 0x2, 0x132, 0x134, 0x3, 0x2, 0x2, 
    0x2, 0x133, 0x130, 0x3, 0x2, 0x2, 0x2, 0x134, 0x137, 0x3, 0x2, 0x2, 
    0x2, 0x135, 0x133, 0x3, 0x2, 0x2, 0x2, 0x135, 0x136, 0x3, 0x2, 0x2, 
    0x2, 0x136, 0x29, 0x3, 0x2, 0x2, 0x2, 0x137, 0x135, 0x3, 0x2, 0x2, 0x2, 
    0x138, 0x13a, 0x5, 0x2c, 0x17, 0x2, 0x139, 0x138, 0x3, 0x2, 0x2, 0x2, 
    0x13a, 0x13d, 0x3, 0x2, 0x2, 0x2, 0x13b, 0x139, 0x3, 0x2, 0x2, 0x2, 
    0x13b, 0x13c, 0x3, 0x2, 0x2, 0x2, 0x13c, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x13d, 
    0x13b, 0x3, 0x2, 0x2, 0x2, 0x13e, 0x13f, 0x7, 0x30, 0x2, 0x2, 0x13f, 
    0x140, 0x5, 0x2a, 0x16, 0x2, 0x140, 0x141, 0x7, 0x31, 0x2, 0x2, 0x141, 
    0x14d, 0x3, 0x2, 0x2, 0x2, 0x142, 0x143, 0x7, 0x33, 0x2, 0x2, 0x143, 
    0x14d, 0x7, 0x32, 0x2, 0x2, 0x144, 0x14d, 0x5, 0xe, 0x8, 0x2, 0x145, 
    0x146, 0x7, 0x34, 0x2, 0x2, 0x146, 0x147, 0x5, 0x6, 0x4, 0x2, 0x147, 
    0x148, 0x7, 0x32, 0x2, 0x2, 0x148, 0x14d, 0x3, 0x2, 0x2, 0x2, 0x149, 
    0x14a, 0x5, 0x6, 0x4, 0x2, 0x14a, 0x14b, 0x7, 0x32, 0x2, 0x2, 0x14b, 
    0x14d, 0x3, 0x2, 0x2, 0x2, 0x14c, 0x13e, 0x3, 0x2, 0x2, 0x2, 0x14c, 
    0x142, 0x3, 0x2, 0x2, 0x2, 0x14c, 0x144, 0x3, 0x2, 0x2, 0x2, 0x14c, 
    0x145, 0x3, 0x2, 0x2, 0x2, 0x14c, 0x149, 0x3, 0x2, 0x2, 0x2, 0x14d, 
    0x2d, 0x3, 0x2, 0x2, 0x2, 0x14e, 0x152, 0x5, 0x28, 0x15, 0x2, 0x14f, 
    0x151, 0x5, 0x26, 0x14, 0x2, 0x150, 0x14f, 0x3, 0x2, 0x2, 0x2, 0x151, 
    0x154, 0x3, 0x2, 0x2, 0x2, 0x152, 0x150, 0x3, 0x2, 0x2, 0x2, 0x152, 
    0x153, 0x3, 0x2, 0x2, 0x2, 0x153, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x154, 0x152, 
    0x3, 0x2, 0x2, 0x2, 0x1d, 0x33, 0x4e, 0x70, 0x7d, 0x85, 0x91, 0x9b, 
    0xa3, 0xa7, 0xab, 0xbf, 0xcc, 0xd4, 0xd7, 0xdf, 0xe8, 0xfb, 0xff, 0x105, 
    0x10b, 0x116, 0x119, 0x12e, 0x135, 0x13b, 0x14c, 0x152, 
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
