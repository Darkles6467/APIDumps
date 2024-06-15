#pragma once

#include "BaseDeclarations.h"
struct MissionDispatcher_eventBPCanSpawnMission_Parms
{
	char __padding[0x18L];
	AShooterCharacter * StartingCharacterField() { return GetNativePointerField<AShooterCharacter *>(this, "MissionDispatcher_eventBPCanSpawnMission_Parms.StartingCharacter"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "MissionDispatcher_eventBPCanSpawnMission_Parms.ReturnValue"); }
};

