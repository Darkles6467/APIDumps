#pragma once

#include "BaseDeclarations.h"
struct FSeatingSpot
{
	char __padding[0x1cL];
	int& SeatNumberField() { return *GetNativePointerField<int*>(this, "FSeatingSpot.SeatNumber"); }
	FVector& LocationOffsetField() { return *GetNativePointerField<FVector*>(this, "FSeatingSpot.LocationOffset"); }
	FRotator& RotationOffsetField() { return *GetNativePointerField<FRotator*>(this, "FSeatingSpot.RotationOffset"); }

	// Functions

};

