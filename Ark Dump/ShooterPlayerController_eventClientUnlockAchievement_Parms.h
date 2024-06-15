#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventClientUnlockAchievement_Parms
{
	char __padding[0x10L];
	FString& AchievementIDField() { return *GetNativePointerField<FString*>(this, "ShooterPlayerController_eventClientUnlockAchievement_Parms.AchievementID"); }
};

