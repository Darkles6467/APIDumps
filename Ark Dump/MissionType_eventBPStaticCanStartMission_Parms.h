#pragma once

#include "BaseDeclarations.h"
struct MissionType_eventBPStaticCanStartMission_Parms
{
	char __padding[0x38L];
	AShooterCharacter * PlayerPawnField() { return GetNativePointerField<AShooterCharacter *>(this, "MissionType_eventBPStaticCanStartMission_Parms.PlayerPawn"); }
	FString& ClientFailureReasonField() { return *GetNativePointerField<FString*>(this, "MissionType_eventBPStaticCanStartMission_Parms.ClientFailureReason"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "MissionType_eventBPStaticCanStartMission_Parms.ReturnValue"); }

	// Functions

};

