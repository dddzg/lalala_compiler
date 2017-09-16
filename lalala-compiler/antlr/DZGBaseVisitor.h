
// Generated from DZG.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"
#include "DZGVisitor.h"


/**
 * This class provides an empty implementation of DZGVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  DZGBaseVisitor : public DZGVisitor {
public:

  virtual antlrcpp::Any visitPrimaryExpression(DZGParser::PrimaryExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIdentifierList(DZGParser::IdentifierListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression(DZGParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignmentExpression(DZGParser::AssignmentExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConditionalExpression(DZGParser::ConditionalExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLogicalOrExpression(DZGParser::LogicalOrExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLogicalAndExpression(DZGParser::LogicalAndExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInclusiveOrExpression(DZGParser::InclusiveOrExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExclusiveOrExpression(DZGParser::ExclusiveOrExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAndExpression(DZGParser::AndExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEqualityExpression(DZGParser::EqualityExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRelationalExpression(DZGParser::RelationalExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShiftExpression(DZGParser::ShiftExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAdditiveExpression(DZGParser::AdditiveExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMultiplicativeExpression(DZGParser::MultiplicativeExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCastExpression(DZGParser::CastExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnaryExpression(DZGParser::UnaryExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPostfixExpression(DZGParser::PostfixExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArgumentExpressionList(DZGParser::ArgumentExpressionListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnaryOperator(DZGParser::UnaryOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeName(DZGParser::TypeNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSpecifierQualifierList(DZGParser::SpecifierQualifierListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeSpecifier(DZGParser::TypeSpecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeQualifier(DZGParser::TypeQualifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInitializerList(DZGParser::InitializerListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDesignation(DZGParser::DesignationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDesignatorList(DZGParser::DesignatorListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDesignator(DZGParser::DesignatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstantExpression(DZGParser::ConstantExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInitializer(DZGParser::InitializerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignmentOperator(DZGParser::AssignmentOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCompoundStatement(DZGParser::CompoundStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlockItemList(DZGParser::BlockItemListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlockItem(DZGParser::BlockItemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclaration(DZGParser::DeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatement(DZGParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclarationSpecifiers(DZGParser::DeclarationSpecifiersContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclarationSpecifier(DZGParser::DeclarationSpecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStorageClassSpecifier(DZGParser::StorageClassSpecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInitDeclaratorList(DZGParser::InitDeclaratorListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInitDeclarator(DZGParser::InitDeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclarator(DZGParser::DeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDirectDeclarator(DZGParser::DirectDeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeQualifierList(DZGParser::TypeQualifierListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLabeledStatement(DZGParser::LabeledStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpressionStatement(DZGParser::ExpressionStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelectionStatement(DZGParser::SelectionStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIterationStatement(DZGParser::IterationStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitForCondition(DZGParser::ForConditionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitForDeclaration(DZGParser::ForDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitForExpression(DZGParser::ForExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionDefinition(DZGParser::FunctionDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclarationList(DZGParser::DeclarationListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExternalDeclaration(DZGParser::ExternalDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTranslationUnit(DZGParser::TranslationUnitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCompilationUnit(DZGParser::CompilationUnitContext *ctx) override {
    return visitChildren(ctx);
  }


};

