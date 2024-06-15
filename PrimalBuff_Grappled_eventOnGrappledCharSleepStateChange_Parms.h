#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_Grappled_eventOnGrappledCharSleepStateChange_Parms
{
	char __padding[0x10L];
	bool& bIsSleepingField() { return *GetNativePointerField<bool*>(this, "PrimalBuff_Grappled_eventOnGrappledCharSleepStateChange_Parms.bIsSleeping"); }
};

