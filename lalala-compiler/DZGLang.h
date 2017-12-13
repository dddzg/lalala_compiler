#pragma once
#include "BaseInclude.h"
#include "DZGLangListener.h"
#include "DZGLangVisitor.h"
#include "DZGLangScope.h"
#include "DZGLangFunction.h"
class DZGLang {
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

	DZGLangScope* globalScope;
	DZGLangScope* nowScope;
	string nowFunctionName;
	map<string, DZGLangFunction*> functionMap;
	void parseByVisitor();
	void parseByListener();
	void addFunction(string name, DZGParser::FunctionDefinitionContext * ctx, DZGLangScope* scope = nullptr);
private:
	DZGLang();
	~DZGLang();
};