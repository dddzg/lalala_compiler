#pragma once
#include "BaseInclude.h"
#include "llvm/IR/Constants.h"
#include "LLVMModule.h"
#include "llvm/IR/Type.h"
#include "llvm/ADT/APFloat.h"
#include <cstdio>
#include <cstdlib>
using namespace llvm;
using namespace std;
class DZGLangVisitor : public DZGBaseVisitor {
public:
	LLVMModule* llvmModule;
	virtual antlrcpp::Any visitPrimaryExpression(DZGParser::PrimaryExpressionContext *ctx) override;
	virtual antlrcpp::Any visitFunctionDefinition(DZGParser::FunctionDefinitionContext *ctx) override;
	virtual antlrcpp::Any visitConstantExpression(DZGParser::ConstantExpressionContext *ctx) override;
	virtual antlrcpp::Any visitCompilationUnit(DZGParser::CompilationUnitContext *ctx) override;
	DZGLangVisitor();
	~DZGLangVisitor();
};