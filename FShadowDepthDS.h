#pragma once

#include "BaseDeclarations.h"
#include "FBaseDS.h"
#include "FMeshMaterialShader.h"
#include "FMaterialShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FShadowDepthDS : FBaseDS
{
	char __padding[0x18L];
	FShadowDepthShaderParameters& ShadowParametersField() { return *GetNativePointerField<FShadowDepthShaderParameters*>(this, "FShadowDepthDS.ShadowParameters"); }

	// Functions

	void SetParameters(FRHICommandList * RHICmdList, const FMaterialRenderProxy * MaterialRenderProxy, FSceneView * View, const FProjectedShadowInfo * ShadowInfo) { NativeCall<void, FRHICommandList *, const FMaterialRenderProxy *, FSceneView *, const FProjectedShadowInfo *>(this, "FShadowDepthDS.SetParameters", RHICmdList, MaterialRenderProxy, View, ShadowInfo); }
};

