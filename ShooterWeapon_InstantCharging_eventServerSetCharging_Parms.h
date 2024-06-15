#pragma once

#include "BaseDeclarations.h"
struct ShooterWeapon_InstantCharging_eventServerSetCharging_Parms
{
	char __padding[0x8L];
	long double& StartTimeField() { return *GetNativePointerField<long double*>(this, "ShooterWeapon_InstantCharging_eventServerSetCharging_Parms.StartTime"); }
};

