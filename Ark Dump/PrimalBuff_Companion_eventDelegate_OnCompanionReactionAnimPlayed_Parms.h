#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_Companion_eventDelegate_OnCompanionReactionAnimPlayed_Parms
{
	char __padding[0x10L];
	UAnimMontage * PlayedAnimField() { return GetNativePointerField<UAnimMontage *>(this, "PrimalBuff_Companion_eventDelegate_OnCompanionReactionAnimPlayed_Parms.PlayedAnim"); }
};

