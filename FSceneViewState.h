#pragma once

#include "BaseDeclarations.h"
#include "FPrimitiveComponentId.h"

struct FSceneViewStateInterface
{
	char __padding[0x18L];
	int& NumChildrenField() { return *GetNativePointerField<int*>(this, "FSceneViewStateInterface.NumChildren"); }

	// Functions

};

struct FSceneViewState : FSceneViewStateInterface
{
	char __padding[0x948L];
	int& NumBufferedFramesField() { return *GetNativePointerField<int*>(this, "FSceneViewState.NumBufferedFrames"); }
	unsigned int& UniqueIDField() { return *GetNativePointerField<unsigned int*>(this, "FSceneViewState.UniqueID"); }
	FRenderQueryPool& OcclusionQueryPoolField() { return *GetNativePointerField<FRenderQueryPool*>(this, "FSceneViewState.OcclusionQueryPool"); }
	FHZBOcclusionTester& HZBOcclusionTestsField() { return *GetNativePointerField<FHZBOcclusionTester*>(this, "FSceneViewState.HZBOcclusionTests"); }
	TArray<unsigned char>& DecompressedVisibilityChunkField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FSceneViewState.DecompressedVisibilityChunk"); }
	const TArray<unsigned char> * CachedVisibilityChunkField() { return GetNativePointerField<const TArray<unsigned char> *>(this, "FSceneViewState.CachedVisibilityChunk"); }
	int& CachedVisibilityHandlerIdField() { return *GetNativePointerField<int*>(this, "FSceneViewState.CachedVisibilityHandlerId"); }
	int& CachedVisibilityBucketIndexField() { return *GetNativePointerField<int*>(this, "FSceneViewState.CachedVisibilityBucketIndex"); }
	int& CachedVisibilityChunkIndexField() { return *GetNativePointerField<int*>(this, "FSceneViewState.CachedVisibilityChunkIndex"); }
	FViewMatrices& PrevViewMatricesField() { return *GetNativePointerField<FViewMatrices*>(this, "FSceneViewState.PrevViewMatrices"); }
	FViewMatrices& PendingPrevViewMatricesField() { return *GetNativePointerField<FViewMatrices*>(this, "FSceneViewState.PendingPrevViewMatrices"); }
	unsigned int& PendingPrevFrameNumberField() { return *GetNativePointerField<unsigned int*>(this, "FSceneViewState.PendingPrevFrameNumber"); }
	unsigned int& PrevFrameNumberField() { return *GetNativePointerField<unsigned int*>(this, "FSceneViewState.PrevFrameNumber"); }
	long double& LastRenderTimeField() { return *GetNativePointerField<long double*>(this, "FSceneViewState.LastRenderTime"); }
	float& LastRenderTimeDeltaField() { return *GetNativePointerField<float*>(this, "FSceneViewState.LastRenderTimeDelta"); }
	float& MotionBlurTimeScaleField() { return *GetNativePointerField<float*>(this, "FSceneViewState.MotionBlurTimeScale"); }
	FMatrix& PrevViewMatrixForOcclusionQueryField() { return *GetNativePointerField<FMatrix*>(this, "FSceneViewState.PrevViewMatrixForOcclusionQuery"); }
	FVector& PrevViewOriginForOcclusionQueryField() { return *GetNativePointerField<FVector*>(this, "FSceneViewState.PrevViewOriginForOcclusionQuery"); }
	TArray<unsigned int>& LandscapeClutterMasksField() { return *GetNativePointerField<TArray<unsigned int>*>(this, "FSceneViewState.LandscapeClutterMasks"); }
	unsigned int& CompositedLandscapeMaskField() { return *GetNativePointerField<unsigned int*>(this, "FSceneViewState.CompositedLandscapeMask"); }
	FIntVector& LastClutterTileUpdatePositionField() { return *GetNativePointerField<FIntVector*>(this, "FSceneViewState.LastClutterTileUpdatePosition"); }
	unsigned int& ClutterFrameSkipsField() { return *GetNativePointerField<unsigned int*>(this, "FSceneViewState.ClutterFrameSkips"); }
	float& LastClutterRadiusField() { return *GetNativePointerField<float*>(this, "FSceneViewState.LastClutterRadius"); }
	FMatrix& LandscapeWorldToUVField() { return *GetNativePointerField<FMatrix*>(this, "FSceneViewState.LandscapeWorldToUV"); }
	bool& bPendingLSIFlushField() { return *GetNativePointerField<bool*>(this, "FSceneViewState.bPendingLSIFlush"); }
	bool& bActiveLSIField() { return *GetNativePointerField<bool*>(this, "FSceneViewState.bActiveLSI"); }
	FVector& ActiveLSI_CenterTileField() { return *GetNativePointerField<FVector*>(this, "FSceneViewState.ActiveLSI_CenterTile"); }
	FVector& ActiveLSI_TilePositionStartField() { return *GetNativePointerField<FVector*>(this, "FSceneViewState.ActiveLSI_TilePositionStart"); }
	FVector& PendingLSI_CenterTileField() { return *GetNativePointerField<FVector*>(this, "FSceneViewState.PendingLSI_CenterTile"); }
	FVector& PendingLSI_TilePositionStartField() { return *GetNativePointerField<FVector*>(this, "FSceneViewState.PendingLSI_TilePositionStart"); }
	unsigned int& OcclusionFrameCounterField() { return *GetNativePointerField<unsigned int*>(this, "FSceneViewState.OcclusionFrameCounter"); }
	FieldArray<FIndirectLightingCacheAllocation *, 2> TranslucencyLightingCacheAllocationsField() { return {this, "FSceneViewState.TranslucencyLightingCacheAllocations"}; }
	FieldArray<TArray<int>, 2> DeferredGlobalDistanceFieldUpdatesField() { return {this, "FSceneViewState.DeferredGlobalDistanceFieldUpdates"}; }
	float& PreExposureField() { return *GetNativePointerField<float*>(this, "FSceneViewState.PreExposure"); }
	bool& bUpdateLastExposureField() { return *GetNativePointerField<bool*>(this, "FSceneViewState.bUpdateLastExposure"); }
	bool& bValidEyeAdaptationField() { return *GetNativePointerField<bool*>(this, "FSceneViewState.bValidEyeAdaptation"); }
	unsigned int& MIDUsedCountField() { return *GetNativePointerField<unsigned int*>(this, "FSceneViewState.MIDUsedCount"); }
	char& TemporalAASampleIndexField() { return *GetNativePointerField<char*>(this, "FSceneViewState.TemporalAASampleIndex"); }
	char& TemporalAASampleCountField() { return *GetNativePointerField<char*>(this, "FSceneViewState.TemporalAASampleCount"); }
	FLightPropagationVolume * LightPropagationVolumeField() { return GetNativePointerField<FLightPropagationVolume *>(this, "FSceneViewState.LightPropagationVolume"); }
	FHeightfieldLightingAtlas * HeightfieldLightingAtlasField() { return GetNativePointerField<FHeightfieldLightingAtlas *>(this, "FSceneViewState.HeightfieldLightingAtlas"); }
	FVector& HeightFieldUpdatedPositionField() { return *GetNativePointerField<FVector*>(this, "FSceneViewState.HeightFieldUpdatedPosition"); }
	int& HeightFieldUpdatedNumPrimitivesField() { return *GetNativePointerField<int*>(this, "FSceneViewState.HeightFieldUpdatedNumPrimitives"); }
	FHeightfieldDescription& HeightfieldField() { return *GetNativePointerField<FHeightfieldDescription*>(this, "FSceneViewState.Heightfield"); }
	FTileIntersectionResources * AOTileIntersectionResourcesField() { return GetNativePointerField<FTileIntersectionResources *>(this, "FSceneViewState.AOTileIntersectionResources"); }
	bool& bInitializedGlobalDistanceFieldOriginsField() { return *GetNativePointerField<bool*>(this, "FSceneViewState.bInitializedGlobalDistanceFieldOrigins"); }
	FieldArray<FGlobalDistanceFieldClipmapState, 4> GlobalDistanceFieldClipmapStateField() { return {this, "FSceneViewState.GlobalDistanceFieldClipmapState"}; }
	int& GlobalDistanceFieldUpdateIndexField() { return *GetNativePointerField<int*>(this, "FSceneViewState.GlobalDistanceFieldUpdateIndex"); }
	bool& bBokehDOFHistoryField() { return *GetNativePointerField<bool*>(this, "FSceneViewState.bBokehDOFHistory"); }
	FTemporalLODState& TemporalLODStateField() { return *GetNativePointerField<FTemporalLODState*>(this, "FSceneViewState.TemporalLODState"); }

