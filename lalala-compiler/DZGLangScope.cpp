#include "DZGLangScope.h"

DZGLangScope::DZGLangScope()
{
	this->parent = nullptr;
}
DZGLangScope::~DZGLangScope() {
	delete this->parent;
}