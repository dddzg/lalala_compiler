#include "DZGLangBaseContent.h"

DZGLangBaseContent::DZGLangBaseContent()
{
	this->globalScope = new DZGLangScope();
	this->nowScope = this->globalScope;
}

DZGLangBaseContent::~DZGLangBaseContent()
{
	delete this->nowScope;
	if (this->globalScope) {
		delete this->globalScope;
	}
}
