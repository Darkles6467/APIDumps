#pragma once

#include "BaseDeclarations.h"
#include "FMeshDrawingPolicy.h"

struct FConvertToUniformMeshDrawingPolicy : FMeshDrawingPolicy
{
	char __padding[0x10L];
	FConvertToUniformMeshVS * VertexShaderField() { return GetNativePointerField<FConvertToUniformMeshVS *>(this, "FConvertToUniformMeshDrawingPolicy.VertexShader"); }
	FConvertToUniformMeshGS * GeometryShaderField() { return GetNativePointerField<FConvertToUniformMeshGS *>(this, "FConvertToUniformMeshDrawingPolicy.GeometryShader"); }

	// Functions

	void SetMeshRenderState(FRHICommandList * RHICmdList, FSceneView * View, FPrimitiveSceneProxy * PrimitiveSceneProxy, const FMeshBatch * Mesh, int BatchElementIndex, bool bBackFace, const FMeshDrawingPolicy::ElementDataType * ElementData, const FMeshDrawingPolicy::ContextDataType PolicyContext) { NativeCall<void, FRHICommandList *, FSceneView *, FPrimitiveSceneProxy *, const FMeshBatch *, int, bool, const FMeshDrawingPolicy::ElementDataType *, const FMeshDrawingPolicy::ContextDataType>(this, "FConvertToUniformMeshDrawingPolicy.SetMeshRenderState", RHICmdList, View, PrimitiveSceneProxy, Mesh, BatchElementIndex, bBackFace, ElementData, PolicyContext); }
};

