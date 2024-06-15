#pragma once

#include "BaseDeclarations.h"
struct MissionType_eventBPOnMissionComplete_Parms
{
	char __padding[0x28L];
	AShooterCharacter * ForPlayerField() { return GetNativePointerField<AShooterCharacter *>(this, "MissionType_eventBPOnMissionComplete_Parms.ForPlayer"); }
	AShooterPlayerController * ForControllerField() { return GetNativePointerField<AShooterPlayerController *>(this, "MissionType_eventBPOnMissionComplete_Parms.ForController"); }
	bool& bLastPhaseSuccessField() { return *GetNativePointerField<bool*>(this, "MissionType_eventBPOnMissionComplete_Parms.bLastPhaseSuccess"); }
	float& XPRewardedField() { return *GetNativePointerField<float*>(this, "MissionType_eventBPOnMissionComplete_Parms.XPRewarded"); }
};

