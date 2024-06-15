#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_Companion_eventOnCompanionEventEnded_Parms
{
	char __padding[0x50L];
	FCompanionEventData& StoppingEventDataField() { return *GetNativePointerField<FCompanionEventData*>(this, "PrimalBuff_Companion_eventOnCompanionEventEnded_Parms.StoppingEventData"); }
};

