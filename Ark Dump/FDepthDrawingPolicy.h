#pragma once

#include "BaseDeclarations.h"
#include "FMeshDrawingPolicy.h"

struct FDepthDrawingPolicy : FMeshDrawingPolicy
{
	char __padding[0x28L];
	bool& bNeedsPixelShaderField() { return *GetNativePointerField<bool*>(this, "FDepthDrawingPolicy.bNeedsPixelShader"); }
	FDepthOnlyHS * HullShaderField() { return GetNativePointerField<FDepthOnlyHS *>(this, "FDepthDrawingPolicy.HullShader"); }
	FDepthOnlyDS * DomainShaderField() { return GetNativePointerField<FDepthOnlyDS *>(this, "FDepthDrawingPolicy.DomainShader"); }
	TDepthOnlyVS<0> * VertexShaderField() { return GetNativePointerField<TDepthOnlyVS<0> *>(this, "FDepthDrawingPolicy.VertexShader"); }
	FDepthOnlyPS * PixelShaderField() { return GetNativePointerField<FDepthOnlyPS *>(this, "FDepthDrawingPolicy.PixelShader"); }

	// Functions

	FBoundShaderStateInput * GetBoundShaderStateInput(FBoundShaderStateInput * result, ERHIFeatureLevel::Type InFeatureLevel) { return NativeCall<FBoundShaderStateInput *, FBoundShaderStateInput *, ERHIFeatureLevel::Type>(this, "FDepthDrawingPolicy.GetBoundShaderStateInput", result, InFeatureLevel); }
	void SetMeshRenderState(FRHICommandList * RHICmdList, FSceneView * View, FPrimitiveSceneProxy * PrimitiveSceneProxy, const FMeshBatch * Mesh, int BatchElementIndex, bool bBackFace, const FMeshDrawingPolicy::ElementDataType * ElementData, const FMeshDrawingPolicy::ContextDataType PolicyContext) { NativeCall<void, FRHICommandList *, FSceneView *, FPrimitiveSceneProxy *, const FMeshBatch *, int, bool, const FMeshDrawingPolicy::ElementDataType *, const FMeshDrawingPolicy::ContextDataType>(this, "FDepthDrawingPolicy.SetMeshRenderState", RHICmdList, View, PrimitiveSceneProxy, Mesh, BatchElementIndex, bBackFace, ElementData, PolicyContext); }
	void SetSharedState(FRHICommandList * RHICmdList, FSceneView * View, const FMeshDrawingPolicy::ContextDataType PolicyContext) { NativeCall<void, FRHICommandList *, FSceneView *, const FMeshDrawingPolicy::ContextDataType>(this, "FDepthDrawingPolicy.SetSharedState", RHICmdList, View, PolicyContext); }
};

