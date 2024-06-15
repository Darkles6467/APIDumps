#pragma once

#include "BaseDeclarations.h"
struct ShooterWeapon_Activated_eventClientActivateWeapon_Parms
{
	char __padding[0x1L];
	bool& bActivateField() { return *GetNativePointerField<bool*>(this, "ShooterWeapon_Activated_eventClientActivateWeapon_Parms.bActivate"); }
};

