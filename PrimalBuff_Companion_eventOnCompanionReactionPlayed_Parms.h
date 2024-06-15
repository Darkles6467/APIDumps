#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_Companion_eventOnCompanionReactionPlayed_Parms
{
	char __padding[0xa8L];
	FCompanionReactionData& PlayedReactionDataField() { return *GetNativePointerField<FCompanionReactionData*>(this, "PrimalBuff_Companion_eventOnCompanionReactionPlayed_Parms.PlayedReactionData"); }
	int& UniqueIDField() { return *GetNativePointerField<int*>(this, "PrimalBuff_Companion_eventOnCompanionReactionPlayed_Parms.UniqueID"); }
};

