#pragma once

#include "BaseDeclarations.h"
struct FVehicleInputRate
{
	char __padding[0x8L];
	float& RiseRateField() { return *GetNativePointerField<float*>(this, "FVehicleInputRate.RiseRate"); }
	float& FallRateField() { return *GetNativePointerField<float*>(this, "FVehicleInputRate.FallRate"); }

	// Functions

};

