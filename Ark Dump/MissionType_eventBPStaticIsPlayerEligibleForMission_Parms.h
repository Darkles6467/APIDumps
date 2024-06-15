#pragma once

#include "BaseDeclarations.h"
struct MissionType_eventBPStaticIsPlayerEligibleForMission_Parms
{
	char __padding[0x30L];
	AShooterCharacter * PlayerPawnField() { return GetNativePointerField<AShooterCharacter *>(this, "MissionType_eventBPStaticIsPlayerEligibleForMission_Parms.PlayerPawn"); }
	FString& OutReasonField() { return *GetNativePointerField<FString*>(this, "MissionType_eventBPStaticIsPlayerEligibleForMission_Parms.OutReason"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "MissionType_eventBPStaticIsPlayerEligibleForMission_Parms.ReturnValue"); }

	// Functions

};

