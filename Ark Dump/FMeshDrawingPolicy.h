#pragma once

#include "BaseDeclarations.h"
struct FMeshDrawingPolicy
{
	char __padding[0x20L];

	// Functions

	unsigned int GetTypeHash() { return NativeCall<unsigned int>(this, "FMeshDrawingPolicy.GetTypeHash"); }
	void DrawMesh(FRHICommandList * RHICmdList, const FMeshBatch * Mesh, int BatchElementIndex) { NativeCall<void, FRHICommandList *, const FMeshBatch *, int>(this, "FMeshDrawingPolicy.DrawMesh", RHICmdList, Mesh, BatchElementIndex); }
	void SetMeshRenderState(FRHICommandList * RHICmdList, FSceneView * View, FPrimitiveSceneProxy * PrimitiveSceneProxy, const FMeshBatch * Mesh, int BatchElementIndex, bool bBackFace, const FMeshDrawingPolicy::ElementDataType * ElementData, const FMeshDrawingPolicy::ContextDataType PolicyContext) { NativeCall<void, FRHICommandList *, FSceneView *, FPrimitiveSceneProxy *, const FMeshBatch *, int, bool, const FMeshDrawingPolicy::ElementDataType *, const FMeshDrawingPolicy::ContextDataType>(this, "FMeshDrawingPolicy.SetMeshRenderState", RHICmdList, View, PrimitiveSceneProxy, Mesh, BatchElementIndex, bBackFace, ElementData, PolicyContext); }
	void SetSharedState(FRHICommandList * RHICmdList, FSceneView * View, const FMeshDrawingPolicy::ContextDataType PolicyContext) { NativeCall<void, FRHICommandList *, FSceneView *, const FMeshDrawingPolicy::ContextDataType>(this, "FMeshDrawingPolicy.SetSharedState", RHICmdList, View, PolicyContext); }
};

