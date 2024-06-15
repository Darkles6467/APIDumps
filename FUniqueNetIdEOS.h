#pragma once

#include "BaseDeclarations.h"
#include "FUniqueNetIdSteamOrEOS.h"
#include "FUniqueNetId.h"
#include "IOnlinePlatformData.h"

struct FUniqueNetIdEOS : FUniqueNetIdSteamOrEOS
{

	// Functions

	bool IsValid() { return NativeCall<bool>(this, "FUniqueNetIdEOS.IsValid"); }
	FWmfMediaPlayer::FOnMediaClosed * GetProductUserId() { return NativeCall<FWmfMediaPlayer::FOnMediaClosed *>(this, "FUniqueNetIdEOS.GetProductUserId"); }
	FString * ToDebugString(FString * result) { return NativeCall<FString *, FString *>(this, "FUniqueNetIdEOS.ToDebugString", result); }
};

