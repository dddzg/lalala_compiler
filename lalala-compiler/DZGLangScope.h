#pragma once
#include "BaseInclude.h"
class DZGLangScope {
public:
	DZGLangScope();
	~DZGLangScope();
	DZGLangScope* parent;
	map<string, tree::TerminalNode*> tokenMap;
};