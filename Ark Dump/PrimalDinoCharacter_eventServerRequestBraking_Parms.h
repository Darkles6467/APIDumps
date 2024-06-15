#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventServerRequestBraking_Parms
{
	char __padding[0x1L];
	bool& bWantsToBrakeField() { return *GetNativePointerField<bool*>(this, "PrimalDinoCharacter_eventServerRequestBraking_Parms.bWantsToBrake"); }
};

