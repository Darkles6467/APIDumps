#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventBPPreventSpawnForPlayer_Parms
{
	char __padding[0x10L];
	AShooterPlayerController * PCField() { return GetNativePointerField<AShooterPlayerController *>(this, "PrimalDinoCharacter_eventBPPreventSpawnForPlayer_Parms.PC"); }
	bool& bCheckCooldownTimeField() { return *GetNativePointerField<bool*>(this, "PrimalDinoCharacter_eventBPPreventSpawnForPlayer_Parms.bCheckCooldownTime"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalDinoCharacter_eventBPPreventSpawnForPlayer_Parms.ReturnValue"); }
};

