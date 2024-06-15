#pragma once

#include "BaseDeclarations.h"
struct FMultiAchievement
{
	char __padding[0x20L];
	FString& UnlockAchievementField() { return *GetNativePointerField<FString*>(this, "FMultiAchievement.UnlockAchievement"); }
	TArray<FString>& RequiredAchievementsField() { return *GetNativePointerField<TArray<FString>*>(this, "FMultiAchievement.RequiredAchievements"); }

	// Functions

};

