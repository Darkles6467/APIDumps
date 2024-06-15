#pragma once

#include "BaseDeclarations.h"
struct FPrecomputedLightVolume
{
	char __padding[0x1b0L];
	bool& bInitializedField() { return *GetNativePointerField<bool*>(this, "FPrecomputedLightVolume.bInitialized"); }
	bool& bAddedToSceneField() { return *GetNativePointerField<bool*>(this, "FPrecomputedLightVolume.bAddedToScene"); }
	FBox& BoundsField() { return *GetNativePointerField<FBox*>(this, "FPrecomputedLightVolume.Bounds"); }
	TOctree<FVolumeLightingSample,FLightVolumeOctreeSemantics>& HighQualityLightmapOctreeField() { return *GetNativePointerField<TOctree<FVolumeLightingSample,FLightVolumeOctreeSemantics>*>(this, "FPrecomputedLightVolume.HighQualityLightmapOctree"); }
	TOctree<FVolumeLightingSample,FLightVolumeOctreeSemantics>& LowQualityLightmapOctreeField() { return *GetNativePointerField<TOctree<FVolumeLightingSample,FLightVolumeOctreeSemantics>*>(this, "FPrecomputedLightVolume.LowQualityLightmapOctree"); }
	TOctree<FVolumeLightingSample,FLightVolumeOctreeSemantics> * OctreeForRenderingField() { return GetNativePointerField<TOctree<FVolumeLightingSample,FLightVolumeOctreeSemantics> *>(this, "FPrecomputedLightVolume.OctreeForRendering"); }

	// Functions

	void AddToScene(FSceneInterface * Scene) { NativeCall<void, FSceneInterface *>(this, "FPrecomputedLightVolume.AddToScene", Scene); }
	void DebugDrawSamples(FPrimitiveDrawInterface * PDI, bool bDrawDirectionalShadowing) { NativeCall<void, FPrimitiveDrawInterface *, bool>(this, "FPrecomputedLightVolume.DebugDrawSamples", PDI, bDrawDirectionalShadowing); }
	unsigned __int64 GetAllocatedBytes() { return NativeCall<unsigned __int64>(this, "FPrecomputedLightVolume.GetAllocatedBytes"); }
	void Initialize(const FBox * NewBounds) { NativeCall<void, const FBox *>(this, "FPrecomputedLightVolume.Initialize", NewBounds); }
	void InterpolateIncidentRadianceBlock(const FBoxCenterAndExtent * BoundingBox, const FIntVector * QueryCellDimensions, const FIntVector * DestCellDimensions, const FIntVector * DestCellPosition, TArray<float> * AccumulatedWeights, TArray<TSHVectorRGB<2>> * AccumulatedIncidentRadiance, TArray<FVector> * AccumulatedSkyBentNormal) { NativeCall<void, const FBoxCenterAndExtent *, const FIntVector *, const FIntVector *, const FIntVector *, TArray<float> *, TArray<TSHVectorRGB<2>> *, TArray<FVector> *>(this, "FPrecomputedLightVolume.InterpolateIncidentRadianceBlock", BoundingBox, QueryCellDimensions, DestCellDimensions, DestCellPosition, AccumulatedWeights, AccumulatedIncidentRadiance, AccumulatedSkyBentNormal); }
	void InterpolateIncidentRadiancePoint(const FVector * WorldPosition, float * AccumulatedWeight, float * AccumulatedDirectionalLightShadowing, TSHVectorRGB<2> * AccumulatedIncidentRadiance, FVector * SkyBentNormal) { NativeCall<void, const FVector *, float *, float *, TSHVectorRGB<2> *, FVector *>(this, "FPrecomputedLightVolume.InterpolateIncidentRadiancePoint", WorldPosition, AccumulatedWeight, AccumulatedDirectionalLightShadowing, AccumulatedIncidentRadiance, SkyBentNormal); }
	void InvalidateLightingCache() { NativeCall<void>(this, "FPrecomputedLightVolume.InvalidateLightingCache"); }
	void RemoveFromScene(FSceneInterface * Scene) { NativeCall<void, FSceneInterface *>(this, "FPrecomputedLightVolume.RemoveFromScene", Scene); }
};

