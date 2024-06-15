#pragma once

#include "BaseDeclarations.h"
#include "FHitProxyId.h"

struct FHitProxyDrawingPolicyFactory
{

	// Functions

	static void AddStaticMesh(FScene * Scene, FStaticMesh * StaticMesh, FHitProxyDrawingPolicyFactory::ContextType __formal) { NativeCall<void, FScene *, FStaticMesh *, FHitProxyDrawingPolicyFactory::ContextType>(nullptr, "FHitProxyDrawingPolicyFactory.AddStaticMesh", Scene, StaticMesh, __formal); }
	static bool DrawDynamicMesh(FRHICommandList * RHICmdList, FSceneView * View, FHitProxyDrawingPolicyFactory::ContextType DrawingContext, const FMeshBatch * Mesh, bool bBackFace, bool bPreFog, FPrimitiveSceneProxy * PrimitiveSceneProxy, FHitProxyId HitProxyId) { return NativeCall<bool, FRHICommandList *, FSceneView *, FHitProxyDrawingPolicyFactory::ContextType, const FMeshBatch *, bool, bool, FPrimitiveSceneProxy *, FHitProxyId>(nullptr, "FHitProxyDrawingPolicyFactory.DrawDynamicMesh", RHICmdList, View, DrawingContext, Mesh, bBackFace, bPreFog, PrimitiveSceneProxy, HitProxyId); }
};

