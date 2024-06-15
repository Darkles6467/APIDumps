#pragma once

#include "BaseDeclarations.h"
struct ShooterCharacter_eventServerDetachGrapHookCable_Parms
{
	char __padding[0x8L];
	bool& bDoUpwardsJumpField() { return *GetNativePointerField<bool*>(this, "ShooterCharacter_eventServerDetachGrapHookCable_Parms.bDoUpwardsJump"); }
	float& UpwardsJumpYawField() { return *GetNativePointerField<float*>(this, "ShooterCharacter_eventServerDetachGrapHookCable_Parms.UpwardsJumpYaw"); }
};