	// Functions

	void FEyeAdaptationRTManager() { NativeCall<void>(this, "FSceneViewState.FEyeAdaptationRTManager"); }
	void FEyeAdaptationRTManager() { NativeCall<void>(this, "FSceneViewState.FEyeAdaptationRTManager"); }
	void AddReferencedObjects(FReferenceCollector * Collector) { NativeCall<void, FReferenceCollector *>(this, "FSceneViewState.AddReferencedObjects", Collector); }
	void Destroy() { NativeCall<void>(this, "FSceneViewState.Destroy"); }
	void FinishCleanup() { NativeCall<void>(this, "FSceneViewState.FinishCleanup"); }
	const char * GetPrecomputedVisibilityData(FViewInfo * View, const FScene * Scene) { return NativeCall<const char *, FViewInfo *, const FScene *>(this, "FSceneViewState.GetPrecomputedVisibilityData", View, Scene); }
	unsigned __int64 GetSizeBytes() { return NativeCall<unsigned __int64>(this, "FSceneViewState.GetSizeBytes"); }
	const FTemporalLODState * GetTemporalLODState() { return NativeCall<const FTemporalLODState *>(this, "FSceneViewState.GetTemporalLODState"); }
	float GetTemporalLODTransition() { return NativeCall<float>(this, "FSceneViewState.GetTemporalLODTransition"); }
	unsigned int GetViewKey() { return NativeCall<unsigned int>(this, "FSceneViewState.GetViewKey"); }
	void InitDynamicRHI() { NativeCall<void>(this, "FSceneViewState.InitDynamicRHI"); }
	bool IsShadowOccluded(FRHICommandListImmediate * RHICmdList, FPrimitiveComponentId PrimitiveId, ULightComponent * Light, int SplitIndex, bool bTranslucentShadow) { return NativeCall<bool, FRHICommandListImmediate *, FPrimitiveComponentId, ULightComponent *, int, bool>(this, "FSceneViewState.IsShadowOccluded", RHICmdList, PrimitiveId, Light, SplitIndex, bTranslucentShadow); }
	void OnStartPostProcessing(FSceneView * CurrentView) { NativeCall<void, FSceneView *>(this, "FSceneViewState.OnStartPostProcessing", CurrentView); }
	void ReleaseDynamicRHI() { NativeCall<void>(this, "FSceneViewState.ReleaseDynamicRHI"); }
	void TrimOcclusionHistory(FRHICommandListImmediate * RHICmdList, float MinHistoryTime, float MinQueryTime, int FrameNumber) { NativeCall<void, FRHICommandListImmediate *, float, float, int>(this, "FSceneViewState.TrimOcclusionHistory", RHICmdList, MinHistoryTime, MinQueryTime, FrameNumber); }
	void FEyeAdaptationRTManager() { NativeCall<void>(this, "FSceneViewState.FEyeAdaptationRTManager"); }
	void FEyeAdaptationRTManager(bool bInUpdateLastExposure) { NativeCall<void, bool>(this, "FSceneViewState.FEyeAdaptationRTManager", bInUpdateLastExposure); }
};

