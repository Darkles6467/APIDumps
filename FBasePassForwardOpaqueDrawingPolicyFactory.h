#pragma once

#include "BaseDeclarations.h"
#include "FHitProxyId.h"

struct FBasePassForwardOpaqueDrawingPolicyFactory
{

	// Functions

	static void AddStaticMesh(FRHICommandList * RHICmdList, FScene * Scene, FStaticMesh * StaticMesh) { NativeCall<void, FRHICommandList *, FScene *, FStaticMesh *>(nullptr, "FBasePassForwardOpaqueDrawingPolicyFactory.AddStaticMesh", RHICmdList, Scene, StaticMesh); }
	static bool DrawDynamicMesh(FRHICommandList * RHICmdList, const FViewInfo * View, FBasePassForwardOpaqueDrawingPolicyFactory::ContextType DrawingContext, const FMeshBatch * Mesh, bool bBackFace, bool bPreFog, FPrimitiveSceneProxy * PrimitiveSceneProxy, FHitProxyId HitProxyId) { return NativeCall<bool, FRHICommandList *, const FViewInfo *, FBasePassForwardOpaqueDrawingPolicyFactory::ContextType, const FMeshBatch *, bool, bool, FPrimitiveSceneProxy *, FHitProxyId>(nullptr, "FBasePassForwardOpaqueDrawingPolicyFactory.DrawDynamicMesh", RHICmdList, View, DrawingContext, Mesh, bBackFace, bPreFog, PrimitiveSceneProxy, HitProxyId); }
};

