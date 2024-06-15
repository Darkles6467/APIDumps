#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_Companion_eventDelegate_OnCompanionReactionPlayed_Parms
{
	char __padding[0xb0L];
	FCompanionReactionData& ReactionDataField() { return *GetNativePointerField<FCompanionReactionData*>(this, "PrimalBuff_Companion_eventDelegate_OnCompanionReactionPlayed_Parms.ReactionData"); }
	int& UniqueIDField() { return *GetNativePointerField<int*>(this, "PrimalBuff_Companion_eventDelegate_OnCompanionReactionPlayed_Parms.UniqueID"); }
};

