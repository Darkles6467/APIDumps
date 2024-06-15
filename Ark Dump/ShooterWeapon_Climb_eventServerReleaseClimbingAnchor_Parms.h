#pragma once

#include "BaseDeclarations.h"
struct ShooterWeapon_Climb_eventServerReleaseClimbingAnchor_Parms
{
	char __padding[0x14L];
	bool& bWithJumpField() { return *GetNativePointerField<bool*>(this, "ShooterWeapon_Climb_eventServerReleaseClimbingAnchor_Parms.bWithJump"); }
	FVector_NetQuantizeNormal& InputDirField() { return *GetNativePointerField<FVector_NetQuantizeNormal*>(this, "ShooterWeapon_Climb_eventServerReleaseClimbingAnchor_Parms.InputDir"); }
	bool& bForceMinTimeCheckBeforeReleasingField() { return *GetNativePointerField<bool*>(this, "ShooterWeapon_Climb_eventServerReleaseClimbingAnchor_Parms.bForceMinTimeCheckBeforeReleasing"); }
};

