#pragma once

#include "BaseDeclarations.h"
#include "IOnlineIdentity.h"

struct FSteamEOSCompositeOnlineIdentity : IOnlineIdentity
{
	char __padding[0x30L];

	// Functions

	ELoginStatus::Type GetLoginStatus(const FUniqueNetId * UserId) { return NativeCall<ELoginStatus::Type, const FUniqueNetId *>(this, "FSteamEOSCompositeOnlineIdentity.GetLoginStatus", UserId); }
	int GetPlatformUserIdFromUniqueNetId(const FUniqueNetId * UniqueNetId) { return NativeCall<int, const FUniqueNetId *>(this, "FSteamEOSCompositeOnlineIdentity.GetPlatformUserIdFromUniqueNetId", UniqueNetId); }
	FString * GetPlayerNickname(FString * result, const FUniqueNetId * UserId) { return NativeCall<FString *, FString *, const FUniqueNetId *>(this, "FSteamEOSCompositeOnlineIdentity.GetPlayerNickname", result, UserId); }
};

