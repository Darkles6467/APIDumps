#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"
#include "FRHITexture.h"

struct FCopyShadowMaps2DPS : FGlobalShader
{
	char __padding[0x8L];

	// Functions

	void SetParameters(FRHICommandList * RHICmdList, FSceneView * View, TRefCountPtr<FRHITexture> SourceShadowMap) { NativeCall<void, FRHICommandList *, FSceneView *, TRefCountPtr<FRHITexture>>(this, "FCopyShadowMaps2DPS.SetParameters", RHICmdList, View, SourceShadowMap); }
};

