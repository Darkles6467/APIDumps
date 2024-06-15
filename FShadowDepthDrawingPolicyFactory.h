#pragma once

#include "BaseDeclarations.h"
#include "FHitProxyId.h"

struct FShadowDepthDrawingPolicyFactory
{

	// Functions

	static void AddStaticMesh(FScene * Scene, FStaticMesh * StaticMesh) { NativeCall<void, FScene *, FStaticMesh *>(nullptr, "FShadowDepthDrawingPolicyFactory.AddStaticMesh", Scene, StaticMesh); }
	static bool DrawDynamicMesh(FRHICommandList * RHICmdList, FSceneView * View, FShadowDepthDrawingPolicyFactory::ContextType Context, const FMeshBatch * Mesh, bool bBackFace, bool bPreFog, FPrimitiveSceneProxy * PrimitiveSceneProxy, FHitProxyId HitProxyId) { return NativeCall<bool, FRHICommandList *, FSceneView *, FShadowDepthDrawingPolicyFactory::ContextType, const FMeshBatch *, bool, bool, FPrimitiveSceneProxy *, FHitProxyId>(nullptr, "FShadowDepthDrawingPolicyFactory.DrawDynamicMesh", RHICmdList, View, Context, Mesh, bBackFace, bPreFog, PrimitiveSceneProxy, HitProxyId); }
};

