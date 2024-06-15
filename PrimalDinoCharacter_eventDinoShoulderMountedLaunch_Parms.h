#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventDinoShoulderMountedLaunch_Parms
{
	char __padding[0x18L];
	FVector& launchDirField() { return *GetNativePointerField<FVector*>(this, "PrimalDinoCharacter_eventDinoShoulderMountedLaunch_Parms.launchDir"); }
	AShooterCharacter * throwingCharacterField() { return GetNativePointerField<AShooterCharacter *>(this, "PrimalDinoCharacter_eventDinoShoulderMountedLaunch_Parms.throwingCharacter"); }
};

