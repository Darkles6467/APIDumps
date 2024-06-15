#pragma once

#include "BaseDeclarations.h"
struct ShooterGameMode_eventShooterCharacterDied_Parms
{
	char __padding[0x8L];
	AShooterCharacter * TheShooterCharacterField() { return GetNativePointerField<AShooterCharacter *>(this, "ShooterGameMode_eventShooterCharacterDied_Parms.TheShooterCharacter"); }
};

