#pragma once

#include "BaseDeclarations.h"
struct FFourBox
{
	char __padding[0x60L];
	FieldArray<FVector4[3], 43> MinField() { return {this, "FFourBox.Min"}; }
	FieldArray<FVector4[3], 43> MaxField() { return {this, "FFourBox.Max"}; }

	// Functions

	FBox * GetBox(FBox * result, int BoundingVolumeIndex) { return NativeCall<FBox *, FBox *, int>(this, "FFourBox.GetBox", result, BoundingVolumeIndex); }
	void SetBox(int BoundingVolumeIndex, const FBox * Box) { NativeCall<void, int, const FBox *>(this, "FFourBox.SetBox", BoundingVolumeIndex, Box); }
};

