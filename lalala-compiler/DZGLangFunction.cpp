#include "DZGLangFunction.h"

DZGLangFunction::DZGLangFunction(string name, antlr4::ParserRuleContext * ctx, DZGLangScope * scope)
{
	this->name = name;
	this->ctx = ctx;
	this->scope = scope;
}

DZGLangFunction::~DZGLangFunction()
{
	delete this->ctx;
	delete this->scope;
}
