#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"
#include "FRHITexture.h"

struct FCopyShadowMapsCubePS : FGlobalShader
{
	char __padding[0x8L];

	// Functions

	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FCopyShadowMapsCubePS.Serialize", Ar); }
	void SetParameters(FRHICommandList * RHICmdList, FSceneView * View, const TRefCountPtr<FRHITexture> * SourceShadowMap) { NativeCall<void, FRHICommandList *, FSceneView *, const TRefCountPtr<FRHITexture> *>(this, "FCopyShadowMapsCubePS.SetParameters", RHICmdList, View, SourceShadowMap); }
};

