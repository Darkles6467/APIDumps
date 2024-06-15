#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_Companion_eventOnCompanionEventStarted_Parms
{
	char __padding[0x50L];
	FCompanionEventData& StartingEventDataField() { return *GetNativePointerField<FCompanionEventData*>(this, "PrimalBuff_Companion_eventOnCompanionEventStarted_Parms.StartingEventData"); }
};

