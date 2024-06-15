#pragma once

#include "BaseDeclarations.h"
struct ShooterWeapon_eventBPGetTargetingTooltipInfoLabel_Parms
{
	char __padding[0x28L];
	FText& ReturnValueField() { return *GetNativePointerField<FText*>(this, "ShooterWeapon_eventBPGetTargetingTooltipInfoLabel_Parms.ReturnValue"); }
};

