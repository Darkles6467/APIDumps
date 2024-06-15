#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerState_eventBroadcastDeath_Parms
{
	char __padding[0x18L];
	AShooterPlayerState * KillerPlayerStateField() { return GetNativePointerField<AShooterPlayerState *>(this, "ShooterPlayerState_eventBroadcastDeath_Parms.KillerPlayerState"); }
	AShooterPlayerState * KilledPlayerStateField() { return GetNativePointerField<AShooterPlayerState *>(this, "ShooterPlayerState_eventBroadcastDeath_Parms.KilledPlayerState"); }
};

