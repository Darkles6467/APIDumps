#pragma once

#include "BaseDeclarations.h"
struct ShooterWeapon_eventForcesTPVCameraOffset_Parms
{
	char __padding[0x1L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "ShooterWeapon_eventForcesTPVCameraOffset_Parms.ReturnValue"); }
};

