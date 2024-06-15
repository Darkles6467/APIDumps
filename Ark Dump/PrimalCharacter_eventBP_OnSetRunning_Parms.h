#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacter_eventBP_OnSetRunning_Parms
{
	char __padding[0x1L];
	bool& bNewIsRunningField() { return *GetNativePointerField<bool*>(this, "PrimalCharacter_eventBP_OnSetRunning_Parms.bNewIsRunning"); }
};

