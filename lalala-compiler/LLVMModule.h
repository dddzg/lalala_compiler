#pragma once

#include "llvm/IR/IRBuilder.h"
#include "llvm/IR/LLVMContext.h"

using namespace llvm;

class LLVMModule {
public:
	static LLVMModule* getInstance() {
		static auto llvmModule = new LLVMModule();
		return llvmModule;
	}
	LLVMContext* TheContext;
	IRBuilder<>* Builder;
private:
	LLVMModule();
	~LLVMModule();
};