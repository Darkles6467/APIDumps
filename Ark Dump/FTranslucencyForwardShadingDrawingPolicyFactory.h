#pragma once

#include "BaseDeclarations.h"
#include "FHitProxyId.h"

struct FTranslucencyForwardShadingDrawingPolicyFactory
{

	// Functions

	static bool DrawDynamicMesh(FRHICommandList * RHICmdList, const FViewInfo * View, FTranslucencyForwardShadingDrawingPolicyFactory::ContextType DrawingContext, const FMeshBatch * Mesh, bool bBackFace, bool bPreFog, FPrimitiveSceneProxy * PrimitiveSceneProxy, FHitProxyId HitProxyId) { return NativeCall<bool, FRHICommandList *, const FViewInfo *, FTranslucencyForwardShadingDrawingPolicyFactory::ContextType, const FMeshBatch *, bool, bool, FPrimitiveSceneProxy *, FHitProxyId>(nullptr, "FTranslucencyForwardShadingDrawingPolicyFactory.DrawDynamicMesh", RHICmdList, View, DrawingContext, Mesh, bBackFace, bPreFog, PrimitiveSceneProxy, HitProxyId); }
};

