#pragma once

#include "BaseDeclarations.h"
struct FTimeRange
{
	char __padding[0x8L];
	float& MinField() { return *GetNativePointerField<float*>(this, "FTimeRange.Min"); }
	float& MaxField() { return *GetNativePointerField<float*>(this, "FTimeRange.Max"); }

	// Functions

};

