#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FRadixSortClearOffsetsCS : FGlobalShader
{
	char __padding[0x8L];

	// Functions

	static void ModifyCompilationEnvironment(EShaderPlatform Platform, FShaderCompilerEnvironment * OutEnvironment) { NativeCall<void, EShaderPlatform, FShaderCompilerEnvironment *>(nullptr, "FRadixSortClearOffsetsCS.ModifyCompilationEnvironment", Platform, OutEnvironment); }
	void SetOutput(FRHICommandList * RHICmdList, FRHIUnorderedAccessView * OutOffsetsUAV) { NativeCall<void, FRHICommandList *, FRHIUnorderedAccessView *>(this, "FRadixSortClearOffsetsCS.SetOutput", RHICmdList, OutOffsetsUAV); }
	void UnbindBuffers(FRHICommandList * RHICmdList) { NativeCall<void, FRHICommandList *>(this, "FRadixSortClearOffsetsCS.UnbindBuffers", RHICmdList); }
};

