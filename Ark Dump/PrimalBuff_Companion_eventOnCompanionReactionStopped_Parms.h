#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_Companion_eventOnCompanionReactionStopped_Parms
{
	char __padding[0xa8L];
	FCompanionReactionData& StoppedReactionDataField() { return *GetNativePointerField<FCompanionReactionData*>(this, "PrimalBuff_Companion_eventOnCompanionReactionStopped_Parms.StoppedReactionData"); }
	int& UniqueIDField() { return *GetNativePointerField<int*>(this, "PrimalBuff_Companion_eventOnCompanionReactionStopped_Parms.UniqueID"); }
};

