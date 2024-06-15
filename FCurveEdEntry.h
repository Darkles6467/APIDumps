#pragma once

#include "BaseDeclarations.h"
struct FCurveEdEntry
{
	char __padding[0x38L];
	FColor& CurveColorField() { return *GetNativePointerField<FColor*>(this, "FCurveEdEntry.CurveColor"); }
	FString& CurveNameField() { return *GetNativePointerField<FString*>(this, "FCurveEdEntry.CurveName"); }
	int& bHideCurveField() { return *GetNativePointerField<int*>(this, "FCurveEdEntry.bHideCurve"); }
	int& bColorCurveField() { return *GetNativePointerField<int*>(this, "FCurveEdEntry.bColorCurve"); }
	int& bFloatingPointColorCurveField() { return *GetNativePointerField<int*>(this, "FCurveEdEntry.bFloatingPointColorCurve"); }
	int& bClampField() { return *GetNativePointerField<int*>(this, "FCurveEdEntry.bClamp"); }
	float& ClampLowField() { return *GetNativePointerField<float*>(this, "FCurveEdEntry.ClampLow"); }
	float& ClampHighField() { return *GetNativePointerField<float*>(this, "FCurveEdEntry.ClampHigh"); }

	// Functions

};

