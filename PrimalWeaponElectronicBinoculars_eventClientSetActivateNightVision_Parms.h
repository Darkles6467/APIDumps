#pragma once

#include "BaseDeclarations.h"
struct PrimalWeaponElectronicBinoculars_eventClientSetActivateNightVision_Parms
{
	char __padding[0x1L];
	char& bActiveField() { return *GetNativePointerField<char*>(this, "PrimalWeaponElectronicBinoculars_eventClientSetActivateNightVision_Parms.bActive"); }
};

