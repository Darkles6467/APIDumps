#pragma once

#include "BaseDeclarations.h"
#include "FDynamicTrailsEmitterData.h"
#include "FDynamicSpriteEmitterDataBase.h"
#include "FDynamicEmitterDataBase.h"

struct FDynamicAnimTrailEmitterData : FDynamicTrailsEmitterData
{
	char __padding[0xd0L];
	FieldArray<_BYTE, 208> SourceField() { return {this, "FDynamicAnimTrailEmitterData.Source"}; }

	// Functions

	int FillVertexData(FAsyncBufferFillData * Data) { return NativeCall<int, FAsyncBufferFillData *>(this, "FDynamicAnimTrailEmitterData.FillVertexData", Data); }
	void Init(bool bInSelected) { NativeCall<void, bool>(this, "FDynamicAnimTrailEmitterData.Init", bInSelected); }
	void RenderDebug(const FParticleSystemSceneProxy * Proxy, FPrimitiveDrawInterface * PDI, FSceneView * View, bool bCrosses) { NativeCall<void, const FParticleSystemSceneProxy *, FPrimitiveDrawInterface *, FSceneView *, bool>(this, "FDynamicAnimTrailEmitterData.RenderDebug", Proxy, PDI, View, bCrosses); }
};

