#include "DZGLangVisitor.h"
#include "StringUtil.h"
#include "DZGLang.h"
/*
primaryExpression
:   Identifier
|   Constant
|   StringLiteral+
|   '(' expression ')'
|   '(' compoundStatement ')'
;
*/
inline antlrcpp::Any DZGLangVisitor::visitPrimaryExpression(DZGParser::PrimaryExpressionContext * ctx) {
	/*
		Identifier
		:   IdentifierNondigit
		(   IdentifierNondigit
		|   Digit
		)*
		;
	*/
	auto identifierNode = ctx->Identifier();
	if (identifierNode) {
		cout << "Identifier" <<identifierNode->getText() << endl;
	}
	/*
		Constant
		:   IntegerConstant
		|   FloatingConstant
		|   CharacterConstant
		;
	*/
	auto constantNode = ctx->Constant();
	if (constantNode) {
		cout << "Constant" << constantNode->getText() << endl;
	}


	return visitChildren(ctx);
}

/*
	functionDefinition
	:   declarationSpecifiers? declarator declarationList? compoundStatement
	;
*/
inline antlrcpp::Any DZGLangVisitor::visitFunctionDefinition(DZGParser::FunctionDefinitionContext * ctx) {
	auto dzgLang = DZGLang::getInstance();
	/*
		增加函数名字
		并设置为当前函数
	*/
	dzgLang->addFunction(ctx->declarator()->getText(), ctx);
	/*auto function = new DZGLangFunction(ctx->declarator()->getText(), ctx);
	dzgLang->functionMap[function->name] = function;
	dzgLang->nowFunctionName = function->name;*/
	cout << ctx->declarator()->getText() << endl;
	return visitChildren(ctx);
}

inline antlrcpp::Any DZGLangVisitor::visitConstantExpression(DZGParser::ConstantExpressionContext * ctx) {
	cout << ctx->getText() << endl;
	return visitChildren(ctx);
}

inline antlrcpp::Any DZGLangVisitor::visitCompilationUnit(DZGParser::CompilationUnitContext * ctx) {
	return visitChildren(ctx);
}

DZGLangVisitor::DZGLangVisitor()
{
}

DZGLangVisitor::~DZGLangVisitor()
{
}
