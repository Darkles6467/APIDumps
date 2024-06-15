#pragma once

#include "BaseDeclarations.h"
struct ShooterWeapon_Projectile_eventSetLockedTarget_Parms
{
	char __padding[0x10L];
	bool& bIsLockedField() { return *GetNativePointerField<bool*>(this, "ShooterWeapon_Projectile_eventSetLockedTarget_Parms.bIsLocked"); }
};

