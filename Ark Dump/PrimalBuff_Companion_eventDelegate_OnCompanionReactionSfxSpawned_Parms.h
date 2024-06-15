#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_Companion_eventDelegate_OnCompanionReactionSfxSpawned_Parms
{
	char __padding[0x10L];
	UAudioComponent * SpawnedComp_SFXField() { return GetNativePointerField<UAudioComponent *>(this, "PrimalBuff_Companion_eventDelegate_OnCompanionReactionSfxSpawned_Parms.SpawnedComp_SFX"); }
};

