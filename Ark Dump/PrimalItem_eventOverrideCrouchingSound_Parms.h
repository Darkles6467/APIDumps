#pragma once

#include "BaseDeclarations.h"
struct PrimalItem_eventOverrideCrouchingSound_Parms
{
	char __padding[0x18L];
	bool& bIsProneField() { return *GetNativePointerField<bool*>(this, "PrimalItem_eventOverrideCrouchingSound_Parms.bIsProne"); }
	int& soundStateField() { return *GetNativePointerField<int*>(this, "PrimalItem_eventOverrideCrouchingSound_Parms.soundState"); }
};

