#pragma once

#include "BaseDeclarations.h"
#include "FMeshDrawingPolicy.h"

struct FPositionOnlyDepthDrawingPolicy : FMeshDrawingPolicy
{
	char __padding[0x8L];
	TDepthOnlyVS<1> * VertexShaderField() { return GetNativePointerField<TDepthOnlyVS<1> *>(this, "FPositionOnlyDepthDrawingPolicy.VertexShader"); }

	// Functions

	FBoundShaderStateInput * GetBoundShaderStateInput(FBoundShaderStateInput * result, ERHIFeatureLevel::Type InFeatureLevel) { return NativeCall<FBoundShaderStateInput *, FBoundShaderStateInput *, ERHIFeatureLevel::Type>(this, "FPositionOnlyDepthDrawingPolicy.GetBoundShaderStateInput", result, InFeatureLevel); }
	void SetMeshRenderState(FRHICommandList * RHICmdList, FSceneView * View, FPrimitiveSceneProxy * PrimitiveSceneProxy, const FMeshBatch * Mesh, int BatchElementIndex, bool bBackFace, const FMeshDrawingPolicy::ElementDataType * ElementData, const FMeshDrawingPolicy::ContextDataType PolicyContext) { NativeCall<void, FRHICommandList *, FSceneView *, FPrimitiveSceneProxy *, const FMeshBatch *, int, bool, const FMeshDrawingPolicy::ElementDataType *, const FMeshDrawingPolicy::ContextDataType>(this, "FPositionOnlyDepthDrawingPolicy.SetMeshRenderState", RHICmdList, View, PrimitiveSceneProxy, Mesh, BatchElementIndex, bBackFace, ElementData, PolicyContext); }
};

