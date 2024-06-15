#pragma once

#include "BaseDeclarations.h"
#include "FHitProxyId.h"

struct FLightMapDensityDrawingPolicyFactory
{

	// Functions

	static bool DrawDynamicMesh(FRHICommandList * RHICmdList, const FViewInfo * View, FLightMapDensityDrawingPolicyFactory::ContextType DrawingContext, const FMeshBatch * Mesh, bool bBackFace, bool bPreFog, FPrimitiveSceneProxy * PrimitiveSceneProxy, FHitProxyId HitProxyId) { return NativeCall<bool, FRHICommandList *, const FViewInfo *, FLightMapDensityDrawingPolicyFactory::ContextType, const FMeshBatch *, bool, bool, FPrimitiveSceneProxy *, FHitProxyId>(nullptr, "FLightMapDensityDrawingPolicyFactory.DrawDynamicMesh", RHICmdList, View, DrawingContext, Mesh, bBackFace, bPreFog, PrimitiveSceneProxy, HitProxyId); }
};

