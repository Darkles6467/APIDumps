#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FClearLandscapeMaskCS : FGlobalShader
{
	char __padding[0x8L];
	FRWShaderParameter& LandscapeInfoBufferInformationParameterField() { return *GetNativePointerField<FRWShaderParameter*>(this, "FClearLandscapeMaskCS.LandscapeInfoBufferInformationParameter"); }

	// Functions

	void SetParameters(FRHICommandList * RHICmdList, FSceneView * View) { NativeCall<void, FRHICommandList *, FSceneView *>(this, "FClearLandscapeMaskCS.SetParameters", RHICmdList, View); }
};

