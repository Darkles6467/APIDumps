#pragma once

#include "BaseDeclarations.h"
#include "FFourInt.h"
#include "FPrimitiveUniformShaderParameters.h"

struct FGroundClutterRenderData
{
	char __padding[0x18L];
	TArray<TUniquePtr<FGroundClutterRenderData::FMeshLayerResource>>& MeshLayersField() { return *GetNativePointerField<TArray<TUniquePtr<FGroundClutterRenderData::FMeshLayerResource>>*>(this, "FGroundClutterRenderData.MeshLayers"); }
	ERHIFeatureLevel::Type& FeatureLevelField() { return *GetNativePointerField<ERHIFeatureLevel::Type*>(this, "FGroundClutterRenderData.FeatureLevel"); }

	// Functions

	void FMeshLayerResource(FRHIAsyncComputeCommandListImmediate * RHICmdList, FSceneView * View, ERHIFeatureLevel::Type InFeatureLevel) { NativeCall<void, FRHIAsyncComputeCommandListImmediate *, FSceneView *, ERHIFeatureLevel::Type>(this, "FGroundClutterRenderData.FMeshLayerResource", RHICmdList, View, InFeatureLevel); }
	void FMeshLayerResource(FRHICommandList * RHICmdList, FSceneView * View, ERHIFeatureLevel::Type InFeatureLevel) { NativeCall<void, FRHICommandList *, FSceneView *, ERHIFeatureLevel::Type>(this, "FGroundClutterRenderData.FMeshLayerResource", RHICmdList, View, InFeatureLevel); }
	void FMeshLayerResource(FRHIAsyncComputeCommandListImmediate * RHICmdList, FSceneView * View, TArray<FVector4,TInlineAllocator<49> > * TilePositions, TArray<FFourInt,TInlineAllocator<49> > * TileIndices, FRHITexture2D * InClutterTexture, FRHITexture2D * InClutterTextureIDs, ERHIFeatureLevel::Type InFeatureLevel, int LayerID) { NativeCall<void, FRHIAsyncComputeCommandListImmediate *, FSceneView *, TArray<FVector4,TInlineAllocator<49> > *, TArray<FFourInt,TInlineAllocator<49> > *, FRHITexture2D *, FRHITexture2D *, ERHIFeatureLevel::Type, int>(this, "FGroundClutterRenderData.FMeshLayerResource", RHICmdList, View, TilePositions, TileIndices, InClutterTexture, InClutterTextureIDs, InFeatureLevel, LayerID); }
	void FMeshLayerResource(FRHICommandList * RHICmdList, FSceneView * View, TArray<FVector4,TInlineAllocator<49> > * TilePositions, TArray<FFourInt,TInlineAllocator<49> > * TileIndices, FRHITexture2D * InClutterTexture, FRHITexture2D * InClutterTextureIDs, ERHIFeatureLevel::Type InFeatureLevel, int LayerID) { NativeCall<void, FRHICommandList *, FSceneView *, TArray<FVector4,TInlineAllocator<49> > *, TArray<FFourInt,TInlineAllocator<49> > *, FRHITexture2D *, FRHITexture2D *, ERHIFeatureLevel::Type, int>(this, "FGroundClutterRenderData.FMeshLayerResource", RHICmdList, View, TilePositions, TileIndices, InClutterTexture, InClutterTextureIDs, InFeatureLevel, LayerID); }
	void FMeshLayerResource(FRHIAsyncComputeCommandListImmediate * RHICmdList, FSceneView * View, ERHIFeatureLevel::Type InFeatureLevel) { NativeCall<void, FRHIAsyncComputeCommandListImmediate *, FSceneView *, ERHIFeatureLevel::Type>(this, "FGroundClutterRenderData.FMeshLayerResource", RHICmdList, View, InFeatureLevel); }
	void FMeshLayerResource(FRHICommandList * RHICmdList, FSceneView * View, ERHIFeatureLevel::Type InFeatureLevel) { NativeCall<void, FRHICommandList *, FSceneView *, ERHIFeatureLevel::Type>(this, "FGroundClutterRenderData.FMeshLayerResource", RHICmdList, View, InFeatureLevel); }
	void FMeshLayerResource() { NativeCall<void>(this, "FGroundClutterRenderData.FMeshLayerResource"); }
	void FMeshLayerResource(FClutterData * InClutterData, int InMaxTileCount, ERHIFeatureLevel::Type InFeatureLevel, FRandomStream * RandomStream, const bool * bInAnyTileDrawn) { NativeCall<void, FClutterData *, int, ERHIFeatureLevel::Type, FRandomStream *, const bool *>(this, "FGroundClutterRenderData.FMeshLayerResource", InClutterData, InMaxTileCount, InFeatureLevel, RandomStream, bInAnyTileDrawn); }
	void FMeshLayerResource() { NativeCall<void>(this, "FGroundClutterRenderData.FMeshLayerResource"); }
	void FMeshLayerResource() { NativeCall<void>(this, "FGroundClutterRenderData.FMeshLayerResource"); }
	bool FMeshLayerResource() { return NativeCall<bool>(this, "FGroundClutterRenderData.FMeshLayerResource"); }
	void GetDynamicMeshElements(int ViewIndex, FMeshElementCollector * Collector, const TUniformBuffer<FPrimitiveUniformShaderParameters> * UniformBuffer, bool bIsFromShadows) { NativeCall<void, int, FMeshElementCollector *, const TUniformBuffer<FPrimitiveUniformShaderParameters> *, bool>(this, "FGroundClutterRenderData.GetDynamicMeshElements", ViewIndex, Collector, UniformBuffer, bIsFromShadows); }
	void FMeshLayerResource(int ViewIndex, FMeshElementCollector * Collector, const TUniformBuffer<FPrimitiveUniformShaderParameters> * UniformBuffer, bool bIsFromShadows) { NativeCall<void, int, FMeshElementCollector *, const TUniformBuffer<FPrimitiveUniformShaderParameters> *, bool>(this, "FGroundClutterRenderData.FMeshLayerResource", ViewIndex, Collector, UniformBuffer, bIsFromShadows); }
	void InitResources(FSceneInterface * Scene) { NativeCall<void, FSceneInterface *>(this, "FGroundClutterRenderData.InitResources", Scene); }
	void ReleaseResources(FSceneInterface * Scene) { NativeCall<void, FSceneInterface *>(this, "FGroundClutterRenderData.ReleaseResources", Scene); }
};

