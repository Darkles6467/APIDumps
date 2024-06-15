#pragma once

#include "BaseDeclarations.h"
struct ShooterWeapon_Placer_eventBPSecondaryAction_Parms
{
	char __padding[0x1L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "ShooterWeapon_Placer_eventBPSecondaryAction_Parms.ReturnValue"); }
};

