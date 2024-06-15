#pragma once

#include "BaseDeclarations.h"
struct ShooterWeapon_Climb_eventServerPerformTurn_Parms
{
	char __padding[0x1L];
	bool& ClimbingLeftArmField() { return *GetNativePointerField<bool*>(this, "ShooterWeapon_Climb_eventServerPerformTurn_Parms.ClimbingLeftArm"); }
};

