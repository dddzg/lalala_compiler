
// Generated from DZG.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"
#include "DZGParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by DZGParser.
 */
class  DZGVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by DZGParser.
   */
    virtual antlrcpp::Any visitPrimaryExpression(DZGParser::PrimaryExpressionContext *context) = 0;

    virtual antlrcpp::Any visitIdentifierList(DZGParser::IdentifierListContext *context) = 0;

    virtual antlrcpp::Any visitExpression(DZGParser::ExpressionContext *context) = 0;

    virtual antlrcpp::Any visitAssignmentExpression(DZGParser::AssignmentExpressionContext *context) = 0;

    virtual antlrcpp::Any visitConditionalExpression(DZGParser::ConditionalExpressionContext *context) = 0;

    virtual antlrcpp::Any visitLogicalOrExpression(DZGParser::LogicalOrExpressionContext *context) = 0;

    virtual antlrcpp::Any visitLogicalAndExpression(DZGParser::LogicalAndExpressionContext *context) = 0;

    virtual antlrcpp::Any visitInclusiveOrExpression(DZGParser::InclusiveOrExpressionContext *context) = 0;

    virtual antlrcpp::Any visitExclusiveOrExpression(DZGParser::ExclusiveOrExpressionContext *context) = 0;

    virtual antlrcpp::Any visitAndExpression(DZGParser::AndExpressionContext *context) = 0;

    virtual antlrcpp::Any visitEqualityExpression(DZGParser::EqualityExpressionContext *context) = 0;

    virtual antlrcpp::Any visitRelationalExpression(DZGParser::RelationalExpressionContext *context) = 0;

    virtual antlrcpp::Any visitShiftExpression(DZGParser::ShiftExpressionContext *context) = 0;

    virtual antlrcpp::Any visitAdditiveExpression(DZGParser::AdditiveExpressionContext *context) = 0;

    virtual antlrcpp::Any visitMultiplicativeExpression(DZGParser::MultiplicativeExpressionContext *context) = 0;

    virtual antlrcpp::Any visitCastExpression(DZGParser::CastExpressionContext *context) = 0;

    virtual antlrcpp::Any visitUnaryExpression(DZGParser::UnaryExpressionContext *context) = 0;

    virtual antlrcpp::Any visitPostfixExpression(DZGParser::PostfixExpressionContext *context) = 0;

    virtual antlrcpp::Any visitArgumentExpressionList(DZGParser::ArgumentExpressionListContext *context) = 0;

    virtual antlrcpp::Any visitUnaryOperator(DZGParser::UnaryOperatorContext *context) = 0;

    virtual antlrcpp::Any visitTypeName(DZGParser::TypeNameContext *context) = 0;

    virtual antlrcpp::Any visitSpecifierQualifierList(DZGParser::SpecifierQualifierListContext *context) = 0;

    virtual antlrcpp::Any visitTypeSpecifier(DZGParser::TypeSpecifierContext *context) = 0;

    virtual antlrcpp::Any visitTypeQualifier(DZGParser::TypeQualifierContext *context) = 0;

    virtual antlrcpp::Any visitInitializerList(DZGParser::InitializerListContext *context) = 0;

    virtual antlrcpp::Any visitDesignation(DZGParser::DesignationContext *context) = 0;

    virtual antlrcpp::Any visitDesignatorList(DZGParser::DesignatorListContext *context) = 0;

    virtual antlrcpp::Any visitDesignator(DZGParser::DesignatorContext *context) = 0;

    virtual antlrcpp::Any visitConstantExpression(DZGParser::ConstantExpressionContext *context) = 0;

    virtual antlrcpp::Any visitInitializer(DZGParser::InitializerContext *context) = 0;

    virtual antlrcpp::Any visitAssignmentOperator(DZGParser::AssignmentOperatorContext *context) = 0;

    virtual antlrcpp::Any visitCompoundStatement(DZGParser::CompoundStatementContext *context) = 0;

    virtual antlrcpp::Any visitBlockItemList(DZGParser::BlockItemListContext *context) = 0;

    virtual antlrcpp::Any visitBlockItem(DZGParser::BlockItemContext *context) = 0;

    virtual antlrcpp::Any visitDeclaration(DZGParser::DeclarationContext *context) = 0;

    virtual antlrcpp::Any visitStatement(DZGParser::StatementContext *context) = 0;

    virtual antlrcpp::Any visitDeclarationSpecifiers(DZGParser::DeclarationSpecifiersContext *context) = 0;

    virtual antlrcpp::Any visitDeclarationSpecifier(DZGParser::DeclarationSpecifierContext *context) = 0;

    virtual antlrcpp::Any visitStorageClassSpecifier(DZGParser::StorageClassSpecifierContext *context) = 0;

    virtual antlrcpp::Any visitInitDeclaratorList(DZGParser::InitDeclaratorListContext *context) = 0;

    virtual antlrcpp::Any visitInitDeclarator(DZGParser::InitDeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitDeclarator(DZGParser::DeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitDirectDeclarator(DZGParser::DirectDeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitTypeQualifierList(DZGParser::TypeQualifierListContext *context) = 0;

    virtual antlrcpp::Any visitLabeledStatement(DZGParser::LabeledStatementContext *context) = 0;

    virtual antlrcpp::Any visitExpressionStatement(DZGParser::ExpressionStatementContext *context) = 0;

    virtual antlrcpp::Any visitSelectionStatement(DZGParser::SelectionStatementContext *context) = 0;

    virtual antlrcpp::Any visitIterationStatement(DZGParser::IterationStatementContext *context) = 0;

    virtual antlrcpp::Any visitForCondition(DZGParser::ForConditionContext *context) = 0;

    virtual antlrcpp::Any visitForDeclaration(DZGParser::ForDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitForExpression(DZGParser::ForExpressionContext *context) = 0;

    virtual antlrcpp::Any visitFunctionDefinition(DZGParser::FunctionDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitDeclarationList(DZGParser::DeclarationListContext *context) = 0;

    virtual antlrcpp::Any visitExternalDeclaration(DZGParser::ExternalDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitTranslationUnit(DZGParser::TranslationUnitContext *context) = 0;

    virtual antlrcpp::Any visitCompilationUnit(DZGParser::CompilationUnitContext *context) = 0;


};

