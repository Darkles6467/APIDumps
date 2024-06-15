#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_Companion_eventClient_AddCompanionReaction_Parms
{
	char __padding[0xb8L];
	FCompanionReactionData& WithReactionDataField() { return *GetNativePointerField<FCompanionReactionData*>(this, "PrimalBuff_Companion_eventClient_AddCompanionReaction_Parms.WithReactionData"); }
	bool& bForcePlayNowField() { return *GetNativePointerField<bool*>(this, "PrimalBuff_Companion_eventClient_AddCompanionReaction_Parms.bForcePlayNow"); }
	int& UniqueIDField() { return *GetNativePointerField<int*>(this, "PrimalBuff_Companion_eventClient_AddCompanionReaction_Parms.UniqueID"); }
};

