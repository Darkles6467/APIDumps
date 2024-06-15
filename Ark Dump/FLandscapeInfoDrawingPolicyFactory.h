#pragma once

#include "BaseDeclarations.h"
#include "FHitProxyId.h"

struct FLandscapeInfoDrawingPolicyFactory
{

	// Functions

	static bool DrawDynamicMesh(FRHICommandList * RHICmdList, FSceneView * View, FLandscapeInfoDrawingPolicyFactory::ContextType Context, const FMeshBatch * Mesh, bool bBackFace, bool bPreFog, FPrimitiveSceneProxy * PrimitiveSceneProxy, FHitProxyId HitProxyId) { return NativeCall<bool, FRHICommandList *, FSceneView *, FLandscapeInfoDrawingPolicyFactory::ContextType, const FMeshBatch *, bool, bool, FPrimitiveSceneProxy *, FHitProxyId>(nullptr, "FLandscapeInfoDrawingPolicyFactory.DrawDynamicMesh", RHICmdList, View, Context, Mesh, bBackFace, bPreFog, PrimitiveSceneProxy, HitProxyId); }
};

