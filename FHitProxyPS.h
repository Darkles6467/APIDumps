#pragma once

#include "BaseDeclarations.h"
#include "FMeshMaterialShader.h"
#include "FMaterialShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"
#include "FHitProxyId.h"

struct FHitProxyPS : FMeshMaterialShader
{
	char __padding[0x8L];

	// Functions

	void SetHitProxyId(FRHICommandList * RHICmdList, FHitProxyId HitProxyIdValue) { NativeCall<void, FRHICommandList *, FHitProxyId>(this, "FHitProxyPS.SetHitProxyId", RHICmdList, HitProxyIdValue); }
	void SetParameters(FRHICommandList * RHICmdList, const FMaterialRenderProxy * MaterialRenderProxy, FSceneView * View) { NativeCall<void, FRHICommandList *, const FMaterialRenderProxy *, FSceneView *>(this, "FHitProxyPS.SetParameters", RHICmdList, MaterialRenderProxy, View); }
	static bool ShouldCache(EShaderPlatform Platform, FMaterial * Material, const FVertexFactoryType * VertexFactoryType) { return NativeCall<bool, EShaderPlatform, FMaterial *, const FVertexFactoryType *>(nullptr, "FHitProxyPS.ShouldCache", Platform, Material, VertexFactoryType); }
};

