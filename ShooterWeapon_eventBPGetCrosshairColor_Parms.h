#pragma once

#include "BaseDeclarations.h"
struct ShooterWeapon_eventBPGetCrosshairColor_Parms
{
	char __padding[0x4L];
	FColor& ReturnValueField() { return *GetNativePointerField<FColor*>(this, "ShooterWeapon_eventBPGetCrosshairColor_Parms.ReturnValue"); }
};

