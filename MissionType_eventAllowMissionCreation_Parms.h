#pragma once

#include "BaseDeclarations.h"
struct MissionType_eventAllowMissionCreation_Parms
{
	char __padding[0x38L];
	AShooterCharacter * ForCharacterField() { return GetNativePointerField<AShooterCharacter *>(this, "MissionType_eventAllowMissionCreation_Parms.ForCharacter"); }
	FVector& LocationField() { return *GetNativePointerField<FVector*>(this, "MissionType_eventAllowMissionCreation_Parms.Location"); }
	FString& FailureReasonField() { return *GetNativePointerField<FString*>(this, "MissionType_eventAllowMissionCreation_Parms.FailureReason"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "MissionType_eventAllowMissionCreation_Parms.ReturnValue"); }

	// Functions

};

