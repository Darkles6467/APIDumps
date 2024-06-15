#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacter_eventPrimalCharacterSleepStateChanged_Parms
{
	char __padding[0x10L];
	bool& bIsSleepingField() { return *GetNativePointerField<bool*>(this, "PrimalCharacter_eventPrimalCharacterSleepStateChanged_Parms.bIsSleeping"); }
};

