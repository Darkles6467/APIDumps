#pragma once

#include "BaseDeclarations.h"
#include "FMeshMaterialShader.h"
#include "FMaterialShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FOnePassPointShadowProjectionGS : FMeshMaterialShader
{
	char __padding[0x10L];

	// Functions

	unsigned int GetTypeSize() { return NativeCall<unsigned int>(this, "FOnePassPointShadowProjectionGS.GetTypeSize"); }
	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FOnePassPointShadowProjectionGS.Serialize", Ar); }
	void SetMesh(FRHICommandList * RHICmdList, FPrimitiveSceneProxy * PrimitiveSceneProxy, const FProjectedShadowInfo * ShadowInfo, FSceneView * View) { NativeCall<void, FRHICommandList *, FPrimitiveSceneProxy *, const FProjectedShadowInfo *, FSceneView *>(this, "FOnePassPointShadowProjectionGS.SetMesh", RHICmdList, PrimitiveSceneProxy, ShadowInfo, View); }
	void SetParameters(FRHICommandList * RHICmdList, FSceneView * View, const FProjectedShadowInfo * ShadowInfo) { NativeCall<void, FRHICommandList *, FSceneView *, const FProjectedShadowInfo *>(this, "FOnePassPointShadowProjectionGS.SetParameters", RHICmdList, View, ShadowInfo); }
	static bool ShouldCache(EShaderPlatform Platform, FMaterial * Material, const FVertexFactoryType * VertexFactoryType) { return NativeCall<bool, EShaderPlatform, FMaterial *, const FVertexFactoryType *>(nullptr, "FOnePassPointShadowProjectionGS.ShouldCache", Platform, Material, VertexFactoryType); }
};

