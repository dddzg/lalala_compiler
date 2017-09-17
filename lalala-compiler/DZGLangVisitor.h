#pragma once
#include "BaseInclude.h"
class DZGLangVisitor : public DZGBaseVisitor {
public:
	virtual antlrcpp::Any visitPrimaryExpression(DZGParser::PrimaryExpressionContext *ctx) override {
		cout << ctx->getText() << endl;
		return visitChildren(ctx);
	}
};