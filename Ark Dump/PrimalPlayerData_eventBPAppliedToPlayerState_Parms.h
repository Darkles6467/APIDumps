#pragma once

#include "BaseDeclarations.h"
struct PrimalPlayerData_eventBPAppliedToPlayerState_Parms
{
	char __padding[0x8L];
	AShooterPlayerState * ForPlayerStateField() { return GetNativePointerField<AShooterPlayerState *>(this, "PrimalPlayerData_eventBPAppliedToPlayerState_Parms.ForPlayerState"); }
};

