#include "DZGLangVisitor.h"
#include "StringUtil.h"

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
	auto constantNode = ctx->Constant();
	/*
	Constant
	:   IntegerConstant
	|   FloatingConstant
	|   CharacterConstant
	;
	*/
	if (constantNode) {
		auto str =  constantNode->getText();
		// char 常量 ??
		if (StringUtil::IsChar(str)) {
			
			return 0;
		}
		// float 常量
		if (StringUtil::IsFloat(str)) {
			return ConstantFP::get(*(this->llvmModule->TheContext), APFloat(atof(str.c_str())));
		}
		// int 
		return ConstantInt::get(*(this->llvmModule->TheContext), APInt(32,StringRef(str),10));
	}

	return visitChildren(ctx);
}

inline antlrcpp::Any DZGLangVisitor::visitFunctionDefinition(DZGParser::FunctionDefinitionContext * ctx) {
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
	this->llvmModule = LLVMModule::getInstance();
}

DZGLangVisitor::~DZGLangVisitor()
{
}
