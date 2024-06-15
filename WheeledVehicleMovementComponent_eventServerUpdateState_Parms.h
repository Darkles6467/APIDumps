#pragma once

#include "BaseDeclarations.h"
struct WheeledVehicleMovementComponent_eventServerUpdateState_Parms
{
	char __padding[0x14L];
	float& InSteeringInputField() { return *GetNativePointerField<float*>(this, "WheeledVehicleMovementComponent_eventServerUpdateState_Parms.InSteeringInput"); }
	float& InThrottleInputField() { return *GetNativePointerField<float*>(this, "WheeledVehicleMovementComponent_eventServerUpdateState_Parms.InThrottleInput"); }
	float& InBrakeInputField() { return *GetNativePointerField<float*>(this, "WheeledVehicleMovementComponent_eventServerUpdateState_Parms.InBrakeInput"); }
	float& InHandbrakeInputField() { return *GetNativePointerField<float*>(this, "WheeledVehicleMovementComponent_eventServerUpdateState_Parms.InHandbrakeInput"); }
	int& CurrentGearField() { return *GetNativePointerField<int*>(this, "WheeledVehicleMovementComponent_eventServerUpdateState_Parms.CurrentGear"); }
};

