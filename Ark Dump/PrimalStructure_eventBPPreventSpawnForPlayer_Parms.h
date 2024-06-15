#pragma once

#include "BaseDeclarations.h"
struct PrimalStructure_eventBPPreventSpawnForPlayer_Parms
{
	char __padding[0x20L];
	AShooterPlayerController * PCField() { return GetNativePointerField<AShooterPlayerController *>(this, "PrimalStructure_eventBPPreventSpawnForPlayer_Parms.PC"); }
	bool& bCheckCooldownTimeField() { return *GetNativePointerField<bool*>(this, "PrimalStructure_eventBPPreventSpawnForPlayer_Parms.bCheckCooldownTime"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalStructure_eventBPPreventSpawnForPlayer_Parms.ReturnValue"); }
};

