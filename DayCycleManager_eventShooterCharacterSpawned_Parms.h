#pragma once

#include "BaseDeclarations.h"
struct DayCycleManager_eventShooterCharacterSpawned_Parms
{
	char __padding[0x8L];
	AShooterCharacter * theShooterCharacterField() { return GetNativePointerField<AShooterCharacter *>(this, "DayCycleManager_eventShooterCharacterSpawned_Parms.theShooterCharacter"); }
};

