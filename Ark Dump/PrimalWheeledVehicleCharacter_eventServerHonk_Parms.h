#pragma once

#include "BaseDeclarations.h"
struct PrimalWheeledVehicleCharacter_eventServerHonk_Parms
{
	char __padding[0x1L];
	bool& bEnableField() { return *GetNativePointerField<bool*>(this, "PrimalWheeledVehicleCharacter_eventServerHonk_Parms.bEnable"); }
};

