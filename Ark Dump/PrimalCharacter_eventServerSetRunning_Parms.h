#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacter_eventServerSetRunning_Parms
{
	char __padding[0x1L];
	bool& bNewRunningField() { return *GetNativePointerField<bool*>(this, "PrimalCharacter_eventServerSetRunning_Parms.bNewRunning"); }
};

