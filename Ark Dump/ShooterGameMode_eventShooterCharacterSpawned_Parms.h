#pragma once

#include "BaseDeclarations.h"
struct ShooterGameMode_eventShooterCharacterSpawned_Parms
{
	char __padding[0x8L];
	AShooterCharacter * TheShooterCharacterField() { return GetNativePointerField<AShooterCharacter *>(this, "ShooterGameMode_eventShooterCharacterSpawned_Parms.TheShooterCharacter"); }
};

