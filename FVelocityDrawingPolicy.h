#pragma once

#include "BaseDeclarations.h"
#include "FMeshDrawingPolicy.h"

struct FVelocityDrawingPolicy : FMeshDrawingPolicy
{
	char __padding[0x20L];
	FVelocityVS * VertexShaderField() { return GetNativePointerField<FVelocityVS *>(this, "FVelocityDrawingPolicy.VertexShader"); }
	FVelocityPS * PixelShaderField() { return GetNativePointerField<FVelocityPS *>(this, "FVelocityDrawingPolicy.PixelShader"); }
	FVelocityHS * HullShaderField() { return GetNativePointerField<FVelocityHS *>(this, "FVelocityDrawingPolicy.HullShader"); }
	FVelocityDS * DomainShaderField() { return GetNativePointerField<FVelocityDS *>(this, "FVelocityDrawingPolicy.DomainShader"); }

	// Functions

	FBoundShaderStateInput * GetBoundShaderStateInput(FBoundShaderStateInput * result, ERHIFeatureLevel::Type InFeatureLevel) { return NativeCall<FBoundShaderStateInput *, FBoundShaderStateInput *, ERHIFeatureLevel::Type>(this, "FVelocityDrawingPolicy.GetBoundShaderStateInput", result, InFeatureLevel); }
	static bool HasVelocity(const FViewInfo * View, const FPrimitiveSceneInfo * PrimitiveSceneInfo) { return NativeCall<bool, const FViewInfo *, const FPrimitiveSceneInfo *>(nullptr, "FVelocityDrawingPolicy.HasVelocity", View, PrimitiveSceneInfo); }
	void SetMeshRenderState(FRHICommandList * RHICmdList, FSceneView * SceneView, FPrimitiveSceneProxy * PrimitiveSceneProxy, const FMeshBatch * Mesh, int BatchElementIndex, bool bBackFace, const FMeshDrawingPolicy::ElementDataType * ElementData, const FMeshDrawingPolicy::ContextDataType PolicyContext) { NativeCall<void, FRHICommandList *, FSceneView *, FPrimitiveSceneProxy *, const FMeshBatch *, int, bool, const FMeshDrawingPolicy::ElementDataType *, const FMeshDrawingPolicy::ContextDataType>(this, "FVelocityDrawingPolicy.SetMeshRenderState", RHICmdList, SceneView, PrimitiveSceneProxy, Mesh, BatchElementIndex, bBackFace, ElementData, PolicyContext); }
	void SetSharedState(FRHICommandList * RHICmdList, FSceneView * SceneView, const FMeshDrawingPolicy::ContextDataType PolicyContext) { NativeCall<void, FRHICommandList *, FSceneView *, const FMeshDrawingPolicy::ContextDataType>(this, "FVelocityDrawingPolicy.SetSharedState", RHICmdList, SceneView, PolicyContext); }
};

