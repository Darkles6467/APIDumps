#pragma once

#include "BaseDeclarations.h"
struct DayCycleManager_eventShooterCharacterPossessed_Parms
{
	char __padding[0x8L];
	AShooterCharacter * theShooterCharacterField() { return GetNativePointerField<AShooterCharacter *>(this, "DayCycleManager_eventShooterCharacterPossessed_Parms.theShooterCharacter"); }
};

