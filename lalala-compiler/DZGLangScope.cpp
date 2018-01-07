#include "DZGLangScope.h"

DZGLangScope::DZGLangScope(DZGLangScope * parent)
{
	this->parent = parent;
}
DZGLangScope::~DZGLangScope() {
	delete this->parent;
}

void DZGLangScope::addToken(string str, DZGParser::DeclarationSpecifiersContext* declaration, DZGParser::InitDeclaratorContext* initDec)
{
	this->tokenMap[str] = make_pair(declaration, initDec);
}
