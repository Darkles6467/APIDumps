#pragma once

#include "BaseDeclarations.h"
struct ShooterWeapon_eventBPShouldDealDamage_Parms
{
	char __padding[0x10L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "ShooterWeapon_eventBPShouldDealDamage_Parms.ReturnValue"); }
};

