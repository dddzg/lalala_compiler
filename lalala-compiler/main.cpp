#include <iostream>

#include "antlr4-runtime.h"
#include "./antlr/DZGLexer.h"
#include "./antlr/DZGParser.h"
#include "./antlr/DZGBaseListener.h"
#include "./antlr/DZGBaseVisitor.h"

#pragma execution_character_set("utf-8")

using namespace std;
using namespace antlr4;

class TreeShapeListener : public DZGBaseListener {
public:
};

class MyDZGVisitor : public DZGBaseVisitor {
public:
	virtual antlrcpp::Any visitPrimaryExpression(DZGParser::PrimaryExpressionContext *ctx) override {
		cout << ctx->getText() << endl;
		return visitChildren(ctx);
	}
};
int main(int argc, const char* argv[]) {
	ANTLRInputStream input("int main(){int a=(1+2+3+65);}");
	DZGLexer lexer(&input);
	CommonTokenStream tokens(&lexer);
	DZGParser parser(&tokens);
	tree::ParseTree *tree = parser.compilationUnit();

	auto myVisitor = new MyDZGVisitor();
	myVisitor->visit(tree);
	//TreeShapeListener listener;
	//tree::ParseTreeWalker::DEFAULT.walk(&listener, tree);

	return 0;
}