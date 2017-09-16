
// Generated from DZG.g4 by ANTLR 4.7


#include "DZGListener.h"
#include "DZGVisitor.h"

#include "DZGParser.h"


using namespace antlrcpp;
using namespace antlr4;

DZGParser::DZGParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

DZGParser::~DZGParser() {
  delete _interpreter;
}

std::string DZGParser::getGrammarFileName() const {
  return "DZG.g4";
}

const std::vector<std::string>& DZGParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& DZGParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- PrimaryExpressionContext ------------------------------------------------------------------

DZGParser::PrimaryExpressionContext::PrimaryExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DZGParser::PrimaryExpressionContext::Identifier() {
  return getToken(DZGParser::Identifier, 0);
}

tree::TerminalNode* DZGParser::PrimaryExpressionContext::Constant() {
  return getToken(DZGParser::Constant, 0);
}

std::vector<tree::TerminalNode *> DZGParser::PrimaryExpressionContext::StringLiteral() {
  return getTokens(DZGParser::StringLiteral);
}

tree::TerminalNode* DZGParser::PrimaryExpressionContext::StringLiteral(size_t i) {
  return getToken(DZGParser::StringLiteral, i);
}

DZGParser::ExpressionContext* DZGParser::PrimaryExpressionContext::expression() {
  return getRuleContext<DZGParser::ExpressionContext>(0);
}

DZGParser::CompoundStatementContext* DZGParser::PrimaryExpressionContext::compoundStatement() {
  return getRuleContext<DZGParser::CompoundStatementContext>(0);
}


size_t DZGParser::PrimaryExpressionContext::getRuleIndex() const {
  return DZGParser::RulePrimaryExpression;
}

void DZGParser::PrimaryExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimaryExpression(this);
}

void DZGParser::PrimaryExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimaryExpression(this);
}


antlrcpp::Any DZGParser::PrimaryExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DZGVisitor*>(visitor))
    return parserVisitor->visitPrimaryExpression(this);
  else
    return visitor->visitChildren(this);
}

DZGParser::PrimaryExpressionContext* DZGParser::primaryExpression() {
  PrimaryExpressionContext *_localctx = _tracker.createInstance<PrimaryExpressionContext>(_ctx, getState());
  enterRule(_localctx, 0, DZGParser::RulePrimaryExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    setState(127);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(112);
      match(DZGParser::Identifier);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(113);
      match(DZGParser::Constant);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(115); 
      _errHandler->sync(this);
      alt = 1;
      do {
        switch (alt) {
          case 1: {
                setState(114);
                match(DZGParser::StringLiteral);
                break;
              }

        default:
          throw NoViableAltException(this);
        }
        setState(117); 
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
      } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(119);
      match(DZGParser::T__0);
      setState(120);
      expression(0);
      setState(121);
      match(DZGParser::T__1);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(123);
      match(DZGParser::T__0);
      setState(124);
      compoundStatement();
      setState(125);
      match(DZGParser::T__1);
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

//----------------- IdentifierListContext ------------------------------------------------------------------

DZGParser::IdentifierListContext::IdentifierListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DZGParser::IdentifierListContext::Identifier() {
  return getToken(DZGParser::Identifier, 0);
}

DZGParser::IdentifierListContext* DZGParser::IdentifierListContext::identifierList() {
  return getRuleContext<DZGParser::IdentifierListContext>(0);
}


size_t DZGParser::IdentifierListContext::getRuleIndex() const {
  return DZGParser::RuleIdentifierList;
}

void DZGParser::IdentifierListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdentifierList(this);
}

void DZGParser::IdentifierListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdentifierList(this);
}


antlrcpp::Any DZGParser::IdentifierListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DZGVisitor*>(visitor))
    return parserVisitor->visitIdentifierList(this);
  else
    return visitor->visitChildren(this);
}


DZGParser::IdentifierListContext* DZGParser::identifierList() {
   return identifierList(0);
}

DZGParser::IdentifierListContext* DZGParser::identifierList(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  DZGParser::IdentifierListContext *_localctx = _tracker.createInstance<IdentifierListContext>(_ctx, parentState);
  DZGParser::IdentifierListContext *previousContext = _localctx;
  size_t startState = 2;
  enterRecursionRule(_localctx, 2, DZGParser::RuleIdentifierList, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(130);
    match(DZGParser::Identifier);
    _ctx->stop = _input->LT(-1);
    setState(137);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<IdentifierListContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleIdentifierList);
        setState(132);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(133);
        match(DZGParser::T__2);
        setState(134);
        match(DZGParser::Identifier); 
      }
      setState(139);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

DZGParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DZGParser::AssignmentExpressionContext* DZGParser::ExpressionContext::assignmentExpression() {
  return getRuleContext<DZGParser::AssignmentExpressionContext>(0);
}

DZGParser::ExpressionContext* DZGParser::ExpressionContext::expression() {
  return getRuleContext<DZGParser::ExpressionContext>(0);
}


size_t DZGParser::ExpressionContext::getRuleIndex() const {
  return DZGParser::RuleExpression;
}

void DZGParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void DZGParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}


antlrcpp::Any DZGParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DZGVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}


DZGParser::ExpressionContext* DZGParser::expression() {
   return expression(0);
}

DZGParser::ExpressionContext* DZGParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  DZGParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  DZGParser::ExpressionContext *previousContext = _localctx;
  size_t startState = 4;
  enterRecursionRule(_localctx, 4, DZGParser::RuleExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(141);
    assignmentExpression();
    _ctx->stop = _input->LT(-1);
    setState(148);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleExpression);
        setState(143);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(144);
        match(DZGParser::T__2);
        setState(145);
        assignmentExpression(); 
      }
      setState(150);
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

//----------------- AssignmentExpressionContext ------------------------------------------------------------------

DZGParser::AssignmentExpressionContext::AssignmentExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DZGParser::ConditionalExpressionContext* DZGParser::AssignmentExpressionContext::conditionalExpression() {
  return getRuleContext<DZGParser::ConditionalExpressionContext>(0);
}

DZGParser::UnaryExpressionContext* DZGParser::AssignmentExpressionContext::unaryExpression() {
  return getRuleContext<DZGParser::UnaryExpressionContext>(0);
}

DZGParser::AssignmentOperatorContext* DZGParser::AssignmentExpressionContext::assignmentOperator() {
  return getRuleContext<DZGParser::AssignmentOperatorContext>(0);
}

DZGParser::AssignmentExpressionContext* DZGParser::AssignmentExpressionContext::assignmentExpression() {
  return getRuleContext<DZGParser::AssignmentExpressionContext>(0);
}

tree::TerminalNode* DZGParser::AssignmentExpressionContext::DigitSequence() {
  return getToken(DZGParser::DigitSequence, 0);
}


size_t DZGParser::AssignmentExpressionContext::getRuleIndex() const {
  return DZGParser::RuleAssignmentExpression;
}

void DZGParser::AssignmentExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignmentExpression(this);
}

void DZGParser::AssignmentExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignmentExpression(this);
}


antlrcpp::Any DZGParser::AssignmentExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DZGVisitor*>(visitor))
    return parserVisitor->visitAssignmentExpression(this);
  else
    return visitor->visitChildren(this);
}

DZGParser::AssignmentExpressionContext* DZGParser::assignmentExpression() {
  AssignmentExpressionContext *_localctx = _tracker.createInstance<AssignmentExpressionContext>(_ctx, getState());
  enterRule(_localctx, 6, DZGParser::RuleAssignmentExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(157);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(151);
      conditionalExpression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(152);
      unaryExpression();
      setState(153);
      assignmentOperator();
      setState(154);
      assignmentExpression();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(156);
      match(DZGParser::DigitSequence);
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

//----------------- ConditionalExpressionContext ------------------------------------------------------------------

DZGParser::ConditionalExpressionContext::ConditionalExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DZGParser::LogicalOrExpressionContext* DZGParser::ConditionalExpressionContext::logicalOrExpression() {
  return getRuleContext<DZGParser::LogicalOrExpressionContext>(0);
}

DZGParser::ExpressionContext* DZGParser::ConditionalExpressionContext::expression() {
  return getRuleContext<DZGParser::ExpressionContext>(0);
}

DZGParser::ConditionalExpressionContext* DZGParser::ConditionalExpressionContext::conditionalExpression() {
  return getRuleContext<DZGParser::ConditionalExpressionContext>(0);
}


size_t DZGParser::ConditionalExpressionContext::getRuleIndex() const {
  return DZGParser::RuleConditionalExpression;
}

void DZGParser::ConditionalExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConditionalExpression(this);
}

void DZGParser::ConditionalExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConditionalExpression(this);
}


antlrcpp::Any DZGParser::ConditionalExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DZGVisitor*>(visitor))
    return parserVisitor->visitConditionalExpression(this);
  else
    return visitor->visitChildren(this);
}

DZGParser::ConditionalExpressionContext* DZGParser::conditionalExpression() {
  ConditionalExpressionContext *_localctx = _tracker.createInstance<ConditionalExpressionContext>(_ctx, getState());
  enterRule(_localctx, 8, DZGParser::RuleConditionalExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(159);
    logicalOrExpression(0);
    setState(165);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      setState(160);
      match(DZGParser::T__3);
      setState(161);
      expression(0);
      setState(162);
      match(DZGParser::T__4);
      setState(163);
      conditionalExpression();
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

//----------------- LogicalOrExpressionContext ------------------------------------------------------------------

DZGParser::LogicalOrExpressionContext::LogicalOrExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DZGParser::LogicalAndExpressionContext* DZGParser::LogicalOrExpressionContext::logicalAndExpression() {
  return getRuleContext<DZGParser::LogicalAndExpressionContext>(0);
}

DZGParser::LogicalOrExpressionContext* DZGParser::LogicalOrExpressionContext::logicalOrExpression() {
  return getRuleContext<DZGParser::LogicalOrExpressionContext>(0);
}


size_t DZGParser::LogicalOrExpressionContext::getRuleIndex() const {
  return DZGParser::RuleLogicalOrExpression;
}

void DZGParser::LogicalOrExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogicalOrExpression(this);
}

void DZGParser::LogicalOrExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogicalOrExpression(this);
}


antlrcpp::Any DZGParser::LogicalOrExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DZGVisitor*>(visitor))
    return parserVisitor->visitLogicalOrExpression(this);
  else
    return visitor->visitChildren(this);
}


DZGParser::LogicalOrExpressionContext* DZGParser::logicalOrExpression() {
   return logicalOrExpression(0);
}

DZGParser::LogicalOrExpressionContext* DZGParser::logicalOrExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  DZGParser::LogicalOrExpressionContext *_localctx = _tracker.createInstance<LogicalOrExpressionContext>(_ctx, parentState);
  DZGParser::LogicalOrExpressionContext *previousContext = _localctx;
  size_t startState = 10;
  enterRecursionRule(_localctx, 10, DZGParser::RuleLogicalOrExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(168);
    logicalAndExpression(0);
    _ctx->stop = _input->LT(-1);
    setState(175);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<LogicalOrExpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleLogicalOrExpression);
        setState(170);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(171);
        match(DZGParser::T__5);
        setState(172);
        logicalAndExpression(0); 
      }
      setState(177);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- LogicalAndExpressionContext ------------------------------------------------------------------

DZGParser::LogicalAndExpressionContext::LogicalAndExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DZGParser::InclusiveOrExpressionContext* DZGParser::LogicalAndExpressionContext::inclusiveOrExpression() {
  return getRuleContext<DZGParser::InclusiveOrExpressionContext>(0);
}

DZGParser::LogicalAndExpressionContext* DZGParser::LogicalAndExpressionContext::logicalAndExpression() {
  return getRuleContext<DZGParser::LogicalAndExpressionContext>(0);
}


size_t DZGParser::LogicalAndExpressionContext::getRuleIndex() const {
  return DZGParser::RuleLogicalAndExpression;
}

void DZGParser::LogicalAndExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogicalAndExpression(this);
}

void DZGParser::LogicalAndExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogicalAndExpression(this);
}


antlrcpp::Any DZGParser::LogicalAndExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DZGVisitor*>(visitor))
    return parserVisitor->visitLogicalAndExpression(this);
  else
    return visitor->visitChildren(this);
}


DZGParser::LogicalAndExpressionContext* DZGParser::logicalAndExpression() {
   return logicalAndExpression(0);
}

DZGParser::LogicalAndExpressionContext* DZGParser::logicalAndExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  DZGParser::LogicalAndExpressionContext *_localctx = _tracker.createInstance<LogicalAndExpressionContext>(_ctx, parentState);
  DZGParser::LogicalAndExpressionContext *previousContext = _localctx;
  size_t startState = 12;
  enterRecursionRule(_localctx, 12, DZGParser::RuleLogicalAndExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(179);
    inclusiveOrExpression(0);
    _ctx->stop = _input->LT(-1);
    setState(186);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<LogicalAndExpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleLogicalAndExpression);
        setState(181);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(182);
        match(DZGParser::T__6);
        setState(183);
        inclusiveOrExpression(0); 
      }
      setState(188);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- InclusiveOrExpressionContext ------------------------------------------------------------------

DZGParser::InclusiveOrExpressionContext::InclusiveOrExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DZGParser::ExclusiveOrExpressionContext* DZGParser::InclusiveOrExpressionContext::exclusiveOrExpression() {
  return getRuleContext<DZGParser::ExclusiveOrExpressionContext>(0);
}

DZGParser::InclusiveOrExpressionContext* DZGParser::InclusiveOrExpressionContext::inclusiveOrExpression() {
  return getRuleContext<DZGParser::InclusiveOrExpressionContext>(0);
}


size_t DZGParser::InclusiveOrExpressionContext::getRuleIndex() const {
  return DZGParser::RuleInclusiveOrExpression;
}

void DZGParser::InclusiveOrExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInclusiveOrExpression(this);
}

void DZGParser::InclusiveOrExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInclusiveOrExpression(this);
}


antlrcpp::Any DZGParser::InclusiveOrExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DZGVisitor*>(visitor))
    return parserVisitor->visitInclusiveOrExpression(this);
  else
    return visitor->visitChildren(this);
}


DZGParser::InclusiveOrExpressionContext* DZGParser::inclusiveOrExpression() {
   return inclusiveOrExpression(0);
}

DZGParser::InclusiveOrExpressionContext* DZGParser::inclusiveOrExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  DZGParser::InclusiveOrExpressionContext *_localctx = _tracker.createInstance<InclusiveOrExpressionContext>(_ctx, parentState);
  DZGParser::InclusiveOrExpressionContext *previousContext = _localctx;
  size_t startState = 14;
  enterRecursionRule(_localctx, 14, DZGParser::RuleInclusiveOrExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(190);
    exclusiveOrExpression(0);
    _ctx->stop = _input->LT(-1);
    setState(197);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<InclusiveOrExpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleInclusiveOrExpression);
        setState(192);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(193);
        match(DZGParser::T__7);
        setState(194);
        exclusiveOrExpression(0); 
      }
      setState(199);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ExclusiveOrExpressionContext ------------------------------------------------------------------

DZGParser::ExclusiveOrExpressionContext::ExclusiveOrExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DZGParser::AndExpressionContext* DZGParser::ExclusiveOrExpressionContext::andExpression() {
  return getRuleContext<DZGParser::AndExpressionContext>(0);
}

DZGParser::ExclusiveOrExpressionContext* DZGParser::ExclusiveOrExpressionContext::exclusiveOrExpression() {
  return getRuleContext<DZGParser::ExclusiveOrExpressionContext>(0);
}


size_t DZGParser::ExclusiveOrExpressionContext::getRuleIndex() const {
  return DZGParser::RuleExclusiveOrExpression;
}

void DZGParser::ExclusiveOrExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExclusiveOrExpression(this);
}

void DZGParser::ExclusiveOrExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExclusiveOrExpression(this);
}


antlrcpp::Any DZGParser::ExclusiveOrExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DZGVisitor*>(visitor))
    return parserVisitor->visitExclusiveOrExpression(this);
  else
    return visitor->visitChildren(this);
}


DZGParser::ExclusiveOrExpressionContext* DZGParser::exclusiveOrExpression() {
   return exclusiveOrExpression(0);
}

DZGParser::ExclusiveOrExpressionContext* DZGParser::exclusiveOrExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  DZGParser::ExclusiveOrExpressionContext *_localctx = _tracker.createInstance<ExclusiveOrExpressionContext>(_ctx, parentState);
  DZGParser::ExclusiveOrExpressionContext *previousContext = _localctx;
  size_t startState = 16;
  enterRecursionRule(_localctx, 16, DZGParser::RuleExclusiveOrExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(201);
    andExpression(0);
    _ctx->stop = _input->LT(-1);
    setState(208);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ExclusiveOrExpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleExclusiveOrExpression);
        setState(203);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(204);
        match(DZGParser::T__8);
        setState(205);
        andExpression(0); 
      }
      setState(210);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- AndExpressionContext ------------------------------------------------------------------

DZGParser::AndExpressionContext::AndExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DZGParser::EqualityExpressionContext* DZGParser::AndExpressionContext::equalityExpression() {
  return getRuleContext<DZGParser::EqualityExpressionContext>(0);
}

DZGParser::AndExpressionContext* DZGParser::AndExpressionContext::andExpression() {
  return getRuleContext<DZGParser::AndExpressionContext>(0);
}


size_t DZGParser::AndExpressionContext::getRuleIndex() const {
  return DZGParser::RuleAndExpression;
}

void DZGParser::AndExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAndExpression(this);
}

void DZGParser::AndExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAndExpression(this);
}


antlrcpp::Any DZGParser::AndExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DZGVisitor*>(visitor))
    return parserVisitor->visitAndExpression(this);
  else
    return visitor->visitChildren(this);
}


DZGParser::AndExpressionContext* DZGParser::andExpression() {
   return andExpression(0);
}

DZGParser::AndExpressionContext* DZGParser::andExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  DZGParser::AndExpressionContext *_localctx = _tracker.createInstance<AndExpressionContext>(_ctx, parentState);
  DZGParser::AndExpressionContext *previousContext = _localctx;
  size_t startState = 18;
  enterRecursionRule(_localctx, 18, DZGParser::RuleAndExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(212);
    equalityExpression(0);
    _ctx->stop = _input->LT(-1);
    setState(219);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<AndExpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleAndExpression);
        setState(214);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(215);
        match(DZGParser::T__9);
        setState(216);
        equalityExpression(0); 
      }
      setState(221);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- EqualityExpressionContext ------------------------------------------------------------------

DZGParser::EqualityExpressionContext::EqualityExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DZGParser::RelationalExpressionContext* DZGParser::EqualityExpressionContext::relationalExpression() {
  return getRuleContext<DZGParser::RelationalExpressionContext>(0);
}

DZGParser::EqualityExpressionContext* DZGParser::EqualityExpressionContext::equalityExpression() {
  return getRuleContext<DZGParser::EqualityExpressionContext>(0);
}


size_t DZGParser::EqualityExpressionContext::getRuleIndex() const {
  return DZGParser::RuleEqualityExpression;
}

void DZGParser::EqualityExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEqualityExpression(this);
}

void DZGParser::EqualityExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEqualityExpression(this);
}


antlrcpp::Any DZGParser::EqualityExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DZGVisitor*>(visitor))
    return parserVisitor->visitEqualityExpression(this);
  else
    return visitor->visitChildren(this);
}


DZGParser::EqualityExpressionContext* DZGParser::equalityExpression() {
   return equalityExpression(0);
}

DZGParser::EqualityExpressionContext* DZGParser::equalityExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  DZGParser::EqualityExpressionContext *_localctx = _tracker.createInstance<EqualityExpressionContext>(_ctx, parentState);
  DZGParser::EqualityExpressionContext *previousContext = _localctx;
  size_t startState = 20;
  enterRecursionRule(_localctx, 20, DZGParser::RuleEqualityExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(223);
    relationalExpression(0);
    _ctx->stop = _input->LT(-1);
    setState(233);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(231);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<EqualityExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleEqualityExpression);
          setState(225);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(226);
          match(DZGParser::T__10);
          setState(227);
          relationalExpression(0);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<EqualityExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleEqualityExpression);
          setState(228);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(229);
          match(DZGParser::T__11);
          setState(230);
          relationalExpression(0);
          break;
        }

        } 
      }
      setState(235);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- RelationalExpressionContext ------------------------------------------------------------------

DZGParser::RelationalExpressionContext::RelationalExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DZGParser::ShiftExpressionContext* DZGParser::RelationalExpressionContext::shiftExpression() {
  return getRuleContext<DZGParser::ShiftExpressionContext>(0);
}

DZGParser::RelationalExpressionContext* DZGParser::RelationalExpressionContext::relationalExpression() {
  return getRuleContext<DZGParser::RelationalExpressionContext>(0);
}


size_t DZGParser::RelationalExpressionContext::getRuleIndex() const {
  return DZGParser::RuleRelationalExpression;
}

void DZGParser::RelationalExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRelationalExpression(this);
}

void DZGParser::RelationalExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRelationalExpression(this);
}


antlrcpp::Any DZGParser::RelationalExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DZGVisitor*>(visitor))
    return parserVisitor->visitRelationalExpression(this);
  else
    return visitor->visitChildren(this);
}


DZGParser::RelationalExpressionContext* DZGParser::relationalExpression() {
   return relationalExpression(0);
}

DZGParser::RelationalExpressionContext* DZGParser::relationalExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  DZGParser::RelationalExpressionContext *_localctx = _tracker.createInstance<RelationalExpressionContext>(_ctx, parentState);
  DZGParser::RelationalExpressionContext *previousContext = _localctx;
  size_t startState = 22;
  enterRecursionRule(_localctx, 22, DZGParser::RuleRelationalExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(237);
    shiftExpression(0);
    _ctx->stop = _input->LT(-1);
    setState(253);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(251);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<RelationalExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleRelationalExpression);
          setState(239);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(240);
          match(DZGParser::T__12);
          setState(241);
          shiftExpression(0);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<RelationalExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleRelationalExpression);
          setState(242);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(243);
          match(DZGParser::T__13);
          setState(244);
          shiftExpression(0);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<RelationalExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleRelationalExpression);
          setState(245);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(246);
          match(DZGParser::T__14);
          setState(247);
          shiftExpression(0);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<RelationalExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleRelationalExpression);
          setState(248);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(249);
          match(DZGParser::T__15);
          setState(250);
          shiftExpression(0);
          break;
        }

        } 
      }
      setState(255);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ShiftExpressionContext ------------------------------------------------------------------

