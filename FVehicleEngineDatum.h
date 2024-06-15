#pragma once

#include "BaseDeclarations.h"
struct FVehicleEngineDatum
{
	char __padding[0x14L];
	float& FadeInRPMStartField() { return *GetNativePointerField<float*>(this, "FVehicleEngineDatum.FadeInRPMStart"); }
	float& FadeInRPMEndField() { return *GetNativePointerField<float*>(this, "FVehicleEngineDatum.FadeInRPMEnd"); }
	float& FadeOutRPMStartField() { return *GetNativePointerField<float*>(this, "FVehicleEngineDatum.FadeOutRPMStart"); }
	float& FadeOutRPMEndField() { return *GetNativePointerField<float*>(this, "FVehicleEngineDatum.FadeOutRPMEnd"); }
	float& MaxPitchMultiplierField() { return *GetNativePointerField<float*>(this, "FVehicleEngineDatum.MaxPitchMultiplier"); }

	// Functions

};

