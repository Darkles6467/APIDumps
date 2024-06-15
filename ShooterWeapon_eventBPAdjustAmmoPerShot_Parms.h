#pragma once

#include "BaseDeclarations.h"
struct ShooterWeapon_eventBPAdjustAmmoPerShot_Parms
{
	char __padding[0x4L];
	int& ReturnValueField() { return *GetNativePointerField<int*>(this, "ShooterWeapon_eventBPAdjustAmmoPerShot_Parms.ReturnValue"); }
};

