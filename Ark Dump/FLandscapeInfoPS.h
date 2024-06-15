#pragma once

#include "BaseDeclarations.h"
#include "FMeshMaterialShader.h"
#include "FMaterialShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FLandscapeInfoPS : FMeshMaterialShader
{
	char __padding[0x60L];

	// Functions

	unsigned int GetTypeSize() { return NativeCall<unsigned int>(this, "FLandscapeInfoPS.GetTypeSize"); }
	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FLandscapeInfoPS.Serialize", Ar); }
	void SetMesh(FRHICommandList * RHICmdList, const FVertexFactory * VertexFactory, FSceneView * View, FPrimitiveSceneProxy * Proxy, const FMeshBatchElement * BatchElement, FRHITexture * InPreviousInfoTexture, FRHITexture * InPreviousIDTexture) { NativeCall<void, FRHICommandList *, const FVertexFactory *, FSceneView *, FPrimitiveSceneProxy *, const FMeshBatchElement *, FRHITexture *, FRHITexture *>(this, "FLandscapeInfoPS.SetMesh", RHICmdList, VertexFactory, View, Proxy, BatchElement, InPreviousInfoTexture, InPreviousIDTexture); }
	void SetParameters(FRHICommandList * RHICmdList, const FMaterialRenderProxy * MaterialRenderProxy, const FMaterial * MaterialResource, FSceneView * View) { NativeCall<void, FRHICommandList *, const FMaterialRenderProxy *, const FMaterial *, FSceneView *>(this, "FLandscapeInfoPS.SetParameters", RHICmdList, MaterialRenderProxy, MaterialResource, View); }
	static bool ShouldCache(EShaderPlatform Platform, FMaterial * Material, const FVertexFactoryType * VertexFactoryType) { return NativeCall<bool, EShaderPlatform, FMaterial *, const FVertexFactoryType *>(nullptr, "FLandscapeInfoPS.ShouldCache", Platform, Material, VertexFactoryType); }
};

