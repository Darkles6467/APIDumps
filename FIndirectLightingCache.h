#pragma once

#include "BaseDeclarations.h"
#include "FRenderResource.h"
#include "FFloat16Color.h"
#include "FPrimitiveComponentId.h"

struct FIndirectLightingCache : FRenderResource
{
	char __padding[0x158L];
	bool& bUpdateAllCacheEntriesField() { return *GetNativePointerField<bool*>(this, "FIndirectLightingCache.bUpdateAllCacheEntries"); }
	int& CacheSizeField() { return *GetNativePointerField<int*>(this, "FIndirectLightingCache.CacheSize"); }
	FTextureLayout3d& BlockAllocatorField() { return *GetNativePointerField<FTextureLayout3d*>(this, "FIndirectLightingCache.BlockAllocator"); }

	// Functions

	void CalculateBlockPositionAndSize(const FBoxSphereBounds * Bounds, int TexelSize, FVector * OutMin, FVector * OutSize) { NativeCall<void, const FBoxSphereBounds *, int, FVector *, FVector *>(this, "FIndirectLightingCache.CalculateBlockPositionAndSize", Bounds, TexelSize, OutMin, OutSize); }
	void CalculateBlockScaleAndAdd(FIntVector InTexelMin, int AllocationTexelSize, FVector InMin, FVector InSize, FVector * OutScale, FVector * OutAdd, FVector * OutMinUV, FVector * OutMaxUV) { NativeCall<void, FIntVector, int, FVector, FVector, FVector *, FVector *, FVector *, FVector *>(this, "FIndirectLightingCache.CalculateBlockScaleAndAdd", InTexelMin, AllocationTexelSize, InMin, InSize, OutScale, OutAdd, OutMinUV, OutMaxUV); }
	FIndirectLightingCacheAllocation * CreateAllocation(int BlockSize, const FBoxSphereBounds * Bounds, bool bPointSample) { return NativeCall<FIndirectLightingCacheAllocation *, int, const FBoxSphereBounds *, bool>(this, "FIndirectLightingCache.CreateAllocation", BlockSize, Bounds, bPointSample); }
	void EncodeBlock(FViewInfo * DebugDrawingView, const FIndirectLightingCacheBlock * Block, const TArray<float> * AccumulatedWeight, const TArray<TSHVectorRGB<2>> * AccumulatedIncidentRadiance, const TArray<FVector> * AccumulatedSkyBentNormal, TArray<FFloat16Color> * Texture0Data, TArray<FFloat16Color> * Texture1Data, TArray<FFloat16Color> * Texture2Data, TSHVectorRGB<2> * SingleSample, FVector * SkyBentNormal) { NativeCall<void, FViewInfo *, const FIndirectLightingCacheBlock *, const TArray<float> *, const TArray<TSHVectorRGB<2>> *, const TArray<FVector> *, TArray<FFloat16Color> *, TArray<FFloat16Color> *, TArray<FFloat16Color> *, TSHVectorRGB<2> *, FVector *>(this, "FIndirectLightingCache.EncodeBlock", DebugDrawingView, Block, AccumulatedWeight, AccumulatedIncidentRadiance, AccumulatedSkyBentNormal, Texture0Data, Texture1Data, Texture2Data, SingleSample, SkyBentNormal); }
	FIndirectLightingCacheAllocation * FindPrimitiveAllocation(FPrimitiveComponentId PrimitiveId) { return NativeCall<FIndirectLightingCacheAllocation *, FPrimitiveComponentId>(this, "FIndirectLightingCache.FindPrimitiveAllocation", PrimitiveId); }
	void InitDynamicRHI() { NativeCall<void>(this, "FIndirectLightingCache.InitDynamicRHI"); }
	void InterpolateBlock(FScene * Scene, const FIndirectLightingCacheBlock * Block, TArray<float> * AccumulatedWeight, TArray<TSHVectorRGB<2>> * AccumulatedIncidentRadiance, TArray<FVector> * AccumulatedSkyBentNormal) { NativeCall<void, FScene *, const FIndirectLightingCacheBlock *, TArray<float> *, TArray<TSHVectorRGB<2>> *, TArray<FVector> *>(this, "FIndirectLightingCache.InterpolateBlock", Scene, Block, AccumulatedWeight, AccumulatedIncidentRadiance, AccumulatedSkyBentNormal); }
	void InterpolatePoint(FScene * Scene, const FIndirectLightingCacheBlock * Block, float * OutDirectionalShadowing, TSHVectorRGB<2> * OutIncidentRadiance, FVector * OutSkyBentNormal) { NativeCall<void, FScene *, const FIndirectLightingCacheBlock *, float *, TSHVectorRGB<2> *, FVector *>(this, "FIndirectLightingCache.InterpolatePoint", Scene, Block, OutDirectionalShadowing, OutIncidentRadiance, OutSkyBentNormal); }
	void ReleaseDynamicRHI() { NativeCall<void>(this, "FIndirectLightingCache.ReleaseDynamicRHI"); }
	void UpdateBlock(FScene * Scene, FViewInfo * DebugDrawingView, FBlockUpdateInfo * BlockInfo) { NativeCall<void, FScene *, FViewInfo *, FBlockUpdateInfo *>(this, "FIndirectLightingCache.UpdateBlock", Scene, DebugDrawingView, BlockInfo); }
	void UpdateBlocks(FScene * Scene, FViewInfo * DebugDrawingView, TMap<FIntVector,FBlockUpdateInfo,FDefaultSetAllocator,TDefaultMapKeyFuncs<FIntVector,FBlockUpdateInfo,0> > * BlocksToUpdate) { NativeCall<void, FScene *, FViewInfo *, TMap<FIntVector,FBlockUpdateInfo,FDefaultSetAllocator,TDefaultMapKeyFuncs<FIntVector,FBlockUpdateInfo,0> > *>(this, "FIndirectLightingCache.UpdateBlocks", Scene, DebugDrawingView, BlocksToUpdate); }
	void UpdateCache(FScene * Scene, FSceneRenderer * Renderer, bool bAllowUnbuiltPreview) { NativeCall<void, FScene *, FSceneRenderer *, bool>(this, "FIndirectLightingCache.UpdateCache", Scene, Renderer, bAllowUnbuiltPreview); }
	void UpdateCacheAllocation(const FBoxSphereBounds * Bounds, int BlockSize, bool bPointSample, FIndirectLightingCacheAllocation ** Allocation, TMap<FIntVector,FBlockUpdateInfo,FDefaultSetAllocator,TDefaultMapKeyFuncs<FIntVector,FBlockUpdateInfo,0> > * BlocksToUpdate, TArray<FIndirectLightingCacheAllocation *> * TransitionsOverTimeToUpdate) { NativeCall<void, const FBoxSphereBounds *, int, bool, FIndirectLightingCacheAllocation **, TMap<FIntVector,FBlockUpdateInfo,FDefaultSetAllocator,TDefaultMapKeyFuncs<FIntVector,FBlockUpdateInfo,0> > *, TArray<FIndirectLightingCacheAllocation *> *>(this, "FIndirectLightingCache.UpdateCacheAllocation", Bounds, BlockSize, bPointSample, Allocation, BlocksToUpdate, TransitionsOverTimeToUpdate); }
	void UpdateCachePrimitive(FScene * Scene, FPrimitiveSceneInfo * PrimitiveSceneInfo, bool bAllowUnbuiltPreview, bool bOpaqueRelevance, TMap<FIntVector,FBlockUpdateInfo,FDefaultSetAllocator,TDefaultMapKeyFuncs<FIntVector,FBlockUpdateInfo,0> > * BlocksToUpdate, TArray<FIndirectLightingCacheAllocation *> * TransitionsOverTimeToUpdate) { NativeCall<void, FScene *, FPrimitiveSceneInfo *, bool, bool, TMap<FIntVector,FBlockUpdateInfo,FDefaultSetAllocator,TDefaultMapKeyFuncs<FIntVector,FBlockUpdateInfo,0> > *, TArray<FIndirectLightingCacheAllocation *> *>(this, "FIndirectLightingCache.UpdateCachePrimitive", Scene, PrimitiveSceneInfo, bAllowUnbuiltPreview, bOpaqueRelevance, BlocksToUpdate, TransitionsOverTimeToUpdate); }
	void UpdateTransitionsOverTime(const TArray<FIndirectLightingCacheAllocation *> * TransitionsOverTimeToUpdate, float DeltaWorldTime) { NativeCall<void, const TArray<FIndirectLightingCacheAllocation *> *, float>(this, "FIndirectLightingCache.UpdateTransitionsOverTime", TransitionsOverTimeToUpdate, DeltaWorldTime); }
};

