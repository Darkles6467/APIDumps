#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMissionPrerequisite : UObject
{

	// Functions

	bool IsSatisfied(APlayerController * Controller, AShooterCharacter * PlayerPawn, APrimalBuff_MissionData * PlayerMissionData, FString * outReason) { return NativeCall<bool, APlayerController *, AShooterCharacter *, APrimalBuff_MissionData *, FString *>(this, "UMissionPrerequisite.IsSatisfied", Controller, PlayerPawn, PlayerMissionData, outReason); }
};

