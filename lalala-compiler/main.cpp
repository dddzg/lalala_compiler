#include "DZGLang.h"

int main(int argc, const char* argv[]) {
	auto dzgLang = DZGLang::getInstance();
	dzgLang->parseByVisitor();
	return 0;
}