#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"
#include "FRadixSortParameters.h"

struct FRadixSortUpsweepCS : FGlobalShader
{
	char __padding[0x10L];

	// Functions

	static void ModifyCompilationEnvironment(EShaderPlatform Platform, FShaderCompilerEnvironment * OutEnvironment) { NativeCall<void, EShaderPlatform, FShaderCompilerEnvironment *>(nullptr, "FRadixSortUpsweepCS.ModifyCompilationEnvironment", Platform, OutEnvironment); }
	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FRadixSortUpsweepCS.Serialize", Ar); }
	void SetOutput(FRHICommandList * RHICmdList, FRHIUnorderedAccessView * OutOffsetsUAV) { NativeCall<void, FRHICommandList *, FRHIUnorderedAccessView *>(this, "FRadixSortUpsweepCS.SetOutput", RHICmdList, OutOffsetsUAV); }
	void SetParameters(FRHICommandList * RHICmdList, FRHIShaderResourceView * InKeysSRV, TUniformBufferRef<FRadixSortParameters> * RadixSortUniformBuffer, FRHIShaderResourceView * RadixSortParameterBufferSRV) { NativeCall<void, FRHICommandList *, FRHIShaderResourceView *, TUniformBufferRef<FRadixSortParameters> *, FRHIShaderResourceView *>(this, "FRadixSortUpsweepCS.SetParameters", RHICmdList, InKeysSRV, RadixSortUniformBuffer, RadixSortParameterBufferSRV); }
	void UnbindBuffers(FRHICommandList * RHICmdList) { NativeCall<void, FRHICommandList *>(this, "FRadixSortUpsweepCS.UnbindBuffers", RHICmdList); }
};

