#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_eventGetForcedBuffAimOverride_Parms
{
	char __padding[0x10L];
	bool& bIsWeaponAimField() { return *GetNativePointerField<bool*>(this, "PrimalBuff_eventGetForcedBuffAimOverride_Parms.bIsWeaponAim"); }
	FRotator& ReturnValueField() { return *GetNativePointerField<FRotator*>(this, "PrimalBuff_eventGetForcedBuffAimOverride_Parms.ReturnValue"); }

	// Functions

};

