#pragma once

#include "BaseDeclarations.h"
struct FWheelSetup
{
	char __padding[0x20L];
	TSubclassOf<UVehicleWheel>& WheelClassField() { return *GetNativePointerField<TSubclassOf<UVehicleWheel>*>(this, "FWheelSetup.WheelClass"); }
	FName& BoneNameField() { return *GetNativePointerField<FName*>(this, "FWheelSetup.BoneName"); }
	FVector& AdditionalOffsetField() { return *GetNativePointerField<FVector*>(this, "FWheelSetup.AdditionalOffset"); }

	// Functions

};

