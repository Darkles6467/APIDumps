#pragma once

#include "BaseDeclarations.h"
struct MissionDispatcher_eventBPOnMissionFailToStart_Parms
{
	char __padding[0x10L];
	AShooterCharacter * StartingCharacterField() { return GetNativePointerField<AShooterCharacter *>(this, "MissionDispatcher_eventBPOnMissionFailToStart_Parms.StartingCharacter"); }
};

