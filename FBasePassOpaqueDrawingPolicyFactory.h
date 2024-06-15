#pragma once

#include "BaseDeclarations.h"
#include "FHitProxyId.h"

struct FBasePassOpaqueDrawingPolicyFactory
{

	// Functions

	static void AddStaticMesh(FRHICommandList * RHICmdList, FScene * Scene, FStaticMesh * StaticMesh) { NativeCall<void, FRHICommandList *, FScene *, FStaticMesh *>(nullptr, "FBasePassOpaqueDrawingPolicyFactory.AddStaticMesh", RHICmdList, Scene, StaticMesh); }
	static bool DrawDynamicMesh(FRHICommandList * RHICmdList, const FViewInfo * View, FBasePassOpaqueDrawingPolicyFactory::ContextType DrawingContext, const FMeshBatch * Mesh, bool bBackFace, bool bPreFog, FPrimitiveSceneProxy * PrimitiveSceneProxy, FHitProxyId HitProxyId) { return NativeCall<bool, FRHICommandList *, const FViewInfo *, FBasePassOpaqueDrawingPolicyFactory::ContextType, const FMeshBatch *, bool, bool, FPrimitiveSceneProxy *, FHitProxyId>(nullptr, "FBasePassOpaqueDrawingPolicyFactory.DrawDynamicMesh", RHICmdList, View, DrawingContext, Mesh, bBackFace, bPreFog, PrimitiveSceneProxy, HitProxyId); }
};

