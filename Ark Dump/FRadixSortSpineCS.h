#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FRadixSortSpineCS : FGlobalShader
{
	char __padding[0x8L];

	// Functions

	static void ModifyCompilationEnvironment(EShaderPlatform Platform, FShaderCompilerEnvironment * OutEnvironment) { NativeCall<void, EShaderPlatform, FShaderCompilerEnvironment *>(nullptr, "FRadixSortSpineCS.ModifyCompilationEnvironment", Platform, OutEnvironment); }
	void SetOutput(FRHICommandList * RHICmdList, FRHIUnorderedAccessView * OutOffsetsUAV) { NativeCall<void, FRHICommandList *, FRHIUnorderedAccessView *>(this, "FRadixSortSpineCS.SetOutput", RHICmdList, OutOffsetsUAV); }
	void SetParameters(FRHICommandList * RHICmdList, FRHIShaderResourceView * InOffsetsSRV) { NativeCall<void, FRHICommandList *, FRHIShaderResourceView *>(this, "FRadixSortSpineCS.SetParameters", RHICmdList, InOffsetsSRV); }
	void UnbindBuffers(FRHICommandList * RHICmdList) { NativeCall<void, FRHICommandList *>(this, "FRadixSortSpineCS.UnbindBuffers", RHICmdList); }
};

