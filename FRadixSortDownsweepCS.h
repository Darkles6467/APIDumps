#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"
#include "FRadixSortParameters.h"

struct FRadixSortDownsweepCS : FGlobalShader
{
	char __padding[0x18L];

	// Functions

	static void ModifyCompilationEnvironment(EShaderPlatform Platform, FShaderCompilerEnvironment * OutEnvironment) { NativeCall<void, EShaderPlatform, FShaderCompilerEnvironment *>(nullptr, "FRadixSortDownsweepCS.ModifyCompilationEnvironment", Platform, OutEnvironment); }
	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FRadixSortDownsweepCS.Serialize", Ar); }
	void SetOutput(FRHICommandList * RHICmdList, FRHIUnorderedAccessView * OutKeysUAV, FRHIUnorderedAccessView * OutValuesUAV) { NativeCall<void, FRHICommandList *, FRHIUnorderedAccessView *, FRHIUnorderedAccessView *>(this, "FRadixSortDownsweepCS.SetOutput", RHICmdList, OutKeysUAV, OutValuesUAV); }
	void SetParameters(FRHICommandList * RHICmdList, FRHIShaderResourceView * InKeysSRV, FRHIShaderResourceView * InValuesSRV, FRHIShaderResourceView * InOffsetsSRV, TUniformBufferRef<FRadixSortParameters> * RadixSortUniformBuffer, FRHIShaderResourceView * RadixSortParameterBufferSRV) { NativeCall<void, FRHICommandList *, FRHIShaderResourceView *, FRHIShaderResourceView *, FRHIShaderResourceView *, TUniformBufferRef<FRadixSortParameters> *, FRHIShaderResourceView *>(this, "FRadixSortDownsweepCS.SetParameters", RHICmdList, InKeysSRV, InValuesSRV, InOffsetsSRV, RadixSortUniformBuffer, RadixSortParameterBufferSRV); }
	void UnbindBuffers(FRHICommandList * RHICmdList) { NativeCall<void, FRHICommandList *>(this, "FRadixSortDownsweepCS.UnbindBuffers", RHICmdList); }
};

