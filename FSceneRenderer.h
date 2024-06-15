#pragma once

#include "BaseDeclarations.h"
#include "FViewInfo.h"

struct FSceneRenderer
{
	char __padding[0x190L];
	FScene * SceneField() { return GetNativePointerField<FScene *>(this, "FSceneRenderer.Scene"); }
	TArray<FViewInfo>& ViewsField() { return *GetNativePointerField<TArray<FViewInfo>*>(this, "FSceneRenderer.Views"); }
	FMeshElementCollector& MeshCollectorField() { return *GetNativePointerField<FMeshElementCollector*>(this, "FSceneRenderer.MeshCollector"); }
	bool& bHasRequestedToggleFreezeField() { return *GetNativePointerField<bool*>(this, "FSceneRenderer.bHasRequestedToggleFreeze"); }
	bool& bUsedPrecomputedVisibilityField() { return *GetNativePointerField<bool*>(this, "FSceneRenderer.bUsedPrecomputedVisibility"); }
	unsigned int& FrameNumberField() { return *GetNativePointerField<unsigned int*>(this, "FSceneRenderer.FrameNumber"); }
	ERHIFeatureLevel::Type& FeatureLevelField() { return *GetNativePointerField<ERHIFeatureLevel::Type*>(this, "FSceneRenderer.FeatureLevel"); }

	// Functions

	void InitAtmosphereConstants() { NativeCall<void>(this, "FSceneRenderer.InitAtmosphereConstants"); }
	static void GatherSimpleLights(FSceneViewFamily * ViewFamily, const TArray<FViewInfo> * Views, FSimpleLightArray * SimpleLights) { NativeCall<void, FSceneViewFamily *, const TArray<FViewInfo> *, FSimpleLightArray *>(nullptr, "FSceneRenderer.GatherSimpleLights", ViewFamily, Views, SimpleLights); }
	void InitFogConstants() { NativeCall<void>(this, "FSceneRenderer.InitFogConstants"); }
	void RenderDistortion(FRHICommandListImmediate * RHICmdList) { NativeCall<void, FRHICommandListImmediate *>(this, "FSceneRenderer.RenderDistortion", RHICmdList); }
	void ComputeViewVisibility(FRHICommandListImmediate * RHICmdList) { NativeCall<void, FRHICommandListImmediate *>(this, "FSceneRenderer.ComputeViewVisibility", RHICmdList); }
	bool DoOcclusionQueries(ERHIFeatureLevel::Type InFeatureLevel) { return NativeCall<bool, ERHIFeatureLevel::Type>(this, "FSceneRenderer.DoOcclusionQueries", InFeatureLevel); }
	void GatherDynamicMeshElements(TArray<FViewInfo> * Views, const FScene * Scene, FSceneViewFamily * ViewFamily, const TArray<unsigned char,SceneRenderingAllocator> * HasDynamicMeshElementsMasks, const TArray<unsigned char,SceneRenderingAllocator> * HasDynamicEditorMeshElementsMasks, FMeshElementCollector * Collector) { NativeCall<void, TArray<FViewInfo> *, const FScene *, FSceneViewFamily *, const TArray<unsigned char,SceneRenderingAllocator> *, const TArray<unsigned char,SceneRenderingAllocator> *, FMeshElementCollector *>(this, "FSceneRenderer.GatherDynamicMeshElements", Views, Scene, ViewFamily, HasDynamicMeshElementsMasks, HasDynamicEditorMeshElementsMasks, Collector); }
	void OnStartFrame() { NativeCall<void>(this, "FSceneRenderer.OnStartFrame"); }
	void PostVisibilityFrameSetup() { NativeCall<void>(this, "FSceneRenderer.PostVisibilityFrameSetup"); }
	void PostVisibilityFrameSetupPerLight(const FLightSceneInfoCompact * LightSceneInfoCompact, int LightIndex, bool bCheckLightShafts) { NativeCall<void, const FLightSceneInfoCompact *, int, bool>(this, "FSceneRenderer.PostVisibilityFrameSetupPerLight", LightSceneInfoCompact, LightIndex, bCheckLightShafts); }
	void PreVisibilityFrameSetup(FRHICommandListImmediate * RHICmdList) { NativeCall<void, FRHICommandListImmediate *>(this, "FSceneRenderer.PreVisibilityFrameSetup", RHICmdList); }
	void RenderCustomDepthPass(FRHICommandListImmediate * RHICmdList) { NativeCall<void, FRHICommandListImmediate *>(this, "FSceneRenderer.RenderCustomDepthPass", RHICmdList); }
	void RenderFinish(FRHICommandListImmediate * RHICmdList) { NativeCall<void, FRHICommandListImmediate *>(this, "FSceneRenderer.RenderFinish", RHICmdList); }
	void AddViewDependentWholeSceneShadowsForView(TArray<FProjectedShadowInfo *,SceneRenderingAllocator> * ShadowInfos, FVisibleLightInfo * VisibleLightInfo, FLightSceneInfo * LightSceneInfo) { NativeCall<void, TArray<FProjectedShadowInfo *,SceneRenderingAllocator> *, FVisibleLightInfo *, FLightSceneInfo *>(this, "FSceneRenderer.AddViewDependentWholeSceneShadowsForView", ShadowInfos, VisibleLightInfo, LightSceneInfo); }
	bool CheckForProjectedShadows(const FLightSceneInfo * LightSceneInfo) { return NativeCall<bool, const FLightSceneInfo *>(this, "FSceneRenderer.CheckForProjectedShadows", LightSceneInfo); }
	void GatherShadowDynamicMeshElements() { NativeCall<void>(this, "FSceneRenderer.GatherShadowDynamicMeshElements"); }
	void GatherShadowPrimitives(const TArray<FProjectedShadowInfo *,SceneRenderingAllocator> * PreShadows, const TArray<FProjectedShadowInfo *,SceneRenderingAllocator> * ViewDependentWholeSceneShadows, bool bStaticSceneOnly) { NativeCall<void, const TArray<FProjectedShadowInfo *,SceneRenderingAllocator> *, const TArray<FProjectedShadowInfo *,SceneRenderingAllocator> *, bool>(this, "FSceneRenderer.GatherShadowPrimitives", PreShadows, ViewDependentWholeSceneShadows, bStaticSceneOnly); }
	void GatherShadowsForPrimitiveInner(const FPrimitiveSceneInfoCompact * PrimitiveSceneInfoCompact, const TArray<FProjectedShadowInfo *,SceneRenderingAllocator> * PreShadows, const TArray<FProjectedShadowInfo *,SceneRenderingAllocator> * ViewDependentWholeSceneShadows, bool bStaticSceneOnly) { NativeCall<void, const FPrimitiveSceneInfoCompact *, const TArray<FProjectedShadowInfo *,SceneRenderingAllocator> *, const TArray<FProjectedShadowInfo *,SceneRenderingAllocator> *, bool>(this, "FSceneRenderer.GatherShadowsForPrimitiveInner", PrimitiveSceneInfoCompact, PreShadows, ViewDependentWholeSceneShadows, bStaticSceneOnly); }
	void InitProjectedShadowVisibility(FRHICommandListImmediate * RHICmdList) { NativeCall<void, FRHICommandListImmediate *>(this, "FSceneRenderer.InitProjectedShadowVisibility", RHICmdList); }
	bool ShouldRenderTranslucency() { return NativeCall<bool>(this, "FSceneRenderer.ShouldRenderTranslucency"); }
};

