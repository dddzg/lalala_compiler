#include "DZGLang.h"
void DZGLang::parseByVisitor()
{
	this->visitor->visit(this->tree);
}
void DZGLang::parseByListener()
{
	tree::ParseTreeWalker::DEFAULT.walk(this->listener, this->tree);
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