#pragma once

#include "BaseDeclarations.h"
struct MissionType_eventBPGenerateMissionRewards_Parms
{
	char __padding[0x28L];
	FCharacterAndControllerPair& PlayerField() { return *GetNativePointerField<FCharacterAndControllerPair*>(this, "MissionType_eventBPGenerateMissionRewards_Parms.Player"); }
	bool& bCompletedSuccessfullyField() { return *GetNativePointerField<bool*>(this, "MissionType_eventBPGenerateMissionRewards_Parms.bCompletedSuccessfully"); }
	float& XPRewardField() { return *GetNativePointerField<float*>(this, "MissionType_eventBPGenerateMissionRewards_Parms.XPReward"); }
};

