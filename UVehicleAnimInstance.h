#pragma once

#include "BaseDeclarations.h"
#include "UAnimInstance.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UVehicleAnimInstance : UAnimInstance
{

	// Functions

	AWheeledVehicle * GetVehicle() { return NativeCall<AWheeledVehicle *>(this, "UVehicleAnimInstance.GetVehicle"); }
};

