#pragma once

#include "BaseDeclarations.h"
struct ShooterWeapon_Activated_eventServerActivateWeapon_Parms
{
	char __padding[0x8L];
	bool& bActivateField() { return *GetNativePointerField<bool*>(this, "ShooterWeapon_Activated_eventServerActivateWeapon_Parms.bActivate"); }
	int& nAnimIndexField() { return *GetNativePointerField<int*>(this, "ShooterWeapon_Activated_eventServerActivateWeapon_Parms.nAnimIndex"); }
};

