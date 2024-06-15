#pragma once

#include "BaseDeclarations.h"
struct FVehicleTransmissionData
{
	char __padding[0x30L];
	bool& bUseGearAutoBoxField() { return *GetNativePointerField<bool*>(this, "FVehicleTransmissionData.bUseGearAutoBox"); }
	float& GearSwitchTimeField() { return *GetNativePointerField<float*>(this, "FVehicleTransmissionData.GearSwitchTime"); }
	float& GearAutoBoxLatencyField() { return *GetNativePointerField<float*>(this, "FVehicleTransmissionData.GearAutoBoxLatency"); }
	float& FinalRatioField() { return *GetNativePointerField<float*>(this, "FVehicleTransmissionData.FinalRatio"); }
	TArray<FVehicleGearData>& ForwardGearsField() { return *GetNativePointerField<TArray<FVehicleGearData>*>(this, "FVehicleTransmissionData.ForwardGears"); }
	float& ReverseGearRatioField() { return *GetNativePointerField<float*>(this, "FVehicleTransmissionData.ReverseGearRatio"); }
	float& NeutralGearUpRatioField() { return *GetNativePointerField<float*>(this, "FVehicleTransmissionData.NeutralGearUpRatio"); }
	float& ClutchStrengthField() { return *GetNativePointerField<float*>(this, "FVehicleTransmissionData.ClutchStrength"); }

	// Functions

};

