#pragma once

#include "BaseDeclarations.h"
struct PrimalPlayerData_eventGrantGeneralizedAchievementTag_Parms
{
	char __padding[0x10L];
	FName& ObtainedAchievementTagField() { return *GetNativePointerField<FName*>(this, "PrimalPlayerData_eventGrantGeneralizedAchievementTag_Parms.ObtainedAchievementTag"); }
	AShooterPlayerController * ForPCField() { return GetNativePointerField<AShooterPlayerController *>(this, "PrimalPlayerData_eventGrantGeneralizedAchievementTag_Parms.ForPC"); }
};

