#pragma once

#include "BaseDeclarations.h"
#include "FHitProxyId.h"

struct FDepthDrawingPolicyFactory
{

	// Functions

	static void AddStaticMesh(FScene * Scene, FStaticMesh * StaticMesh) { NativeCall<void, FScene *, FStaticMesh *>(nullptr, "FDepthDrawingPolicyFactory.AddStaticMesh", Scene, StaticMesh); }
	static bool DrawDynamicMesh(FRHICommandList * RHICmdList, const FViewInfo * View, FDepthDrawingPolicyFactory::ContextType DrawingContext, const FMeshBatch * Mesh, bool bBackFace, bool bPreFog, FPrimitiveSceneProxy * PrimitiveSceneProxy, FHitProxyId HitProxyId) { return NativeCall<bool, FRHICommandList *, const FViewInfo *, FDepthDrawingPolicyFactory::ContextType, const FMeshBatch *, bool, bool, FPrimitiveSceneProxy *, FHitProxyId>(nullptr, "FDepthDrawingPolicyFactory.DrawDynamicMesh", RHICmdList, View, DrawingContext, Mesh, bBackFace, bPreFog, PrimitiveSceneProxy, HitProxyId); }
	static bool DrawMesh(FRHICommandList * RHICmdList, const FViewInfo * View, FDepthDrawingPolicyFactory::ContextType DrawingContext, const FMeshBatch * Mesh, const unsigned __int64 * BatchElementMask, bool bBackFace, bool bPreFog, FPrimitiveSceneProxy * PrimitiveSceneProxy, FHitProxyId HitProxyId) { return NativeCall<bool, FRHICommandList *, const FViewInfo *, FDepthDrawingPolicyFactory::ContextType, const FMeshBatch *, const unsigned __int64 *, bool, bool, FPrimitiveSceneProxy *, FHitProxyId>(nullptr, "FDepthDrawingPolicyFactory.DrawMesh", RHICmdList, View, DrawingContext, Mesh, BatchElementMask, bBackFace, bPreFog, PrimitiveSceneProxy, HitProxyId); }
	static bool DrawStaticMesh(FRHICommandList * RHICmdList, const FViewInfo * View, FDepthDrawingPolicyFactory::ContextType DrawingContext, const FStaticMesh * StaticMesh, const unsigned __int64 * BatchElementMask, bool bPreFog, FPrimitiveSceneProxy * PrimitiveSceneProxy, FHitProxyId HitProxyId) { return NativeCall<bool, FRHICommandList *, const FViewInfo *, FDepthDrawingPolicyFactory::ContextType, const FStaticMesh *, const unsigned __int64 *, bool, FPrimitiveSceneProxy *, FHitProxyId>(nullptr, "FDepthDrawingPolicyFactory.DrawStaticMesh", RHICmdList, View, DrawingContext, StaticMesh, BatchElementMask, bPreFog, PrimitiveSceneProxy, HitProxyId); }
	static bool IsMaterialIgnored(const FMaterialRenderProxy * MaterialRenderProxy, ERHIFeatureLevel::Type InFeatureLevel) { return NativeCall<bool, const FMaterialRenderProxy *, ERHIFeatureLevel::Type>(nullptr, "FDepthDrawingPolicyFactory.IsMaterialIgnored", MaterialRenderProxy, InFeatureLevel); }
};

struct FVelocityDrawingPolicyFactory : FDepthDrawingPolicyFactory
{

	// Functions

	static void AddStaticMesh(FScene * Scene, FStaticMesh * StaticMesh, FDepthDrawingPolicyFactory::ContextType __formal) { NativeCall<void, FScene *, FStaticMesh *, FDepthDrawingPolicyFactory::ContextType>(nullptr, "FVelocityDrawingPolicyFactory.AddStaticMesh", Scene, StaticMesh, __formal); }
	static bool DrawDynamicMesh(FRHICommandList * RHICmdList, const FViewInfo * View, FDepthDrawingPolicyFactory::ContextType DrawingContext, const FMeshBatch * Mesh, bool bBackFace, bool bPreFog, FPrimitiveSceneProxy * PrimitiveSceneProxy, FHitProxyId HitProxyId) { return NativeCall<bool, FRHICommandList *, const FViewInfo *, FDepthDrawingPolicyFactory::ContextType, const FMeshBatch *, bool, bool, FPrimitiveSceneProxy *, FHitProxyId>(nullptr, "FVelocityDrawingPolicyFactory.DrawDynamicMesh", RHICmdList, View, DrawingContext, Mesh, bBackFace, bPreFog, PrimitiveSceneProxy, HitProxyId); }
};

