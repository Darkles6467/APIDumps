#pragma once

#include "BaseDeclarations.h"
#include "FMeshMaterialShader.h"
#include "FMaterialShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FDepthOnlyPS : FMeshMaterialShader
{

	// Functions

	void SetParameters(FRHICommandList * RHICmdList, const FMaterialRenderProxy * MaterialRenderProxy, const FMaterial * MaterialResource, FSceneView * View) { NativeCall<void, FRHICommandList *, const FMaterialRenderProxy *, const FMaterial *, FSceneView *>(this, "FDepthOnlyPS.SetParameters", RHICmdList, MaterialRenderProxy, MaterialResource, View); }
	static bool ShouldCache(EShaderPlatform Platform, FMaterial * Material, const FVertexFactoryType * VertexFactoryType) { return NativeCall<bool, EShaderPlatform, FMaterial *, const FVertexFactoryType *>(nullptr, "FDepthOnlyPS.ShouldCache", Platform, Material, VertexFactoryType); }
};

