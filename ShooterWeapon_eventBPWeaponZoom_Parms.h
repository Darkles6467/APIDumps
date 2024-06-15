#pragma once

#include "BaseDeclarations.h"
struct ShooterWeapon_eventBPWeaponZoom_Parms
{
	char __padding[0x1L];
	bool& bZoomingInField() { return *GetNativePointerField<bool*>(this, "ShooterWeapon_eventBPWeaponZoom_Parms.bZoomingIn"); }
};

