#pragma once

#include "BaseDeclarations.h"
struct PrimalWeaponBow_eventServerSetPullString_Parms
{
	char __padding[0x1L];
	bool& bIsPullingField() { return *GetNativePointerField<bool*>(this, "PrimalWeaponBow_eventServerSetPullString_Parms.bIsPulling"); }
};

