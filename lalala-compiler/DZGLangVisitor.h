#pragma once
#include "BaseInclude.h"
#include <cstdio>
#include <cstdlib>
using namespace std;
class DZGLangVisitor : public DZGBaseVisitor {
public:
	virtual antlrcpp::Any visitPrimaryExpression(DZGParser::PrimaryExpressionContext *ctx) override;
	virtual antlrcpp::Any visitFunctionDefinition(DZGParser::FunctionDefinitionContext *ctx) override;
	virtual antlrcpp::Any visitConstantExpression(DZGParser::ConstantExpressionContext *ctx) override;
	virtual antlrcpp::Any visitCompilationUnit(DZGParser::CompilationUnitContext *ctx) override;
	virtual antlrcpp::Any visitDeclaration(DZGParser::DeclarationContext *ctx) override;
	virtual antlrcpp::Any visitInitDeclarator(DZGParser::InitDeclaratorContext *ctx) override;
	DZGLangVisitor(); 
	~DZGLangVisitor();
};