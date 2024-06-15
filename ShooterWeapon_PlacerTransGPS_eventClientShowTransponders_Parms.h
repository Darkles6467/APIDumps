#pragma once

#include "BaseDeclarations.h"
struct ShooterWeapon_PlacerTransGPS_eventClientShowTransponders_Parms
{
	char __padding[0x1L];
	bool& bValueField() { return *GetNativePointerField<bool*>(this, "ShooterWeapon_PlacerTransGPS_eventClientShowTransponders_Parms.bValue"); }
};

