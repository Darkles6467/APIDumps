#pragma once

#include "BaseDeclarations.h"
struct PrimalPlayerData_eventBPApplyToPlayerCharacter_Parms
{
	char __padding[0x10L];
	AShooterPlayerState * ForPlayerStateField() { return GetNativePointerField<AShooterPlayerState *>(this, "PrimalPlayerData_eventBPApplyToPlayerCharacter_Parms.ForPlayerState"); }
	AShooterCharacter * NewPlayerCharacterField() { return GetNativePointerField<AShooterCharacter *>(this, "PrimalPlayerData_eventBPApplyToPlayerCharacter_Parms.NewPlayerCharacter"); }
};

