#pragma once

#include "BaseDeclarations.h"
struct FVehicleEngineData
{
	char __padding[0x88L];
	FRuntimeFloatCurve& TorqueCurveField() { return *GetNativePointerField<FRuntimeFloatCurve*>(this, "FVehicleEngineData.TorqueCurve"); }
	float& MaxRPMField() { return *GetNativePointerField<float*>(this, "FVehicleEngineData.MaxRPM"); }
	float& MOIField() { return *GetNativePointerField<float*>(this, "FVehicleEngineData.MOI"); }
	float& DampingRateFullThrottleField() { return *GetNativePointerField<float*>(this, "FVehicleEngineData.DampingRateFullThrottle"); }
	float& DampingRateZeroThrottleClutchEngagedField() { return *GetNativePointerField<float*>(this, "FVehicleEngineData.DampingRateZeroThrottleClutchEngaged"); }
	float& DampingRateZeroThrottleClutchDisengagedField() { return *GetNativePointerField<float*>(this, "FVehicleEngineData.DampingRateZeroThrottleClutchDisengaged"); }

	// Functions

};

