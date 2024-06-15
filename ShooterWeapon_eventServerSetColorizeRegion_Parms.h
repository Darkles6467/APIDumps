#pragma once

#include "BaseDeclarations.h"
struct ShooterWeapon_eventServerSetColorizeRegion_Parms
{
	char __padding[0x8L];
	int& theRegionField() { return *GetNativePointerField<int*>(this, "ShooterWeapon_eventServerSetColorizeRegion_Parms.theRegion"); }
	bool& bValToUseField() { return *GetNativePointerField<bool*>(this, "ShooterWeapon_eventServerSetColorizeRegion_Parms.bValToUse"); }
};

