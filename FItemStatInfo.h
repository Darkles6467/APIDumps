#pragma once

#include "BaseDeclarations.h"
struct FItemStatInfo
{
	char __padding[0x24L];
	int& DefaultModifierValueField() { return *GetNativePointerField<int*>(this, "FItemStatInfo.DefaultModifierValue"); }
	int& RandomizerRangeOverrideField() { return *GetNativePointerField<int*>(this, "FItemStatInfo.RandomizerRangeOverride"); }
	float& RandomizerRangeMultiplierField() { return *GetNativePointerField<float*>(this, "FItemStatInfo.RandomizerRangeMultiplier"); }
	float& TheRandomizerPowerField() { return *GetNativePointerField<float*>(this, "FItemStatInfo.TheRandomizerPower"); }
	float& StateModifierScaleField() { return *GetNativePointerField<float*>(this, "FItemStatInfo.StateModifierScale"); }
	float& InitialValueConstantField() { return *GetNativePointerField<float*>(this, "FItemStatInfo.InitialValueConstant"); }
	float& RatingValueMultiplierField() { return *GetNativePointerField<float*>(this, "FItemStatInfo.RatingValueMultiplier"); }
	float& AbsoluteMaxValueField() { return *GetNativePointerField<float*>(this, "FItemStatInfo.AbsoluteMaxValue"); }

	// Functions

	float GetItemStatModifier(unsigned __int16 ItemStatValue) { return NativeCall<float, unsigned __int16>(this, "FItemStatInfo.GetItemStatModifier", ItemStatValue); }
	unsigned __int16 GetRandomValue(float QualityLevel, float MinRandomQuality, float * outRandonMultiplier) { return NativeCall<unsigned __int16, float, float, float *>(this, "FItemStatInfo.GetRandomValue", QualityLevel, MinRandomQuality, outRandonMultiplier); }
};

