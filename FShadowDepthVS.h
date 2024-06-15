#pragma once

#include "BaseDeclarations.h"
#include "FMeshMaterialShader.h"
#include "FMaterialShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FShadowDepthVS : FMeshMaterialShader
{
	char __padding[0x18L];
	FShadowDepthShaderParameters& ShadowParametersField() { return *GetNativePointerField<FShadowDepthShaderParameters*>(this, "FShadowDepthVS.ShadowParameters"); }

	// Functions

	void SetParameters(FRHICommandList * RHICmdList, const FMaterialRenderProxy * MaterialRenderProxy, const FMaterial * Material, FSceneView * View, const FProjectedShadowInfo * ShadowInfo) { NativeCall<void, FRHICommandList *, const FMaterialRenderProxy *, const FMaterial *, FSceneView *, const FProjectedShadowInfo *>(this, "FShadowDepthVS.SetParameters", RHICmdList, MaterialRenderProxy, Material, View, ShadowInfo); }
};

