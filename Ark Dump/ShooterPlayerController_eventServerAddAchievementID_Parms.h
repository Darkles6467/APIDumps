#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventServerAddAchievementID_Parms
{
	char __padding[0x18L];
	FString& AchievementIDField() { return *GetNativePointerField<FString*>(this, "ShooterPlayerController_eventServerAddAchievementID_Parms.AchievementID"); }
	bool& bIsOnSpawnField() { return *GetNativePointerField<bool*>(this, "ShooterPlayerController_eventServerAddAchievementID_Parms.bIsOnSpawn"); }
};

