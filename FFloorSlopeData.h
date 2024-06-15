#pragma once

#include "BaseDeclarations.h"
struct FFloorSlopeData
{
	char __padding[0x18L];
	FVector& LocationField() { return *GetNativePointerField<FVector*>(this, "FFloorSlopeData.Location"); }
	FVector& SlopeDirField() { return *GetNativePointerField<FVector*>(this, "FFloorSlopeData.SlopeDir"); }

	// Functions

};

