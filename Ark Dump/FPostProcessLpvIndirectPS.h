#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"
#include "FLpvReadUniformBufferParameters.h"

struct FPostProcessLpvIndirectPS : FGlobalShader
{
	char __padding[0x168L];
	FPostProcessPassParameters& PostprocessParameterField() { return *GetNativePointerField<FPostProcessPassParameters*>(this, "FPostProcessLpvIndirectPS.PostprocessParameter"); }
	FDeferredPixelShaderParameters& DeferredParametersField() { return *GetNativePointerField<FDeferredPixelShaderParameters*>(this, "FPostProcessLpvIndirectPS.DeferredParameters"); }

	// Functions

	unsigned int GetTypeSize() { return NativeCall<unsigned int>(this, "FPostProcessLpvIndirectPS.GetTypeSize"); }
	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FPostProcessLpvIndirectPS.Serialize", Ar); }
	void SetParameters(FRHITexture ** LpvBufferSRVsIn, TUniformBufferRef<FLpvReadUniformBufferParameters> LpvUniformBuffer, const FRenderingCompositePassContext * Context) { NativeCall<void, FRHITexture **, TUniformBufferRef<FLpvReadUniformBufferParameters>, const FRenderingCompositePassContext *>(this, "FPostProcessLpvIndirectPS.SetParameters", LpvBufferSRVsIn, LpvUniformBuffer, Context); }
	static bool ShouldCache(EShaderPlatform Platform) { return NativeCall<bool, EShaderPlatform>(nullptr, "FPostProcessLpvIndirectPS.ShouldCache", Platform); }
};

