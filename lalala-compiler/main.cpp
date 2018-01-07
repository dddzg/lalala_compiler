#include "DZGLang.h"
#include <map>
using namespace std;

int main(int argc, const char* argv[]) {
	auto dzgLang = DZGLang::getInstance();
	dzgLang->parseByVisitor();
	return 0;
}
