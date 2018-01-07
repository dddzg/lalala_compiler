#include "DZGLang.h"
void DZGLang::parseByVisitor()
{
	this->visitor->visit(this->tree);
}
void DZGLang::parseByListener()
{
	tree::ParseTreeWalker::DEFAULT.walk(this->listener, this->tree);
}
void DZGLang::addFunction(string name, DZGParser::FunctionDefinitionContext * ctx, DZGLangScope * scope)
{
	if (scope == nullptr) {
		scope = new DZGLangScope(this->globalScope);
	}
	auto function = new DZGLangFunction(name, ctx, scope);
	this->functionMap[function->name] = function;
	this->nowFunctionName = function->name;
}
DZGLangFunction * DZGLang::getNowFunction()
{
	return this->functionMap[this->nowFunctionName];
}

DZGLangScope* DZGLang::getNowScope()
{
	auto func = this->getNowFunction();
	if (func == nullptr) {
		return this->globalScope;
	}
	else {
		return func->scope;
	}
}

DZGLang::DZGLang() {
	ifstream iFile("example.dzg");
	this->input = new ANTLRInputStream(iFile);
	this->lexer = new DZGLexer(input);
	this->tokens = new CommonTokenStream(lexer);
	this->parser = new DZGParser(tokens);
	this->tree = this->parser->compilationUnit();
	this->visitor = new DZGLangVisitor();
	this->listener = new DZGLangListener(/*this->lexer ÔİÊ±²»¼Ó*/);
	this->globalScope = new DZGLangScope();
}

DZGLang::~DZGLang() {
	delete this->input;
	delete this->lexer;
	delete this->tokens;
	delete this->parser;
	delete this->tree;
	delete this->visitor;
	delete this->listener;
}