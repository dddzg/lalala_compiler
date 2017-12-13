#pragma once
#include "BaseInclude.h"
#include "DZGLangListener.h"
#include "DZGLangVisitor.h"
#include "DZGLangBaseContent.h"
class DZGLang:DZGLangBaseContent {
public:
	static DZGLang* getInstance() {
		static DZGLang* dzglang=new DZGLang();
		return dzglang;
	}
	ANTLRInputStream *input;
	DZGLexer *lexer;
	CommonTokenStream *tokens;
	DZGParser *parser;
	tree::ParseTree *tree;
	DZGLangVisitor *visitor;
	DZGLangListener *listener;
	void parseByVisitor();
	void parseByListener();
private:
	DZGLang();
	~DZGLang();
};