DZGParser::ShiftExpressionContext::ShiftExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DZGParser::AdditiveExpressionContext* DZGParser::ShiftExpressionContext::additiveExpression() {
  return getRuleContext<DZGParser::AdditiveExpressionContext>(0);
}

DZGParser::ShiftExpressionContext* DZGParser::ShiftExpressionContext::shiftExpression() {
  return getRuleContext<DZGParser::ShiftExpressionContext>(0);
}


size_t DZGParser::ShiftExpressionContext::getRuleIndex() const {
  return DZGParser::RuleShiftExpression;
}

void DZGParser::ShiftExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterShiftExpression(this);
}

void DZGParser::ShiftExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitShiftExpression(this);
}


antlrcpp::Any DZGParser::ShiftExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DZGVisitor*>(visitor))
    return parserVisitor->visitShiftExpression(this);
  else
    return visitor->visitChildren(this);
}


DZGParser::ShiftExpressionContext* DZGParser::shiftExpression() {
   return shiftExpression(0);
}

DZGParser::ShiftExpressionContext* DZGParser::shiftExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  DZGParser::ShiftExpressionContext *_localctx = _tracker.createInstance<ShiftExpressionContext>(_ctx, parentState);
  DZGParser::ShiftExpressionContext *previousContext = _localctx;
  size_t startState = 24;
  enterRecursionRule(_localctx, 24, DZGParser::RuleShiftExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(257);
    additiveExpression(0);
    _ctx->stop = _input->LT(-1);
    setState(267);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(265);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ShiftExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleShiftExpression);
          setState(259);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(260);
          match(DZGParser::T__16);
          setState(261);
          additiveExpression(0);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ShiftExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleShiftExpression);
          setState(262);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(263);
          match(DZGParser::T__17);
          setState(264);
          additiveExpression(0);
          break;
        }

        } 
      }
      setState(269);
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

//----------------- AdditiveExpressionContext ------------------------------------------------------------------

DZGParser::AdditiveExpressionContext::AdditiveExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DZGParser::MultiplicativeExpressionContext* DZGParser::AdditiveExpressionContext::multiplicativeExpression() {
  return getRuleContext<DZGParser::MultiplicativeExpressionContext>(0);
}

DZGParser::AdditiveExpressionContext* DZGParser::AdditiveExpressionContext::additiveExpression() {
  return getRuleContext<DZGParser::AdditiveExpressionContext>(0);
}


size_t DZGParser::AdditiveExpressionContext::getRuleIndex() const {
  return DZGParser::RuleAdditiveExpression;
}

void DZGParser::AdditiveExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAdditiveExpression(this);
}

void DZGParser::AdditiveExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAdditiveExpression(this);
}


antlrcpp::Any DZGParser::AdditiveExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DZGVisitor*>(visitor))
    return parserVisitor->visitAdditiveExpression(this);
  else
    return visitor->visitChildren(this);
}


DZGParser::AdditiveExpressionContext* DZGParser::additiveExpression() {
   return additiveExpression(0);
}

DZGParser::AdditiveExpressionContext* DZGParser::additiveExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  DZGParser::AdditiveExpressionContext *_localctx = _tracker.createInstance<AdditiveExpressionContext>(_ctx, parentState);
  DZGParser::AdditiveExpressionContext *previousContext = _localctx;
  size_t startState = 26;
  enterRecursionRule(_localctx, 26, DZGParser::RuleAdditiveExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(271);
    multiplicativeExpression(0);
    _ctx->stop = _input->LT(-1);
    setState(281);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(279);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<AdditiveExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleAdditiveExpression);
          setState(273);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(274);
          match(DZGParser::T__18);
          setState(275);
          multiplicativeExpression(0);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<AdditiveExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleAdditiveExpression);
          setState(276);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(277);
          match(DZGParser::T__19);
          setState(278);
          multiplicativeExpression(0);
          break;
        }

        } 
      }
      setState(283);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- MultiplicativeExpressionContext ------------------------------------------------------------------

DZGParser::MultiplicativeExpressionContext::MultiplicativeExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DZGParser::CastExpressionContext* DZGParser::MultiplicativeExpressionContext::castExpression() {
  return getRuleContext<DZGParser::CastExpressionContext>(0);
}

DZGParser::MultiplicativeExpressionContext* DZGParser::MultiplicativeExpressionContext::multiplicativeExpression() {
  return getRuleContext<DZGParser::MultiplicativeExpressionContext>(0);
}


size_t DZGParser::MultiplicativeExpressionContext::getRuleIndex() const {
  return DZGParser::RuleMultiplicativeExpression;
}

void DZGParser::MultiplicativeExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMultiplicativeExpression(this);
}

void DZGParser::MultiplicativeExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMultiplicativeExpression(this);
}


antlrcpp::Any DZGParser::MultiplicativeExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DZGVisitor*>(visitor))
    return parserVisitor->visitMultiplicativeExpression(this);
  else
    return visitor->visitChildren(this);
}


DZGParser::MultiplicativeExpressionContext* DZGParser::multiplicativeExpression() {
   return multiplicativeExpression(0);
}

DZGParser::MultiplicativeExpressionContext* DZGParser::multiplicativeExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  DZGParser::MultiplicativeExpressionContext *_localctx = _tracker.createInstance<MultiplicativeExpressionContext>(_ctx, parentState);
  DZGParser::MultiplicativeExpressionContext *previousContext = _localctx;
  size_t startState = 28;
  enterRecursionRule(_localctx, 28, DZGParser::RuleMultiplicativeExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(285);
    castExpression();
    _ctx->stop = _input->LT(-1);
    setState(298);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(296);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<MultiplicativeExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleMultiplicativeExpression);
          setState(287);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(288);
          match(DZGParser::T__20);
          setState(289);
          castExpression();
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<MultiplicativeExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleMultiplicativeExpression);
          setState(290);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(291);
          match(DZGParser::T__21);
          setState(292);
          castExpression();
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<MultiplicativeExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleMultiplicativeExpression);
          setState(293);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(294);
          match(DZGParser::T__22);
          setState(295);
          castExpression();
          break;
        }

        } 
      }
      setState(300);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- CastExpressionContext ------------------------------------------------------------------

DZGParser::CastExpressionContext::CastExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DZGParser::UnaryExpressionContext* DZGParser::CastExpressionContext::unaryExpression() {
  return getRuleContext<DZGParser::UnaryExpressionContext>(0);
}

DZGParser::TypeNameContext* DZGParser::CastExpressionContext::typeName() {
  return getRuleContext<DZGParser::TypeNameContext>(0);
}

DZGParser::CastExpressionContext* DZGParser::CastExpressionContext::castExpression() {
  return getRuleContext<DZGParser::CastExpressionContext>(0);
}

tree::TerminalNode* DZGParser::CastExpressionContext::DigitSequence() {
  return getToken(DZGParser::DigitSequence, 0);
}


size_t DZGParser::CastExpressionContext::getRuleIndex() const {
  return DZGParser::RuleCastExpression;
}

void DZGParser::CastExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCastExpression(this);
}

void DZGParser::CastExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCastExpression(this);
}


antlrcpp::Any DZGParser::CastExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DZGVisitor*>(visitor))
    return parserVisitor->visitCastExpression(this);
  else
    return visitor->visitChildren(this);
}

DZGParser::CastExpressionContext* DZGParser::castExpression() {
  CastExpressionContext *_localctx = _tracker.createInstance<CastExpressionContext>(_ctx, getState());
  enterRule(_localctx, 30, DZGParser::RuleCastExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(308);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(301);
      unaryExpression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(302);
      match(DZGParser::T__0);
      setState(303);
      typeName();
      setState(304);
      match(DZGParser::T__1);
      setState(305);
      castExpression();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(307);
      match(DZGParser::DigitSequence);
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

//----------------- UnaryExpressionContext ------------------------------------------------------------------

DZGParser::UnaryExpressionContext::UnaryExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DZGParser::PostfixExpressionContext* DZGParser::UnaryExpressionContext::postfixExpression() {
  return getRuleContext<DZGParser::PostfixExpressionContext>(0);
}

DZGParser::UnaryExpressionContext* DZGParser::UnaryExpressionContext::unaryExpression() {
  return getRuleContext<DZGParser::UnaryExpressionContext>(0);
}

DZGParser::UnaryOperatorContext* DZGParser::UnaryExpressionContext::unaryOperator() {
  return getRuleContext<DZGParser::UnaryOperatorContext>(0);
}

DZGParser::CastExpressionContext* DZGParser::UnaryExpressionContext::castExpression() {
  return getRuleContext<DZGParser::CastExpressionContext>(0);
}


size_t DZGParser::UnaryExpressionContext::getRuleIndex() const {
  return DZGParser::RuleUnaryExpression;
}

void DZGParser::UnaryExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnaryExpression(this);
}

void DZGParser::UnaryExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnaryExpression(this);
}


antlrcpp::Any DZGParser::UnaryExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DZGVisitor*>(visitor))
    return parserVisitor->visitUnaryExpression(this);
  else
    return visitor->visitChildren(this);
}

DZGParser::UnaryExpressionContext* DZGParser::unaryExpression() {
  UnaryExpressionContext *_localctx = _tracker.createInstance<UnaryExpressionContext>(_ctx, getState());
  enterRule(_localctx, 32, DZGParser::RuleUnaryExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(318);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DZGParser::T__0:
      case DZGParser::Identifier:
      case DZGParser::Constant:
      case DZGParser::StringLiteral: {
        enterOuterAlt(_localctx, 1);
        setState(310);
        postfixExpression(0);
        break;
      }

      case DZGParser::T__23: {
        enterOuterAlt(_localctx, 2);
        setState(311);
        match(DZGParser::T__23);
        setState(312);
        unaryExpression();
        break;
      }

      case DZGParser::T__24: {
        enterOuterAlt(_localctx, 3);
        setState(313);
        match(DZGParser::T__24);
        setState(314);
        unaryExpression();
        break;
      }

      case DZGParser::T__9:
      case DZGParser::T__18:
      case DZGParser::T__19:
      case DZGParser::T__20:
      case DZGParser::T__30:
      case DZGParser::T__31: {
        enterOuterAlt(_localctx, 4);
        setState(315);
        unaryOperator();
        setState(316);
        castExpression();
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

//----------------- PostfixExpressionContext ------------------------------------------------------------------

DZGParser::PostfixExpressionContext::PostfixExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DZGParser::PrimaryExpressionContext* DZGParser::PostfixExpressionContext::primaryExpression() {
  return getRuleContext<DZGParser::PrimaryExpressionContext>(0);
}

DZGParser::TypeNameContext* DZGParser::PostfixExpressionContext::typeName() {
  return getRuleContext<DZGParser::TypeNameContext>(0);
}

DZGParser::InitializerListContext* DZGParser::PostfixExpressionContext::initializerList() {
  return getRuleContext<DZGParser::InitializerListContext>(0);
}

DZGParser::PostfixExpressionContext* DZGParser::PostfixExpressionContext::postfixExpression() {
  return getRuleContext<DZGParser::PostfixExpressionContext>(0);
}

DZGParser::ExpressionContext* DZGParser::PostfixExpressionContext::expression() {
  return getRuleContext<DZGParser::ExpressionContext>(0);
}

DZGParser::ArgumentExpressionListContext* DZGParser::PostfixExpressionContext::argumentExpressionList() {
  return getRuleContext<DZGParser::ArgumentExpressionListContext>(0);
}

tree::TerminalNode* DZGParser::PostfixExpressionContext::Identifier() {
  return getToken(DZGParser::Identifier, 0);
}


size_t DZGParser::PostfixExpressionContext::getRuleIndex() const {
  return DZGParser::RulePostfixExpression;
}

void DZGParser::PostfixExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPostfixExpression(this);
}

void DZGParser::PostfixExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPostfixExpression(this);
}


antlrcpp::Any DZGParser::PostfixExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DZGVisitor*>(visitor))
    return parserVisitor->visitPostfixExpression(this);
  else
    return visitor->visitChildren(this);
}


DZGParser::PostfixExpressionContext* DZGParser::postfixExpression() {
   return postfixExpression(0);
}

DZGParser::PostfixExpressionContext* DZGParser::postfixExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  DZGParser::PostfixExpressionContext *_localctx = _tracker.createInstance<PostfixExpressionContext>(_ctx, parentState);
  DZGParser::PostfixExpressionContext *previousContext = _localctx;
  size_t startState = 34;
  enterRecursionRule(_localctx, 34, DZGParser::RulePostfixExpression, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(337);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
    case 1: {
      setState(321);
      primaryExpression();
      break;
    }

    case 2: {
      setState(322);
      match(DZGParser::T__0);
      setState(323);
      typeName();
      setState(324);
      match(DZGParser::T__1);
      setState(325);
      match(DZGParser::T__28);
      setState(326);
      initializerList(0);
      setState(327);
      match(DZGParser::T__29);
      break;
    }

    case 3: {
      setState(329);
      match(DZGParser::T__0);
      setState(330);
      typeName();
      setState(331);
      match(DZGParser::T__1);
      setState(332);
      match(DZGParser::T__28);
      setState(333);
      initializerList(0);
      setState(334);
      match(DZGParser::T__2);
      setState(335);
      match(DZGParser::T__29);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(359);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(357);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<PostfixExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfixExpression);
          setState(339);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(340);
          match(DZGParser::T__25);
          setState(341);
          expression(0);
          setState(342);
          match(DZGParser::T__26);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<PostfixExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfixExpression);
          setState(344);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(345);
          match(DZGParser::T__0);
          setState(347);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << DZGParser::T__0)
            | (1ULL << DZGParser::T__9)
            | (1ULL << DZGParser::T__18)
            | (1ULL << DZGParser::T__19)
            | (1ULL << DZGParser::T__20)
            | (1ULL << DZGParser::T__23)
            | (1ULL << DZGParser::T__24)
            | (1ULL << DZGParser::T__30)
            | (1ULL << DZGParser::T__31)
            | (1ULL << DZGParser::Identifier)
            | (1ULL << DZGParser::Constant)
            | (1ULL << DZGParser::DigitSequence)
            | (1ULL << DZGParser::StringLiteral))) != 0)) {
            setState(346);
            argumentExpressionList(0);
          }
          setState(349);
          match(DZGParser::T__1);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<PostfixExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfixExpression);
          setState(350);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(351);
          match(DZGParser::T__27);
          setState(352);
          match(DZGParser::Identifier);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<PostfixExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfixExpression);
          setState(353);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(354);
          match(DZGParser::T__23);
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<PostfixExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfixExpression);
          setState(355);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(356);
          match(DZGParser::T__24);
          break;
        }

        } 
      }
      setState(361);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ArgumentExpressionListContext ------------------------------------------------------------------

DZGParser::ArgumentExpressionListContext::ArgumentExpressionListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DZGParser::AssignmentExpressionContext* DZGParser::ArgumentExpressionListContext::assignmentExpression() {
  return getRuleContext<DZGParser::AssignmentExpressionContext>(0);
}

DZGParser::ArgumentExpressionListContext* DZGParser::ArgumentExpressionListContext::argumentExpressionList() {
  return getRuleContext<DZGParser::ArgumentExpressionListContext>(0);
}


size_t DZGParser::ArgumentExpressionListContext::getRuleIndex() const {
  return DZGParser::RuleArgumentExpressionList;
}

void DZGParser::ArgumentExpressionListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArgumentExpressionList(this);
}

void DZGParser::ArgumentExpressionListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArgumentExpressionList(this);
}


antlrcpp::Any DZGParser::ArgumentExpressionListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DZGVisitor*>(visitor))
    return parserVisitor->visitArgumentExpressionList(this);
  else
    return visitor->visitChildren(this);
}


DZGParser::ArgumentExpressionListContext* DZGParser::argumentExpressionList() {
   return argumentExpressionList(0);
}

DZGParser::ArgumentExpressionListContext* DZGParser::argumentExpressionList(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  DZGParser::ArgumentExpressionListContext *_localctx = _tracker.createInstance<ArgumentExpressionListContext>(_ctx, parentState);
  DZGParser::ArgumentExpressionListContext *previousContext = _localctx;
  size_t startState = 36;
  enterRecursionRule(_localctx, 36, DZGParser::RuleArgumentExpressionList, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(363);
    assignmentExpression();
    _ctx->stop = _input->LT(-1);
    setState(370);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ArgumentExpressionListContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleArgumentExpressionList);
        setState(365);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(366);
        match(DZGParser::T__2);
        setState(367);
        assignmentExpression(); 
      }
      setState(372);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- UnaryOperatorContext ------------------------------------------------------------------

DZGParser::UnaryOperatorContext::UnaryOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t DZGParser::UnaryOperatorContext::getRuleIndex() const {
  return DZGParser::RuleUnaryOperator;
}

void DZGParser::UnaryOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnaryOperator(this);
}

void DZGParser::UnaryOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnaryOperator(this);
}


antlrcpp::Any DZGParser::UnaryOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DZGVisitor*>(visitor))
    return parserVisitor->visitUnaryOperator(this);
  else
    return visitor->visitChildren(this);
}

DZGParser::UnaryOperatorContext* DZGParser::unaryOperator() {
  UnaryOperatorContext *_localctx = _tracker.createInstance<UnaryOperatorContext>(_ctx, getState());
  enterRule(_localctx, 38, DZGParser::RuleUnaryOperator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(373);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << DZGParser::T__9)
      | (1ULL << DZGParser::T__18)
      | (1ULL << DZGParser::T__19)
      | (1ULL << DZGParser::T__20)
      | (1ULL << DZGParser::T__30)
      | (1ULL << DZGParser::T__31))) != 0))) {
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

//----------------- TypeNameContext ------------------------------------------------------------------

DZGParser::TypeNameContext::TypeNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DZGParser::SpecifierQualifierListContext* DZGParser::TypeNameContext::specifierQualifierList() {
  return getRuleContext<DZGParser::SpecifierQualifierListContext>(0);
}


size_t DZGParser::TypeNameContext::getRuleIndex() const {
  return DZGParser::RuleTypeName;
}

void DZGParser::TypeNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeName(this);
}

void DZGParser::TypeNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeName(this);
}


antlrcpp::Any DZGParser::TypeNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DZGVisitor*>(visitor))
    return parserVisitor->visitTypeName(this);
  else
    return visitor->visitChildren(this);
}

DZGParser::TypeNameContext* DZGParser::typeName() {
  TypeNameContext *_localctx = _tracker.createInstance<TypeNameContext>(_ctx, getState());
  enterRule(_localctx, 40, DZGParser::RuleTypeName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(375);
    specifierQualifierList();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SpecifierQualifierListContext ------------------------------------------------------------------

DZGParser::SpecifierQualifierListContext::SpecifierQualifierListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DZGParser::TypeSpecifierContext* DZGParser::SpecifierQualifierListContext::typeSpecifier() {
  return getRuleContext<DZGParser::TypeSpecifierContext>(0);
}

DZGParser::SpecifierQualifierListContext* DZGParser::SpecifierQualifierListContext::specifierQualifierList() {
  return getRuleContext<DZGParser::SpecifierQualifierListContext>(0);
}

DZGParser::TypeQualifierContext* DZGParser::SpecifierQualifierListContext::typeQualifier() {
  return getRuleContext<DZGParser::TypeQualifierContext>(0);
}


size_t DZGParser::SpecifierQualifierListContext::getRuleIndex() const {
  return DZGParser::RuleSpecifierQualifierList;
}

void DZGParser::SpecifierQualifierListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSpecifierQualifierList(this);
}

void DZGParser::SpecifierQualifierListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSpecifierQualifierList(this);
}


antlrcpp::Any DZGParser::SpecifierQualifierListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DZGVisitor*>(visitor))
    return parserVisitor->visitSpecifierQualifierList(this);
  else
    return visitor->visitChildren(this);
}

DZGParser::SpecifierQualifierListContext* DZGParser::specifierQualifierList() {
  SpecifierQualifierListContext *_localctx = _tracker.createInstance<SpecifierQualifierListContext>(_ctx, getState());
  enterRule(_localctx, 42, DZGParser::RuleSpecifierQualifierList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(385);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DZGParser::T__32:
      case DZGParser::T__33:
      case DZGParser::T__34:
      case DZGParser::T__35:
      case DZGParser::T__36:
      case DZGParser::T__37:
      case DZGParser::T__38:
      case DZGParser::T__39: {
        enterOuterAlt(_localctx, 1);
        setState(377);
        typeSpecifier();
        setState(379);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << DZGParser::T__32)
          | (1ULL << DZGParser::T__33)
          | (1ULL << DZGParser::T__34)
          | (1ULL << DZGParser::T__35)
          | (1ULL << DZGParser::T__36)
          | (1ULL << DZGParser::T__37)
          | (1ULL << DZGParser::T__38)
          | (1ULL << DZGParser::T__39)
          | (1ULL << DZGParser::T__40))) != 0)) {
          setState(378);
          specifierQualifierList();
        }
        break;
      }

      case DZGParser::T__40: {
        enterOuterAlt(_localctx, 2);
        setState(381);
        typeQualifier();
        setState(383);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << DZGParser::T__32)
          | (1ULL << DZGParser::T__33)
          | (1ULL << DZGParser::T__34)
          | (1ULL << DZGParser::T__35)
          | (1ULL << DZGParser::T__36)
          | (1ULL << DZGParser::T__37)
          | (1ULL << DZGParser::T__38)
          | (1ULL << DZGParser::T__39)
          | (1ULL << DZGParser::T__40))) != 0)) {
          setState(382);
          specifierQualifierList();
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

//----------------- TypeSpecifierContext ------------------------------------------------------------------

DZGParser::TypeSpecifierContext::TypeSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t DZGParser::TypeSpecifierContext::getRuleIndex() const {
  return DZGParser::RuleTypeSpecifier;
}

void DZGParser::TypeSpecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeSpecifier(this);
}

void DZGParser::TypeSpecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeSpecifier(this);
}


antlrcpp::Any DZGParser::TypeSpecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DZGVisitor*>(visitor))
    return parserVisitor->visitTypeSpecifier(this);
  else
    return visitor->visitChildren(this);
}

