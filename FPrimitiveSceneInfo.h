#pragma once

#include "BaseDeclarations.h"
#include "FDeferredCleanupInterface.h"

struct FPrimitiveSceneInfo : FDeferredCleanupInterface
{
	char __padding[0x108L];
	bool& HasCachedReflectionCaptureProxyField() { return *GetNativePointerField<bool*>(this, "FPrimitiveSceneInfo.HasCachedReflectionCaptureProxy"); }
	FVector& LastPositionWhenReflectionCaptureProxyWasCachedField() { return *GetNativePointerField<FVector*>(this, "FPrimitiveSceneInfo.LastPositionWhenReflectionCaptureProxyWasCached"); }
	bool& bIsProxyMeshParentField() { return *GetNativePointerField<bool*>(this, "FPrimitiveSceneInfo.bIsProxyMeshParent"); }
	bool& bHasActiveProxyMeshChildrenField() { return *GetNativePointerField<bool*>(this, "FPrimitiveSceneInfo.bHasActiveProxyMeshChildren"); }
	float& DistanceSQField() { return *GetNativePointerField<float*>(this, "FPrimitiveSceneInfo.DistanceSQ"); }
	FPrimitiveComponentId& PrimitiveComponentIdField() { return *GetNativePointerField<FPrimitiveComponentId*>(this, "FPrimitiveSceneInfo.PrimitiveComponentId"); }
	long double * ComponentLastRenderTimeField() { return GetNativePointerField<long double *>(this, "FPrimitiveSceneInfo.ComponentLastRenderTime"); }
	long double * ComponentLastRenderTimeIgnoreShadowField() { return GetNativePointerField<long double *>(this, "FPrimitiveSceneInfo.ComponentLastRenderTimeIgnoreShadow"); }
	long double * ActorLastRenderTimeField() { return GetNativePointerField<long double *>(this, "FPrimitiveSceneInfo.ActorLastRenderTime"); }
	long double * ActorLastRenderTimeIgnoreShadowField() { return GetNativePointerField<long double *>(this, "FPrimitiveSceneInfo.ActorLastRenderTimeIgnoreShadow"); }
	FPrimitiveComponentId& LightingAttachmentRootField() { return *GetNativePointerField<FPrimitiveComponentId*>(this, "FPrimitiveSceneInfo.LightingAttachmentRoot"); }
	TIndirectArray<FStaticMesh>& StaticMeshesField() { return *GetNativePointerField<TIndirectArray<FStaticMesh>*>(this, "FPrimitiveSceneInfo.StaticMeshes"); }
	FOctreeElementId& OctreeIdField() { return *GetNativePointerField<FOctreeElementId*>(this, "FPrimitiveSceneInfo.OctreeId"); }
	const FIndirectLightingCacheAllocation * IndirectLightingCacheAllocationField() { return GetNativePointerField<const FIndirectLightingCacheAllocation *>(this, "FPrimitiveSceneInfo.IndirectLightingCacheAllocation"); }
	TWeakPtr<FReflectionCaptureProxy,1>& CachedReflectionCaptureProxyField() { return *GetNativePointerField<TWeakPtr<FReflectionCaptureProxy,1>*>(this, "FPrimitiveSceneInfo.CachedReflectionCaptureProxy"); }
	TArray<int,TInlineAllocator<1> >& DistanceFieldInstanceIndicesField() { return *GetNativePointerField<TArray<int,TInlineAllocator<1> >*>(this, "FPrimitiveSceneInfo.DistanceFieldInstanceIndices"); }
	FHitProxyId& DefaultDynamicHitProxyIdField() { return *GetNativePointerField<FHitProxyId*>(this, "FPrimitiveSceneInfo.DefaultDynamicHitProxyId"); }
	FLightPrimitiveInteraction * LightListField() { return GetNativePointerField<FLightPrimitiveInteraction *>(this, "FPrimitiveSceneInfo.LightList"); }
	long double& LastRenderTimeField() { return *GetNativePointerField<long double*>(this, "FPrimitiveSceneInfo.LastRenderTime"); }
	float& LastVisibilityChangeTimeField() { return *GetNativePointerField<float*>(this, "FPrimitiveSceneInfo.LastVisibilityChangeTime"); }
	FScene * SceneField() { return GetNativePointerField<FScene *>(this, "FPrimitiveSceneInfo.Scene"); }
	int& PackedIndexField() { return *GetNativePointerField<int*>(this, "FPrimitiveSceneInfo.PackedIndex"); }
	bool& bNeedsStaticMeshUpdateField() { return *GetNativePointerField<bool*>(this, "FPrimitiveSceneInfo.bNeedsStaticMeshUpdate"); }

	// Functions

	void GatherLightingAttachmentGroupPrimitives(TArray<FPrimitiveSceneInfo *,SceneRenderingAllocator> * OutChildSceneInfos) { NativeCall<void, TArray<FPrimitiveSceneInfo *,SceneRenderingAllocator> *>(this, "FPrimitiveSceneInfo.GatherLightingAttachmentGroupPrimitives", OutChildSceneInfos); }
	FBoxSphereBounds * GetAttachmentGroupBounds(FBoxSphereBounds * result) { return NativeCall<FBoxSphereBounds *, FBoxSphereBounds *>(this, "FPrimitiveSceneInfo.GetAttachmentGroupBounds", result); }
	bool ShouldRenderVelocity(const FViewInfo * View, bool bCheckVisibility) { return NativeCall<bool, const FViewInfo *, bool>(this, "FPrimitiveSceneInfo.ShouldRenderVelocity", View, bCheckVisibility); }
	void UpdateStaticMeshes(FRHICommandListImmediate * RHICmdList) { NativeCall<void, FRHICommandListImmediate *>(this, "FPrimitiveSceneInfo.UpdateStaticMeshes", RHICmdList); }
};

