#pragma once

#include "BaseDeclarations.h"
struct FVehicleGearData
{
	char __padding[0xcL];
	float& RatioField() { return *GetNativePointerField<float*>(this, "FVehicleGearData.Ratio"); }
	float& DownRatioField() { return *GetNativePointerField<float*>(this, "FVehicleGearData.DownRatio"); }
	float& UpRatioField() { return *GetNativePointerField<float*>(this, "FVehicleGearData.UpRatio"); }

	// Functions

};

