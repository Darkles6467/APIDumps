#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FComputeDistanceFieldNormalCS : FGlobalShader
{
	char __padding[0xd0L];
	FRWShaderParameter& DistanceFieldNormalField() { return *GetNativePointerField<FRWShaderParameter*>(this, "FComputeDistanceFieldNormalCS.DistanceFieldNormal"); }
	FDistanceFieldCulledObjectBufferParameters& ObjectParametersField() { return *GetNativePointerField<FDistanceFieldCulledObjectBufferParameters*>(this, "FComputeDistanceFieldNormalCS.ObjectParameters"); }
	FDeferredPixelShaderParameters& DeferredParametersField() { return *GetNativePointerField<FDeferredPixelShaderParameters*>(this, "FComputeDistanceFieldNormalCS.DeferredParameters"); }
	FAOParameters& AOParametersField() { return *GetNativePointerField<FAOParameters*>(this, "FComputeDistanceFieldNormalCS.AOParameters"); }

	// Functions

	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FComputeDistanceFieldNormalCS.Serialize", Ar); }
	void SetParameters(FRHICommandList * RHICmdList, FSceneView * View, FSceneRenderTargetItem * DistanceFieldNormalValue, const FDistanceFieldAOParameters * Parameters) { NativeCall<void, FRHICommandList *, FSceneView *, FSceneRenderTargetItem *, const FDistanceFieldAOParameters *>(this, "FComputeDistanceFieldNormalCS.SetParameters", RHICmdList, View, DistanceFieldNormalValue, Parameters); }
};

