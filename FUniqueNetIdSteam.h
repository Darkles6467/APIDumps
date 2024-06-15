#pragma once

#include "BaseDeclarations.h"
#include "FUniqueNetIdSteamOrEOS.h"
#include "FUniqueNetId.h"
#include "IOnlinePlatformData.h"

struct FUniqueNetIdSteam : FUniqueNetIdSteamOrEOS
{

	// Functions

	FString * ToDebugString(FString * result) { return NativeCall<FString *, FString *>(this, "FUniqueNetIdSteam.ToDebugString", result); }
};

