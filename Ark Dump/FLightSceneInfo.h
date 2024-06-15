#pragma once

#include "BaseDeclarations.h"
#include "FRenderResource.h"

struct FLightSceneInfo : FRenderResource
{
	char __padding[0x1d0L];
	FLightPrimitiveInteraction * DynamicPrimitiveListField() { return GetNativePointerField<FLightPrimitiveInteraction *>(this, "FLightSceneInfo.DynamicPrimitiveList"); }
	int& IdField() { return *GetNativePointerField<int*>(this, "FLightSceneInfo.Id"); }
	FOctreeElementId& OctreeIdField() { return *GetNativePointerField<FOctreeElementId*>(this, "FLightSceneInfo.OctreeId"); }
	TScopedPointer<FLightTileIntersectionResources>& TileIntersectionResourcesField() { return *GetNativePointerField<TScopedPointer<FLightTileIntersectionResources>*>(this, "FLightSceneInfo.TileIntersectionResources"); }
	float& BloomScaleField() { return *GetNativePointerField<float*>(this, "FLightSceneInfo.BloomScale"); }
	float& BloomThresholdField() { return *GetNativePointerField<float*>(this, "FLightSceneInfo.BloomThreshold"); }
	FColor& BloomTintField() { return *GetNativePointerField<FColor*>(this, "FLightSceneInfo.BloomTint"); }
	int& NumUnbuiltInteractionsField() { return *GetNativePointerField<int*>(this, "FLightSceneInfo.NumUnbuiltInteractions"); }
	bool& bCreatePerObjectShadowsForDynamicObjectsField() { return *GetNativePointerField<bool*>(this, "FLightSceneInfo.bCreatePerObjectShadowsForDynamicObjects"); }
	FScene * SceneField() { return GetNativePointerField<FScene *>(this, "FLightSceneInfo.Scene"); }

	// Functions

	void ReleaseRHI() { NativeCall<void>(this, "FLightSceneInfo.ReleaseRHI"); }
	bool ShouldRenderLight(const FViewInfo * View) { return NativeCall<bool, const FViewInfo *>(this, "FLightSceneInfo.ShouldRenderLight", View); }
	bool ShouldRenderViewIndependentWholeSceneShadows() { return NativeCall<bool>(this, "FLightSceneInfo.ShouldRenderViewIndependentWholeSceneShadows"); }
};

