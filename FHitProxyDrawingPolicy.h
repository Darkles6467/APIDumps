#pragma once

#include "BaseDeclarations.h"
#include "FMeshDrawingPolicy.h"

struct FHitProxyDrawingPolicy : FMeshDrawingPolicy
{
	char __padding[0x20L];
	FHitProxyVS * VertexShaderField() { return GetNativePointerField<FHitProxyVS *>(this, "FHitProxyDrawingPolicy.VertexShader"); }
	FHitProxyPS * PixelShaderField() { return GetNativePointerField<FHitProxyPS *>(this, "FHitProxyDrawingPolicy.PixelShader"); }
	FHitProxyHS * HullShaderField() { return GetNativePointerField<FHitProxyHS *>(this, "FHitProxyDrawingPolicy.HullShader"); }
	FHitProxyDS * DomainShaderField() { return GetNativePointerField<FHitProxyDS *>(this, "FHitProxyDrawingPolicy.DomainShader"); }

	// Functions

	FBoundShaderStateInput * GetBoundShaderStateInput(FBoundShaderStateInput * result, ERHIFeatureLevel::Type InFeatureLevel) { return NativeCall<FBoundShaderStateInput *, FBoundShaderStateInput *, ERHIFeatureLevel::Type>(this, "FHitProxyDrawingPolicy.GetBoundShaderStateInput", result, InFeatureLevel); }
	void SetMeshRenderState(FRHICommandList * RHICmdList, FSceneView * View, FPrimitiveSceneProxy * PrimitiveSceneProxy, const FMeshBatch * Mesh, int BatchElementIndex, bool bBackFace, const FHitProxyId HitProxyId, const FMeshDrawingPolicy::ContextDataType PolicyContext) { NativeCall<void, FRHICommandList *, FSceneView *, FPrimitiveSceneProxy *, const FMeshBatch *, int, bool, const FHitProxyId, const FMeshDrawingPolicy::ContextDataType>(this, "FHitProxyDrawingPolicy.SetMeshRenderState", RHICmdList, View, PrimitiveSceneProxy, Mesh, BatchElementIndex, bBackFace, HitProxyId, PolicyContext); }
};

