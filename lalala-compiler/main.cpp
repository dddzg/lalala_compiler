#include <iostream>

#include "antlr4-runtime.h"
#include "./antlr/JSONLexer.h"
#include "./antlr/JSONParser.h"
#include "./antlr/JSONBaseListener.h"
#include "./antlr/JSONBaseVisitor.h"

#pragma execution_character_set("utf-8")

using namespace std;
using namespace antlr4;

class TreeShapeListener : public JSONBaseListener {
public:
	void enterValue(JSONParser::ValueContext * ctx) override {
		cout << ctx->getText() << endl;
		// Do something when entering the key rule.
	}
	virtual void enterPair(JSONParser::PairContext * ctx) override { 
		cout << ctx->getText() << endl;
	}
};

class MyJSONVisitor : public JSONBaseVisitor {
public:
	virtual antlrcpp::Any visitValue(JSONParser::ValueContext *ctx) override {
		cout << ctx->getText() << endl;
		return visitChildren(ctx);
	}
};
int main(int argc, const char* argv[]) {
	ANTLRInputStream input("{\"a\":1}");
	JSONLexer lexer(&input);
	CommonTokenStream tokens(&lexer);
	JSONParser parser(&tokens);
	tree::ParseTree *tree = parser.json();

	auto myVisitor = new MyJSONVisitor();
	myVisitor->visit(tree);
	//TreeShapeListener listener;
	//tree::ParseTreeWalker::DEFAULT.walk(&listener, tree);

	return 0;
}