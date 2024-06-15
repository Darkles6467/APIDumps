#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FCopySceneColorPS : FGlobalShader
{
	char __padding[0x28L];
	FSceneTextureShaderParameters& SceneTextureParametersField() { return *GetNativePointerField<FSceneTextureShaderParameters*>(this, "FCopySceneColorPS.SceneTextureParameters"); }

	// Functions

	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FCopySceneColorPS.Serialize", Ar); }
	void SetParameters(FRHICommandList * RHICmdList, const FViewInfo * View) { NativeCall<void, FRHICommandList *, const FViewInfo *>(this, "FCopySceneColorPS.SetParameters", RHICmdList, View); }
};

