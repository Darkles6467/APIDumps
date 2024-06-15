#pragma once

#include "BaseDeclarations.h"
struct ShooterWeapon_Projectile_eventListener_LockOn_Update_Parms
{
	char __padding[0x1L];
	bool& resetField() { return *GetNativePointerField<bool*>(this, "ShooterWeapon_Projectile_eventListener_LockOn_Update_Parms.reset"); }
};

