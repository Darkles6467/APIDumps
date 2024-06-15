#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FAtmosphereDayCycleBlendPS : FGlobalShader
{
	char __padding[0x38L];

	// Functions

	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FAtmosphereDayCycleBlendPS.Serialize", Ar); }
	void SetParameters(FRHICommandList * RHICmdList, FSceneView * View) { NativeCall<void, FRHICommandList *, FSceneView *>(this, "FAtmosphereDayCycleBlendPS.SetParameters", RHICmdList, View); }
};

