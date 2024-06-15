#pragma once

#include "BaseDeclarations.h"
struct MissionDispatcher_eventBPOverrideMultiUseMissionList_Parms
{
	char __padding[0x20L];
	AShooterCharacter * StartingCharacterField() { return GetNativePointerField<AShooterCharacter *>(this, "MissionDispatcher_eventBPOverrideMultiUseMissionList_Parms.StartingCharacter"); }
};

