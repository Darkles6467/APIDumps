#pragma once

#include "BaseDeclarations.h"
struct FDebugFloatHistory
{
	char __padding[0x20L];
	TArray<float>& SamplesField() { return *GetNativePointerField<TArray<float>*>(this, "FDebugFloatHistory.Samples"); }
	float& MaxSamplesField() { return *GetNativePointerField<float*>(this, "FDebugFloatHistory.MaxSamples"); }
	float& MinValueField() { return *GetNativePointerField<float*>(this, "FDebugFloatHistory.MinValue"); }
	float& MaxValueField() { return *GetNativePointerField<float*>(this, "FDebugFloatHistory.MaxValue"); }
	bool& bAutoAdjustMinMaxField() { return *GetNativePointerField<bool*>(this, "FDebugFloatHistory.bAutoAdjustMinMax"); }

	// Functions

	void AddSample(const float * FloatValue) { NativeCall<void, const float *>(this, "FDebugFloatHistory.AddSample", FloatValue); }
};

