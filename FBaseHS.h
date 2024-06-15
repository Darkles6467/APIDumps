#pragma once

#include "BaseDeclarations.h"
#include "FMeshMaterialShader.h"

struct FBaseHS : FMeshMaterialShader
{

	// Functions

	void SetMesh(FRHICommandList * RHICmdList, const FVertexFactory * VertexFactory, FSceneView * View, FPrimitiveSceneProxy * Proxy, const FMeshBatchElement * BatchElement) { NativeCall<void, FRHICommandList *, const FVertexFactory *, FSceneView *, FPrimitiveSceneProxy *, const FMeshBatchElement *>(this, "FBaseHS.SetMesh", RHICmdList, VertexFactory, View, Proxy, BatchElement); }
	void SetParameters(FRHICommandList * RHICmdList, const FMaterialRenderProxy * MaterialRenderProxy, FSceneView * View) { NativeCall<void, FRHICommandList *, const FMaterialRenderProxy *, FSceneView *>(this, "FBaseHS.SetParameters", RHICmdList, MaterialRenderProxy, View); }
};

