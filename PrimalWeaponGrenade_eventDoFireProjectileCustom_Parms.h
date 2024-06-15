#pragma once

#include "BaseDeclarations.h"
struct PrimalWeaponGrenade_eventDoFireProjectileCustom_Parms
{
	char __padding[0x1L];
	bool& bExplodeInHandField() { return *GetNativePointerField<bool*>(this, "PrimalWeaponGrenade_eventDoFireProjectileCustom_Parms.bExplodeInHand"); }
};

