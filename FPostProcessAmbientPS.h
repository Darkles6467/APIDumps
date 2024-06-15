#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FPostProcessAmbientPS : FGlobalShader
{
	char __padding[0x158L];
	FPostProcessPassParameters& PostprocessParameterField() { return *GetNativePointerField<FPostProcessPassParameters*>(this, "FPostProcessAmbientPS.PostprocessParameter"); }
	FCubemapShaderParameters& CubemapShaderParametersField() { return *GetNativePointerField<FCubemapShaderParameters*>(this, "FPostProcessAmbientPS.CubemapShaderParameters"); }
	FDeferredPixelShaderParameters& DeferredParametersField() { return *GetNativePointerField<FDeferredPixelShaderParameters*>(this, "FPostProcessAmbientPS.DeferredParameters"); }

	// Functions

	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FPostProcessAmbientPS.Serialize", Ar); }
	void SetParameters(FRHICommandList * RHICmdList, const FRenderingCompositePassContext * Context, const FFinalPostProcessSettings::FCubemapEntry * Entry) { NativeCall<void, FRHICommandList *, const FRenderingCompositePassContext *, const FFinalPostProcessSettings::FCubemapEntry *>(this, "FPostProcessAmbientPS.SetParameters", RHICmdList, Context, Entry); }
};

