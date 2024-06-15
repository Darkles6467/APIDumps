#pragma once

#include "BaseDeclarations.h"
#include "FMeshMaterialShader.h"
#include "FMaterialShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FVelocityVS : FMeshMaterialShader
{
	char __padding[0x8L];

	// Functions

	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FVelocityVS.Serialize", Ar); }
	void SetMesh(FRHICommandList * RHICmdList, const FVertexFactory * VertexFactory, const FMeshBatch * Mesh, int BatchElementIndex, const FViewInfo * View, FPrimitiveSceneProxy * Proxy, const FMatrix * InPreviousLocalToWorld) { NativeCall<void, FRHICommandList *, const FVertexFactory *, const FMeshBatch *, int, const FViewInfo *, FPrimitiveSceneProxy *, const FMatrix *>(this, "FVelocityVS.SetMesh", RHICmdList, VertexFactory, Mesh, BatchElementIndex, View, Proxy, InPreviousLocalToWorld); }
	void SetParameters(FRHICommandList * RHICmdList, const FVertexFactory * VertexFactory, const FMaterialRenderProxy * MaterialRenderProxy, const FViewInfo * View) { NativeCall<void, FRHICommandList *, const FVertexFactory *, const FMaterialRenderProxy *, const FViewInfo *>(this, "FVelocityVS.SetParameters", RHICmdList, VertexFactory, MaterialRenderProxy, View); }
	static bool ShouldCache(EShaderPlatform Platform, FMaterial * Material, const FVertexFactoryType * VertexFactoryType) { return NativeCall<bool, EShaderPlatform, FMaterial *, const FVertexFactoryType *>(nullptr, "FVelocityVS.ShouldCache", Platform, Material, VertexFactoryType); }
};

