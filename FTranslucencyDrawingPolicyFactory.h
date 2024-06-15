#pragma once

#include "BaseDeclarations.h"
#include "FHitProxyId.h"

struct FTranslucencyDrawingPolicyFactory
{

	// Functions

	static void CopySceneColor(FRHICommandList * RHICmdList, const FViewInfo * View, FPrimitiveSceneProxy * PrimitiveSceneProxy) { NativeCall<void, FRHICommandList *, const FViewInfo *, FPrimitiveSceneProxy *>(nullptr, "FTranslucencyDrawingPolicyFactory.CopySceneColor", RHICmdList, View, PrimitiveSceneProxy); }
	static bool DrawDynamicMesh(FRHICommandList * RHICmdList, const FViewInfo * View, FTranslucencyDrawingPolicyFactory::ContextType DrawingContext, const FMeshBatch * Mesh, bool bBackFace, bool bPreFog, FPrimitiveSceneProxy * PrimitiveSceneProxy, FHitProxyId HitProxyId) { return NativeCall<bool, FRHICommandList *, const FViewInfo *, FTranslucencyDrawingPolicyFactory::ContextType, const FMeshBatch *, bool, bool, FPrimitiveSceneProxy *, FHitProxyId>(nullptr, "FTranslucencyDrawingPolicyFactory.DrawDynamicMesh", RHICmdList, View, DrawingContext, Mesh, bBackFace, bPreFog, PrimitiveSceneProxy, HitProxyId); }
	static bool DrawMesh(FRHICommandList * RHICmdList, const FViewInfo * View, FTranslucencyDrawingPolicyFactory::ContextType DrawingContext, const FMeshBatch * Mesh, const unsigned __int64 * BatchElementMask, bool bBackFace, bool bPreFog, FPrimitiveSceneProxy * PrimitiveSceneProxy, FHitProxyId HitProxyId) { return NativeCall<bool, FRHICommandList *, const FViewInfo *, FTranslucencyDrawingPolicyFactory::ContextType, const FMeshBatch *, const unsigned __int64 *, bool, bool, FPrimitiveSceneProxy *, FHitProxyId>(nullptr, "FTranslucencyDrawingPolicyFactory.DrawMesh", RHICmdList, View, DrawingContext, Mesh, BatchElementMask, bBackFace, bPreFog, PrimitiveSceneProxy, HitProxyId); }
};

