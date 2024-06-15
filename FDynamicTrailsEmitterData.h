#pragma once

#include "BaseDeclarations.h"
#include "FDynamicSpriteEmitterDataBase.h"

struct FDynamicTrailsEmitterData : FDynamicSpriteEmitterDataBase
{
	char __padding[0x20L];
	int& LastFramePreRenderedField() { return *GetNativePointerField<int*>(this, "FDynamicTrailsEmitterData.LastFramePreRendered"); }
	float& DistanceTessellationStepSizeField() { return *GetNativePointerField<float*>(this, "FDynamicTrailsEmitterData.DistanceTessellationStepSize"); }
	float& TangentTessellationScalarField() { return *GetNativePointerField<float*>(this, "FDynamicTrailsEmitterData.TangentTessellationScalar"); }
	float& TextureTileDistanceField() { return *GetNativePointerField<float*>(this, "FDynamicTrailsEmitterData.TextureTileDistance"); }

	// Functions

	void DoBufferFill(FAsyncBufferFillData * Me) { NativeCall<void, FAsyncBufferFillData *>(this, "FDynamicTrailsEmitterData.DoBufferFill", Me); }
	int GetDynamicVertexStride(ERHIFeatureLevel::Type __formal) { return NativeCall<int, ERHIFeatureLevel::Type>(this, "FDynamicTrailsEmitterData.GetDynamicVertexStride", __formal); }
	int FillIndexData(FAsyncBufferFillData * Data) { return NativeCall<int, FAsyncBufferFillData *>(this, "FDynamicTrailsEmitterData.FillIndexData", Data); }
	void GetDynamicMeshElementsEmitter(const FParticleSystemSceneProxy * Proxy, FSceneView * View, FSceneViewFamily * ViewFamily, int ViewIndex, FMeshElementCollector * Collector) { NativeCall<void, const FParticleSystemSceneProxy *, FSceneView *, FSceneViewFamily *, int, FMeshElementCollector *>(this, "FDynamicTrailsEmitterData.GetDynamicMeshElementsEmitter", Proxy, View, ViewFamily, ViewIndex, Collector); }
	void GetIndexAllocInfo(int * OutNumIndices, int * OutStride) { NativeCall<void, int *, int *>(this, "FDynamicTrailsEmitterData.GetIndexAllocInfo", OutNumIndices, OutStride); }
	void Init(bool bInSelected) { NativeCall<void, bool>(this, "FDynamicTrailsEmitterData.Init", bInSelected); }
	int RenderEmitter(FParticleSystemSceneProxy * Proxy, FPrimitiveDrawInterface * PDI, FSceneView * View) { return NativeCall<int, FParticleSystemSceneProxy *, FPrimitiveDrawInterface *, FSceneView *>(this, "FDynamicTrailsEmitterData.RenderEmitter", Proxy, PDI, View); }
};