DZGParser::TypeSpecifierContext* DZGParser::typeSpecifier() {
  TypeSpecifierContext *_localctx = _tracker.createInstance<TypeSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 44, DZGParser::RuleTypeSpecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(387);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << DZGParser::T__32)
      | (1ULL << DZGParser::T__33)
      | (1ULL << DZGParser::T__34)
      | (1ULL << DZGParser::T__35)
      | (1ULL << DZGParser::T__36)
      | (1ULL << DZGParser::T__37)
      | (1ULL << DZGParser::T__38)
      | (1ULL << DZGParser::T__39))) != 0))) {
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

//----------------- TypeQualifierContext ------------------------------------------------------------------

DZGParser::TypeQualifierContext::TypeQualifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t DZGParser::TypeQualifierContext::getRuleIndex() const {
  return DZGParser::RuleTypeQualifier;
}

void DZGParser::TypeQualifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeQualifier(this);
}

void DZGParser::TypeQualifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeQualifier(this);
}


antlrcpp::Any DZGParser::TypeQualifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DZGVisitor*>(visitor))
    return parserVisitor->visitTypeQualifier(this);
  else
    return visitor->visitChildren(this);
}

DZGParser::TypeQualifierContext* DZGParser::typeQualifier() {
  TypeQualifierContext *_localctx = _tracker.createInstance<TypeQualifierContext>(_ctx, getState());
  enterRule(_localctx, 46, DZGParser::RuleTypeQualifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(389);
    match(DZGParser::T__40);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InitializerListContext ------------------------------------------------------------------

DZGParser::InitializerListContext::InitializerListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DZGParser::InitializerContext* DZGParser::InitializerListContext::initializer() {
  return getRuleContext<DZGParser::InitializerContext>(0);
}

DZGParser::DesignationContext* DZGParser::InitializerListContext::designation() {
  return getRuleContext<DZGParser::DesignationContext>(0);
}

DZGParser::InitializerListContext* DZGParser::InitializerListContext::initializerList() {
  return getRuleContext<DZGParser::InitializerListContext>(0);
}


size_t DZGParser::InitializerListContext::getRuleIndex() const {
  return DZGParser::RuleInitializerList;
}

void DZGParser::InitializerListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitializerList(this);
}

void DZGParser::InitializerListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitializerList(this);
}


antlrcpp::Any DZGParser::InitializerListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DZGVisitor*>(visitor))
    return parserVisitor->visitInitializerList(this);
  else
    return visitor->visitChildren(this);
}


DZGParser::InitializerListContext* DZGParser::initializerList() {
   return initializerList(0);
}

DZGParser::InitializerListContext* DZGParser::initializerList(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  DZGParser::InitializerListContext *_localctx = _tracker.createInstance<InitializerListContext>(_ctx, parentState);
  DZGParser::InitializerListContext *previousContext = _localctx;
  size_t startState = 48;
  enterRecursionRule(_localctx, 48, DZGParser::RuleInitializerList, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(393);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DZGParser::T__25

    || _la == DZGParser::T__27) {
      setState(392);
      designation();
    }
    setState(395);
    initializer();
    _ctx->stop = _input->LT(-1);
    setState(405);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<InitializerListContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleInitializerList);
        setState(397);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(398);
        match(DZGParser::T__2);
        setState(400);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == DZGParser::T__25

        || _la == DZGParser::T__27) {
          setState(399);
          designation();
        }
        setState(402);
        initializer(); 
      }
      setState(407);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- DesignationContext ------------------------------------------------------------------

DZGParser::DesignationContext::DesignationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DZGParser::DesignatorListContext* DZGParser::DesignationContext::designatorList() {
  return getRuleContext<DZGParser::DesignatorListContext>(0);
}


size_t DZGParser::DesignationContext::getRuleIndex() const {
  return DZGParser::RuleDesignation;
}

void DZGParser::DesignationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDesignation(this);
}

void DZGParser::DesignationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDesignation(this);
}


antlrcpp::Any DZGParser::DesignationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DZGVisitor*>(visitor))
    return parserVisitor->visitDesignation(this);
  else
    return visitor->visitChildren(this);
}

DZGParser::DesignationContext* DZGParser::designation() {
  DesignationContext *_localctx = _tracker.createInstance<DesignationContext>(_ctx, getState());
  enterRule(_localctx, 50, DZGParser::RuleDesignation);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(408);
    designatorList(0);
    setState(409);
    match(DZGParser::T__41);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DesignatorListContext ------------------------------------------------------------------

DZGParser::DesignatorListContext::DesignatorListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DZGParser::DesignatorContext* DZGParser::DesignatorListContext::designator() {
  return getRuleContext<DZGParser::DesignatorContext>(0);
}

DZGParser::DesignatorListContext* DZGParser::DesignatorListContext::designatorList() {
  return getRuleContext<DZGParser::DesignatorListContext>(0);
}


size_t DZGParser::DesignatorListContext::getRuleIndex() const {
  return DZGParser::RuleDesignatorList;
}

void DZGParser::DesignatorListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDesignatorList(this);
}

void DZGParser::DesignatorListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDesignatorList(this);
}


antlrcpp::Any DZGParser::DesignatorListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DZGVisitor*>(visitor))
    return parserVisitor->visitDesignatorList(this);
  else
    return visitor->visitChildren(this);
}


DZGParser::DesignatorListContext* DZGParser::designatorList() {
   return designatorList(0);
}

DZGParser::DesignatorListContext* DZGParser::designatorList(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  DZGParser::DesignatorListContext *_localctx = _tracker.createInstance<DesignatorListContext>(_ctx, parentState);
  DZGParser::DesignatorListContext *previousContext = _localctx;
  size_t startState = 52;
  enterRecursionRule(_localctx, 52, DZGParser::RuleDesignatorList, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(412);
    designator();
    _ctx->stop = _input->LT(-1);
    setState(418);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<DesignatorListContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleDesignatorList);
        setState(414);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(415);
        designator(); 
      }
      setState(420);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- DesignatorContext ------------------------------------------------------------------

DZGParser::DesignatorContext::DesignatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DZGParser::ConstantExpressionContext* DZGParser::DesignatorContext::constantExpression() {
  return getRuleContext<DZGParser::ConstantExpressionContext>(0);
}

tree::TerminalNode* DZGParser::DesignatorContext::Identifier() {
  return getToken(DZGParser::Identifier, 0);
}


size_t DZGParser::DesignatorContext::getRuleIndex() const {
  return DZGParser::RuleDesignator;
}

void DZGParser::DesignatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDesignator(this);
}

void DZGParser::DesignatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDesignator(this);
}


antlrcpp::Any DZGParser::DesignatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DZGVisitor*>(visitor))
    return parserVisitor->visitDesignator(this);
  else
    return visitor->visitChildren(this);
}

DZGParser::DesignatorContext* DZGParser::designator() {
  DesignatorContext *_localctx = _tracker.createInstance<DesignatorContext>(_ctx, getState());
  enterRule(_localctx, 54, DZGParser::RuleDesignator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(427);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DZGParser::T__25: {
        enterOuterAlt(_localctx, 1);
        setState(421);
        match(DZGParser::T__25);
        setState(422);
        constantExpression();
        setState(423);
        match(DZGParser::T__26);
        break;
      }

      case DZGParser::T__27: {
        enterOuterAlt(_localctx, 2);
        setState(425);
        match(DZGParser::T__27);
        setState(426);
        match(DZGParser::Identifier);
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

//----------------- ConstantExpressionContext ------------------------------------------------------------------

DZGParser::ConstantExpressionContext::ConstantExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DZGParser::ConditionalExpressionContext* DZGParser::ConstantExpressionContext::conditionalExpression() {
  return getRuleContext<DZGParser::ConditionalExpressionContext>(0);
}


size_t DZGParser::ConstantExpressionContext::getRuleIndex() const {
  return DZGParser::RuleConstantExpression;
}

void DZGParser::ConstantExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstantExpression(this);
}

void DZGParser::ConstantExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstantExpression(this);
}


antlrcpp::Any DZGParser::ConstantExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DZGVisitor*>(visitor))
    return parserVisitor->visitConstantExpression(this);
  else
    return visitor->visitChildren(this);
}

DZGParser::ConstantExpressionContext* DZGParser::constantExpression() {
  ConstantExpressionContext *_localctx = _tracker.createInstance<ConstantExpressionContext>(_ctx, getState());
  enterRule(_localctx, 56, DZGParser::RuleConstantExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(429);
    conditionalExpression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InitializerContext ------------------------------------------------------------------

DZGParser::InitializerContext::InitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DZGParser::AssignmentExpressionContext* DZGParser::InitializerContext::assignmentExpression() {
  return getRuleContext<DZGParser::AssignmentExpressionContext>(0);
}

DZGParser::InitializerListContext* DZGParser::InitializerContext::initializerList() {
  return getRuleContext<DZGParser::InitializerListContext>(0);
}


size_t DZGParser::InitializerContext::getRuleIndex() const {
  return DZGParser::RuleInitializer;
}

void DZGParser::InitializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitializer(this);
}

void DZGParser::InitializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitializer(this);
}


antlrcpp::Any DZGParser::InitializerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DZGVisitor*>(visitor))
    return parserVisitor->visitInitializer(this);
  else
    return visitor->visitChildren(this);
}

DZGParser::InitializerContext* DZGParser::initializer() {
  InitializerContext *_localctx = _tracker.createInstance<InitializerContext>(_ctx, getState());
  enterRule(_localctx, 58, DZGParser::RuleInitializer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(441);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(431);
      assignmentExpression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(432);
      match(DZGParser::T__28);
      setState(433);
      initializerList(0);
      setState(434);
      match(DZGParser::T__29);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(436);
      match(DZGParser::T__28);
      setState(437);
      initializerList(0);
      setState(438);
      match(DZGParser::T__2);
      setState(439);
      match(DZGParser::T__29);
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

//----------------- AssignmentOperatorContext ------------------------------------------------------------------

DZGParser::AssignmentOperatorContext::AssignmentOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t DZGParser::AssignmentOperatorContext::getRuleIndex() const {
  return DZGParser::RuleAssignmentOperator;
}

void DZGParser::AssignmentOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignmentOperator(this);
}

void DZGParser::AssignmentOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignmentOperator(this);
}


antlrcpp::Any DZGParser::AssignmentOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DZGVisitor*>(visitor))
    return parserVisitor->visitAssignmentOperator(this);
  else
    return visitor->visitChildren(this);
}

DZGParser::AssignmentOperatorContext* DZGParser::assignmentOperator() {
  AssignmentOperatorContext *_localctx = _tracker.createInstance<AssignmentOperatorContext>(_ctx, getState());
  enterRule(_localctx, 60, DZGParser::RuleAssignmentOperator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(443);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << DZGParser::T__41)
      | (1ULL << DZGParser::T__42)
      | (1ULL << DZGParser::T__43)
      | (1ULL << DZGParser::T__44)
      | (1ULL << DZGParser::T__45)
      | (1ULL << DZGParser::T__46)
      | (1ULL << DZGParser::T__47)
      | (1ULL << DZGParser::T__48)
      | (1ULL << DZGParser::T__49)
      | (1ULL << DZGParser::T__50)
      | (1ULL << DZGParser::T__51))) != 0))) {
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

//----------------- CompoundStatementContext ------------------------------------------------------------------

DZGParser::CompoundStatementContext::CompoundStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DZGParser::BlockItemListContext* DZGParser::CompoundStatementContext::blockItemList() {
  return getRuleContext<DZGParser::BlockItemListContext>(0);
}


size_t DZGParser::CompoundStatementContext::getRuleIndex() const {
  return DZGParser::RuleCompoundStatement;
}

void DZGParser::CompoundStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompoundStatement(this);
}

void DZGParser::CompoundStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompoundStatement(this);
}


antlrcpp::Any DZGParser::CompoundStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DZGVisitor*>(visitor))
    return parserVisitor->visitCompoundStatement(this);
  else
    return visitor->visitChildren(this);
}

DZGParser::CompoundStatementContext* DZGParser::compoundStatement() {
  CompoundStatementContext *_localctx = _tracker.createInstance<CompoundStatementContext>(_ctx, getState());
  enterRule(_localctx, 62, DZGParser::RuleCompoundStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(445);
    match(DZGParser::T__28);
    setState(447);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << DZGParser::T__0)
      | (1ULL << DZGParser::T__9)
      | (1ULL << DZGParser::T__18)
      | (1ULL << DZGParser::T__19)
      | (1ULL << DZGParser::T__20)
      | (1ULL << DZGParser::T__23)
      | (1ULL << DZGParser::T__24)
      | (1ULL << DZGParser::T__28)
      | (1ULL << DZGParser::T__30)
      | (1ULL << DZGParser::T__31)
      | (1ULL << DZGParser::T__32)
      | (1ULL << DZGParser::T__33)
      | (1ULL << DZGParser::T__34)
      | (1ULL << DZGParser::T__35)
      | (1ULL << DZGParser::T__36)
      | (1ULL << DZGParser::T__37)
      | (1ULL << DZGParser::T__38)
      | (1ULL << DZGParser::T__39)
      | (1ULL << DZGParser::T__40)
      | (1ULL << DZGParser::T__52)
      | (1ULL << DZGParser::T__53)
      | (1ULL << DZGParser::T__54)
      | (1ULL << DZGParser::T__55)
      | (1ULL << DZGParser::T__56)
      | (1ULL << DZGParser::T__58)
      | (1ULL << DZGParser::Identifier)
      | (1ULL << DZGParser::Constant)
      | (1ULL << DZGParser::DigitSequence)
      | (1ULL << DZGParser::StringLiteral))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (DZGParser::While - 64))
      | (1ULL << (DZGParser::If - 64))
      | (1ULL << (DZGParser::Do - 64))
      | (1ULL << (DZGParser::For - 64)))) != 0)) {
      setState(446);
      blockItemList(0);
    }
    setState(449);
    match(DZGParser::T__29);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockItemListContext ------------------------------------------------------------------

DZGParser::BlockItemListContext::BlockItemListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DZGParser::BlockItemContext* DZGParser::BlockItemListContext::blockItem() {
  return getRuleContext<DZGParser::BlockItemContext>(0);
}

DZGParser::BlockItemListContext* DZGParser::BlockItemListContext::blockItemList() {
  return getRuleContext<DZGParser::BlockItemListContext>(0);
}


size_t DZGParser::BlockItemListContext::getRuleIndex() const {
  return DZGParser::RuleBlockItemList;
}

void DZGParser::BlockItemListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlockItemList(this);
}

void DZGParser::BlockItemListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlockItemList(this);
}


antlrcpp::Any DZGParser::BlockItemListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DZGVisitor*>(visitor))
    return parserVisitor->visitBlockItemList(this);
  else
    return visitor->visitChildren(this);
}


DZGParser::BlockItemListContext* DZGParser::blockItemList() {
   return blockItemList(0);
}

DZGParser::BlockItemListContext* DZGParser::blockItemList(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  DZGParser::BlockItemListContext *_localctx = _tracker.createInstance<BlockItemListContext>(_ctx, parentState);
  DZGParser::BlockItemListContext *previousContext = _localctx;
  size_t startState = 64;
  enterRecursionRule(_localctx, 64, DZGParser::RuleBlockItemList, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(452);
    blockItem();
    _ctx->stop = _input->LT(-1);
    setState(458);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<BlockItemListContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleBlockItemList);
        setState(454);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(455);
        blockItem(); 
      }
      setState(460);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- BlockItemContext ------------------------------------------------------------------

DZGParser::BlockItemContext::BlockItemContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DZGParser::DeclarationContext* DZGParser::BlockItemContext::declaration() {
  return getRuleContext<DZGParser::DeclarationContext>(0);
}

DZGParser::StatementContext* DZGParser::BlockItemContext::statement() {
  return getRuleContext<DZGParser::StatementContext>(0);
}


size_t DZGParser::BlockItemContext::getRuleIndex() const {
  return DZGParser::RuleBlockItem;
}

void DZGParser::BlockItemContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlockItem(this);
}

void DZGParser::BlockItemContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlockItem(this);
}


antlrcpp::Any DZGParser::BlockItemContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DZGVisitor*>(visitor))
    return parserVisitor->visitBlockItem(this);
  else
    return visitor->visitChildren(this);
}

DZGParser::BlockItemContext* DZGParser::blockItem() {
  BlockItemContext *_localctx = _tracker.createInstance<BlockItemContext>(_ctx, getState());
  enterRule(_localctx, 66, DZGParser::RuleBlockItem);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(463);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DZGParser::T__32:
      case DZGParser::T__33:
      case DZGParser::T__34:
      case DZGParser::T__35:
      case DZGParser::T__36:
      case DZGParser::T__37:
      case DZGParser::T__38:
      case DZGParser::T__39:
      case DZGParser::T__40:
      case DZGParser::T__53:
      case DZGParser::T__54: {
        enterOuterAlt(_localctx, 1);
        setState(461);
        declaration();
        break;
      }

      case DZGParser::T__0:
      case DZGParser::T__9:
      case DZGParser::T__18:
      case DZGParser::T__19:
      case DZGParser::T__20:
      case DZGParser::T__23:
      case DZGParser::T__24:
      case DZGParser::T__28:
      case DZGParser::T__30:
      case DZGParser::T__31:
      case DZGParser::T__52:
      case DZGParser::T__55:
      case DZGParser::T__56:
      case DZGParser::T__58:
      case DZGParser::Identifier:
      case DZGParser::Constant:
      case DZGParser::DigitSequence:
      case DZGParser::StringLiteral:
      case DZGParser::While:
      case DZGParser::If:
      case DZGParser::Do:
      case DZGParser::For: {
        enterOuterAlt(_localctx, 2);
        setState(462);
        statement();
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

//----------------- DeclarationContext ------------------------------------------------------------------

DZGParser::DeclarationContext::DeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DZGParser::DeclarationSpecifiersContext* DZGParser::DeclarationContext::declarationSpecifiers() {
  return getRuleContext<DZGParser::DeclarationSpecifiersContext>(0);
}

DZGParser::InitDeclaratorListContext* DZGParser::DeclarationContext::initDeclaratorList() {
  return getRuleContext<DZGParser::InitDeclaratorListContext>(0);
}


size_t DZGParser::DeclarationContext::getRuleIndex() const {
  return DZGParser::RuleDeclaration;
}

void DZGParser::DeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclaration(this);
}

void DZGParser::DeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclaration(this);
}


antlrcpp::Any DZGParser::DeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DZGVisitor*>(visitor))
    return parserVisitor->visitDeclaration(this);
  else
    return visitor->visitChildren(this);
}

DZGParser::DeclarationContext* DZGParser::declaration() {
  DeclarationContext *_localctx = _tracker.createInstance<DeclarationContext>(_ctx, getState());
  enterRule(_localctx, 68, DZGParser::RuleDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(465);
    declarationSpecifiers();
    setState(466);
    initDeclaratorList(0);
    setState(467);
    match(DZGParser::T__52);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

DZGParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DZGParser::LabeledStatementContext* DZGParser::StatementContext::labeledStatement() {
  return getRuleContext<DZGParser::LabeledStatementContext>(0);
}

DZGParser::CompoundStatementContext* DZGParser::StatementContext::compoundStatement() {
  return getRuleContext<DZGParser::CompoundStatementContext>(0);
}

DZGParser::ExpressionStatementContext* DZGParser::StatementContext::expressionStatement() {
  return getRuleContext<DZGParser::ExpressionStatementContext>(0);
}

DZGParser::SelectionStatementContext* DZGParser::StatementContext::selectionStatement() {
  return getRuleContext<DZGParser::SelectionStatementContext>(0);
}

DZGParser::IterationStatementContext* DZGParser::StatementContext::iterationStatement() {
  return getRuleContext<DZGParser::IterationStatementContext>(0);
}


size_t DZGParser::StatementContext::getRuleIndex() const {
  return DZGParser::RuleStatement;
}

void DZGParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void DZGParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}


antlrcpp::Any DZGParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DZGVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

DZGParser::StatementContext* DZGParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 70, DZGParser::RuleStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(474);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 40, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(469);
      labeledStatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(470);
      compoundStatement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(471);
      expressionStatement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(472);
      selectionStatement();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(473);
      iterationStatement();
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

//----------------- DeclarationSpecifiersContext ------------------------------------------------------------------

DZGParser::DeclarationSpecifiersContext::DeclarationSpecifiersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<DZGParser::DeclarationSpecifierContext *> DZGParser::DeclarationSpecifiersContext::declarationSpecifier() {
  return getRuleContexts<DZGParser::DeclarationSpecifierContext>();
}

DZGParser::DeclarationSpecifierContext* DZGParser::DeclarationSpecifiersContext::declarationSpecifier(size_t i) {
  return getRuleContext<DZGParser::DeclarationSpecifierContext>(i);
}


size_t DZGParser::DeclarationSpecifiersContext::getRuleIndex() const {
  return DZGParser::RuleDeclarationSpecifiers;
}

void DZGParser::DeclarationSpecifiersContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclarationSpecifiers(this);
}

void DZGParser::DeclarationSpecifiersContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclarationSpecifiers(this);
}


antlrcpp::Any DZGParser::DeclarationSpecifiersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DZGVisitor*>(visitor))
    return parserVisitor->visitDeclarationSpecifiers(this);
  else
    return visitor->visitChildren(this);
}

DZGParser::DeclarationSpecifiersContext* DZGParser::declarationSpecifiers() {
  DeclarationSpecifiersContext *_localctx = _tracker.createInstance<DeclarationSpecifiersContext>(_ctx, getState());
  enterRule(_localctx, 72, DZGParser::RuleDeclarationSpecifiers);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(477); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(476);
      declarationSpecifier();
      setState(479); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << DZGParser::T__32)
      | (1ULL << DZGParser::T__33)
      | (1ULL << DZGParser::T__34)
      | (1ULL << DZGParser::T__35)
      | (1ULL << DZGParser::T__36)
      | (1ULL << DZGParser::T__37)
      | (1ULL << DZGParser::T__38)
      | (1ULL << DZGParser::T__39)
      | (1ULL << DZGParser::T__40)
      | (1ULL << DZGParser::T__53)
      | (1ULL << DZGParser::T__54))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationSpecifierContext ------------------------------------------------------------------

DZGParser::DeclarationSpecifierContext::DeclarationSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DZGParser::StorageClassSpecifierContext* DZGParser::DeclarationSpecifierContext::storageClassSpecifier() {
  return getRuleContext<DZGParser::StorageClassSpecifierContext>(0);
}

