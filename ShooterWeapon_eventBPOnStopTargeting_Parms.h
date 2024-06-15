#pragma once

#include "BaseDeclarations.h"
struct ShooterWeapon_eventBPOnStopTargeting_Parms
{
	char __padding[0x1L];
	bool& bFromGamepadLeftField() { return *GetNativePointerField<bool*>(this, "ShooterWeapon_eventBPOnStopTargeting_Parms.bFromGamepadLeft"); }
};

