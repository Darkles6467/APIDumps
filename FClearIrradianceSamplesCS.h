#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FClearIrradianceSamplesCS : FGlobalShader
{
	char __padding[0x18L];
	FRWShaderParameter& SurfelIrradianceField() { return *GetNativePointerField<FRWShaderParameter*>(this, "FClearIrradianceSamplesCS.SurfelIrradiance"); }
	FRWShaderParameter& HeightfieldIrradianceField() { return *GetNativePointerField<FRWShaderParameter*>(this, "FClearIrradianceSamplesCS.HeightfieldIrradiance"); }

	// Functions

	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FClearIrradianceSamplesCS.Serialize", Ar); }
	void SetParameters(FRHICommandList * RHICmdList, FSceneView * View, int DepthLevel, FTemporaryIrradianceCacheResources * TemporaryIrradianceCacheResources) { NativeCall<void, FRHICommandList *, FSceneView *, int, FTemporaryIrradianceCacheResources *>(this, "FClearIrradianceSamplesCS.SetParameters", RHICmdList, View, DepthLevel, TemporaryIrradianceCacheResources); }
};