DZGParser::TypeSpecifierContext* DZGParser::DeclarationSpecifierContext::typeSpecifier() {
  return getRuleContext<DZGParser::TypeSpecifierContext>(0);
}

DZGParser::TypeQualifierContext* DZGParser::DeclarationSpecifierContext::typeQualifier() {
  return getRuleContext<DZGParser::TypeQualifierContext>(0);
}


size_t DZGParser::DeclarationSpecifierContext::getRuleIndex() const {
  return DZGParser::RuleDeclarationSpecifier;
}

void DZGParser::DeclarationSpecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclarationSpecifier(this);
}

void DZGParser::DeclarationSpecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclarationSpecifier(this);
}


antlrcpp::Any DZGParser::DeclarationSpecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DZGVisitor*>(visitor))
    return parserVisitor->visitDeclarationSpecifier(this);
  else
    return visitor->visitChildren(this);
}

DZGParser::DeclarationSpecifierContext* DZGParser::declarationSpecifier() {
  DeclarationSpecifierContext *_localctx = _tracker.createInstance<DeclarationSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 74, DZGParser::RuleDeclarationSpecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(484);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DZGParser::T__53:
      case DZGParser::T__54: {
        enterOuterAlt(_localctx, 1);
        setState(481);
        storageClassSpecifier();
        break;
      }

      case DZGParser::T__32:
      case DZGParser::T__33:
      case DZGParser::T__34:
      case DZGParser::T__35:
      case DZGParser::T__36:
      case DZGParser::T__37:
      case DZGParser::T__38:
      case DZGParser::T__39: {
        enterOuterAlt(_localctx, 2);
        setState(482);
        typeSpecifier();
        break;
      }

      case DZGParser::T__40: {
        enterOuterAlt(_localctx, 3);
        setState(483);
        typeQualifier();
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

//----------------- StorageClassSpecifierContext ------------------------------------------------------------------

DZGParser::StorageClassSpecifierContext::StorageClassSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t DZGParser::StorageClassSpecifierContext::getRuleIndex() const {
  return DZGParser::RuleStorageClassSpecifier;
}

void DZGParser::StorageClassSpecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStorageClassSpecifier(this);
}

void DZGParser::StorageClassSpecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStorageClassSpecifier(this);
}


antlrcpp::Any DZGParser::StorageClassSpecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DZGVisitor*>(visitor))
    return parserVisitor->visitStorageClassSpecifier(this);
  else
    return visitor->visitChildren(this);
}

DZGParser::StorageClassSpecifierContext* DZGParser::storageClassSpecifier() {
  StorageClassSpecifierContext *_localctx = _tracker.createInstance<StorageClassSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 76, DZGParser::RuleStorageClassSpecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(486);
    _la = _input->LA(1);
    if (!(_la == DZGParser::T__53

    || _la == DZGParser::T__54)) {
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

//----------------- InitDeclaratorListContext ------------------------------------------------------------------

DZGParser::InitDeclaratorListContext::InitDeclaratorListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DZGParser::InitDeclaratorContext* DZGParser::InitDeclaratorListContext::initDeclarator() {
  return getRuleContext<DZGParser::InitDeclaratorContext>(0);
}

DZGParser::InitDeclaratorListContext* DZGParser::InitDeclaratorListContext::initDeclaratorList() {
  return getRuleContext<DZGParser::InitDeclaratorListContext>(0);
}


size_t DZGParser::InitDeclaratorListContext::getRuleIndex() const {
  return DZGParser::RuleInitDeclaratorList;
}

void DZGParser::InitDeclaratorListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitDeclaratorList(this);
}

void DZGParser::InitDeclaratorListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitDeclaratorList(this);
}


antlrcpp::Any DZGParser::InitDeclaratorListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DZGVisitor*>(visitor))
    return parserVisitor->visitInitDeclaratorList(this);
  else
    return visitor->visitChildren(this);
}


DZGParser::InitDeclaratorListContext* DZGParser::initDeclaratorList() {
   return initDeclaratorList(0);
}

DZGParser::InitDeclaratorListContext* DZGParser::initDeclaratorList(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  DZGParser::InitDeclaratorListContext *_localctx = _tracker.createInstance<InitDeclaratorListContext>(_ctx, parentState);
  DZGParser::InitDeclaratorListContext *previousContext = _localctx;
  size_t startState = 78;
  enterRecursionRule(_localctx, 78, DZGParser::RuleInitDeclaratorList, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(489);
    initDeclarator();
    _ctx->stop = _input->LT(-1);
    setState(496);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<InitDeclaratorListContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleInitDeclaratorList);
        setState(491);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(492);
        match(DZGParser::T__2);
        setState(493);
        initDeclarator(); 
      }
      setState(498);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- InitDeclaratorContext ------------------------------------------------------------------

DZGParser::InitDeclaratorContext::InitDeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DZGParser::DeclaratorContext* DZGParser::InitDeclaratorContext::declarator() {
  return getRuleContext<DZGParser::DeclaratorContext>(0);
}

DZGParser::InitializerContext* DZGParser::InitDeclaratorContext::initializer() {
  return getRuleContext<DZGParser::InitializerContext>(0);
}


size_t DZGParser::InitDeclaratorContext::getRuleIndex() const {
  return DZGParser::RuleInitDeclarator;
}

void DZGParser::InitDeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitDeclarator(this);
}

void DZGParser::InitDeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitDeclarator(this);
}


antlrcpp::Any DZGParser::InitDeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DZGVisitor*>(visitor))
    return parserVisitor->visitInitDeclarator(this);
  else
    return visitor->visitChildren(this);
}

DZGParser::InitDeclaratorContext* DZGParser::initDeclarator() {
  InitDeclaratorContext *_localctx = _tracker.createInstance<InitDeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 80, DZGParser::RuleInitDeclarator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(504);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 44, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(499);
      declarator();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(500);
      declarator();
      setState(501);
      match(DZGParser::T__41);
      setState(502);
      initializer();
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

//----------------- DeclaratorContext ------------------------------------------------------------------

DZGParser::DeclaratorContext::DeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DZGParser::DirectDeclaratorContext* DZGParser::DeclaratorContext::directDeclarator() {
  return getRuleContext<DZGParser::DirectDeclaratorContext>(0);
}


size_t DZGParser::DeclaratorContext::getRuleIndex() const {
  return DZGParser::RuleDeclarator;
}

void DZGParser::DeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclarator(this);
}

void DZGParser::DeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclarator(this);
}


antlrcpp::Any DZGParser::DeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DZGVisitor*>(visitor))
    return parserVisitor->visitDeclarator(this);
  else
    return visitor->visitChildren(this);
}

DZGParser::DeclaratorContext* DZGParser::declarator() {
  DeclaratorContext *_localctx = _tracker.createInstance<DeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 82, DZGParser::RuleDeclarator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(506);
    directDeclarator(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DirectDeclaratorContext ------------------------------------------------------------------

DZGParser::DirectDeclaratorContext::DirectDeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DZGParser::DirectDeclaratorContext::Identifier() {
  return getToken(DZGParser::Identifier, 0);
}

DZGParser::DeclaratorContext* DZGParser::DirectDeclaratorContext::declarator() {
  return getRuleContext<DZGParser::DeclaratorContext>(0);
}

DZGParser::DirectDeclaratorContext* DZGParser::DirectDeclaratorContext::directDeclarator() {
  return getRuleContext<DZGParser::DirectDeclaratorContext>(0);
}

DZGParser::TypeQualifierListContext* DZGParser::DirectDeclaratorContext::typeQualifierList() {
  return getRuleContext<DZGParser::TypeQualifierListContext>(0);
}

DZGParser::AssignmentExpressionContext* DZGParser::DirectDeclaratorContext::assignmentExpression() {
  return getRuleContext<DZGParser::AssignmentExpressionContext>(0);
}

DZGParser::IdentifierListContext* DZGParser::DirectDeclaratorContext::identifierList() {
  return getRuleContext<DZGParser::IdentifierListContext>(0);
}


size_t DZGParser::DirectDeclaratorContext::getRuleIndex() const {
  return DZGParser::RuleDirectDeclarator;
}

void DZGParser::DirectDeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDirectDeclarator(this);
}

void DZGParser::DirectDeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDirectDeclarator(this);
}


antlrcpp::Any DZGParser::DirectDeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DZGVisitor*>(visitor))
    return parserVisitor->visitDirectDeclarator(this);
  else
    return visitor->visitChildren(this);
}


DZGParser::DirectDeclaratorContext* DZGParser::directDeclarator() {
   return directDeclarator(0);
}

DZGParser::DirectDeclaratorContext* DZGParser::directDeclarator(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  DZGParser::DirectDeclaratorContext *_localctx = _tracker.createInstance<DirectDeclaratorContext>(_ctx, parentState);
  DZGParser::DirectDeclaratorContext *previousContext = _localctx;
  size_t startState = 84;
  enterRecursionRule(_localctx, 84, DZGParser::RuleDirectDeclarator, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(514);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DZGParser::Identifier: {
        setState(509);
        match(DZGParser::Identifier);
        break;
      }

      case DZGParser::T__0: {
        setState(510);
        match(DZGParser::T__0);
        setState(511);
        declarator();
        setState(512);
        match(DZGParser::T__1);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(533);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 50, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(531);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 49, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<DirectDeclaratorContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleDirectDeclarator);
          setState(516);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(517);
          match(DZGParser::T__25);
          setState(519);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == DZGParser::T__40) {
            setState(518);
            typeQualifierList(0);
          }
          setState(522);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << DZGParser::T__0)
            | (1ULL << DZGParser::T__9)
            | (1ULL << DZGParser::T__18)
            | (1ULL << DZGParser::T__19)
            | (1ULL << DZGParser::T__20)
            | (1ULL << DZGParser::T__23)
            | (1ULL << DZGParser::T__24)
            | (1ULL << DZGParser::T__30)
            | (1ULL << DZGParser::T__31)
            | (1ULL << DZGParser::Identifier)
            | (1ULL << DZGParser::Constant)
            | (1ULL << DZGParser::DigitSequence)
            | (1ULL << DZGParser::StringLiteral))) != 0)) {
            setState(521);
            assignmentExpression();
          }
          setState(524);
          match(DZGParser::T__26);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<DirectDeclaratorContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleDirectDeclarator);
          setState(525);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(526);
          match(DZGParser::T__0);
          setState(528);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == DZGParser::Identifier) {
            setState(527);
            identifierList(0);
          }
          setState(530);
          match(DZGParser::T__1);
          break;
        }

        } 
      }
      setState(535);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 50, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- TypeQualifierListContext ------------------------------------------------------------------

DZGParser::TypeQualifierListContext::TypeQualifierListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DZGParser::TypeQualifierContext* DZGParser::TypeQualifierListContext::typeQualifier() {
  return getRuleContext<DZGParser::TypeQualifierContext>(0);
}

DZGParser::TypeQualifierListContext* DZGParser::TypeQualifierListContext::typeQualifierList() {
  return getRuleContext<DZGParser::TypeQualifierListContext>(0);
}


size_t DZGParser::TypeQualifierListContext::getRuleIndex() const {
  return DZGParser::RuleTypeQualifierList;
}

void DZGParser::TypeQualifierListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeQualifierList(this);
}

void DZGParser::TypeQualifierListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeQualifierList(this);
}


antlrcpp::Any DZGParser::TypeQualifierListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DZGVisitor*>(visitor))
    return parserVisitor->visitTypeQualifierList(this);
  else
    return visitor->visitChildren(this);
}


DZGParser::TypeQualifierListContext* DZGParser::typeQualifierList() {
   return typeQualifierList(0);
}

DZGParser::TypeQualifierListContext* DZGParser::typeQualifierList(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  DZGParser::TypeQualifierListContext *_localctx = _tracker.createInstance<TypeQualifierListContext>(_ctx, parentState);
  DZGParser::TypeQualifierListContext *previousContext = _localctx;
  size_t startState = 86;
  enterRecursionRule(_localctx, 86, DZGParser::RuleTypeQualifierList, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(537);
    typeQualifier();
    _ctx->stop = _input->LT(-1);
    setState(543);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 51, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<TypeQualifierListContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleTypeQualifierList);
        setState(539);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(540);
        typeQualifier(); 
      }
      setState(545);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 51, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- LabeledStatementContext ------------------------------------------------------------------

DZGParser::LabeledStatementContext::LabeledStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DZGParser::LabeledStatementContext::Identifier() {
  return getToken(DZGParser::Identifier, 0);
}

DZGParser::StatementContext* DZGParser::LabeledStatementContext::statement() {
  return getRuleContext<DZGParser::StatementContext>(0);
}

DZGParser::ConstantExpressionContext* DZGParser::LabeledStatementContext::constantExpression() {
  return getRuleContext<DZGParser::ConstantExpressionContext>(0);
}


size_t DZGParser::LabeledStatementContext::getRuleIndex() const {
  return DZGParser::RuleLabeledStatement;
}

void DZGParser::LabeledStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLabeledStatement(this);
}

void DZGParser::LabeledStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLabeledStatement(this);
}


antlrcpp::Any DZGParser::LabeledStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DZGVisitor*>(visitor))
    return parserVisitor->visitLabeledStatement(this);
  else
    return visitor->visitChildren(this);
}

DZGParser::LabeledStatementContext* DZGParser::labeledStatement() {
  LabeledStatementContext *_localctx = _tracker.createInstance<LabeledStatementContext>(_ctx, getState());
  enterRule(_localctx, 88, DZGParser::RuleLabeledStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(557);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DZGParser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(546);
        match(DZGParser::Identifier);
        setState(547);
        match(DZGParser::T__4);
        setState(548);
        statement();
        break;
      }

      case DZGParser::T__55: {
        enterOuterAlt(_localctx, 2);
        setState(549);
        match(DZGParser::T__55);
        setState(550);
        constantExpression();
        setState(551);
        match(DZGParser::T__4);
        setState(552);
        statement();
        break;
      }

      case DZGParser::T__56: {
        enterOuterAlt(_localctx, 3);
        setState(554);
        match(DZGParser::T__56);
        setState(555);
        match(DZGParser::T__4);
        setState(556);
        statement();
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

//----------------- ExpressionStatementContext ------------------------------------------------------------------

DZGParser::ExpressionStatementContext::ExpressionStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DZGParser::ExpressionContext* DZGParser::ExpressionStatementContext::expression() {
  return getRuleContext<DZGParser::ExpressionContext>(0);
}


size_t DZGParser::ExpressionStatementContext::getRuleIndex() const {
  return DZGParser::RuleExpressionStatement;
}

void DZGParser::ExpressionStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpressionStatement(this);
}

void DZGParser::ExpressionStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpressionStatement(this);
}


antlrcpp::Any DZGParser::ExpressionStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DZGVisitor*>(visitor))
    return parserVisitor->visitExpressionStatement(this);
  else
    return visitor->visitChildren(this);
}

DZGParser::ExpressionStatementContext* DZGParser::expressionStatement() {
  ExpressionStatementContext *_localctx = _tracker.createInstance<ExpressionStatementContext>(_ctx, getState());
  enterRule(_localctx, 90, DZGParser::RuleExpressionStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(560);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << DZGParser::T__0)
      | (1ULL << DZGParser::T__9)
      | (1ULL << DZGParser::T__18)
      | (1ULL << DZGParser::T__19)
      | (1ULL << DZGParser::T__20)
      | (1ULL << DZGParser::T__23)
      | (1ULL << DZGParser::T__24)
      | (1ULL << DZGParser::T__30)
      | (1ULL << DZGParser::T__31)
      | (1ULL << DZGParser::Identifier)
      | (1ULL << DZGParser::Constant)
      | (1ULL << DZGParser::DigitSequence)
      | (1ULL << DZGParser::StringLiteral))) != 0)) {
      setState(559);
      expression(0);
    }
    setState(562);
    match(DZGParser::T__52);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SelectionStatementContext ------------------------------------------------------------------

DZGParser::SelectionStatementContext::SelectionStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DZGParser::ExpressionContext* DZGParser::SelectionStatementContext::expression() {
  return getRuleContext<DZGParser::ExpressionContext>(0);
}

std::vector<DZGParser::StatementContext *> DZGParser::SelectionStatementContext::statement() {
  return getRuleContexts<DZGParser::StatementContext>();
}

DZGParser::StatementContext* DZGParser::SelectionStatementContext::statement(size_t i) {
  return getRuleContext<DZGParser::StatementContext>(i);
}


size_t DZGParser::SelectionStatementContext::getRuleIndex() const {
  return DZGParser::RuleSelectionStatement;
}

void DZGParser::SelectionStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSelectionStatement(this);
}

void DZGParser::SelectionStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSelectionStatement(this);
}


antlrcpp::Any DZGParser::SelectionStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DZGVisitor*>(visitor))
    return parserVisitor->visitSelectionStatement(this);
  else
    return visitor->visitChildren(this);
}

DZGParser::SelectionStatementContext* DZGParser::selectionStatement() {
  SelectionStatementContext *_localctx = _tracker.createInstance<SelectionStatementContext>(_ctx, getState());
  enterRule(_localctx, 92, DZGParser::RuleSelectionStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(579);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DZGParser::If: {
        enterOuterAlt(_localctx, 1);
        setState(564);
        match(DZGParser::If);
        setState(565);
        match(DZGParser::T__0);
        setState(566);
        expression(0);
        setState(567);
        match(DZGParser::T__1);
        setState(568);
        statement();
        setState(571);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 54, _ctx)) {
        case 1: {
          setState(569);
          match(DZGParser::T__57);
          setState(570);
          statement();
          break;
        }

        }
        break;
      }

      case DZGParser::T__58: {
        enterOuterAlt(_localctx, 2);
        setState(573);
        match(DZGParser::T__58);
        setState(574);
        match(DZGParser::T__0);
        setState(575);
        expression(0);
        setState(576);
        match(DZGParser::T__1);
        setState(577);
        statement();
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

//----------------- IterationStatementContext ------------------------------------------------------------------

DZGParser::IterationStatementContext::IterationStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DZGParser::IterationStatementContext::While() {
  return getToken(DZGParser::While, 0);
}

DZGParser::ExpressionContext* DZGParser::IterationStatementContext::expression() {
  return getRuleContext<DZGParser::ExpressionContext>(0);
}

DZGParser::StatementContext* DZGParser::IterationStatementContext::statement() {
  return getRuleContext<DZGParser::StatementContext>(0);
}

tree::TerminalNode* DZGParser::IterationStatementContext::Do() {
  return getToken(DZGParser::Do, 0);
}

tree::TerminalNode* DZGParser::IterationStatementContext::For() {
  return getToken(DZGParser::For, 0);
}

DZGParser::ForConditionContext* DZGParser::IterationStatementContext::forCondition() {
  return getRuleContext<DZGParser::ForConditionContext>(0);
}


size_t DZGParser::IterationStatementContext::getRuleIndex() const {
  return DZGParser::RuleIterationStatement;
}

void DZGParser::IterationStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIterationStatement(this);
}

void DZGParser::IterationStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIterationStatement(this);
}


antlrcpp::Any DZGParser::IterationStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DZGVisitor*>(visitor))
    return parserVisitor->visitIterationStatement(this);
  else
    return visitor->visitChildren(this);
}

DZGParser::IterationStatementContext* DZGParser::iterationStatement() {
  IterationStatementContext *_localctx = _tracker.createInstance<IterationStatementContext>(_ctx, getState());
  enterRule(_localctx, 94, DZGParser::RuleIterationStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(601);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DZGParser::While: {
        enterOuterAlt(_localctx, 1);
        setState(581);
        match(DZGParser::While);
        setState(582);
        match(DZGParser::T__0);
        setState(583);
        expression(0);
        setState(584);
        match(DZGParser::T__1);
        setState(585);
        statement();
        break;
      }

      case DZGParser::Do: {
        enterOuterAlt(_localctx, 2);
        setState(587);
        match(DZGParser::Do);
        setState(588);
        statement();
        setState(589);
        match(DZGParser::While);
        setState(590);
        match(DZGParser::T__0);
        setState(591);
        expression(0);
        setState(592);
        match(DZGParser::T__1);
        setState(593);
        match(DZGParser::T__52);
        break;
      }

      case DZGParser::For: {
        enterOuterAlt(_localctx, 3);
        setState(595);
        match(DZGParser::For);
        setState(596);
        match(DZGParser::T__0);
        setState(597);
        forCondition();
        setState(598);
        match(DZGParser::T__1);
        setState(599);
        statement();
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

//----------------- ForConditionContext ------------------------------------------------------------------

DZGParser::ForConditionContext::ForConditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DZGParser::ForDeclarationContext* DZGParser::ForConditionContext::forDeclaration() {
  return getRuleContext<DZGParser::ForDeclarationContext>(0);
}

std::vector<DZGParser::ForExpressionContext *> DZGParser::ForConditionContext::forExpression() {
  return getRuleContexts<DZGParser::ForExpressionContext>();
}

DZGParser::ForExpressionContext* DZGParser::ForConditionContext::forExpression(size_t i) {
  return getRuleContext<DZGParser::ForExpressionContext>(i);
}

DZGParser::ExpressionContext* DZGParser::ForConditionContext::expression() {
  return getRuleContext<DZGParser::ExpressionContext>(0);
}


size_t DZGParser::ForConditionContext::getRuleIndex() const {
  return DZGParser::RuleForCondition;
}

void DZGParser::ForConditionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForCondition(this);
}

void DZGParser::ForConditionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForCondition(this);
}


antlrcpp::Any DZGParser::ForConditionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DZGVisitor*>(visitor))
    return parserVisitor->visitForCondition(this);
  else
    return visitor->visitChildren(this);
}

