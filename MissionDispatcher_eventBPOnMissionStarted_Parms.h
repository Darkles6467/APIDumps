#pragma once

#include "BaseDeclarations.h"
struct MissionDispatcher_eventBPOnMissionStarted_Parms
{
	char __padding[0x10L];
	AShooterCharacter * StartingCharacterField() { return GetNativePointerField<AShooterCharacter *>(this, "MissionDispatcher_eventBPOnMissionStarted_Parms.StartingCharacter"); }
};

