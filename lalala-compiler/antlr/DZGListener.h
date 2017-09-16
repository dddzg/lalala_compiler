
// Generated from DZG.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"
#include "DZGParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by DZGParser.
 */
class  DZGListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterPrimaryExpression(DZGParser::PrimaryExpressionContext *ctx) = 0;
  virtual void exitPrimaryExpression(DZGParser::PrimaryExpressionContext *ctx) = 0;

  virtual void enterIdentifierList(DZGParser::IdentifierListContext *ctx) = 0;
  virtual void exitIdentifierList(DZGParser::IdentifierListContext *ctx) = 0;

  virtual void enterExpression(DZGParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(DZGParser::ExpressionContext *ctx) = 0;

  virtual void enterAssignmentExpression(DZGParser::AssignmentExpressionContext *ctx) = 0;
  virtual void exitAssignmentExpression(DZGParser::AssignmentExpressionContext *ctx) = 0;

  virtual void enterConditionalExpression(DZGParser::ConditionalExpressionContext *ctx) = 0;
  virtual void exitConditionalExpression(DZGParser::ConditionalExpressionContext *ctx) = 0;

  virtual void enterLogicalOrExpression(DZGParser::LogicalOrExpressionContext *ctx) = 0;
  virtual void exitLogicalOrExpression(DZGParser::LogicalOrExpressionContext *ctx) = 0;

  virtual void enterLogicalAndExpression(DZGParser::LogicalAndExpressionContext *ctx) = 0;
  virtual void exitLogicalAndExpression(DZGParser::LogicalAndExpressionContext *ctx) = 0;

  virtual void enterInclusiveOrExpression(DZGParser::InclusiveOrExpressionContext *ctx) = 0;
  virtual void exitInclusiveOrExpression(DZGParser::InclusiveOrExpressionContext *ctx) = 0;

  virtual void enterExclusiveOrExpression(DZGParser::ExclusiveOrExpressionContext *ctx) = 0;
  virtual void exitExclusiveOrExpression(DZGParser::ExclusiveOrExpressionContext *ctx) = 0;

  virtual void enterAndExpression(DZGParser::AndExpressionContext *ctx) = 0;
  virtual void exitAndExpression(DZGParser::AndExpressionContext *ctx) = 0;

  virtual void enterEqualityExpression(DZGParser::EqualityExpressionContext *ctx) = 0;
  virtual void exitEqualityExpression(DZGParser::EqualityExpressionContext *ctx) = 0;

  virtual void enterRelationalExpression(DZGParser::RelationalExpressionContext *ctx) = 0;
  virtual void exitRelationalExpression(DZGParser::RelationalExpressionContext *ctx) = 0;

  virtual void enterShiftExpression(DZGParser::ShiftExpressionContext *ctx) = 0;
  virtual void exitShiftExpression(DZGParser::ShiftExpressionContext *ctx) = 0;

  virtual void enterAdditiveExpression(DZGParser::AdditiveExpressionContext *ctx) = 0;
  virtual void exitAdditiveExpression(DZGParser::AdditiveExpressionContext *ctx) = 0;

  virtual void enterMultiplicativeExpression(DZGParser::MultiplicativeExpressionContext *ctx) = 0;
  virtual void exitMultiplicativeExpression(DZGParser::MultiplicativeExpressionContext *ctx) = 0;

  virtual void enterCastExpression(DZGParser::CastExpressionContext *ctx) = 0;
  virtual void exitCastExpression(DZGParser::CastExpressionContext *ctx) = 0;

  virtual void enterUnaryExpression(DZGParser::UnaryExpressionContext *ctx) = 0;
  virtual void exitUnaryExpression(DZGParser::UnaryExpressionContext *ctx) = 0;

  virtual void enterPostfixExpression(DZGParser::PostfixExpressionContext *ctx) = 0;
  virtual void exitPostfixExpression(DZGParser::PostfixExpressionContext *ctx) = 0;

  virtual void enterArgumentExpressionList(DZGParser::ArgumentExpressionListContext *ctx) = 0;
  virtual void exitArgumentExpressionList(DZGParser::ArgumentExpressionListContext *ctx) = 0;

  virtual void enterUnaryOperator(DZGParser::UnaryOperatorContext *ctx) = 0;
  virtual void exitUnaryOperator(DZGParser::UnaryOperatorContext *ctx) = 0;

  virtual void enterTypeName(DZGParser::TypeNameContext *ctx) = 0;
  virtual void exitTypeName(DZGParser::TypeNameContext *ctx) = 0;

  virtual void enterSpecifierQualifierList(DZGParser::SpecifierQualifierListContext *ctx) = 0;
  virtual void exitSpecifierQualifierList(DZGParser::SpecifierQualifierListContext *ctx) = 0;

  virtual void enterTypeSpecifier(DZGParser::TypeSpecifierContext *ctx) = 0;
  virtual void exitTypeSpecifier(DZGParser::TypeSpecifierContext *ctx) = 0;

  virtual void enterTypeQualifier(DZGParser::TypeQualifierContext *ctx) = 0;
  virtual void exitTypeQualifier(DZGParser::TypeQualifierContext *ctx) = 0;

  virtual void enterInitializerList(DZGParser::InitializerListContext *ctx) = 0;
  virtual void exitInitializerList(DZGParser::InitializerListContext *ctx) = 0;

  virtual void enterDesignation(DZGParser::DesignationContext *ctx) = 0;
  virtual void exitDesignation(DZGParser::DesignationContext *ctx) = 0;

  virtual void enterDesignatorList(DZGParser::DesignatorListContext *ctx) = 0;
  virtual void exitDesignatorList(DZGParser::DesignatorListContext *ctx) = 0;

  virtual void enterDesignator(DZGParser::DesignatorContext *ctx) = 0;
  virtual void exitDesignator(DZGParser::DesignatorContext *ctx) = 0;

  virtual void enterConstantExpression(DZGParser::ConstantExpressionContext *ctx) = 0;
  virtual void exitConstantExpression(DZGParser::ConstantExpressionContext *ctx) = 0;

  virtual void enterInitializer(DZGParser::InitializerContext *ctx) = 0;
  virtual void exitInitializer(DZGParser::InitializerContext *ctx) = 0;

  virtual void enterAssignmentOperator(DZGParser::AssignmentOperatorContext *ctx) = 0;
  virtual void exitAssignmentOperator(DZGParser::AssignmentOperatorContext *ctx) = 0;

  virtual void enterCompoundStatement(DZGParser::CompoundStatementContext *ctx) = 0;
  virtual void exitCompoundStatement(DZGParser::CompoundStatementContext *ctx) = 0;

  virtual void enterBlockItemList(DZGParser::BlockItemListContext *ctx) = 0;
  virtual void exitBlockItemList(DZGParser::BlockItemListContext *ctx) = 0;

  virtual void enterBlockItem(DZGParser::BlockItemContext *ctx) = 0;
  virtual void exitBlockItem(DZGParser::BlockItemContext *ctx) = 0;

  virtual void enterDeclaration(DZGParser::DeclarationContext *ctx) = 0;
  virtual void exitDeclaration(DZGParser::DeclarationContext *ctx) = 0;

  virtual void enterStatement(DZGParser::StatementContext *ctx) = 0;
  virtual void exitStatement(DZGParser::StatementContext *ctx) = 0;

  virtual void enterDeclarationSpecifiers(DZGParser::DeclarationSpecifiersContext *ctx) = 0;
  virtual void exitDeclarationSpecifiers(DZGParser::DeclarationSpecifiersContext *ctx) = 0;

  virtual void enterDeclarationSpecifier(DZGParser::DeclarationSpecifierContext *ctx) = 0;
  virtual void exitDeclarationSpecifier(DZGParser::DeclarationSpecifierContext *ctx) = 0;

  virtual void enterStorageClassSpecifier(DZGParser::StorageClassSpecifierContext *ctx) = 0;
  virtual void exitStorageClassSpecifier(DZGParser::StorageClassSpecifierContext *ctx) = 0;

  virtual void enterInitDeclaratorList(DZGParser::InitDeclaratorListContext *ctx) = 0;
  virtual void exitInitDeclaratorList(DZGParser::InitDeclaratorListContext *ctx) = 0;

  virtual void enterInitDeclarator(DZGParser::InitDeclaratorContext *ctx) = 0;
  virtual void exitInitDeclarator(DZGParser::InitDeclaratorContext *ctx) = 0;

  virtual void enterDeclarator(DZGParser::DeclaratorContext *ctx) = 0;
  virtual void exitDeclarator(DZGParser::DeclaratorContext *ctx) = 0;

  virtual void enterDirectDeclarator(DZGParser::DirectDeclaratorContext *ctx) = 0;
  virtual void exitDirectDeclarator(DZGParser::DirectDeclaratorContext *ctx) = 0;

  virtual void enterTypeQualifierList(DZGParser::TypeQualifierListContext *ctx) = 0;
  virtual void exitTypeQualifierList(DZGParser::TypeQualifierListContext *ctx) = 0;

  virtual void enterLabeledStatement(DZGParser::LabeledStatementContext *ctx) = 0;
  virtual void exitLabeledStatement(DZGParser::LabeledStatementContext *ctx) = 0;

  virtual void enterExpressionStatement(DZGParser::ExpressionStatementContext *ctx) = 0;
  virtual void exitExpressionStatement(DZGParser::ExpressionStatementContext *ctx) = 0;

  virtual void enterSelectionStatement(DZGParser::SelectionStatementContext *ctx) = 0;
  virtual void exitSelectionStatement(DZGParser::SelectionStatementContext *ctx) = 0;

  virtual void enterIterationStatement(DZGParser::IterationStatementContext *ctx) = 0;
  virtual void exitIterationStatement(DZGParser::IterationStatementContext *ctx) = 0;

  virtual void enterForCondition(DZGParser::ForConditionContext *ctx) = 0;
  virtual void exitForCondition(DZGParser::ForConditionContext *ctx) = 0;

  virtual void enterForDeclaration(DZGParser::ForDeclarationContext *ctx) = 0;
  virtual void exitForDeclaration(DZGParser::ForDeclarationContext *ctx) = 0;

  virtual void enterForExpression(DZGParser::ForExpressionContext *ctx) = 0;
  virtual void exitForExpression(DZGParser::ForExpressionContext *ctx) = 0;

  virtual void enterFunctionDefinition(DZGParser::FunctionDefinitionContext *ctx) = 0;
  virtual void exitFunctionDefinition(DZGParser::FunctionDefinitionContext *ctx) = 0;

  virtual void enterDeclarationList(DZGParser::DeclarationListContext *ctx) = 0;
  virtual void exitDeclarationList(DZGParser::DeclarationListContext *ctx) = 0;

  virtual void enterExternalDeclaration(DZGParser::ExternalDeclarationContext *ctx) = 0;
  virtual void exitExternalDeclaration(DZGParser::ExternalDeclarationContext *ctx) = 0;

  virtual void enterTranslationUnit(DZGParser::TranslationUnitContext *ctx) = 0;
  virtual void exitTranslationUnit(DZGParser::TranslationUnitContext *ctx) = 0;

  virtual void enterCompilationUnit(DZGParser::CompilationUnitContext *ctx) = 0;
  virtual void exitCompilationUnit(DZGParser::CompilationUnitContext *ctx) = 0;


};

