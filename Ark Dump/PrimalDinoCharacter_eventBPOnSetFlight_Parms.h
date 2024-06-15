#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventBPOnSetFlight_Parms
{
	char __padding[0x1L];
	bool& bFlyField() { return *GetNativePointerField<bool*>(this, "PrimalDinoCharacter_eventBPOnSetFlight_Parms.bFly"); }
};

