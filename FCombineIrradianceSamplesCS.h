#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FCombineIrradianceSamplesCS : FGlobalShader
{
	char __padding[0x18L];
	FRWShaderParameter& IrradianceCacheIrradianceField() { return *GetNativePointerField<FRWShaderParameter*>(this, "FCombineIrradianceSamplesCS.IrradianceCacheIrradiance"); }

	// Functions

	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FCombineIrradianceSamplesCS.Serialize", Ar); }
	void SetParameters(FRHICommandList * RHICmdList, FSceneView * View, int DepthLevel, FTemporaryIrradianceCacheResources * TemporaryIrradianceCacheResources) { NativeCall<void, FRHICommandList *, FSceneView *, int, FTemporaryIrradianceCacheResources *>(this, "FCombineIrradianceSamplesCS.SetParameters", RHICmdList, View, DepthLevel, TemporaryIrradianceCacheResources); }
};

