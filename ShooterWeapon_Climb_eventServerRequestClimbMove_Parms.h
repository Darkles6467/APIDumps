#pragma once

#include "BaseDeclarations.h"
struct ShooterWeapon_Climb_eventServerRequestClimbMove_Parms
{
	char __padding[0x14L];
	char& TypeField() { return *GetNativePointerField<char*>(this, "ShooterWeapon_Climb_eventServerRequestClimbMove_Parms.Type"); }
	FVector& DirectionField() { return *GetNativePointerField<FVector*>(this, "ShooterWeapon_Climb_eventServerRequestClimbMove_Parms.Direction"); }
	bool& ClimbingLeftArmField() { return *GetNativePointerField<bool*>(this, "ShooterWeapon_Climb_eventServerRequestClimbMove_Parms.ClimbingLeftArm"); }
};

