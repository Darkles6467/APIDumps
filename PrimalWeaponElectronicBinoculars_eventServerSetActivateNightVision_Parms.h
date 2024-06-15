#pragma once

#include "BaseDeclarations.h"
struct PrimalWeaponElectronicBinoculars_eventServerSetActivateNightVision_Parms
{
	char __padding[0x1L];
	char& bActiveField() { return *GetNativePointerField<char*>(this, "PrimalWeaponElectronicBinoculars_eventServerSetActivateNightVision_Parms.bActive"); }
};

