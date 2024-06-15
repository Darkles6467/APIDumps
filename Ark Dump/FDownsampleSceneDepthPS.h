#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FDownsampleSceneDepthPS : FGlobalShader
{
	char __padding[0x38L];
	FSceneTextureShaderParameters& SceneTextureParametersField() { return *GetNativePointerField<FSceneTextureShaderParameters*>(this, "FDownsampleSceneDepthPS.SceneTextureParameters"); }

	// Functions

	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FDownsampleSceneDepthPS.Serialize", Ar); }
	void SetParameters(FRHICommandList * RHICmdList, FSceneView * View) { NativeCall<void, FRHICommandList *, FSceneView *>(this, "FDownsampleSceneDepthPS.SetParameters", RHICmdList, View); }
};

