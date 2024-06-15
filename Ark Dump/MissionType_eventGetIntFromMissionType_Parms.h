#pragma once

#include "BaseDeclarations.h"
struct MissionType_eventGetIntFromMissionType_Parms
{
	char __padding[0x18L];
	FName& TagField() { return *GetNativePointerField<FName*>(this, "MissionType_eventGetIntFromMissionType_Parms.Tag"); }
	AShooterCharacter * PlayerPawnField() { return GetNativePointerField<AShooterCharacter *>(this, "MissionType_eventGetIntFromMissionType_Parms.PlayerPawn"); }
	int& ReturnValueField() { return *GetNativePointerField<int*>(this, "MissionType_eventGetIntFromMissionType_Parms.ReturnValue"); }

	// Functions

};

