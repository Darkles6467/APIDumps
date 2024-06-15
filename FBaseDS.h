#pragma once

#include "BaseDeclarations.h"
#include "FMeshMaterialShader.h"

struct FBaseDS : FMeshMaterialShader
{

	// Functions

	void SetMesh(FRHICommandList * RHICmdList, const FVertexFactory * VertexFactory, FSceneView * View, FPrimitiveSceneProxy * Proxy, const FMeshBatchElement * BatchElement) { NativeCall<void, FRHICommandList *, const FVertexFactory *, FSceneView *, FPrimitiveSceneProxy *, const FMeshBatchElement *>(this, "FBaseDS.SetMesh", RHICmdList, VertexFactory, View, Proxy, BatchElement); }
	void SetParameters(FRHICommandList * RHICmdList, const FMaterialRenderProxy * MaterialRenderProxy, FSceneView * View) { NativeCall<void, FRHICommandList *, const FMaterialRenderProxy *, FSceneView *>(this, "FBaseDS.SetParameters", RHICmdList, MaterialRenderProxy, View); }
};

