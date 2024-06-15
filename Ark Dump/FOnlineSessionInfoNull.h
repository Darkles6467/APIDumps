#pragma once

#include "BaseDeclarations.h"
#include "FOnlineSessionInfo.h"
#include "IOnlinePlatformData.h"

struct FOnlineSessionInfoNull : FOnlineSessionInfo
{
	char __padding[0x28L];

	// Functions

	void Init() { NativeCall<void>(this, "FOnlineSessionInfoNull.Init"); }
	FString * ToDebugString(FString * result) { return NativeCall<FString *, FString *>(this, "FOnlineSessionInfoNull.ToDebugString", result); }
	FString * ToString(FString * result) { return NativeCall<FString *, FString *>(this, "FOnlineSessionInfoNull.ToString", result); }
};

