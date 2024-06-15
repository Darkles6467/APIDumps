#pragma once

#include "BaseDeclarations.h"
struct FRandValueRange
{
	char __padding[0xcL];
	float& MinValField() { return *GetNativePointerField<float*>(this, "FRandValueRange.MinVal"); }
	float& MaxValField() { return *GetNativePointerField<float*>(this, "FRandValueRange.MaxVal"); }
	float& RandPowerField() { return *GetNativePointerField<float*>(this, "FRandValueRange.RandPower"); }

	// Functions

	float GetRandValue() { return NativeCall<float>(this, "FRandValueRange.GetRandValue"); }
};

