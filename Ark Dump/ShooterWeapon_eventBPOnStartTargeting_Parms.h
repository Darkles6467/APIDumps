#pragma once

#include "BaseDeclarations.h"
struct ShooterWeapon_eventBPOnStartTargeting_Parms
{
	char __padding[0x1L];
	bool& bFromGamepadLeftField() { return *GetNativePointerField<bool*>(this, "ShooterWeapon_eventBPOnStartTargeting_Parms.bFromGamepadLeft"); }
};

