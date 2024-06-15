#pragma once

#include "BaseDeclarations.h"
struct CustomGameState_eventOnNotifyPlayerDied_Parms
{
	char __padding[0x20L];
	AShooterCharacter * theShooterCharField() { return GetNativePointerField<AShooterCharacter *>(this, "CustomGameState_eventOnNotifyPlayerDied_Parms.theShooterChar"); }
	AShooterPlayerController * prevControllerField() { return GetNativePointerField<AShooterPlayerController *>(this, "CustomGameState_eventOnNotifyPlayerDied_Parms.prevController"); }
};

