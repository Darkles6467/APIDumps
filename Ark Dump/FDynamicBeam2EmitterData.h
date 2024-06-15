#pragma once

#include "BaseDeclarations.h"
#include "FDynamicSpriteEmitterDataBase.h"
#include "FDynamicEmitterDataBase.h"

struct FDynamicBeam2EmitterData : FDynamicSpriteEmitterDataBase
{
	char __padding[0x150L];
	FieldArray<_BYTE, 320> SourceField() { return {this, "FDynamicBeam2EmitterData.Source"}; }
	int& LastFramePreRenderedField() { return *GetNativePointerField<int*>(this, "FDynamicBeam2EmitterData.LastFramePreRendered"); }

	// Functions

	void DoBufferFill(FAsyncBufferFillData * Me) { NativeCall<void, FAsyncBufferFillData *>(this, "FDynamicBeam2EmitterData.DoBufferFill", Me); }
	int FillData_InterpolatedNoise(FAsyncBufferFillData * Me) { return NativeCall<int, FAsyncBufferFillData *>(this, "FDynamicBeam2EmitterData.FillData_InterpolatedNoise", Me); }
	int FillData_Noise(FAsyncBufferFillData * Me) { return NativeCall<int, FAsyncBufferFillData *>(this, "FDynamicBeam2EmitterData.FillData_Noise", Me); }
	int FillIndexData(FAsyncBufferFillData * Data) { return NativeCall<int, FAsyncBufferFillData *>(this, "FDynamicBeam2EmitterData.FillIndexData", Data); }
	int FillVertexData_NoNoise(FAsyncBufferFillData * Me) { return NativeCall<int, FAsyncBufferFillData *>(this, "FDynamicBeam2EmitterData.FillVertexData_NoNoise", Me); }
	void GetDynamicMeshElementsEmitter(const FParticleSystemSceneProxy * Proxy, FSceneView * View, FSceneViewFamily * ViewFamily, int ViewIndex, FMeshElementCollector * Collector) { NativeCall<void, const FParticleSystemSceneProxy *, FSceneView *, FSceneViewFamily *, int, FMeshElementCollector *>(this, "FDynamicBeam2EmitterData.GetDynamicMeshElementsEmitter", Proxy, View, ViewFamily, ViewIndex, Collector); }
	void GetIndexAllocInfo(int * OutNumIndices, int * OutStride) { NativeCall<void, int *, int *>(this, "FDynamicBeam2EmitterData.GetIndexAllocInfo", OutNumIndices, OutStride); }
	void Init(bool bInSelected) { NativeCall<void, bool>(this, "FDynamicBeam2EmitterData.Init", bInSelected); }
	void RenderDirectLine(const FParticleSystemSceneProxy * Proxy, FPrimitiveDrawInterface * PDI, FSceneView * View) { NativeCall<void, const FParticleSystemSceneProxy *, FPrimitiveDrawInterface *, FSceneView *>(this, "FDynamicBeam2EmitterData.RenderDirectLine", Proxy, PDI, View); }
	int RenderEmitter(FParticleSystemSceneProxy * Proxy, FPrimitiveDrawInterface * PDI, FSceneView * View) { return NativeCall<int, FParticleSystemSceneProxy *, FPrimitiveDrawInterface *, FSceneView *>(this, "FDynamicBeam2EmitterData.RenderEmitter", Proxy, PDI, View); }
	void RenderLines(const FParticleSystemSceneProxy * Proxy, FPrimitiveDrawInterface * PDI, FSceneView * View) { NativeCall<void, const FParticleSystemSceneProxy *, FPrimitiveDrawInterface *, FSceneView *>(this, "FDynamicBeam2EmitterData.RenderLines", Proxy, PDI, View); }
};

