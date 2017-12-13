#pragma once
#include "BaseInclude.h"
#include "DZGLangScope.h"
class DZGLangBaseContent {
public:
	DZGLangBaseContent();
	~DZGLangBaseContent();
	DZGLangScope* globalScope;
	DZGLangScope* nowScope;
};