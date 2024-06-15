#pragma once

#include "BaseDeclarations.h"
struct PrimalWeaponGPS_eventServerSetUseCompassInsteadOfGPS_Parms
{
	char __padding[0x1L];
	bool& bUseCompassField() { return *GetNativePointerField<bool*>(this, "PrimalWeaponGPS_eventServerSetUseCompassInsteadOfGPS_Parms.bUseCompass"); }
};