DZGParser::ForConditionContext* DZGParser::forCondition() {
  ForConditionContext *_localctx = _tracker.createInstance<ForConditionContext>(_ctx, getState());
  enterRule(_localctx, 96, DZGParser::RuleForCondition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(623);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DZGParser::T__32:
      case DZGParser::T__33:
      case DZGParser::T__34:
      case DZGParser::T__35:
      case DZGParser::T__36:
      case DZGParser::T__37:
      case DZGParser::T__38:
      case DZGParser::T__39:
      case DZGParser::T__40:
      case DZGParser::T__53:
      case DZGParser::T__54: {
        enterOuterAlt(_localctx, 1);
        setState(603);
        forDeclaration();
        setState(604);
        match(DZGParser::T__52);
        setState(606);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << DZGParser::T__0)
          | (1ULL << DZGParser::T__9)
          | (1ULL << DZGParser::T__18)
          | (1ULL << DZGParser::T__19)
          | (1ULL << DZGParser::T__20)
          | (1ULL << DZGParser::T__23)
          | (1ULL << DZGParser::T__24)
          | (1ULL << DZGParser::T__30)
          | (1ULL << DZGParser::T__31)
          | (1ULL << DZGParser::Identifier)
          | (1ULL << DZGParser::Constant)
          | (1ULL << DZGParser::DigitSequence)
          | (1ULL << DZGParser::StringLiteral))) != 0)) {
          setState(605);
          forExpression(0);
        }
        setState(608);
        match(DZGParser::T__52);
        setState(610);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << DZGParser::T__0)
          | (1ULL << DZGParser::T__9)
          | (1ULL << DZGParser::T__18)
          | (1ULL << DZGParser::T__19)
          | (1ULL << DZGParser::T__20)
          | (1ULL << DZGParser::T__23)
          | (1ULL << DZGParser::T__24)
          | (1ULL << DZGParser::T__30)
          | (1ULL << DZGParser::T__31)
          | (1ULL << DZGParser::Identifier)
          | (1ULL << DZGParser::Constant)
          | (1ULL << DZGParser::DigitSequence)
          | (1ULL << DZGParser::StringLiteral))) != 0)) {
          setState(609);
          forExpression(0);
        }
        break;
      }

      case DZGParser::T__0:
      case DZGParser::T__9:
      case DZGParser::T__18:
      case DZGParser::T__19:
      case DZGParser::T__20:
      case DZGParser::T__23:
      case DZGParser::T__24:
      case DZGParser::T__30:
      case DZGParser::T__31:
      case DZGParser::T__52:
      case DZGParser::Identifier:
      case DZGParser::Constant:
      case DZGParser::DigitSequence:
      case DZGParser::StringLiteral: {
        enterOuterAlt(_localctx, 2);
        setState(613);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << DZGParser::T__0)
          | (1ULL << DZGParser::T__9)
          | (1ULL << DZGParser::T__18)
          | (1ULL << DZGParser::T__19)
          | (1ULL << DZGParser::T__20)
          | (1ULL << DZGParser::T__23)
          | (1ULL << DZGParser::T__24)
          | (1ULL << DZGParser::T__30)
          | (1ULL << DZGParser::T__31)
          | (1ULL << DZGParser::Identifier)
          | (1ULL << DZGParser::Constant)
          | (1ULL << DZGParser::DigitSequence)
          | (1ULL << DZGParser::StringLiteral))) != 0)) {
          setState(612);
          expression(0);
        }
        setState(615);
        match(DZGParser::T__52);
        setState(617);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << DZGParser::T__0)
          | (1ULL << DZGParser::T__9)
          | (1ULL << DZGParser::T__18)
          | (1ULL << DZGParser::T__19)
          | (1ULL << DZGParser::T__20)
          | (1ULL << DZGParser::T__23)
          | (1ULL << DZGParser::T__24)
          | (1ULL << DZGParser::T__30)
          | (1ULL << DZGParser::T__31)
          | (1ULL << DZGParser::Identifier)
          | (1ULL << DZGParser::Constant)
          | (1ULL << DZGParser::DigitSequence)
          | (1ULL << DZGParser::StringLiteral))) != 0)) {
          setState(616);
          forExpression(0);
        }
        setState(619);
        match(DZGParser::T__52);
        setState(621);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << DZGParser::T__0)
          | (1ULL << DZGParser::T__9)
          | (1ULL << DZGParser::T__18)
          | (1ULL << DZGParser::T__19)
          | (1ULL << DZGParser::T__20)
          | (1ULL << DZGParser::T__23)
          | (1ULL << DZGParser::T__24)
          | (1ULL << DZGParser::T__30)
          | (1ULL << DZGParser::T__31)
          | (1ULL << DZGParser::Identifier)
          | (1ULL << DZGParser::Constant)
          | (1ULL << DZGParser::DigitSequence)
          | (1ULL << DZGParser::StringLiteral))) != 0)) {
          setState(620);
          forExpression(0);
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

//----------------- ForDeclarationContext ------------------------------------------------------------------

DZGParser::ForDeclarationContext::ForDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DZGParser::DeclarationSpecifiersContext* DZGParser::ForDeclarationContext::declarationSpecifiers() {
  return getRuleContext<DZGParser::DeclarationSpecifiersContext>(0);
}

DZGParser::InitDeclaratorListContext* DZGParser::ForDeclarationContext::initDeclaratorList() {
  return getRuleContext<DZGParser::InitDeclaratorListContext>(0);
}


size_t DZGParser::ForDeclarationContext::getRuleIndex() const {
  return DZGParser::RuleForDeclaration;
}

void DZGParser::ForDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForDeclaration(this);
}

void DZGParser::ForDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForDeclaration(this);
}


antlrcpp::Any DZGParser::ForDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DZGVisitor*>(visitor))
    return parserVisitor->visitForDeclaration(this);
  else
    return visitor->visitChildren(this);
}

DZGParser::ForDeclarationContext* DZGParser::forDeclaration() {
  ForDeclarationContext *_localctx = _tracker.createInstance<ForDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 98, DZGParser::RuleForDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(629);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 63, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(625);
      declarationSpecifiers();
      setState(626);
      initDeclaratorList(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(628);
      declarationSpecifiers();
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

//----------------- ForExpressionContext ------------------------------------------------------------------

DZGParser::ForExpressionContext::ForExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DZGParser::AssignmentExpressionContext* DZGParser::ForExpressionContext::assignmentExpression() {
  return getRuleContext<DZGParser::AssignmentExpressionContext>(0);
}

DZGParser::ForExpressionContext* DZGParser::ForExpressionContext::forExpression() {
  return getRuleContext<DZGParser::ForExpressionContext>(0);
}


size_t DZGParser::ForExpressionContext::getRuleIndex() const {
  return DZGParser::RuleForExpression;
}

void DZGParser::ForExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForExpression(this);
}

void DZGParser::ForExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForExpression(this);
}


antlrcpp::Any DZGParser::ForExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DZGVisitor*>(visitor))
    return parserVisitor->visitForExpression(this);
  else
    return visitor->visitChildren(this);
}


DZGParser::ForExpressionContext* DZGParser::forExpression() {
   return forExpression(0);
}

DZGParser::ForExpressionContext* DZGParser::forExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  DZGParser::ForExpressionContext *_localctx = _tracker.createInstance<ForExpressionContext>(_ctx, parentState);
  DZGParser::ForExpressionContext *previousContext = _localctx;
  size_t startState = 100;
  enterRecursionRule(_localctx, 100, DZGParser::RuleForExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(632);
    assignmentExpression();
    _ctx->stop = _input->LT(-1);
    setState(639);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 64, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ForExpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleForExpression);
        setState(634);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(635);
        match(DZGParser::T__2);
        setState(636);
        assignmentExpression(); 
      }
      setState(641);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 64, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- FunctionDefinitionContext ------------------------------------------------------------------

DZGParser::FunctionDefinitionContext::FunctionDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DZGParser::DeclaratorContext* DZGParser::FunctionDefinitionContext::declarator() {
  return getRuleContext<DZGParser::DeclaratorContext>(0);
}

DZGParser::CompoundStatementContext* DZGParser::FunctionDefinitionContext::compoundStatement() {
  return getRuleContext<DZGParser::CompoundStatementContext>(0);
}

DZGParser::DeclarationSpecifiersContext* DZGParser::FunctionDefinitionContext::declarationSpecifiers() {
  return getRuleContext<DZGParser::DeclarationSpecifiersContext>(0);
}

DZGParser::DeclarationListContext* DZGParser::FunctionDefinitionContext::declarationList() {
  return getRuleContext<DZGParser::DeclarationListContext>(0);
}


size_t DZGParser::FunctionDefinitionContext::getRuleIndex() const {
  return DZGParser::RuleFunctionDefinition;
}

void DZGParser::FunctionDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionDefinition(this);
}

void DZGParser::FunctionDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionDefinition(this);
}


antlrcpp::Any DZGParser::FunctionDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DZGVisitor*>(visitor))
    return parserVisitor->visitFunctionDefinition(this);
  else
    return visitor->visitChildren(this);
}

DZGParser::FunctionDefinitionContext* DZGParser::functionDefinition() {
  FunctionDefinitionContext *_localctx = _tracker.createInstance<FunctionDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 102, DZGParser::RuleFunctionDefinition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(643);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << DZGParser::T__32)
      | (1ULL << DZGParser::T__33)
      | (1ULL << DZGParser::T__34)
      | (1ULL << DZGParser::T__35)
      | (1ULL << DZGParser::T__36)
      | (1ULL << DZGParser::T__37)
      | (1ULL << DZGParser::T__38)
      | (1ULL << DZGParser::T__39)
      | (1ULL << DZGParser::T__40)
      | (1ULL << DZGParser::T__53)
      | (1ULL << DZGParser::T__54))) != 0)) {
      setState(642);
      declarationSpecifiers();
    }
    setState(645);
    declarator();
    setState(647);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << DZGParser::T__32)
      | (1ULL << DZGParser::T__33)
      | (1ULL << DZGParser::T__34)
      | (1ULL << DZGParser::T__35)
      | (1ULL << DZGParser::T__36)
      | (1ULL << DZGParser::T__37)
      | (1ULL << DZGParser::T__38)
      | (1ULL << DZGParser::T__39)
      | (1ULL << DZGParser::T__40)
      | (1ULL << DZGParser::T__53)
      | (1ULL << DZGParser::T__54))) != 0)) {
      setState(646);
      declarationList(0);
    }
    setState(649);
    compoundStatement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationListContext ------------------------------------------------------------------

DZGParser::DeclarationListContext::DeclarationListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DZGParser::DeclarationContext* DZGParser::DeclarationListContext::declaration() {
  return getRuleContext<DZGParser::DeclarationContext>(0);
}

DZGParser::DeclarationListContext* DZGParser::DeclarationListContext::declarationList() {
  return getRuleContext<DZGParser::DeclarationListContext>(0);
}


size_t DZGParser::DeclarationListContext::getRuleIndex() const {
  return DZGParser::RuleDeclarationList;
}

void DZGParser::DeclarationListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclarationList(this);
}

void DZGParser::DeclarationListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclarationList(this);
}


antlrcpp::Any DZGParser::DeclarationListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DZGVisitor*>(visitor))
    return parserVisitor->visitDeclarationList(this);
  else
    return visitor->visitChildren(this);
}


DZGParser::DeclarationListContext* DZGParser::declarationList() {
   return declarationList(0);
}

DZGParser::DeclarationListContext* DZGParser::declarationList(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  DZGParser::DeclarationListContext *_localctx = _tracker.createInstance<DeclarationListContext>(_ctx, parentState);
  DZGParser::DeclarationListContext *previousContext = _localctx;
  size_t startState = 104;
  enterRecursionRule(_localctx, 104, DZGParser::RuleDeclarationList, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(652);
    declaration();
    _ctx->stop = _input->LT(-1);
    setState(658);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 67, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<DeclarationListContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleDeclarationList);
        setState(654);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(655);
        declaration(); 
      }
      setState(660);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 67, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ExternalDeclarationContext ------------------------------------------------------------------

DZGParser::ExternalDeclarationContext::ExternalDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DZGParser::FunctionDefinitionContext* DZGParser::ExternalDeclarationContext::functionDefinition() {
  return getRuleContext<DZGParser::FunctionDefinitionContext>(0);
}

DZGParser::DeclarationContext* DZGParser::ExternalDeclarationContext::declaration() {
  return getRuleContext<DZGParser::DeclarationContext>(0);
}


size_t DZGParser::ExternalDeclarationContext::getRuleIndex() const {
  return DZGParser::RuleExternalDeclaration;
}

void DZGParser::ExternalDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExternalDeclaration(this);
}

void DZGParser::ExternalDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExternalDeclaration(this);
}


antlrcpp::Any DZGParser::ExternalDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DZGVisitor*>(visitor))
    return parserVisitor->visitExternalDeclaration(this);
  else
    return visitor->visitChildren(this);
}

DZGParser::ExternalDeclarationContext* DZGParser::externalDeclaration() {
  ExternalDeclarationContext *_localctx = _tracker.createInstance<ExternalDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 106, DZGParser::RuleExternalDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(664);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 68, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(661);
      functionDefinition();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(662);
      declaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(663);
      match(DZGParser::T__52);
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

//----------------- TranslationUnitContext ------------------------------------------------------------------

DZGParser::TranslationUnitContext::TranslationUnitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DZGParser::ExternalDeclarationContext* DZGParser::TranslationUnitContext::externalDeclaration() {
  return getRuleContext<DZGParser::ExternalDeclarationContext>(0);
}

DZGParser::TranslationUnitContext* DZGParser::TranslationUnitContext::translationUnit() {
  return getRuleContext<DZGParser::TranslationUnitContext>(0);
}


size_t DZGParser::TranslationUnitContext::getRuleIndex() const {
  return DZGParser::RuleTranslationUnit;
}

void DZGParser::TranslationUnitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTranslationUnit(this);
}

void DZGParser::TranslationUnitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTranslationUnit(this);
}


antlrcpp::Any DZGParser::TranslationUnitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DZGVisitor*>(visitor))
    return parserVisitor->visitTranslationUnit(this);
  else
    return visitor->visitChildren(this);
}


DZGParser::TranslationUnitContext* DZGParser::translationUnit() {
   return translationUnit(0);
}

DZGParser::TranslationUnitContext* DZGParser::translationUnit(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  DZGParser::TranslationUnitContext *_localctx = _tracker.createInstance<TranslationUnitContext>(_ctx, parentState);
  DZGParser::TranslationUnitContext *previousContext = _localctx;
  size_t startState = 108;
  enterRecursionRule(_localctx, 108, DZGParser::RuleTranslationUnit, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(667);
    externalDeclaration();
    _ctx->stop = _input->LT(-1);
    setState(673);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 69, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<TranslationUnitContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleTranslationUnit);
        setState(669);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(670);
        externalDeclaration(); 
      }
      setState(675);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 69, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- CompilationUnitContext ------------------------------------------------------------------

DZGParser::CompilationUnitContext::CompilationUnitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DZGParser::CompilationUnitContext::EOF() {
  return getToken(DZGParser::EOF, 0);
}

DZGParser::TranslationUnitContext* DZGParser::CompilationUnitContext::translationUnit() {
  return getRuleContext<DZGParser::TranslationUnitContext>(0);
}


size_t DZGParser::CompilationUnitContext::getRuleIndex() const {
  return DZGParser::RuleCompilationUnit;
}

void DZGParser::CompilationUnitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompilationUnit(this);
}

void DZGParser::CompilationUnitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<DZGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompilationUnit(this);
}


antlrcpp::Any DZGParser::CompilationUnitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DZGVisitor*>(visitor))
    return parserVisitor->visitCompilationUnit(this);
  else
    return visitor->visitChildren(this);
}

