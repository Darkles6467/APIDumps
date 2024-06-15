#pragma once

#include "BaseDeclarations.h"
struct MissionDispatcher_eventBPGetMissionStartLocation_Parms
{
	char __padding[0x20L];
	AShooterCharacter * StartingCharacterField() { return GetNativePointerField<AShooterCharacter *>(this, "MissionDispatcher_eventBPGetMissionStartLocation_Parms.StartingCharacter"); }
	FVector& ReturnValueField() { return *GetNativePointerField<FVector*>(this, "MissionDispatcher_eventBPGetMissionStartLocation_Parms.ReturnValue"); }

	// Functions

};

