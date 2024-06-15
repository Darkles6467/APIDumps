#pragma once

#include "BaseDeclarations.h"
struct FAnimTickRecord
{
	char __padding[0x40L];
	float * TimeAccumulatorField() { return GetNativePointerField<float *>(this, "FAnimTickRecord.TimeAccumulator"); }
	FVector& BlendSpacePositionField() { return *GetNativePointerField<FVector*>(this, "FAnimTickRecord.BlendSpacePosition"); }
	FBlendFilter * BlendFilterField() { return GetNativePointerField<FBlendFilter *>(this, "FAnimTickRecord.BlendFilter"); }
	TArray<FBlendSampleData> * BlendSampleDataCacheField() { return GetNativePointerField<TArray<FBlendSampleData> *>(this, "FAnimTickRecord.BlendSampleDataCache"); }
	float& PlayRateMultiplierField() { return *GetNativePointerField<float*>(this, "FAnimTickRecord.PlayRateMultiplier"); }
	float& EffectiveBlendWeightField() { return *GetNativePointerField<float*>(this, "FAnimTickRecord.EffectiveBlendWeight"); }
	bool& bLoopingField() { return *GetNativePointerField<bool*>(this, "FAnimTickRecord.bLooping"); }

	// Functions

};

