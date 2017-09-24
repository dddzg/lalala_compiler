#include "LLVMModule.h"

LLVMModule::LLVMModule()
{
	this->TheContext = new LLVMContext();
	this->Builder = new IRBuilder<>(*this->TheContext);
}

LLVMModule::~LLVMModule()
{
	delete this->TheContext;
	delete this->Builder;
}
