#include <llvm-c/Core.h>
#include <llvm-c/Types.h>
#include <stdio.h>

int main(void)
{
	LLVMContextRef context;
	LLVMBuilderRef builder;
	LLVMTypeRef type;
	context = LLVMContextCreate();
	builder = LLVMCreateBuilderInContext(context);
	type = LLVMInt32TypeInContext(context);
	(void)((void)builder, type);
	return 0;
}
