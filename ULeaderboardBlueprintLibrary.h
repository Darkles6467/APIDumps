#pragma once

#include "BaseDeclarations.h"
#include "UBlueprintFunctionLibrary.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct ULeaderboardBlueprintLibrary : UBlueprintFunctionLibrary
{

	// Functions

	static bool WriteLeaderboardInteger(APlayerController * PlayerController, FName StatName, int StatValue) { return NativeCall<bool, APlayerController *, FName, int>(nullptr, "ULeaderboardBlueprintLibrary.WriteLeaderboardInteger", PlayerController, StatName, StatValue); }
	static bool WriteLeaderboardObject(APlayerController * PlayerController, FOnlineLeaderboardWrite * WriteObject) { return NativeCall<bool, APlayerController *, FOnlineLeaderboardWrite *>(nullptr, "ULeaderboardBlueprintLibrary.WriteLeaderboardObject", PlayerController, WriteObject); }
};