DZGParser::CompilationUnitContext* DZGParser::compilationUnit() {
  CompilationUnitContext *_localctx = _tracker.createInstance<CompilationUnitContext>(_ctx, getState());
  enterRule(_localctx, 110, DZGParser::RuleCompilationUnit);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(677);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << DZGParser::T__0)
      | (1ULL << DZGParser::T__32)
      | (1ULL << DZGParser::T__33)
      | (1ULL << DZGParser::T__34)
      | (1ULL << DZGParser::T__35)
      | (1ULL << DZGParser::T__36)
      | (1ULL << DZGParser::T__37)
      | (1ULL << DZGParser::T__38)
      | (1ULL << DZGParser::T__39)
      | (1ULL << DZGParser::T__40)
      | (1ULL << DZGParser::T__52)
      | (1ULL << DZGParser::T__53)
      | (1ULL << DZGParser::T__54)
      | (1ULL << DZGParser::Identifier))) != 0)) {
      setState(676);
      translationUnit(0);
    }
    setState(679);
    match(DZGParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool DZGParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 1: return identifierListSempred(dynamic_cast<IdentifierListContext *>(context), predicateIndex);
    case 2: return expressionSempred(dynamic_cast<ExpressionContext *>(context), predicateIndex);
    case 5: return logicalOrExpressionSempred(dynamic_cast<LogicalOrExpressionContext *>(context), predicateIndex);
    case 6: return logicalAndExpressionSempred(dynamic_cast<LogicalAndExpressionContext *>(context), predicateIndex);
    case 7: return inclusiveOrExpressionSempred(dynamic_cast<InclusiveOrExpressionContext *>(context), predicateIndex);
    case 8: return exclusiveOrExpressionSempred(dynamic_cast<ExclusiveOrExpressionContext *>(context), predicateIndex);
    case 9: return andExpressionSempred(dynamic_cast<AndExpressionContext *>(context), predicateIndex);
    case 10: return equalityExpressionSempred(dynamic_cast<EqualityExpressionContext *>(context), predicateIndex);
    case 11: return relationalExpressionSempred(dynamic_cast<RelationalExpressionContext *>(context), predicateIndex);
    case 12: return shiftExpressionSempred(dynamic_cast<ShiftExpressionContext *>(context), predicateIndex);
    case 13: return additiveExpressionSempred(dynamic_cast<AdditiveExpressionContext *>(context), predicateIndex);
    case 14: return multiplicativeExpressionSempred(dynamic_cast<MultiplicativeExpressionContext *>(context), predicateIndex);
    case 17: return postfixExpressionSempred(dynamic_cast<PostfixExpressionContext *>(context), predicateIndex);
    case 18: return argumentExpressionListSempred(dynamic_cast<ArgumentExpressionListContext *>(context), predicateIndex);
    case 24: return initializerListSempred(dynamic_cast<InitializerListContext *>(context), predicateIndex);
    case 26: return designatorListSempred(dynamic_cast<DesignatorListContext *>(context), predicateIndex);
    case 32: return blockItemListSempred(dynamic_cast<BlockItemListContext *>(context), predicateIndex);
    case 39: return initDeclaratorListSempred(dynamic_cast<InitDeclaratorListContext *>(context), predicateIndex);
    case 42: return directDeclaratorSempred(dynamic_cast<DirectDeclaratorContext *>(context), predicateIndex);
    case 43: return typeQualifierListSempred(dynamic_cast<TypeQualifierListContext *>(context), predicateIndex);
    case 50: return forExpressionSempred(dynamic_cast<ForExpressionContext *>(context), predicateIndex);
    case 52: return declarationListSempred(dynamic_cast<DeclarationListContext *>(context), predicateIndex);
    case 54: return translationUnitSempred(dynamic_cast<TranslationUnitContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool DZGParser::identifierListSempred(IdentifierListContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool DZGParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 1: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool DZGParser::logicalOrExpressionSempred(LogicalOrExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 2: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool DZGParser::logicalAndExpressionSempred(LogicalAndExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 3: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool DZGParser::inclusiveOrExpressionSempred(InclusiveOrExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 4: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool DZGParser::exclusiveOrExpressionSempred(ExclusiveOrExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 5: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool DZGParser::andExpressionSempred(AndExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 6: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool DZGParser::equalityExpressionSempred(EqualityExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 7: return precpred(_ctx, 2);
    case 8: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool DZGParser::relationalExpressionSempred(RelationalExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 9: return precpred(_ctx, 4);
    case 10: return precpred(_ctx, 3);
    case 11: return precpred(_ctx, 2);
    case 12: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool DZGParser::shiftExpressionSempred(ShiftExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 13: return precpred(_ctx, 2);
    case 14: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool DZGParser::additiveExpressionSempred(AdditiveExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 15: return precpred(_ctx, 2);
    case 16: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool DZGParser::multiplicativeExpressionSempred(MultiplicativeExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 17: return precpred(_ctx, 3);
    case 18: return precpred(_ctx, 2);
    case 19: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool DZGParser::postfixExpressionSempred(PostfixExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 20: return precpred(_ctx, 7);
    case 21: return precpred(_ctx, 6);
    case 22: return precpred(_ctx, 5);
    case 23: return precpred(_ctx, 4);
    case 24: return precpred(_ctx, 3);

  default:
    break;
  }
  return true;
}

bool DZGParser::argumentExpressionListSempred(ArgumentExpressionListContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 25: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool DZGParser::initializerListSempred(InitializerListContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 26: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool DZGParser::designatorListSempred(DesignatorListContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 27: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool DZGParser::blockItemListSempred(BlockItemListContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 28: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool DZGParser::initDeclaratorListSempred(InitDeclaratorListContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 29: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool DZGParser::directDeclaratorSempred(DirectDeclaratorContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 30: return precpred(_ctx, 2);
    case 31: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool DZGParser::typeQualifierListSempred(TypeQualifierListContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 32: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool DZGParser::forExpressionSempred(ForExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 33: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool DZGParser::declarationListSempred(DeclarationListContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 34: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool DZGParser::translationUnitSempred(TranslationUnitContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 35: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> DZGParser::_decisionToDFA;
atn::PredictionContextCache DZGParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN DZGParser::_atn;
std::vector<uint16_t> DZGParser::_serializedATN;

std::vector<std::string> DZGParser::_ruleNames = {
  "primaryExpression", "identifierList", "expression", "assignmentExpression", 
  "conditionalExpression", "logicalOrExpression", "logicalAndExpression", 
  "inclusiveOrExpression", "exclusiveOrExpression", "andExpression", "equalityExpression", 
  "relationalExpression", "shiftExpression", "additiveExpression", "multiplicativeExpression", 
  "castExpression", "unaryExpression", "postfixExpression", "argumentExpressionList", 
  "unaryOperator", "typeName", "specifierQualifierList", "typeSpecifier", 
  "typeQualifier", "initializerList", "designation", "designatorList", "designator", 
  "constantExpression", "initializer", "assignmentOperator", "compoundStatement", 
  "blockItemList", "blockItem", "declaration", "statement", "declarationSpecifiers", 
  "declarationSpecifier", "storageClassSpecifier", "initDeclaratorList", 
  "initDeclarator", "declarator", "directDeclarator", "typeQualifierList", 
  "labeledStatement", "expressionStatement", "selectionStatement", "iterationStatement", 
  "forCondition", "forDeclaration", "forExpression", "functionDefinition", 
  "declarationList", "externalDeclaration", "translationUnit", "compilationUnit"
};

std::vector<std::string> DZGParser::_literalNames = {
  "", "'('", "')'", "','", "'?'", "':'", "'||'", "'&&'", "'|'", "'^'", "'&'", 
  "'=='", "'!='", "'<'", "'>'", "'<='", "'>='", "'<<'", "'>>'", "'+'", "'-'", 
  "'*'", "'/'", "'%'", "'++'", "'--'", "'['", "']'", "'.'", "'{'", "'}'", 
  "'~'", "'!'", "'void'", "'char'", "'short'", "'int'", "'long'", "'float'", 
  "'double'", "'signed'", "'const'", "'='", "'*='", "'/='", "'%='", "'+='", 
  "'-='", "'<<='", "'>>='", "'&='", "'^='", "'|='", "';'", "'typedef'", 
  "'static'", "'case'", "'default'", "'else'", "'switch'", "", "", "", "", 
  "'while'", "'if'", "'do'", "'for'"
};

std::vector<std::string> DZGParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "Identifier", "Constant", "DigitSequence", "StringLiteral", 
  "While", "If", "Do", "For", "ComplexDefine", "AsmBlock", "LineAfterPreprocessing", 
  "LineDirective", "PragmaDirective", "Whitespace", "Newline", "BlockComment", 
  "LineComment"
};

dfa::Vocabulary DZGParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> DZGParser::_tokenNames;

DZGParser::Initializer::Initializer() {
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
    0x3, 0x4e, 0x2ac, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 
    0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 
    0x9, 0x22, 0x4, 0x23, 0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 
    0x25, 0x4, 0x26, 0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 0x9, 0x28, 
    0x4, 0x29, 0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x4, 0x2b, 0x9, 0x2b, 0x4, 
    0x2c, 0x9, 0x2c, 0x4, 0x2d, 0x9, 0x2d, 0x4, 0x2e, 0x9, 0x2e, 0x4, 0x2f, 
    0x9, 0x2f, 0x4, 0x30, 0x9, 0x30, 0x4, 0x31, 0x9, 0x31, 0x4, 0x32, 0x9, 
    0x32, 0x4, 0x33, 0x9, 0x33, 0x4, 0x34, 0x9, 0x34, 0x4, 0x35, 0x9, 0x35, 
    0x4, 0x36, 0x9, 0x36, 0x4, 0x37, 0x9, 0x37, 0x4, 0x38, 0x9, 0x38, 0x4, 
    0x39, 0x9, 0x39, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x6, 0x2, 0x76, 0xa, 
    0x2, 0xd, 0x2, 0xe, 0x2, 0x77, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 
    0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x5, 0x2, 0x82, 0xa, 0x2, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x8a, 
    0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x8d, 0xb, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x7, 0x4, 0x95, 0xa, 0x4, 0xc, 0x4, 
    0xe, 0x4, 0x98, 0xb, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x5, 0x5, 0xa0, 0xa, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0xa8, 0xa, 0x6, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x7, 0x7, 0xb0, 0xa, 0x7, 
    0xc, 0x7, 0xe, 0x7, 0xb3, 0xb, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x7, 0x8, 0xbb, 0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 
    0xbe, 0xb, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0x9, 0x7, 0x9, 0xc6, 0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 0xc9, 0xb, 0x9, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x7, 0xa, 0xd1, 
    0xa, 0xa, 0xc, 0xa, 0xe, 0xa, 0xd4, 0xb, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 
    0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x7, 0xb, 0xdc, 0xa, 0xb, 0xc, 0xb, 
    0xe, 0xb, 0xdf, 0xb, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x7, 0xc, 0xea, 0xa, 0xc, 
    0xc, 0xc, 0xe, 0xc, 0xed, 0xb, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x7, 0xd, 0xfe, 0xa, 0xd, 
    0xc, 0xd, 0xe, 0xd, 0x101, 0xb, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x7, 0xe, 0x10c, 
    0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 0x10f, 0xb, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 
    0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x7, 
    0xf, 0x11a, 0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 0x11d, 0xb, 0xf, 0x3, 0x10, 
    0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 
    0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x7, 0x10, 0x12b, 
    0xa, 0x10, 0xc, 0x10, 0xe, 0x10, 0x12e, 0xb, 0x10, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0x137, 
    0xa, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 
    0x12, 0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 0x141, 0xa, 0x12, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 
    0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0x154, 0xa, 0x13, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 
    0x13, 0x5, 0x13, 0x15e, 0xa, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x7, 0x13, 0x168, 
    0xa, 0x13, 0xc, 0x13, 0xe, 0x13, 0x16b, 0xb, 0x13, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x7, 0x14, 0x173, 0xa, 0x14, 
    0xc, 0x14, 0xe, 0x14, 0x176, 0xb, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 
    0x3, 0x16, 0x3, 0x17, 0x3, 0x17, 0x5, 0x17, 0x17e, 0xa, 0x17, 0x3, 0x17, 
    0x3, 0x17, 0x5, 0x17, 0x182, 0xa, 0x17, 0x5, 0x17, 0x184, 0xa, 0x17, 
    0x3, 0x18, 0x3, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x5, 
    0x1a, 0x18c, 0xa, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 
    0x3, 0x1a, 0x5, 0x1a, 0x193, 0xa, 0x1a, 0x3, 0x1a, 0x7, 0x1a, 0x196, 
    0xa, 0x1a, 0xc, 0x1a, 0xe, 0x1a, 0x199, 0xb, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 
    0x3, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x7, 
    0x1c, 0x1a3, 0xa, 0x1c, 0xc, 0x1c, 0xe, 0x1c, 0x1a6, 0xb, 0x1c, 0x3, 
    0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x5, 0x1d, 
    0x1ae, 0xa, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 
    0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 
    0x1f, 0x5, 0x1f, 0x1bc, 0xa, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x3, 0x21, 
    0x3, 0x21, 0x5, 0x21, 0x1c2, 0xa, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x22, 
    0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x7, 0x22, 0x1cb, 0xa, 0x22, 
    0xc, 0x22, 0xe, 0x22, 0x1ce, 0xb, 0x22, 0x3, 0x23, 0x3, 0x23, 0x5, 0x23, 
    0x1d2, 0xa, 0x23, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x25, 
    0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x5, 0x25, 0x1dd, 0xa, 0x25, 
    0x3, 0x26, 0x6, 0x26, 0x1e0, 0xa, 0x26, 0xd, 0x26, 0xe, 0x26, 0x1e1, 
    0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x5, 0x27, 0x1e7, 0xa, 0x27, 0x3, 0x28, 
    0x3, 0x28, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 
    0x29, 0x7, 0x29, 0x1f1, 0xa, 0x29, 0xc, 0x29, 0xe, 0x29, 0x1f4, 0xb, 
    0x29, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x5, 0x2a, 
    0x1fb, 0xa, 0x2a, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 
    0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x5, 0x2c, 0x205, 0xa, 0x2c, 0x3, 0x2c, 
    0x3, 0x2c, 0x3, 0x2c, 0x5, 0x2c, 0x20a, 0xa, 0x2c, 0x3, 0x2c, 0x5, 0x2c, 
    0x20d, 0xa, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x5, 0x2c, 
    0x213, 0xa, 0x2c, 0x3, 0x2c, 0x7, 0x2c, 0x216, 0xa, 0x2c, 0xc, 0x2c, 
    0xe, 0x2c, 0x219, 0xb, 0x2c, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 
    0x3, 0x2d, 0x7, 0x2d, 0x220, 0xa, 0x2d, 0xc, 0x2d, 0xe, 0x2d, 0x223, 
    0xb, 0x2d, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 
    0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x5, 0x2e, 
    0x230, 0xa, 0x2e, 0x3, 0x2f, 0x5, 0x2f, 0x233, 0xa, 0x2f, 0x3, 0x2f, 
    0x3, 0x2f, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 
    0x30, 0x3, 0x30, 0x5, 0x30, 0x23e, 0xa, 0x30, 0x3, 0x30, 0x3, 0x30, 
    0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x5, 0x30, 0x246, 0xa, 0x30, 
    0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 
    0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 
    0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 
    0x31, 0x5, 0x31, 0x25c, 0xa, 0x31, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 
    0x5, 0x32, 0x261, 0xa, 0x32, 0x3, 0x32, 0x3, 0x32, 0x5, 0x32, 0x265, 
    0xa, 0x32, 0x3, 0x32, 0x5, 0x32, 0x268, 0xa, 0x32, 0x3, 0x32, 0x3, 0x32, 
    0x5, 0x32, 0x26c, 0xa, 0x32, 0x3, 0x32, 0x3, 0x32, 0x5, 0x32, 0x270, 
    0xa, 0x32, 0x5, 0x32, 0x272, 0xa, 0x32, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 
    0x3, 0x33, 0x5, 0x33, 0x278, 0xa, 0x33, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 
    0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x7, 0x34, 0x280, 0xa, 0x34, 0xc, 0x34, 
    0xe, 0x34, 0x283, 0xb, 0x34, 0x3, 0x35, 0x5, 0x35, 0x286, 0xa, 0x35, 
    0x3, 0x35, 0x3, 0x35, 0x5, 0x35, 0x28a, 0xa, 0x35, 0x3, 0x35, 0x3, 0x35, 
    0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x7, 0x36, 0x293, 
    0xa, 0x36, 0xc, 0x36, 0xe, 0x36, 0x296, 0xb, 0x36, 0x3, 0x37, 0x3, 0x37, 
    0x3, 0x37, 0x5, 0x37, 0x29b, 0xa, 0x37, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 
    0x3, 0x38, 0x3, 0x38, 0x7, 0x38, 0x2a2, 0xa, 0x38, 0xc, 0x38, 0xe, 0x38, 
    0x2a5, 0xb, 0x38, 0x3, 0x39, 0x5, 0x39, 0x2a8, 0xa, 0x39, 0x3, 0x39, 
    0x3, 0x39, 0x3, 0x39, 0x2, 0x19, 0x4, 0x6, 0xc, 0xe, 0x10, 0x12, 0x14, 
    0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x24, 0x26, 0x32, 0x36, 0x42, 0x50, 0x56, 
    0x58, 0x66, 0x6a, 0x6e, 0x3a, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 
    0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 
    0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x40, 
    0x42, 0x44, 0x46, 0x48, 0x4a, 0x4c, 0x4e, 0x50, 0x52, 0x54, 0x56, 0x58, 
    0x5a, 0x5c, 0x5e, 0x60, 0x62, 0x64, 0x66, 0x68, 0x6a, 0x6c, 0x6e, 0x70, 
    0x2, 0x6, 0x5, 0x2, 0xc, 0xc, 0x15, 0x17, 0x21, 0x22, 0x3, 0x2, 0x23, 
    0x2a, 0x3, 0x2, 0x2c, 0x36, 0x3, 0x2, 0x38, 0x39, 0x2, 0x2d0, 0x2, 0x81, 
    0x3, 0x2, 0x2, 0x2, 0x4, 0x83, 0x3, 0x2, 0x2, 0x2, 0x6, 0x8e, 0x3, 0x2, 
    0x2, 0x2, 0x8, 0x9f, 0x3, 0x2, 0x2, 0x2, 0xa, 0xa1, 0x3, 0x2, 0x2, 0x2, 
    0xc, 0xa9, 0x3, 0x2, 0x2, 0x2, 0xe, 0xb4, 0x3, 0x2, 0x2, 0x2, 0x10, 
    0xbf, 0x3, 0x2, 0x2, 0x2, 0x12, 0xca, 0x3, 0x2, 0x2, 0x2, 0x14, 0xd5, 
    0x3, 0x2, 0x2, 0x2, 0x16, 0xe0, 0x3, 0x2, 0x2, 0x2, 0x18, 0xee, 0x3, 
    0x2, 0x2, 0x2, 0x1a, 0x102, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x110, 0x3, 0x2, 
    0x2, 0x2, 0x1e, 0x11e, 0x3, 0x2, 0x2, 0x2, 0x20, 0x136, 0x3, 0x2, 0x2, 
    0x2, 0x22, 0x140, 0x3, 0x2, 0x2, 0x2, 0x24, 0x153, 0x3, 0x2, 0x2, 0x2, 
    0x26, 0x16c, 0x3, 0x2, 0x2, 0x2, 0x28, 0x177, 0x3, 0x2, 0x2, 0x2, 0x2a, 
    0x179, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x183, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x185, 
    0x3, 0x2, 0x2, 0x2, 0x30, 0x187, 0x3, 0x2, 0x2, 0x2, 0x32, 0x189, 0x3, 
    0x2, 0x2, 0x2, 0x34, 0x19a, 0x3, 0x2, 0x2, 0x2, 0x36, 0x19d, 0x3, 0x2, 
    0x2, 0x2, 0x38, 0x1ad, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x1af, 0x3, 0x2, 0x2, 
    0x2, 0x3c, 0x1bb, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x1bd, 0x3, 0x2, 0x2, 0x2, 
    0x40, 0x1bf, 0x3, 0x2, 0x2, 0x2, 0x42, 0x1c5, 0x3, 0x2, 0x2, 0x2, 0x44, 
    0x1d1, 0x3, 0x2, 0x2, 0x2, 0x46, 0x1d3, 0x3, 0x2, 0x2, 0x2, 0x48, 0x1dc, 
    0x3, 0x2, 0x2, 0x2, 0x4a, 0x1df, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x1e6, 0x3, 
    0x2, 0x2, 0x2, 0x4e, 0x1e8, 0x3, 0x2, 0x2, 0x2, 0x50, 0x1ea, 0x3, 0x2, 
    0x2, 0x2, 0x52, 0x1fa, 0x3, 0x2, 0x2, 0x2, 0x54, 0x1fc, 0x3, 0x2, 0x2, 
    0x2, 0x56, 0x204, 0x3, 0x2, 0x2, 0x2, 0x58, 0x21a, 0x3, 0x2, 0x2, 0x2, 
    0x5a, 0x22f, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x232, 0x3, 0x2, 0x2, 0x2, 0x5e, 
    0x245, 0x3, 0x2, 0x2, 0x2, 0x60, 0x25b, 0x3, 0x2, 0x2, 0x2, 0x62, 0x271, 
    0x3, 0x2, 0x2, 0x2, 0x64, 0x277, 0x3, 0x2, 0x2, 0x2, 0x66, 0x279, 0x3, 
    0x2, 0x2, 0x2, 0x68, 0x285, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x28d, 0x3, 0x2, 
    0x2, 0x2, 0x6c, 0x29a, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x29c, 0x3, 0x2, 0x2, 
    0x2, 0x70, 0x2a7, 0x3, 0x2, 0x2, 0x2, 0x72, 0x82, 0x7, 0x3e, 0x2, 0x2, 
    0x73, 0x82, 0x7, 0x3f, 0x2, 0x2, 0x74, 0x76, 0x7, 0x41, 0x2, 0x2, 0x75, 
    0x74, 0x3, 0x2, 0x2, 0x2, 0x76, 0x77, 0x3, 0x2, 0x2, 0x2, 0x77, 0x75, 
    0x3, 0x2, 0x2, 0x2, 0x77, 0x78, 0x3, 0x2, 0x2, 0x2, 0x78, 0x82, 0x3, 
    0x2, 0x2, 0x2, 0x79, 0x7a, 0x7, 0x3, 0x2, 0x2, 0x7a, 0x7b, 0x5, 0x6, 
    0x4, 0x2, 0x7b, 0x7c, 0x7, 0x4, 0x2, 0x2, 0x7c, 0x82, 0x3, 0x2, 0x2, 
    0x2, 0x7d, 0x7e, 0x7, 0x3, 0x2, 0x2, 0x7e, 0x7f, 0x5, 0x40, 0x21, 0x2, 
    0x7f, 0x80, 0x7, 0x4, 0x2, 0x2, 0x80, 0x82, 0x3, 0x2, 0x2, 0x2, 0x81, 
    0x72, 0x3, 0x2, 0x2, 0x2, 0x81, 0x73, 0x3, 0x2, 0x2, 0x2, 0x81, 0x75, 
    0x3, 0x2, 0x2, 0x2, 0x81, 0x79, 0x3, 0x2, 0x2, 0x2, 0x81, 0x7d, 0x3, 
    0x2, 0x2, 0x2, 0x82, 0x3, 0x3, 0x2, 0x2, 0x2, 0x83, 0x84, 0x8, 0x3, 
    0x1, 0x2, 0x84, 0x85, 0x7, 0x3e, 0x2, 0x2, 0x85, 0x8b, 0x3, 0x2, 0x2, 
    0x2, 0x86, 0x87, 0xc, 0x3, 0x2, 0x2, 0x87, 0x88, 0x7, 0x5, 0x2, 0x2, 
    0x88, 0x8a, 0x7, 0x3e, 0x2, 0x2, 0x89, 0x86, 0x3, 0x2, 0x2, 0x2, 0x8a, 
    0x8d, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x89, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x8c, 
    0x3, 0x2, 0x2, 0x2, 0x8c, 0x5, 0x3, 0x2, 0x2, 0x2, 0x8d, 0x8b, 0x3, 
    0x2, 0x2, 0x2, 0x8e, 0x8f, 0x8, 0x4, 0x1, 0x2, 0x8f, 0x90, 0x5, 0x8, 
    0x5, 0x2, 0x90, 0x96, 0x3, 0x2, 0x2, 0x2, 0x91, 0x92, 0xc, 0x3, 0x2, 
    0x2, 0x92, 0x93, 0x7, 0x5, 0x2, 0x2, 0x93, 0x95, 0x5, 0x8, 0x5, 0x2, 
    0x94, 0x91, 0x3, 0x2, 0x2, 0x2, 0x95, 0x98, 0x3, 0x2, 0x2, 0x2, 0x96, 
    0x94, 0x3, 0x2, 0x2, 0x2, 0x96, 0x97, 0x3, 0x2, 0x2, 0x2, 0x97, 0x7, 
    0x3, 0x2, 0x2, 0x2, 0x98, 0x96, 0x3, 0x2, 0x2, 0x2, 0x99, 0xa0, 0x5, 
    0xa, 0x6, 0x2, 0x9a, 0x9b, 0x5, 0x22, 0x12, 0x2, 0x9b, 0x9c, 0x5, 0x3e, 
    0x20, 0x2, 0x9c, 0x9d, 0x5, 0x8, 0x5, 0x2, 0x9d, 0xa0, 0x3, 0x2, 0x2, 
    0x2, 0x9e, 0xa0, 0x7, 0x40, 0x2, 0x2, 0x9f, 0x99, 0x3, 0x2, 0x2, 0x2, 
    0x9f, 0x9a, 0x3, 0x2, 0x2, 0x2, 0x9f, 0x9e, 0x3, 0x2, 0x2, 0x2, 0xa0, 
    0x9, 0x3, 0x2, 0x2, 0x2, 0xa1, 0xa7, 0x5, 0xc, 0x7, 0x2, 0xa2, 0xa3, 
    0x7, 0x6, 0x2, 0x2, 0xa3, 0xa4, 0x5, 0x6, 0x4, 0x2, 0xa4, 0xa5, 0x7, 
    0x7, 0x2, 0x2, 0xa5, 0xa6, 0x5, 0xa, 0x6, 0x2, 0xa6, 0xa8, 0x3, 0x2, 
    0x2, 0x2, 0xa7, 0xa2, 0x3, 0x2, 0x2, 0x2, 0xa7, 0xa8, 0x3, 0x2, 0x2, 
    0x2, 0xa8, 0xb, 0x3, 0x2, 0x2, 0x2, 0xa9, 0xaa, 0x8, 0x7, 0x1, 0x2, 
    0xaa, 0xab, 0x5, 0xe, 0x8, 0x2, 0xab, 0xb1, 0x3, 0x2, 0x2, 0x2, 0xac, 
    0xad, 0xc, 0x3, 0x2, 0x2, 0xad, 0xae, 0x7, 0x8, 0x2, 0x2, 0xae, 0xb0, 
    0x5, 0xe, 0x8, 0x2, 0xaf, 0xac, 0x3, 0x2, 0x2, 0x2, 0xb0, 0xb3, 0x3, 
    0x2, 0x2, 0x2, 0xb1, 0xaf, 0x3, 0x2, 0x2, 0x2, 0xb1, 0xb2, 0x3, 0x2, 
    0x2, 0x2, 0xb2, 0xd, 0x3, 0x2, 0x2, 0x2, 0xb3, 0xb1, 0x3, 0x2, 0x2, 
    0x2, 0xb4, 0xb5, 0x8, 0x8, 0x1, 0x2, 0xb5, 0xb6, 0x5, 0x10, 0x9, 0x2, 
    0xb6, 0xbc, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xb8, 0xc, 0x3, 0x2, 0x2, 0xb8, 
    0xb9, 0x7, 0x9, 0x2, 0x2, 0xb9, 0xbb, 0x5, 0x10, 0x9, 0x2, 0xba, 0xb7, 
    0x3, 0x2, 0x2, 0x2, 0xbb, 0xbe, 0x3, 0x2, 0x2, 0x2, 0xbc, 0xba, 0x3, 
    0x2, 0x2, 0x2, 0xbc, 0xbd, 0x3, 0x2, 0x2, 0x2, 0xbd, 0xf, 0x3, 0x2, 
    0x2, 0x2, 0xbe, 0xbc, 0x3, 0x2, 0x2, 0x2, 0xbf, 0xc0, 0x8, 0x9, 0x1, 
    0x2, 0xc0, 0xc1, 0x5, 0x12, 0xa, 0x2, 0xc1, 0xc7, 0x3, 0x2, 0x2, 0x2, 
    0xc2, 0xc3, 0xc, 0x3, 0x2, 0x2, 0xc3, 0xc4, 0x7, 0xa, 0x2, 0x2, 0xc4, 
    0xc6, 0x5, 0x12, 0xa, 0x2, 0xc5, 0xc2, 0x3, 0x2, 0x2, 0x2, 0xc6, 0xc9, 
    0x3, 0x2, 0x2, 0x2, 0xc7, 0xc5, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xc8, 0x3, 
    0x2, 0x2, 0x2, 0xc8, 0x11, 0x3, 0x2, 0x2, 0x2, 0xc9, 0xc7, 0x3, 0x2, 
    0x2, 0x2, 0xca, 0xcb, 0x8, 0xa, 0x1, 0x2, 0xcb, 0xcc, 0x5, 0x14, 0xb, 
    0x2, 0xcc, 0xd2, 0x3, 0x2, 0x2, 0x2, 0xcd, 0xce, 0xc, 0x3, 0x2, 0x2, 
    0xce, 0xcf, 0x7, 0xb, 0x2, 0x2, 0xcf, 0xd1, 0x5, 0x14, 0xb, 0x2, 0xd0, 
    0xcd, 0x3, 0x2, 0x2, 0x2, 0xd1, 0xd4, 0x3, 0x2, 0x2, 0x2, 0xd2, 0xd0, 
    0x3, 0x2, 0x2, 0x2, 0xd2, 0xd3, 0x3, 0x2, 0x2, 0x2, 0xd3, 0x13, 0x3, 
    0x2, 0x2, 0x2, 0xd4, 0xd2, 0x3, 0x2, 0x2, 0x2, 0xd5, 0xd6, 0x8, 0xb, 
    0x1, 0x2, 0xd6, 0xd7, 0x5, 0x16, 0xc, 0x2, 0xd7, 0xdd, 0x3, 0x2, 0x2, 
    0x2, 0xd8, 0xd9, 0xc, 0x3, 0x2, 0x2, 0xd9, 0xda, 0x7, 0xc, 0x2, 0x2, 
    0xda, 0xdc, 0x5, 0x16, 0xc, 0x2, 0xdb, 0xd8, 0x3, 0x2, 0x2, 0x2, 0xdc, 
    0xdf, 0x3, 0x2, 0x2, 0x2, 0xdd, 0xdb, 0x3, 0x2, 0x2, 0x2, 0xdd, 0xde, 
    0x3, 0x2, 0x2, 0x2, 0xde, 0x15, 0x3, 0x2, 0x2, 0x2, 0xdf, 0xdd, 0x3, 
    0x2, 0x2, 0x2, 0xe0, 0xe1, 0x8, 0xc, 0x1, 0x2, 0xe1, 0xe2, 0x5, 0x18, 
    0xd, 0x2, 0xe2, 0xeb, 0x3, 0x2, 0x2, 0x2, 0xe3, 0xe4, 0xc, 0x4, 0x2, 
    0x2, 0xe4, 0xe5, 0x7, 0xd, 0x2, 0x2, 0xe5, 0xea, 0x5, 0x18, 0xd, 0x2, 
    0xe6, 0xe7, 0xc, 0x3, 0x2, 0x2, 0xe7, 0xe8, 0x7, 0xe, 0x2, 0x2, 0xe8, 
    0xea, 0x5, 0x18, 0xd, 0x2, 0xe9, 0xe3, 0x3, 0x2, 0x2, 0x2, 0xe9, 0xe6, 
    0x3, 0x2, 0x2, 0x2, 0xea, 0xed, 0x3, 0x2, 0x2, 0x2, 0xeb, 0xe9, 0x3, 
    0x2, 0x2, 0x2, 0xeb, 0xec, 0x3, 0x2, 0x2, 0x2, 0xec, 0x17, 0x3, 0x2, 
    0x2, 0x2, 0xed, 0xeb, 0x3, 0x2, 0x2, 0x2, 0xee, 0xef, 0x8, 0xd, 0x1, 
    0x2, 0xef, 0xf0, 0x5, 0x1a, 0xe, 0x2, 0xf0, 0xff, 0x3, 0x2, 0x2, 0x2, 
    0xf1, 0xf2, 0xc, 0x6, 0x2, 0x2, 0xf2, 0xf3, 0x7, 0xf, 0x2, 0x2, 0xf3, 
    0xfe, 0x5, 0x1a, 0xe, 0x2, 0xf4, 0xf5, 0xc, 0x5, 0x2, 0x2, 0xf5, 0xf6, 
    0x7, 0x10, 0x2, 0x2, 0xf6, 0xfe, 0x5, 0x1a, 0xe, 0x2, 0xf7, 0xf8, 0xc, 
    0x4, 0x2, 0x2, 0xf8, 0xf9, 0x7, 0x11, 0x2, 0x2, 0xf9, 0xfe, 0x5, 0x1a, 
    0xe, 0x2, 0xfa, 0xfb, 0xc, 0x3, 0x2, 0x2, 0xfb, 0xfc, 0x7, 0x12, 0x2, 
    0x2, 0xfc, 0xfe, 0x5, 0x1a, 0xe, 0x2, 0xfd, 0xf1, 0x3, 0x2, 0x2, 0x2, 
    0xfd, 0xf4, 0x3, 0x2, 0x2, 0x2, 0xfd, 0xf7, 0x3, 0x2, 0x2, 0x2, 0xfd, 
    0xfa, 0x3, 0x2, 0x2, 0x2, 0xfe, 0x101, 0x3, 0x2, 0x2, 0x2, 0xff, 0xfd, 
    0x3, 0x2, 0x2, 0x2, 0xff, 0x100, 0x3, 0x2, 0x2, 0x2, 0x100, 0x19, 0x3, 
    0x2, 0x2, 0x2, 0x101, 0xff, 0x3, 0x2, 0x2, 0x2, 0x102, 0x103, 0x8, 0xe, 
    0x1, 0x2, 0x103, 0x104, 0x5, 0x1c, 0xf, 0x2, 0x104, 0x10d, 0x3, 0x2, 
    0x2, 0x2, 0x105, 0x106, 0xc, 0x4, 0x2, 0x2, 0x106, 0x107, 0x7, 0x13, 
    0x2, 0x2, 0x107, 0x10c, 0x5, 0x1c, 0xf, 0x2, 0x108, 0x109, 0xc, 0x3, 
    0x2, 0x2, 0x109, 0x10a, 0x7, 0x14, 0x2, 0x2, 0x10a, 0x10c, 0x5, 0x1c, 
    0xf, 0x2, 0x10b, 0x105, 0x3, 0x2, 0x2, 0x2, 0x10b, 0x108, 0x3, 0x2, 
    0x2, 0x2, 0x10c, 0x10f, 0x3, 0x2, 0x2, 0x2, 0x10d, 0x10b, 0x3, 0x2, 
    0x2, 0x2, 0x10d, 0x10e, 0x3, 0x2, 0x2, 0x2, 0x10e, 0x1b, 0x3, 0x2, 0x2, 
    0x2, 0x10f, 0x10d, 0x3, 0x2, 0x2, 0x2, 0x110, 0x111, 0x8, 0xf, 0x1, 
    0x2, 0x111, 0x112, 0x5, 0x1e, 0x10, 0x2, 0x112, 0x11b, 0x3, 0x2, 0x2, 
    0x2, 0x113, 0x114, 0xc, 0x4, 0x2, 0x2, 0x114, 0x115, 0x7, 0x15, 0x2, 
    0x2, 0x115, 0x11a, 0x5, 0x1e, 0x10, 0x2, 0x116, 0x117, 0xc, 0x3, 0x2, 
    0x2, 0x117, 0x118, 0x7, 0x16, 0x2, 0x2, 0x118, 0x11a, 0x5, 0x1e, 0x10, 
    0x2, 0x119, 0x113, 0x3, 0x2, 0x2, 0x2, 0x119, 0x116, 0x3, 0x2, 0x2, 
    0x2, 0x11a, 0x11d, 0x3, 0x2, 0x2, 0x2, 0x11b, 0x119, 0x3, 0x2, 0x2, 
    0x2, 0x11b, 0x11c, 0x3, 0x2, 0x2, 0x2, 0x11c, 0x1d, 0x3, 0x2, 0x2, 0x2, 
    0x11d, 0x11b, 0x3, 0x2, 0x2, 0x2, 0x11e, 0x11f, 0x8, 0x10, 0x1, 0x2, 
    0x11f, 0x120, 0x5, 0x20, 0x11, 0x2, 0x120, 0x12c, 0x3, 0x2, 0x2, 0x2, 
    0x121, 0x122, 0xc, 0x5, 0x2, 0x2, 0x122, 0x123, 0x7, 0x17, 0x2, 0x2, 
    0x123, 0x12b, 0x5, 0x20, 0x11, 0x2, 0x124, 0x125, 0xc, 0x4, 0x2, 0x2, 
    0x125, 0x126, 0x7, 0x18, 0x2, 0x2, 0x126, 0x12b, 0x5, 0x20, 0x11, 0x2, 
    0x127, 0x128, 0xc, 0x3, 0x2, 0x2, 0x128, 0x129, 0x7, 0x19, 0x2, 0x2, 
    0x129, 0x12b, 0x5, 0x20, 0x11, 0x2, 0x12a, 0x121, 0x3, 0x2, 0x2, 0x2, 
    0x12a, 0x124, 0x3, 0x2, 0x2, 0x2, 0x12a, 0x127, 0x3, 0x2, 0x2, 0x2, 
    0x12b, 0x12e, 0x3, 0x2, 0x2, 0x2, 0x12c, 0x12a, 0x3, 0x2, 0x2, 0x2, 
    0x12c, 0x12d, 0x3, 0x2, 0x2, 0x2, 0x12d, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x12e, 
    0x12c, 0x3, 0x2, 0x2, 0x2, 0x12f, 0x137, 0x5, 0x22, 0x12, 0x2, 0x130, 
    0x131, 0x7, 0x3, 0x2, 0x2, 0x131, 0x132, 0x5, 0x2a, 0x16, 0x2, 0x132, 
    0x133, 0x7, 0x4, 0x2, 0x2, 0x133, 0x134, 0x5, 0x20, 0x11, 0x2, 0x134, 
    0x137, 0x3, 0x2, 0x2, 0x2, 0x135, 0x137, 0x7, 0x40, 0x2, 0x2, 0x136, 
    0x12f, 0x3, 0x2, 0x2, 0x2, 0x136, 0x130, 0x3, 0x2, 0x2, 0x2, 0x136, 
    0x135, 0x3, 0x2, 0x2, 0x2, 0x137, 0x21, 0x3, 0x2, 0x2, 0x2, 0x138, 0x141, 
    0x5, 0x24, 0x13, 0x2, 0x139, 0x13a, 0x7, 0x1a, 0x2, 0x2, 0x13a, 0x141, 
    0x5, 0x22, 0x12, 0x2, 0x13b, 0x13c, 0x7, 0x1b, 0x2, 0x2, 0x13c, 0x141, 
    0x5, 0x22, 0x12, 0x2, 0x13d, 0x13e, 0x5, 0x28, 0x15, 0x2, 0x13e, 0x13f, 
    0x5, 0x20, 0x11, 0x2, 0x13f, 0x141, 0x3, 0x2, 0x2, 0x2, 0x140, 0x138, 
    0x3, 0x2, 0x2, 0x2, 0x140, 0x139, 0x3, 0x2, 0x2, 0x2, 0x140, 0x13b, 
    0x3, 0x2, 0x2, 0x2, 0x140, 0x13d, 0x3, 0x2, 0x2, 0x2, 0x141, 0x23, 0x3, 
    0x2, 0x2, 0x2, 0x142, 0x143, 0x8, 0x13, 0x1, 0x2, 0x143, 0x154, 0x5, 
    0x2, 0x2, 0x2, 0x144, 0x145, 0x7, 0x3, 0x2, 0x2, 0x145, 0x146, 0x5, 
    0x2a, 0x16, 0x2, 0x146, 0x147, 0x7, 0x4, 0x2, 0x2, 0x147, 0x148, 0x7, 
    0x1f, 0x2, 0x2, 0x148, 0x149, 0x5, 0x32, 0x1a, 0x2, 0x149, 0x14a, 0x7, 
    0x20, 0x2, 0x2, 0x14a, 0x154, 0x3, 0x2, 0x2, 0x2, 0x14b, 0x14c, 0x7, 
    0x3, 0x2, 0x2, 0x14c, 0x14d, 0x5, 0x2a, 0x16, 0x2, 0x14d, 0x14e, 0x7, 
    0x4, 0x2, 0x2, 0x14e, 0x14f, 0x7, 0x1f, 0x2, 0x2, 0x14f, 0x150, 0x5, 
    0x32, 0x1a, 0x2, 0x150, 0x151, 0x7, 0x5, 0x2, 0x2, 0x151, 0x152, 0x7, 
    0x20, 0x2, 0x2, 0x152, 0x154, 0x3, 0x2, 0x2, 0x2, 0x153, 0x142, 0x3, 
    0x2, 0x2, 0x2, 0x153, 0x144, 0x3, 0x2, 0x2, 0x2, 0x153, 0x14b, 0x3, 
    0x2, 0x2, 0x2, 0x154, 0x169, 0x3, 0x2, 0x2, 0x2, 0x155, 0x156, 0xc, 
    0x9, 0x2, 0x2, 0x156, 0x157, 0x7, 0x1c, 0x2, 0x2, 0x157, 0x158, 0x5, 
    0x6, 0x4, 0x2, 0x158, 0x159, 0x7, 0x1d, 0x2, 0x2, 0x159, 0x168, 0x3, 
    0x2, 0x2, 0x2, 0x15a, 0x15b, 0xc, 0x8, 0x2, 0x2, 0x15b, 0x15d, 0x7, 
    0x3, 0x2, 0x2, 0x15c, 0x15e, 0x5, 0x26, 0x14, 0x2, 0x15d, 0x15c, 0x3, 
    0x2, 0x2, 0x2, 0x15d, 0x15e, 0x3, 0x2, 0x2, 0x2, 0x15e, 0x15f, 0x3, 
    0x2, 0x2, 0x2, 0x15f, 0x168, 0x7, 0x4, 0x2, 0x2, 0x160, 0x161, 0xc, 
    0x7, 0x2, 0x2, 0x161, 0x162, 0x7, 0x1e, 0x2, 0x2, 0x162, 0x168, 0x7, 
    0x3e, 0x2, 0x2, 0x163, 0x164, 0xc, 0x6, 0x2, 0x2, 0x164, 0x168, 0x7, 
    0x1a, 0x2, 0x2, 0x165, 0x166, 0xc, 0x5, 0x2, 0x2, 0x166, 0x168, 0x7, 
    0x1b, 0x2, 0x2, 0x167, 0x155, 0x3, 0x2, 0x2, 0x2, 0x167, 0x15a, 0x3, 
    0x2, 0x2, 0x2, 0x167, 0x160, 0x3, 0x2, 0x2, 0x2, 0x167, 0x163, 0x3, 
    0x2, 0x2, 0x2, 0x167, 0x165, 0x3, 0x2, 0x2, 0x2, 0x168, 0x16b, 0x3, 
    0x2, 0x2, 0x2, 0x169, 0x167, 0x3, 0x2, 0x2, 0x2, 0x169, 0x16a, 0x3, 
    0x2, 0x2, 0x2, 0x16a, 0x25, 0x3, 0x2, 0x2, 0x2, 0x16b, 0x169, 0x3, 0x2, 
    0x2, 0x2, 0x16c, 0x16d, 0x8, 0x14, 0x1, 0x2, 0x16d, 0x16e, 0x5, 0x8, 
    0x5, 0x2, 0x16e, 0x174, 0x3, 0x2, 0x2, 0x2, 0x16f, 0x170, 0xc, 0x3, 
    0x2, 0x2, 0x170, 0x171, 0x7, 0x5, 0x2, 0x2, 0x171, 0x173, 0x5, 0x8, 
    0x5, 0x2, 0x172, 0x16f, 0x3, 0x2, 0x2, 0x2, 0x173, 0x176, 0x3, 0x2, 
    0x2, 0x2, 0x174, 0x172, 0x3, 0x2, 0x2, 0x2, 0x174, 0x175, 0x3, 0x2, 
    0x2, 0x2, 0x175, 0x27, 0x3, 0x2, 0x2, 0x2, 0x176, 0x174, 0x3, 0x2, 0x2, 
    0x2, 0x177, 0x178, 0x9, 0x2, 0x2, 0x2, 0x178, 0x29, 0x3, 0x2, 0x2, 0x2, 
    0x179, 0x17a, 0x5, 0x2c, 0x17, 0x2, 0x17a, 0x2b, 0x3, 0x2, 0x2, 0x2, 
    0x17b, 0x17d, 0x5, 0x2e, 0x18, 0x2, 0x17c, 0x17e, 0x5, 0x2c, 0x17, 0x2, 
    0x17d, 0x17c, 0x3, 0x2, 0x2, 0x2, 0x17d, 0x17e, 0x3, 0x2, 0x2, 0x2, 
    0x17e, 0x184, 0x3, 0x2, 0x2, 0x2, 0x17f, 0x181, 0x5, 0x30, 0x19, 0x2, 
    0x180, 0x182, 0x5, 0x2c, 0x17, 0x2, 0x181, 0x180, 0x3, 0x2, 0x2, 0x2, 
    0x181, 0x182, 0x3, 0x2, 0x2, 0x2, 0x182, 0x184, 0x3, 0x2, 0x2, 0x2, 
    0x183, 0x17b, 0x3, 0x2, 0x2, 0x2, 0x183, 0x17f, 0x3, 0x2, 0x2, 0x2, 
    0x184, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x185, 0x186, 0x9, 0x3, 0x2, 0x2, 0x186, 
    0x2f, 0x3, 0x2, 0x2, 0x2, 0x187, 0x188, 0x7, 0x2b, 0x2, 0x2, 0x188, 
    0x31, 0x3, 0x2, 0x2, 0x2, 0x189, 0x18b, 0x8, 0x1a, 0x1, 0x2, 0x18a, 
    0x18c, 0x5, 0x34, 0x1b, 0x2, 0x18b, 0x18a, 0x3, 0x2, 0x2, 0x2, 0x18b, 
    0x18c, 0x3, 0x2, 0x2, 0x2, 0x18c, 0x18d, 0x3, 0x2, 0x2, 0x2, 0x18d, 
    0x18e, 0x5, 0x3c, 0x1f, 0x2, 0x18e, 0x197, 0x3, 0x2, 0x2, 0x2, 0x18f, 
    0x190, 0xc, 0x3, 0x2, 0x2, 0x190, 0x192, 0x7, 0x5, 0x2, 0x2, 0x191, 
    0x193, 0x5, 0x34, 0x1b, 0x2, 0x192, 0x191, 0x3, 0x2, 0x2, 0x2, 0x192, 
    0x193, 0x3, 0x2, 0x2, 0x2, 0x193, 0x194, 0x3, 0x2, 0x2, 0x2, 0x194, 
    0x196, 0x5, 0x3c, 0x1f, 0x2, 0x195, 0x18f, 0x3, 0x2, 0x2, 0x2, 0x196, 
    0x199, 0x3, 0x2, 0x2, 0x2, 0x197, 0x195, 0x3, 0x2, 0x2, 0x2, 0x197, 
    0x198, 0x3, 0x2, 0x2, 0x2, 0x198, 0x33, 0x3, 0x2, 0x2, 0x2, 0x199, 0x197, 
    0x3, 0x2, 0x2, 0x2, 0x19a, 0x19b, 0x5, 0x36, 0x1c, 0x2, 0x19b, 0x19c, 
    0x7, 0x2c, 0x2, 0x2, 0x19c, 0x35, 0x3, 0x2, 0x2, 0x2, 0x19d, 0x19e, 
    0x8, 0x1c, 0x1, 0x2, 0x19e, 0x19f, 0x5, 0x38, 0x1d, 0x2, 0x19f, 0x1a4, 
    0x3, 0x2, 0x2, 0x2, 0x1a0, 0x1a1, 0xc, 0x3, 0x2, 0x2, 0x1a1, 0x1a3, 
    0x5, 0x38, 0x1d, 0x2, 0x1a2, 0x1a0, 0x3, 0x2, 0x2, 0x2, 0x1a3, 0x1a6, 
    0x3, 0x2, 0x2, 0x2, 0x1a4, 0x1a2, 0x3, 0x2, 0x2, 0x2, 0x1a4, 0x1a5, 
    0x3, 0x2, 0x2, 0x2, 0x1a5, 0x37, 0x3, 0x2, 0x2, 0x2, 0x1a6, 0x1a4, 0x3, 
    0x2, 0x2, 0x2, 0x1a7, 0x1a8, 0x7, 0x1c, 0x2, 0x2, 0x1a8, 0x1a9, 0x5, 
    0x3a, 0x1e, 0x2, 0x1a9, 0x1aa, 0x7, 0x1d, 0x2, 0x2, 0x1aa, 0x1ae, 0x3, 
    0x2, 0x2, 0x2, 0x1ab, 0x1ac, 0x7, 0x1e, 0x2, 0x2, 0x1ac, 0x1ae, 0x7, 
    0x3e, 0x2, 0x2, 0x1ad, 0x1a7, 0x3, 0x2, 0x2, 0x2, 0x1ad, 0x1ab, 0x3, 
    0x2, 0x2, 0x2, 0x1ae, 0x39, 0x3, 0x2, 0x2, 0x2, 0x1af, 0x1b0, 0x5, 0xa, 
    0x6, 0x2, 0x1b0, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x1b1, 0x1bc, 0x5, 0x8, 0x5, 
    0x2, 0x1b2, 0x1b3, 0x7, 0x1f, 0x2, 0x2, 0x1b3, 0x1b4, 0x5, 0x32, 0x1a, 
    0x2, 0x1b4, 0x1b5, 0x7, 0x20, 0x2, 0x2, 0x1b5, 0x1bc, 0x3, 0x2, 0x2, 
    0x2, 0x1b6, 0x1b7, 0x7, 0x1f, 0x2, 0x2, 0x1b7, 0x1b8, 0x5, 0x32, 0x1a, 
    0x2, 0x1b8, 0x1b9, 0x7, 0x5, 0x2, 0x2, 0x1b9, 0x1ba, 0x7, 0x20, 0x2, 
    0x2, 0x1ba, 0x1bc, 0x3, 0x2, 0x2, 0x2, 0x1bb, 0x1b1, 0x3, 0x2, 0x2, 
    0x2, 0x1bb, 0x1b2, 0x3, 0x2, 0x2, 0x2, 0x1bb, 0x1b6, 0x3, 0x2, 0x2, 
    0x2, 0x1bc, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x1bd, 0x1be, 0x9, 0x4, 0x2, 0x2, 
    0x1be, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x1bf, 0x1c1, 0x7, 0x1f, 0x2, 0x2, 
    0x1c0, 0x1c2, 0x5, 0x42, 0x22, 0x2, 0x1c1, 0x1c0, 0x3, 0x2, 0x2, 0x2, 
    0x1c1, 0x1c2, 0x3, 0x2, 0x2, 0x2, 0x1c2, 0x1c3, 0x3, 0x2, 0x2, 0x2, 
    0x1c3, 0x1c4, 0x7, 0x20, 0x2, 0x2, 0x1c4, 0x41, 0x3, 0x2, 0x2, 0x2, 
    0x1c5, 0x1c6, 0x8, 0x22, 0x1, 0x2, 0x1c6, 0x1c7, 0x5, 0x44, 0x23, 0x2, 
    0x1c7, 0x1cc, 0x3, 0x2, 0x2, 0x2, 0x1c8, 0x1c9, 0xc, 0x3, 0x2, 0x2, 
    0x1c9, 0x1cb, 0x5, 0x44, 0x23, 0x2, 0x1ca, 0x1c8, 0x3, 0x2, 0x2, 0x2, 
    0x1cb, 0x1ce, 0x3, 0x2, 0x2, 0x2, 0x1cc, 0x1ca, 0x3, 0x2, 0x2, 0x2, 
    0x1cc, 0x1cd, 0x3, 0x2, 0x2, 0x2, 0x1cd, 0x43, 0x3, 0x2, 0x2, 0x2, 0x1ce, 
    0x1cc, 0x3, 0x2, 0x2, 0x2, 0x1cf, 0x1d2, 0x5, 0x46, 0x24, 0x2, 0x1d0, 
    0x1d2, 0x5, 0x48, 0x25, 0x2, 0x1d1, 0x1cf, 0x3, 0x2, 0x2, 0x2, 0x1d1, 
    0x1d0, 0x3, 0x2, 0x2, 0x2, 0x1d2, 0x45, 0x3, 0x2, 0x2, 0x2, 0x1d3, 0x1d4, 
    0x5, 0x4a, 0x26, 0x2, 0x1d4, 0x1d5, 0x5, 0x50, 0x29, 0x2, 0x1d5, 0x1d6, 
    0x7, 0x37, 0x2, 0x2, 0x1d6, 0x47, 0x3, 0x2, 0x2, 0x2, 0x1d7, 0x1dd, 
    0x5, 0x5a, 0x2e, 0x2, 0x1d8, 0x1dd, 0x5, 0x40, 0x21, 0x2, 0x1d9, 0x1dd, 
    0x5, 0x5c, 0x2f, 0x2, 0x1da, 0x1dd, 0x5, 0x5e, 0x30, 0x2, 0x1db, 0x1dd, 
    0x5, 0x60, 0x31, 0x2, 0x1dc, 0x1d7, 0x3, 0x2, 0x2, 0x2, 0x1dc, 0x1d8, 
    0x3, 0x2, 0x2, 0x2, 0x1dc, 0x1d9, 0x3, 0x2, 0x2, 0x2, 0x1dc, 0x1da, 
    0x3, 0x2, 0x2, 0x2, 0x1dc, 0x1db, 0x3, 0x2, 0x2, 0x2, 0x1dd, 0x49, 0x3, 
    0x2, 0x2, 0x2, 0x1de, 0x1e0, 0x5, 0x4c, 0x27, 0x2, 0x1df, 0x1de, 0x3, 
    0x2, 0x2, 0x2, 0x1e0, 0x1e1, 0x3, 0x2, 0x2, 0x2, 0x1e1, 0x1df, 0x3, 
    0x2, 0x2, 0x2, 0x1e1, 0x1e2, 0x3, 0x2, 0x2, 0x2, 0x1e2, 0x4b, 0x3, 0x2, 
    0x2, 0x2, 0x1e3, 0x1e7, 0x5, 0x4e, 0x28, 0x2, 0x1e4, 0x1e7, 0x5, 0x2e, 
    0x18, 0x2, 0x1e5, 0x1e7, 0x5, 0x30, 0x19, 0x2, 0x1e6, 0x1e3, 0x3, 0x2, 
    0x2, 0x2, 0x1e6, 0x1e4, 0x3, 0x2, 0x2, 0x2, 0x1e6, 0x1e5, 0x3, 0x2, 
    0x2, 0x2, 0x1e7, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x1e8, 0x1e9, 0x9, 0x5, 0x2, 
    0x2, 0x1e9, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x1ea, 0x1eb, 0x8, 0x29, 0x1, 
    0x2, 0x1eb, 0x1ec, 0x5, 0x52, 0x2a, 0x2, 0x1ec, 0x1f2, 0x3, 0x2, 0x2, 
    0x2, 0x1ed, 0x1ee, 0xc, 0x3, 0x2, 0x2, 0x1ee, 0x1ef, 0x7, 0x5, 0x2, 
    0x2, 0x1ef, 0x1f1, 0x5, 0x52, 0x2a, 0x2, 0x1f0, 0x1ed, 0x3, 0x2, 0x2, 
    0x2, 0x1f1, 0x1f4, 0x3, 0x2, 0x2, 0x2, 0x1f2, 0x1f0, 0x3, 0x2, 0x2, 
    0x2, 0x1f2, 0x1f3, 0x3, 0x2, 0x2, 0x2, 0x1f3, 0x51, 0x3, 0x2, 0x2, 0x2, 
    0x1f4, 0x1f2, 0x3, 0x2, 0x2, 0x2, 0x1f5, 0x1fb, 0x5, 0x54, 0x2b, 0x2, 
    0x1f6, 0x1f7, 0x5, 0x54, 0x2b, 0x2, 0x1f7, 0x1f8, 0x7, 0x2c, 0x2, 0x2, 
    0x1f8, 0x1f9, 0x5, 0x3c, 0x1f, 0x2, 0x1f9, 0x1fb, 0x3, 0x2, 0x2, 0x2, 
    0x1fa, 0x1f5, 0x3, 0x2, 0x2, 0x2, 0x1fa, 0x1f6, 0x3, 0x2, 0x2, 0x2, 
    0x1fb, 0x53, 0x3, 0x2, 0x2, 0x2, 0x1fc, 0x1fd, 0x5, 0x56, 0x2c, 0x2, 
    0x1fd, 0x55, 0x3, 0x2, 0x2, 0x2, 0x1fe, 0x1ff, 0x8, 0x2c, 0x1, 0x2, 
    0x1ff, 0x205, 0x7, 0x3e, 0x2, 0x2, 0x200, 0x201, 0x7, 0x3, 0x2, 0x2, 
    0x201, 0x202, 0x5, 0x54, 0x2b, 0x2, 0x202, 0x203, 0x7, 0x4, 0x2, 0x2, 
    0x203, 0x205, 0x3, 0x2, 0x2, 0x2, 0x204, 0x1fe, 0x3, 0x2, 0x2, 0x2, 
    0x204, 0x200, 0x3, 0x2, 0x2, 0x2, 0x205, 0x217, 0x3, 0x2, 0x2, 0x2, 
    0x206, 0x207, 0xc, 0x4, 0x2, 0x2, 0x207, 0x209, 0x7, 0x1c, 0x2, 0x2, 
    0x208, 0x20a, 0x5, 0x58, 0x2d, 0x2, 0x209, 0x208, 0x3, 0x2, 0x2, 0x2, 
    0x209, 0x20a, 0x3, 0x2, 0x2, 0x2, 0x20a, 0x20c, 0x3, 0x2, 0x2, 0x2, 
    0x20b, 0x20d, 0x5, 0x8, 0x5, 0x2, 0x20c, 0x20b, 0x3, 0x2, 0x2, 0x2, 
    0x20c, 0x20d, 0x3, 0x2, 0x2, 0x2, 0x20d, 0x20e, 0x3, 0x2, 0x2, 0x2, 
    0x20e, 0x216, 0x7, 0x1d, 0x2, 0x2, 0x20f, 0x210, 0xc, 0x3, 0x2, 0x2, 
    0x210, 0x212, 0x7, 0x3, 0x2, 0x2, 0x211, 0x213, 0x5, 0x4, 0x3, 0x2, 
    0x212, 0x211, 0x3, 0x2, 0x2, 0x2, 0x212, 0x213, 0x3, 0x2, 0x2, 0x2, 
    0x213, 0x214, 0x3, 0x2, 0x2, 0x2, 0x214, 0x216, 0x7, 0x4, 0x2, 0x2, 
    0x215, 0x206, 0x3, 0x2, 0x2, 0x2, 0x215, 0x20f, 0x3, 0x2, 0x2, 0x2, 
    0x216, 0x219, 0x3, 0x2, 0x2, 0x2, 0x217, 0x215, 0x3, 0x2, 0x2, 0x2, 
    0x217, 0x218, 0x3, 0x2, 0x2, 0x2, 0x218, 0x57, 0x3, 0x2, 0x2, 0x2, 0x219, 
    0x217, 0x3, 0x2, 0x2, 0x2, 0x21a, 0x21b, 0x8, 0x2d, 0x1, 0x2, 0x21b, 
    0x21c, 0x5, 0x30, 0x19, 0x2, 0x21c, 0x221, 0x3, 0x2, 0x2, 0x2, 0x21d, 
    0x21e, 0xc, 0x3, 0x2, 0x2, 0x21e, 0x220, 0x5, 0x30, 0x19, 0x2, 0x21f, 
    0x21d, 0x3, 0x2, 0x2, 0x2, 0x220, 0x223, 0x3, 0x2, 0x2, 0x2, 0x221, 
    0x21f, 0x3, 0x2, 0x2, 0x2, 0x221, 0x222, 0x3, 0x2, 0x2, 0x2, 0x222, 
    0x59, 0x3, 0x2, 0x2, 0x2, 0x223, 0x221, 0x3, 0x2, 0x2, 0x2, 0x224, 0x225, 
    0x7, 0x3e, 0x2, 0x2, 0x225, 0x226, 0x7, 0x7, 0x2, 0x2, 0x226, 0x230, 
    0x5, 0x48, 0x25, 0x2, 0x227, 0x228, 0x7, 0x3a, 0x2, 0x2, 0x228, 0x229, 
    0x5, 0x3a, 0x1e, 0x2, 0x229, 0x22a, 0x7, 0x7, 0x2, 0x2, 0x22a, 0x22b, 
    0x5, 0x48, 0x25, 0x2, 0x22b, 0x230, 0x3, 0x2, 0x2, 0x2, 0x22c, 0x22d, 
    0x7, 0x3b, 0x2, 0x2, 0x22d, 0x22e, 0x7, 0x7, 0x2, 0x2, 0x22e, 0x230, 
    0x5, 0x48, 0x25, 0x2, 0x22f, 0x224, 0x3, 0x2, 0x2, 0x2, 0x22f, 0x227, 
    0x3, 0x2, 0x2, 0x2, 0x22f, 0x22c, 0x3, 0x2, 0x2, 0x2, 0x230, 0x5b, 0x3, 
    0x2, 0x2, 0x2, 0x231, 0x233, 0x5, 0x6, 0x4, 0x2, 0x232, 0x231, 0x3, 
    0x2, 0x2, 0x2, 0x232, 0x233, 0x3, 0x2, 0x2, 0x2, 0x233, 0x234, 0x3, 
    0x2, 0x2, 0x2, 0x234, 0x235, 0x7, 0x37, 0x2, 0x2, 0x235, 0x5d, 0x3, 
    0x2, 0x2, 0x2, 0x236, 0x237, 0x7, 0x43, 0x2, 0x2, 0x237, 0x238, 0x7, 
    0x3, 0x2, 0x2, 0x238, 0x239, 0x5, 0x6, 0x4, 0x2, 0x239, 0x23a, 0x7, 
    0x4, 0x2, 0x2, 0x23a, 0x23d, 0x5, 0x48, 0x25, 0x2, 0x23b, 0x23c, 0x7, 
    0x3c, 0x2, 0x2, 0x23c, 0x23e, 0x5, 0x48, 0x25, 0x2, 0x23d, 0x23b, 0x3, 
    0x2, 0x2, 0x2, 0x23d, 0x23e, 0x3, 0x2, 0x2, 0x2, 0x23e, 0x246, 0x3, 
    0x2, 0x2, 0x2, 0x23f, 0x240, 0x7, 0x3d, 0x2, 0x2, 0x240, 0x241, 0x7, 
    0x3, 0x2, 0x2, 0x241, 0x242, 0x5, 0x6, 0x4, 0x2, 0x242, 0x243, 0x7, 
    0x4, 0x2, 0x2, 0x243, 0x244, 0x5, 0x48, 0x25, 0x2, 0x244, 0x246, 0x3, 
    0x2, 0x2, 0x2, 0x245, 0x236, 0x3, 0x2, 0x2, 0x2, 0x245, 0x23f, 0x3, 
    0x2, 0x2, 0x2, 0x246, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x247, 0x248, 0x7, 0x42, 
    0x2, 0x2, 0x248, 0x249, 0x7, 0x3, 0x2, 0x2, 0x249, 0x24a, 0x5, 0x6, 
    0x4, 0x2, 0x24a, 0x24b, 0x7, 0x4, 0x2, 0x2, 0x24b, 0x24c, 0x5, 0x48, 
    0x25, 0x2, 0x24c, 0x25c, 0x3, 0x2, 0x2, 0x2, 0x24d, 0x24e, 0x7, 0x44, 
    0x2, 0x2, 0x24e, 0x24f, 0x5, 0x48, 0x25, 0x2, 0x24f, 0x250, 0x7, 0x42, 
    0x2, 0x2, 0x250, 0x251, 0x7, 0x3, 0x2, 0x2, 0x251, 0x252, 0x5, 0x6, 
    0x4, 0x2, 0x252, 0x253, 0x7, 0x4, 0x2, 0x2, 0x253, 0x254, 0x7, 0x37, 
    0x2, 0x2, 0x254, 0x25c, 0x3, 0x2, 0x2, 0x2, 0x255, 0x256, 0x7, 0x45, 
    0x2, 0x2, 0x256, 0x257, 0x7, 0x3, 0x2, 0x2, 0x257, 0x258, 0x5, 0x62, 
    0x32, 0x2, 0x258, 0x259, 0x7, 0x4, 0x2, 0x2, 0x259, 0x25a, 0x5, 0x48, 
    0x25, 0x2, 0x25a, 0x25c, 0x3, 0x2, 0x2, 0x2, 0x25b, 0x247, 0x3, 0x2, 
    0x2, 0x2, 0x25b, 0x24d, 0x3, 0x2, 0x2, 0x2, 0x25b, 0x255, 0x3, 0x2, 
    0x2, 0x2, 0x25c, 0x61, 0x3, 0x2, 0x2, 0x2, 0x25d, 0x25e, 0x5, 0x64, 
    0x33, 0x2, 0x25e, 0x260, 0x7, 0x37, 0x2, 0x2, 0x25f, 0x261, 0x5, 0x66, 
    0x34, 0x2, 0x260, 0x25f, 0x3, 0x2, 0x2, 0x2, 0x260, 0x261, 0x3, 0x2, 
    0x2, 0x2, 0x261, 0x262, 0x3, 0x2, 0x2, 0x2, 0x262, 0x264, 0x7, 0x37, 
    0x2, 0x2, 0x263, 0x265, 0x5, 0x66, 0x34, 0x2, 0x264, 0x263, 0x3, 0x2, 
    0x2, 0x2, 0x264, 0x265, 0x3, 0x2, 0x2, 0x2, 0x265, 0x272, 0x3, 0x2, 
    0x2, 0x2, 0x266, 0x268, 0x5, 0x6, 0x4, 0x2, 0x267, 0x266, 0x3, 0x2, 
    0x2, 0x2, 0x267, 0x268, 0x3, 0x2, 0x2, 0x2, 0x268, 0x269, 0x3, 0x2, 
    0x2, 0x2, 0x269, 0x26b, 0x7, 0x37, 0x2, 0x2, 0x26a, 0x26c, 0x5, 0x66, 
    0x34, 0x2, 0x26b, 0x26a, 0x3, 0x2, 0x2, 0x2, 0x26b, 0x26c, 0x3, 0x2, 
    0x2, 0x2, 0x26c, 0x26d, 0x3, 0x2, 0x2, 0x2, 0x26d, 0x26f, 0x7, 0x37, 
    0x2, 0x2, 0x26e, 0x270, 0x5, 0x66, 0x34, 0x2, 0x26f, 0x26e, 0x3, 0x2, 
    0x2, 0x2, 0x26f, 0x270, 0x3, 0x2, 0x2, 0x2, 0x270, 0x272, 0x3, 0x2, 
    0x2, 0x2, 0x271, 0x25d, 0x3, 0x2, 0x2, 0x2, 0x271, 0x267, 0x3, 0x2, 
    0x2, 0x2, 0x272, 0x63, 0x3, 0x2, 0x2, 0x2, 0x273, 0x274, 0x5, 0x4a, 
    0x26, 0x2, 0x274, 0x275, 0x5, 0x50, 0x29, 0x2, 0x275, 0x278, 0x3, 0x2, 
    0x2, 0x2, 0x276, 0x278, 0x5, 0x4a, 0x26, 0x2, 0x277, 0x273, 0x3, 0x2, 
    0x2, 0x2, 0x277, 0x276, 0x3, 0x2, 0x2, 0x2, 0x278, 0x65, 0x3, 0x2, 0x2, 
    0x2, 0x279, 0x27a, 0x8, 0x34, 0x1, 0x2, 0x27a, 0x27b, 0x5, 0x8, 0x5, 
    0x2, 0x27b, 0x281, 0x3, 0x2, 0x2, 0x2, 0x27c, 0x27d, 0xc, 0x3, 0x2, 
    0x2, 0x27d, 0x27e, 0x7, 0x5, 0x2, 0x2, 0x27e, 0x280, 0x5, 0x8, 0x5, 
    0x2, 0x27f, 0x27c, 0x3, 0x2, 0x2, 0x2, 0x280, 0x283, 0x3, 0x2, 0x2, 
    0x2, 0x281, 0x27f, 0x3, 0x2, 0x2, 0x2, 0x281, 0x282, 0x3, 0x2, 0x2, 
    0x2, 0x282, 0x67, 0x3, 0x2, 0x2, 0x2, 0x283, 0x281, 0x3, 0x2, 0x2, 0x2, 
    0x284, 0x286, 0x5, 0x4a, 0x26, 0x2, 0x285, 0x284, 0x3, 0x2, 0x2, 0x2, 
    0x285, 0x286, 0x3, 0x2, 0x2, 0x2, 0x286, 0x287, 0x3, 0x2, 0x2, 0x2, 
    0x287, 0x289, 0x5, 0x54, 0x2b, 0x2, 0x288, 0x28a, 0x5, 0x6a, 0x36, 0x2, 
    0x289, 0x288, 0x3, 0x2, 0x2, 0x2, 0x289, 0x28a, 0x3, 0x2, 0x2, 0x2, 
    0x28a, 0x28b, 0x3, 0x2, 0x2, 0x2, 0x28b, 0x28c, 0x5, 0x40, 0x21, 0x2, 
    0x28c, 0x69, 0x3, 0x2, 0x2, 0x2, 0x28d, 0x28e, 0x8, 0x36, 0x1, 0x2, 
    0x28e, 0x28f, 0x5, 0x46, 0x24, 0x2, 0x28f, 0x294, 0x3, 0x2, 0x2, 0x2, 
    0x290, 0x291, 0xc, 0x3, 0x2, 0x2, 0x291, 0x293, 0x5, 0x46, 0x24, 0x2, 
    0x292, 0x290, 0x3, 0x2, 0x2, 0x2, 0x293, 0x296, 0x3, 0x2, 0x2, 0x2, 
    0x294, 0x292, 0x3, 0x2, 0x2, 0x2, 0x294, 0x295, 0x3, 0x2, 0x2, 0x2, 
    0x295, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x296, 0x294, 0x3, 0x2, 0x2, 0x2, 0x297, 
    0x29b, 0x5, 0x68, 0x35, 0x2, 0x298, 0x29b, 0x5, 0x46, 0x24, 0x2, 0x299, 
    0x29b, 0x7, 0x37, 0x2, 0x2, 0x29a, 0x297, 0x3, 0x2, 0x2, 0x2, 0x29a, 
    0x298, 0x3, 0x2, 0x2, 0x2, 0x29a, 0x299, 0x3, 0x2, 0x2, 0x2, 0x29b, 
    0x6d, 0x3, 0x2, 0x2, 0x2, 0x29c, 0x29d, 0x8, 0x38, 0x1, 0x2, 0x29d, 
    0x29e, 0x5, 0x6c, 0x37, 0x2, 0x29e, 0x2a3, 0x3, 0x2, 0x2, 0x2, 0x29f, 
    0x2a0, 0xc, 0x3, 0x2, 0x2, 0x2a0, 0x2a2, 0x5, 0x6c, 0x37, 0x2, 0x2a1, 
    0x29f, 0x3, 0x2, 0x2, 0x2, 0x2a2, 0x2a5, 0x3, 0x2, 0x2, 0x2, 0x2a3, 
    0x2a1, 0x3, 0x2, 0x2, 0x2, 0x2a3, 0x2a4, 0x3, 0x2, 0x2, 0x2, 0x2a4, 
    0x6f, 0x3, 0x2, 0x2, 0x2, 0x2a5, 0x2a3, 0x3, 0x2, 0x2, 0x2, 0x2a6, 0x2a8, 
    0x5, 0x6e, 0x38, 0x2, 0x2a7, 0x2a6, 0x3, 0x2, 0x2, 0x2, 0x2a7, 0x2a8, 
    0x3, 0x2, 0x2, 0x2, 0x2a8, 0x2a9, 0x3, 0x2, 0x2, 0x2, 0x2a9, 0x2aa, 
    0x7, 0x2, 0x2, 0x3, 0x2aa, 0x71, 0x3, 0x2, 0x2, 0x2, 0x49, 0x77, 0x81, 
    0x8b, 0x96, 0x9f, 0xa7, 0xb1, 0xbc, 0xc7, 0xd2, 0xdd, 0xe9, 0xeb, 0xfd, 
    0xff, 0x10b, 0x10d, 0x119, 0x11b, 0x12a, 0x12c, 0x136, 0x140, 0x153, 
    0x15d, 0x167, 0x169, 0x174, 0x17d, 0x181, 0x183, 0x18b, 0x192, 0x197, 
    0x1a4, 0x1ad, 0x1bb, 0x1c1, 0x1cc, 0x1d1, 0x1dc, 0x1e1, 0x1e6, 0x1f2, 
    0x1fa, 0x204, 0x209, 0x20c, 0x212, 0x215, 0x217, 0x221, 0x22f, 0x232, 
    0x23d, 0x245, 0x25b, 0x260, 0x264, 0x267, 0x26b, 0x26f, 0x271, 0x277, 
    0x281, 0x285, 0x289, 0x294, 0x29a, 0x2a3, 0x2a7, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

DZGParser::Initializer DZGParser::_init;
