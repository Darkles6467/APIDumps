#pragma once

#include "BaseDeclarations.h"
#include "FDynamicTrailsEmitterData.h"
#include "FDynamicSpriteEmitterDataBase.h"
#include "FDynamicEmitterDataBase.h"

struct FDynamicRibbonEmitterData : FDynamicTrailsEmitterData
{
	char __padding[0xe0L];
	FieldArray<_BYTE, 216> SourceField() { return {this, "FDynamicRibbonEmitterData.Source"}; }

	// Functions

	const FDynamicRibbonEmitterReplayData * GetSourceData() { return NativeCall<const FDynamicRibbonEmitterReplayData *>(this, "FDynamicRibbonEmitterData.GetSourceData"); }
	int FillVertexData(FAsyncBufferFillData * Data) { return NativeCall<int, FAsyncBufferFillData *>(this, "FDynamicRibbonEmitterData.FillVertexData", Data); }
	void GetDynamicMeshElementsEmitter(const FParticleSystemSceneProxy * Proxy, FSceneView * View, FSceneViewFamily * ViewFamily, int ViewIndex, FMeshElementCollector * Collector) { NativeCall<void, const FParticleSystemSceneProxy *, FSceneView *, FSceneViewFamily *, int, FMeshElementCollector *>(this, "FDynamicRibbonEmitterData.GetDynamicMeshElementsEmitter", Proxy, View, ViewFamily, ViewIndex, Collector); }
	void Init(bool bInSelected) { NativeCall<void, bool>(this, "FDynamicRibbonEmitterData.Init", bInSelected); }
	void RenderDebug(const FParticleSystemSceneProxy * Proxy, FPrimitiveDrawInterface * PDI, FSceneView * View, bool bCrosses) { NativeCall<void, const FParticleSystemSceneProxy *, FPrimitiveDrawInterface *, FSceneView *, bool>(this, "FDynamicRibbonEmitterData.RenderDebug", Proxy, PDI, View, bCrosses); }
	bool ShouldUsePrerenderView() { return NativeCall<bool>(this, "FDynamicRibbonEmitterData.ShouldUsePrerenderView"); }
};

