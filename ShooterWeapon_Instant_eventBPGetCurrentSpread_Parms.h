#pragma once

#include "BaseDeclarations.h"
struct ShooterWeapon_Instant_eventBPGetCurrentSpread_Parms
{
	char __padding[0x4L];
	float& ReturnValueField() { return *GetNativePointerField<float*>(this, "ShooterWeapon_Instant_eventBPGetCurrentSpread_Parms.ReturnValue"); }
};

