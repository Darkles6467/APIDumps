#pragma once

#include "BaseDeclarations.h"
struct ShooterWeapon_eventBPAllowNativeFireWeapon_Parms
{
	char __padding[0x1L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "ShooterWeapon_eventBPAllowNativeFireWeapon_Parms.ReturnValue"); }
};

