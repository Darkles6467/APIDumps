#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FWriteDownsampledDepthPS : FGlobalShader
{
	char __padding[0x80L];
	FDeferredPixelShaderParameters& DeferredParametersField() { return *GetNativePointerField<FDeferredPixelShaderParameters*>(this, "FWriteDownsampledDepthPS.DeferredParameters"); }

	// Functions

	void SetParameters(FRHICommandList * RHICmdList, FSceneView * View, FSceneRenderTargetItem * DistanceFieldNormal) { NativeCall<void, FRHICommandList *, FSceneView *, FSceneRenderTargetItem *>(this, "FWriteDownsampledDepthPS.SetParameters", RHICmdList, View, DistanceFieldNormal); }
	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FWriteDownsampledDepthPS.Serialize", Ar); }
};

