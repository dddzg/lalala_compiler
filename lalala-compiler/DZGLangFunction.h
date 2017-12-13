#pragma once
#include "BaseInclude.h"
#include "DZGLangScope.h"
class DZGLangFunction {
public:
	DZGLangFunction(string name, antlr4::ParserRuleContext* ctx, DZGLangScope* scope=nullptr);
	~DZGLangFunction();
	string name;
	antlr4::ParserRuleContext* ctx;
	DZGLangScope* scope;
};