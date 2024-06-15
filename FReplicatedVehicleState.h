#pragma once

#include "BaseDeclarations.h"
struct FReplicatedVehicleState
{
	char __padding[0x14L];
	float& SteeringInputField() { return *GetNativePointerField<float*>(this, "FReplicatedVehicleState.SteeringInput"); }
	float& ThrottleInputField() { return *GetNativePointerField<float*>(this, "FReplicatedVehicleState.ThrottleInput"); }
	float& BrakeInputField() { return *GetNativePointerField<float*>(this, "FReplicatedVehicleState.BrakeInput"); }
	float& HandbrakeInputField() { return *GetNativePointerField<float*>(this, "FReplicatedVehicleState.HandbrakeInput"); }
	int& CurrentGearField() { return *GetNativePointerField<int*>(this, "FReplicatedVehicleState.CurrentGear"); }

	// Functions

};

