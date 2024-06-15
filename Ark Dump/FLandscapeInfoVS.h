#pragma once

#include "BaseDeclarations.h"
#include "FMeshMaterialShader.h"
#include "FMaterialShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FLandscapeInfoVS : FMeshMaterialShader
{
	char __padding[0x8L];

	// Functions

	void SetParameters(FRHICommandList * RHICmdList, const FMaterialRenderProxy * MaterialRenderProxy, const FMaterial * Material, FSceneView * View, const FMatrix * ProjectMat) { NativeCall<void, FRHICommandList *, const FMaterialRenderProxy *, const FMaterial *, FSceneView *, const FMatrix *>(this, "FLandscapeInfoVS.SetParameters", RHICmdList, MaterialRenderProxy, Material, View, ProjectMat); }
	static bool ShouldCache(EShaderPlatform Platform, FMaterial * Material, const FVertexFactoryType * VertexFactoryType) { return NativeCall<bool, EShaderPlatform, FMaterial *, const FVertexFactoryType *>(nullptr, "FLandscapeInfoVS.ShouldCache", Platform, Material, VertexFactoryType); }
};

