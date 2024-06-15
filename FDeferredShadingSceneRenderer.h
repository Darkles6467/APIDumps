#pragma once

#include "BaseDeclarations.h"
#include "FSceneRenderer.h"
#include "FLightShaftsOutput.h"
#include "FPooledRenderTarget.h"
#include "FLightSceneInfoCompact.h"
#include "FProjectedShadowInfo.h"
#include "FSortedLightSceneInfo.h"

struct FDeferredShadingSceneRenderer : FSceneRenderer
{
	char __padding[0x98L];
	EDepthDrawingMode& EarlyZPassModeField() { return *GetNativePointerField<EDepthDrawingMode*>(this, "FDeferredShadingSceneRenderer.EarlyZPassMode"); }
	FTextureLayout& TranslucentSelfShadowLayoutField() { return *GetNativePointerField<FTextureLayout*>(this, "FDeferredShadingSceneRenderer.TranslucentSelfShadowLayout"); }
	int& CachedTranslucentSelfShadowLightIdField() { return *GetNativePointerField<int*>(this, "FDeferredShadingSceneRenderer.CachedTranslucentSelfShadowLightId"); }

	// Functions

	void ClearGBufferAtMaxZ(FRHICommandList * RHICmdList) { NativeCall<void, FRHICommandList *>(this, "FDeferredShadingSceneRenderer.ClearGBufferAtMaxZ", RHICmdList); }
	void Render(FRHICommandListImmediate * RHICmdList) { NativeCall<void, FRHICommandListImmediate *>(this, "FDeferredShadingSceneRenderer.Render", RHICmdList); }
	void RenderAtmosphere(FRHICommandListImmediate * RHICmdList, FLightShaftsOutput LightShaftsOutput) { NativeCall<void, FRHICommandListImmediate *, FLightShaftsOutput>(this, "FDeferredShadingSceneRenderer.RenderAtmosphere", RHICmdList, LightShaftsOutput); }
	bool RenderBasePass(FRHICommandListImmediate * RHICmdList) { return NativeCall<bool, FRHICommandListImmediate *>(this, "FDeferredShadingSceneRenderer.RenderBasePass", RHICmdList); }
	void RenderBasePassDynamicData(FRHICommandList * RHICmdList, const FViewInfo * View, bool * bOutDirty) { NativeCall<void, FRHICommandList *, const FViewInfo *, bool *>(this, "FDeferredShadingSceneRenderer.RenderBasePassDynamicData", RHICmdList, View, bOutDirty); }
	void RenderBasePassDynamicDataParallel(FViewInfo * View, FRHICommandList * ParentCmdList, bool * bOutDirty) { NativeCall<void, FViewInfo *, FRHICommandList *, bool *>(this, "FDeferredShadingSceneRenderer.RenderBasePassDynamicDataParallel", View, ParentCmdList, bOutDirty); }
	bool RenderBasePassStaticDataDefault(FRHICommandList * RHICmdList, FViewInfo * View) { return NativeCall<bool, FRHICommandList *, FViewInfo *>(this, "FDeferredShadingSceneRenderer.RenderBasePassStaticDataDefault", RHICmdList, View); }
	void RenderBasePassStaticDataDefaultParallel(FViewInfo * View, int Width, FRHICommandList * ParentCmdList, bool * OutDirty) { NativeCall<void, FViewInfo *, int, FRHICommandList *, bool *>(this, "FDeferredShadingSceneRenderer.RenderBasePassStaticDataDefaultParallel", View, Width, ParentCmdList, OutDirty); }
	bool RenderBasePassStaticDataMasked(FRHICommandList * RHICmdList, FViewInfo * View) { return NativeCall<bool, FRHICommandList *, FViewInfo *>(this, "FDeferredShadingSceneRenderer.RenderBasePassStaticDataMasked", RHICmdList, View); }
	void RenderBasePassStaticDataMaskedParallel(FViewInfo * View, int Width, FRHICommandList * ParentCmdList, bool * OutDirty) { NativeCall<void, FViewInfo *, int, FRHICommandList *, bool *>(this, "FDeferredShadingSceneRenderer.RenderBasePassStaticDataMaskedParallel", View, Width, ParentCmdList, OutDirty); }
	bool RenderBasePassView(FRHICommandListImmediate * RHICmdList, FViewInfo * View) { return NativeCall<bool, FRHICommandListImmediate *, FViewInfo *>(this, "FDeferredShadingSceneRenderer.RenderBasePassView", RHICmdList, View); }
	bool RenderDistanceFieldAOSurfaceCache(FRHICommandListImmediate * RHICmdList, const FDistanceFieldAOParameters * Parameters, const TRefCountPtr<IPooledRenderTarget> * VelocityTexture, TRefCountPtr<IPooledRenderTarget> * OutDynamicBentNormalAO, TRefCountPtr<IPooledRenderTarget> * OutDynamicIrradiance, bool bVisualizeAmbientOcclusion, bool bVisualizeGlobalIllumination) { return NativeCall<bool, FRHICommandListImmediate *, const FDistanceFieldAOParameters *, const TRefCountPtr<IPooledRenderTarget> *, TRefCountPtr<IPooledRenderTarget> *, TRefCountPtr<IPooledRenderTarget> *, bool, bool>(this, "FDeferredShadingSceneRenderer.RenderDistanceFieldAOSurfaceCache", RHICmdList, Parameters, VelocityTexture, OutDynamicBentNormalAO, OutDynamicIrradiance, bVisualizeAmbientOcclusion, bVisualizeGlobalIllumination); }
	void RenderDynamicSkyLighting(FRHICommandListImmediate * RHICmdList, const TRefCountPtr<IPooledRenderTarget> * VelocityTexture, TRefCountPtr<IPooledRenderTarget> * DynamicBentNormalAO) { NativeCall<void, FRHICommandListImmediate *, const TRefCountPtr<IPooledRenderTarget> *, TRefCountPtr<IPooledRenderTarget> *>(this, "FDeferredShadingSceneRenderer.RenderDynamicSkyLighting", RHICmdList, VelocityTexture, DynamicBentNormalAO); }
	void RenderMeshDistanceFieldVisualization(FRHICommandListImmediate * RHICmdList, const FDistanceFieldAOParameters * Parameters) { NativeCall<void, FRHICommandListImmediate *, const FDistanceFieldAOParameters *>(this, "FDeferredShadingSceneRenderer.RenderMeshDistanceFieldVisualization", RHICmdList, Parameters); }
	bool RenderPrePass(FRHICommandListImmediate * RHICmdList) { return NativeCall<bool, FRHICommandListImmediate *>(this, "FDeferredShadingSceneRenderer.RenderPrePass", RHICmdList); }
	bool RenderPrePassView(FRHICommandListImmediate * RHICmdList, FViewInfo * View) { return NativeCall<bool, FRHICommandListImmediate *, FViewInfo *>(this, "FDeferredShadingSceneRenderer.RenderPrePassView", RHICmdList, View); }
	bool RenderPrePassViewDynamic(FRHICommandList * RHICmdList, FViewInfo * View) { return NativeCall<bool, FRHICommandList *, FViewInfo *>(this, "FDeferredShadingSceneRenderer.RenderPrePassViewDynamic", RHICmdList, View); }
	void RenderPrePassViewParallel(FViewInfo * View, int Width, FRHICommandListImmediate * ParentCmdList, bool * OutDirty) { NativeCall<void, FViewInfo *, int, FRHICommandListImmediate *, bool *>(this, "FDeferredShadingSceneRenderer.RenderPrePassViewParallel", View, Width, ParentCmdList, OutDirty); }
	static bool ShouldCompositeEditorPrimitives(const FViewInfo * View) { return NativeCall<bool, const FViewInfo *>(nullptr, "FDeferredShadingSceneRenderer.ShouldCompositeEditorPrimitives", View); }
	bool ShouldPrepareDistanceFieldScene() { return NativeCall<bool>(this, "FDeferredShadingSceneRenderer.ShouldPrepareDistanceFieldScene"); }
	bool ShouldPrepareForDistanceFieldAO() { return NativeCall<bool>(this, "FDeferredShadingSceneRenderer.ShouldPrepareForDistanceFieldAO"); }
	bool ShouldPrepareForDistanceFieldShadows() { return NativeCall<bool>(this, "FDeferredShadingSceneRenderer.ShouldPrepareForDistanceFieldShadows"); }
	bool ShouldPrepareGlobalDistanceField() { return NativeCall<bool>(this, "FDeferredShadingSceneRenderer.ShouldPrepareGlobalDistanceField"); }
	bool ShouldRenderDistanceFieldAO() { return NativeCall<bool>(this, "FDeferredShadingSceneRenderer.ShouldRenderDistanceFieldAO"); }
	void SortBasePassStaticData(FVector ViewPosition) { NativeCall<void, FVector>(this, "FDeferredShadingSceneRenderer.SortBasePassStaticData", ViewPosition); }
	void UpdateDownsampledDepthSurface(FRHICommandList * RHICmdList) { NativeCall<void, FRHICommandList *>(this, "FDeferredShadingSceneRenderer.UpdateDownsampledDepthSurface", RHICmdList); }
	void UpdateGlobalDistanceFieldObjectBuffers(FRHICommandListImmediate * RHICmdList) { NativeCall<void, FRHICommandListImmediate *>(this, "FDeferredShadingSceneRenderer.UpdateGlobalDistanceFieldObjectBuffers", RHICmdList); }
	void BlendLandscapeInfoLayers(FRHICommandListImmediate * RHICmdList, int TileCount, int LayerCount) { NativeCall<void, FRHICommandListImmediate *, int, int>(this, "FDeferredShadingSceneRenderer.BlendLandscapeInfoLayers", RHICmdList, TileCount, LayerCount); }
	bool CheckForLightFunction(const FLightSceneInfo * LightSceneInfo) { return NativeCall<bool, const FLightSceneInfo *>(this, "FDeferredShadingSceneRenderer.CheckForLightFunction", LightSceneInfo); }
	bool RenderFog(FRHICommandListImmediate * RHICmdList, FLightShaftsOutput LightShaftsOutput) { return NativeCall<bool, FRHICommandListImmediate *, FLightShaftsOutput>(this, "FDeferredShadingSceneRenderer.RenderFog", RHICmdList, LightShaftsOutput); }
	void RenderLandscapeInfo(FRHICommandListImmediate * RHICmdList) { NativeCall<void, FRHICommandListImmediate *>(this, "FDeferredShadingSceneRenderer.RenderLandscapeInfo", RHICmdList); }
	void RenderLandscapeLayer(FRHICommandListImmediate * RHICmdList, unsigned int LandscapeSize, FRHITexture * LayerInfo, FRHITexture * LayerID, FRHITexture * DepthSurface, FRHITexture * PreviousInfo, FRHITexture * PreviousID) { NativeCall<void, FRHICommandListImmediate *, unsigned int, FRHITexture *, FRHITexture *, FRHITexture *, FRHITexture *, FRHITexture *>(this, "FDeferredShadingSceneRenderer.RenderLandscapeLayer", RHICmdList, LandscapeSize, LayerInfo, LayerID, DepthSurface, PreviousInfo, PreviousID); }
	void RenderLight(FRHICommandList * RHICmdList, const FLightSceneInfo * LightSceneInfo, bool bRenderOverlap, bool bIssueDrawEvent) { NativeCall<void, FRHICommandList *, const FLightSceneInfo *, bool, bool>(this, "FDeferredShadingSceneRenderer.RenderLight", RHICmdList, LightSceneInfo, bRenderOverlap, bIssueDrawEvent); }
	void RenderLightArrayForOverlapViewmode(FRHICommandListImmediate * RHICmdList, const TSparseArray<FLightSceneInfoCompact,FDefaultSparseArrayAllocator> * LightArray) { NativeCall<void, FRHICommandListImmediate *, const TSparseArray<FLightSceneInfoCompact,FDefaultSparseArrayAllocator> *>(this, "FDeferredShadingSceneRenderer.RenderLightArrayForOverlapViewmode", RHICmdList, LightArray); }
	bool RenderLightFunctionForMaterial(FRHICommandListImmediate * RHICmdList, const FLightSceneInfo * LightSceneInfo, const FMaterialRenderProxy * MaterialProxy, bool bLightAttenuationCleared, bool bRenderingPreviewShadowsIndicator) { return NativeCall<bool, FRHICommandListImmediate *, const FLightSceneInfo *, const FMaterialRenderProxy *, bool, bool>(this, "FDeferredShadingSceneRenderer.RenderLightFunctionForMaterial", RHICmdList, LightSceneInfo, MaterialProxy, bLightAttenuationCleared, bRenderingPreviewShadowsIndicator); }
	bool RenderLightMapDensities(FRHICommandListImmediate * RHICmdList) { return NativeCall<bool, FRHICommandListImmediate *>(this, "FDeferredShadingSceneRenderer.RenderLightMapDensities", RHICmdList); }
	void RenderLightShaftBloom(FRHICommandListImmediate * RHICmdList) { NativeCall<void, FRHICommandListImmediate *>(this, "FDeferredShadingSceneRenderer.RenderLightShaftBloom", RHICmdList); }
	FLightShaftsOutput * RenderLightShaftOcclusion(FLightShaftsOutput * result, FRHICommandListImmediate * RHICmdList) { return NativeCall<FLightShaftsOutput *, FLightShaftsOutput *, FRHICommandListImmediate *>(this, "FDeferredShadingSceneRenderer.RenderLightShaftOcclusion", result, RHICmdList); }
	void RenderLights(FRHICommandListImmediate * RHICmdList) { NativeCall<void, FRHICommandListImmediate *>(this, "FDeferredShadingSceneRenderer.RenderLights", RHICmdList); }
	void RenderSimpleLightsStandardDeferred(FRHICommandListImmediate * RHICmdList, const FSimpleLightArray * SimpleLights) { NativeCall<void, FRHICommandListImmediate *, const FSimpleLightArray *>(this, "FDeferredShadingSceneRenderer.RenderSimpleLightsStandardDeferred", RHICmdList, SimpleLights); }
	void RenderStationaryLightOverlap(FRHICommandListImmediate * RHICmdList) { NativeCall<void, FRHICommandListImmediate *>(this, "FDeferredShadingSceneRenderer.RenderStationaryLightOverlap", RHICmdList); }
	void UpdateLandscapeMasks(FRHICommandListImmediate * RHICmdList, int TileCount, int LayerCount) { NativeCall<void, FRHICommandListImmediate *, int, int>(this, "FDeferredShadingSceneRenderer.UpdateLandscapeMasks", RHICmdList, TileCount, LayerCount); }
	void BeginOcclusionTests(FRHICommandListImmediate * RHICmdList) { NativeCall<void, FRHICommandListImmediate *>(this, "FDeferredShadingSceneRenderer.BeginOcclusionTests", RHICmdList); }
	void InitViews(FRHICommandListImmediate * RHICmdList) { NativeCall<void, FRHICommandListImmediate *>(this, "FDeferredShadingSceneRenderer.InitViews", RHICmdList); }
	void RenderDeferredReflections(FRHICommandListImmediate * RHICmdList, const TRefCountPtr<IPooledRenderTarget> * DynamicBentNormalAO, TRefCountPtr<IPooledRenderTarget> * BackupSceneColor) { NativeCall<void, FRHICommandListImmediate *, const TRefCountPtr<IPooledRenderTarget> *, TRefCountPtr<IPooledRenderTarget> *>(this, "FDeferredShadingSceneRenderer.RenderDeferredReflections", RHICmdList, DynamicBentNormalAO, BackupSceneColor); }
	void RenderReflectionCaptureSpecularBounceForAllViews(FRHICommandListImmediate * RHICmdList) { NativeCall<void, FRHICommandListImmediate *>(this, "FDeferredShadingSceneRenderer.RenderReflectionCaptureSpecularBounceForAllViews", RHICmdList); }
	void RenderStandardDeferredImageBasedReflections(FRHICommandListImmediate * RHICmdList, bool bReflectionEnv, const TRefCountPtr<IPooledRenderTarget> * DynamicBentNormalAO) { NativeCall<void, FRHICommandListImmediate *, bool, const TRefCountPtr<IPooledRenderTarget> *>(this, "FDeferredShadingSceneRenderer.RenderStandardDeferredImageBasedReflections", RHICmdList, bReflectionEnv, DynamicBentNormalAO); }
	void RenderTiledDeferredImageBasedReflections(FRHICommandListImmediate * RHICmdList, const TRefCountPtr<IPooledRenderTarget> * DynamicBentNormalAO, TRefCountPtr<IPooledRenderTarget> * BackupSceneColor) { NativeCall<void, FRHICommandListImmediate *, const TRefCountPtr<IPooledRenderTarget> *, TRefCountPtr<IPooledRenderTarget> *>(this, "FDeferredShadingSceneRenderer.RenderTiledDeferredImageBasedReflections", RHICmdList, DynamicBentNormalAO, BackupSceneColor); }
	void AccumulateTranslucentVolumeObjectShadowing(FRHICommandList * RHICmdList, const FProjectedShadowInfo * InProjectedShadowInfo, bool bClearVolume) { NativeCall<void, FRHICommandList *, const FProjectedShadowInfo *, bool>(this, "FDeferredShadingSceneRenderer.AccumulateTranslucentVolumeObjectShadowing", RHICmdList, InProjectedShadowInfo, bClearVolume); }
	void BeginRenderRayTracedDistanceFieldProjections(FRHICommandListImmediate * RHICmdList) { NativeCall<void, FRHICommandListImmediate *>(this, "FDeferredShadingSceneRenderer.BeginRenderRayTracedDistanceFieldProjections", RHICmdList); }
	bool CanUseTiledDeferred() { return NativeCall<bool>(this, "FDeferredShadingSceneRenderer.CanUseTiledDeferred"); }
	void ClearTranslucentVolumeLighting(FRHICommandListImmediate * RHICmdList) { NativeCall<void, FRHICommandListImmediate *>(this, "FDeferredShadingSceneRenderer.ClearTranslucentVolumeLighting", RHICmdList); }
	void ClearTranslucentVolumePerObjectShadowing(FRHICommandList * RHICmdList) { NativeCall<void, FRHICommandList *>(this, "FDeferredShadingSceneRenderer.ClearTranslucentVolumePerObjectShadowing", RHICmdList); }
	void CreatePerObjectProjectedShadow(FRHICommandListImmediate * RHICmdList, FLightPrimitiveInteraction * Interaction, bool bCreateTranslucentObjectShadow, bool bCreateOpaqueObjectShadow, const TArray<FProjectedShadowInfo *,SceneRenderingAllocator> * ViewDependentWholeSceneShadows, TArray<FProjectedShadowInfo *,SceneRenderingAllocator> * OutPreShadows) { NativeCall<void, FRHICommandListImmediate *, FLightPrimitiveInteraction *, bool, bool, const TArray<FProjectedShadowInfo *,SceneRenderingAllocator> *, TArray<FProjectedShadowInfo *,SceneRenderingAllocator> *>(this, "FDeferredShadingSceneRenderer.CreatePerObjectProjectedShadow", RHICmdList, Interaction, bCreateTranslucentObjectShadow, bCreateOpaqueObjectShadow, ViewDependentWholeSceneShadows, OutPreShadows); }
	void CreateWholeSceneProjectedShadow(FLightSceneInfo * LightSceneInfo) { NativeCall<void, FLightSceneInfo *>(this, "FDeferredShadingSceneRenderer.CreateWholeSceneProjectedShadow", LightSceneInfo); }
	void EarlyShadowPass(FRHICommandListImmediate * RHICmdList) { NativeCall<void, FRHICommandListImmediate *>(this, "FDeferredShadingSceneRenderer.EarlyShadowPass", RHICmdList); }
	void FilterTranslucentVolumeLighting(FRHICommandListImmediate * RHICmdList) { NativeCall<void, FRHICommandListImmediate *>(this, "FDeferredShadingSceneRenderer.FilterTranslucentVolumeLighting", RHICmdList); }
	TRefCountPtr<FProjectedShadowInfo> * GetCachedPreshadow(TRefCountPtr<FProjectedShadowInfo> * result, const FLightPrimitiveInteraction * InParentInteraction, const FProjectedShadowInitializer * Initializer, const FBoxSphereBounds * Bounds, unsigned int InResolutionX) { return NativeCall<TRefCountPtr<FProjectedShadowInfo> *, TRefCountPtr<FProjectedShadowInfo> *, const FLightPrimitiveInteraction *, const FProjectedShadowInitializer *, const FBoxSphereBounds *, unsigned int>(this, "FDeferredShadingSceneRenderer.GetCachedPreshadow", result, InParentInteraction, Initializer, Bounds, InResolutionX); }
	void InitDynamicShadows(FRHICommandListImmediate * RHICmdList) { NativeCall<void, FRHICommandListImmediate *>(this, "FDeferredShadingSceneRenderer.InitDynamicShadows", RHICmdList); }
	void InjectAmbientCubemapTranslucentVolumeLighting(FRHICommandList * RHICmdList) { NativeCall<void, FRHICommandList *>(this, "FDeferredShadingSceneRenderer.InjectAmbientCubemapTranslucentVolumeLighting", RHICmdList); }
	void InjectSimpleTranslucentVolumeLightingArray(FRHICommandListImmediate * RHICmdList, const FSimpleLightArray * SimpleLights) { NativeCall<void, FRHICommandListImmediate *, const FSimpleLightArray *>(this, "FDeferredShadingSceneRenderer.InjectSimpleTranslucentVolumeLightingArray", RHICmdList, SimpleLights); }
	void InjectTranslucentVolumeLighting(FRHICommandListImmediate * RHICmdList, const FLightSceneInfo * LightSceneInfo, const FProjectedShadowInfo * InProjectedShadowInfo) { NativeCall<void, FRHICommandListImmediate *, const FLightSceneInfo *, const FProjectedShadowInfo *>(this, "FDeferredShadingSceneRenderer.InjectTranslucentVolumeLighting", RHICmdList, LightSceneInfo, InProjectedShadowInfo); }
	void InjectTranslucentVolumeLightingArray(FRHICommandListImmediate * RHICmdList, const TArray<FSortedLightSceneInfo,SceneRenderingAllocator> * SortedLights, int NumLights) { NativeCall<void, FRHICommandListImmediate *, const TArray<FSortedLightSceneInfo,SceneRenderingAllocator> *, int>(this, "FDeferredShadingSceneRenderer.InjectTranslucentVolumeLightingArray", RHICmdList, SortedLights, NumLights); }
	bool RenderCachedPreshadows(FRHICommandListImmediate * RHICmdList, const FLightSceneInfo * LightSceneInfo) { return NativeCall<bool, FRHICommandListImmediate *, const FLightSceneInfo *>(this, "FDeferredShadingSceneRenderer.RenderCachedPreshadows", RHICmdList, LightSceneInfo); }
	void RenderDynamicVelocitiesInner(FRHICommandList * RHICmdList, const FViewInfo * View, int FirstIndex, int LastIndex) { NativeCall<void, FRHICommandList *, const FViewInfo *, int, int>(this, "FDeferredShadingSceneRenderer.RenderDynamicVelocitiesInner", RHICmdList, View, FirstIndex, LastIndex); }
	void RenderDynamicVelocitiesMeshElementsInner(FRHICommandList * RHICmdList, const FViewInfo * View) { NativeCall<void, FRHICommandList *, const FViewInfo *>(this, "FDeferredShadingSceneRenderer.RenderDynamicVelocitiesMeshElementsInner", RHICmdList, View); }
	bool RenderProjectedShadows(FRHICommandListImmediate * RHICmdList, const FLightSceneInfo * LightSceneInfo, bool bRenderedTranslucentObjectShadows, bool * bInjectedTranslucentVolume) { return NativeCall<bool, FRHICommandListImmediate *, const FLightSceneInfo *, bool, bool *>(this, "FDeferredShadingSceneRenderer.RenderProjectedShadows", RHICmdList, LightSceneInfo, bRenderedTranslucentObjectShadows, bInjectedTranslucentVolume); }
	void RenderProjections(FRHICommandListImmediate * RHICmdList, const FLightSceneInfo * LightSceneInfo, const TArray<FProjectedShadowInfo *,SceneRenderingAllocator> * Shadows) { NativeCall<void, FRHICommandListImmediate *, const FLightSceneInfo *, const TArray<FProjectedShadowInfo *,SceneRenderingAllocator> *>(this, "FDeferredShadingSceneRenderer.RenderProjections", RHICmdList, LightSceneInfo, Shadows); }
	bool RenderReflectiveShadowMaps(FRHICommandListImmediate * RHICmdList, const FLightSceneInfo * LightSceneInfo) { return NativeCall<bool, FRHICommandListImmediate *, const FLightSceneInfo *>(this, "FDeferredShadingSceneRenderer.RenderReflectiveShadowMaps", RHICmdList, LightSceneInfo); }
	void RenderTiledDeferredLighting(FRHICommandListImmediate * RHICmdList, const TArray<FSortedLightSceneInfo,SceneRenderingAllocator> * SortedLights, int NumUnshadowedLights, const FSimpleLightArray * SimpleLights) { NativeCall<void, FRHICommandListImmediate *, const TArray<FSortedLightSceneInfo,SceneRenderingAllocator> *, int, const FSimpleLightArray *>(this, "FDeferredShadingSceneRenderer.RenderTiledDeferredLighting", RHICmdList, SortedLights, NumUnshadowedLights, SimpleLights); }
	void RenderTranslucency(FRHICommandListImmediate * RHICmdList) { NativeCall<void, FRHICommandListImmediate *>(this, "FDeferredShadingSceneRenderer.RenderTranslucency", RHICmdList); }
	void RenderTranslucencyParallel(FRHICommandListImmediate * RHICmdList) { NativeCall<void, FRHICommandListImmediate *>(this, "FDeferredShadingSceneRenderer.RenderTranslucencyParallel", RHICmdList); }
	bool RenderTranslucentProjectedShadows(FRHICommandListImmediate * RHICmdList, const FLightSceneInfo * LightSceneInfo) { return NativeCall<bool, FRHICommandListImmediate *, const FLightSceneInfo *>(this, "FDeferredShadingSceneRenderer.RenderTranslucentProjectedShadows", RHICmdList, LightSceneInfo); }
	void RenderVelocities(FRHICommandListImmediate * RHICmdList, TRefCountPtr<IPooledRenderTarget> * VelocityRT) { NativeCall<void, FRHICommandListImmediate *, TRefCountPtr<IPooledRenderTarget> *>(this, "FDeferredShadingSceneRenderer.RenderVelocities", RHICmdList, VelocityRT); }
	void RenderVelocitiesInner(FRHICommandListImmediate * RHICmdList, const FViewInfo * View) { NativeCall<void, FRHICommandListImmediate *, const FViewInfo *>(this, "FDeferredShadingSceneRenderer.RenderVelocitiesInner", RHICmdList, View); }
	void SetupInteractionShadows(FRHICommandListImmediate * RHICmdList, FLightPrimitiveInteraction * Interaction, FVisibleLightInfo * VisibleLightInfo, bool bStaticSceneOnly, const TArray<FProjectedShadowInfo *,SceneRenderingAllocator> * ViewDependentWholeSceneShadows, TArray<FProjectedShadowInfo *,SceneRenderingAllocator> * PreShadows) { NativeCall<void, FRHICommandListImmediate *, FLightPrimitiveInteraction *, FVisibleLightInfo *, bool, const TArray<FProjectedShadowInfo *,SceneRenderingAllocator> *, TArray<FProjectedShadowInfo *,SceneRenderingAllocator> *>(this, "FDeferredShadingSceneRenderer.SetupInteractionShadows", RHICmdList, Interaction, VisibleLightInfo, bStaticSceneOnly, ViewDependentWholeSceneShadows, PreShadows); }
	bool ShouldUseTiledDeferred(int NumUnshadowedLights, int NumSimpleLights) { return NativeCall<bool, int, int>(this, "FDeferredShadingSceneRenderer.ShouldUseTiledDeferred", NumUnshadowedLights, NumSimpleLights); }
	void UpdatePreshadowCache() { NativeCall<void>(this, "FDeferredShadingSceneRenderer.UpdatePreshadowCache"); }
};

