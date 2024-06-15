#pragma once

#include "BaseDeclarations.h"
struct FMTDResult
{
	char __padding[0x10L];
	FVector& DirectionField() { return *GetNativePointerField<FVector*>(this, "FMTDResult.Direction"); }
	float& DistanceField() { return *GetNativePointerField<float*>(this, "FMTDResult.Distance"); }

	// Functions

};

