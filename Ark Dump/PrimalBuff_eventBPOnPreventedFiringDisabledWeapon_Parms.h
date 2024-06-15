#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_eventBPOnPreventedFiringDisabledWeapon_Parms
{
	char __padding[0x10L];
	FName& PreventingTagField() { return *GetNativePointerField<FName*>(this, "PrimalBuff_eventBPOnPreventedFiringDisabledWeapon_Parms.PreventingTag"); }
};

