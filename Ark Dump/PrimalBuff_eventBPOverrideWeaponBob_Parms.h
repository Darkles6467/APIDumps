#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_eventBPOverrideWeaponBob_Parms
{
	char __padding[0x18L];
	FVector& InWeaponBobField() { return *GetNativePointerField<FVector*>(this, "PrimalBuff_eventBPOverrideWeaponBob_Parms.InWeaponBob"); }
	FVector& ReturnValueField() { return *GetNativePointerField<FVector*>(this, "PrimalBuff_eventBPOverrideWeaponBob_Parms.ReturnValue"); }

	// Functions

};

