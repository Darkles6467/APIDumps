#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_Companion_eventCanPlayCompanionReaction_Parms
{
	char __padding[0xa8L];
	FCompanionReactionData& CanPlayReactionDataField() { return *GetNativePointerField<FCompanionReactionData*>(this, "PrimalBuff_Companion_eventCanPlayCompanionReaction_Parms.CanPlayReactionData"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalBuff_Companion_eventCanPlayCompanionReaction_Parms.ReturnValue"); }
};

