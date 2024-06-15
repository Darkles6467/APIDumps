#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventBP_ForceAllowMountedWeapon_Parms
{
	char __padding[0x10L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalDinoCharacter_eventBP_ForceAllowMountedWeapon_Parms.ReturnValue"); }
};

