#pragma once

#include "BaseDeclarations.h"
struct PrimalWheeledVehicleCharacter_eventNetHonk_Parms
{
	char __padding[0x1L];
	bool& bEnableField() { return *GetNativePointerField<bool*>(this, "PrimalWheeledVehicleCharacter_eventNetHonk_Parms.bEnable"); }
};

