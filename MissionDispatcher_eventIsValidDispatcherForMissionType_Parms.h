#pragma once

#include "BaseDeclarations.h"
struct MissionDispatcher_eventIsValidDispatcherForMissionType_Parms
{
	char __padding[0x18L];
	AShooterCharacter * StartingCharacterField() { return GetNativePointerField<AShooterCharacter *>(this, "MissionDispatcher_eventIsValidDispatcherForMissionType_Parms.StartingCharacter"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "MissionDispatcher_eventIsValidDispatcherForMissionType_Parms.ReturnValue"); }

	// Functions

};

