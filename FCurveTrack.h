#pragma once

#include "BaseDeclarations.h"
struct FCurveTrack
{
	char __padding[0x18L];
	FName& CurveNameField() { return *GetNativePointerField<FName*>(this, "FCurveTrack.CurveName"); }
	TArray<float>& CurveWeightsField() { return *GetNativePointerField<TArray<float>*>(this, "FCurveTrack.CurveWeights"); }

	// Functions

};

