#pragma once

#include "BaseDeclarations.h"
#include "UBlueprintFunctionLibrary.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UAchievementBlueprintLibrary : UBlueprintFunctionLibrary
{

	// Functions

	static void GetCachedAchievementDescription(APlayerController * PlayerController, FName AchievementID, bool * bFoundID, FText * Title, FText * LockedDescription, FText * UnlockedDescription, bool * bHidden) { NativeCall<void, APlayerController *, FName, bool *, FText *, FText *, FText *, bool *>(nullptr, "UAchievementBlueprintLibrary.GetCachedAchievementDescription", PlayerController, AchievementID, bFoundID, Title, LockedDescription, UnlockedDescription, bHidden); }
	static void GetCachedAchievementProgress(APlayerController * PlayerController, FName AchievementID, bool * bFoundID, float * Progress) { NativeCall<void, APlayerController *, FName, bool *, float *>(nullptr, "UAchievementBlueprintLibrary.GetCachedAchievementProgress", PlayerController, AchievementID, bFoundID, Progress); }
};

