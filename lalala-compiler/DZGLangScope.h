#pragma once
#include "BaseInclude.h"
class DZGLangScope {
public:
	DZGLangScope(DZGLangScope* parent=nullptr);
	~DZGLangScope();
	DZGLangScope* parent;
	map<string, pair<DZGParser::DeclarationSpecifiersContext*,DZGParser::InitDeclaratorContext*> > tokenMap;
	void addToken(string, DZGParser::DeclarationSpecifiersContext*,DZGParser::InitDeclaratorContext*);
};