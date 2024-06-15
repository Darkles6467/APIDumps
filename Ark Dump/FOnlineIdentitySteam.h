#pragma once

#include "BaseDeclarations.h"
#include "IOnlineIdentity.h"

struct FOnlineIdentitySteam : IOnlineIdentity
{
	char __padding[0x10L];
	ISteamUser * SteamUserPtrField() { return GetNativePointerField<ISteamUser *>(this, "FOnlineIdentitySteam.SteamUserPtr"); }
	ISteamFriends * SteamFriendsPtrField() { return GetNativePointerField<ISteamFriends *>(this, "FOnlineIdentitySteam.SteamFriendsPtr"); }

	// Functions

	FString * GetAuthToken(FString * result, int LocalUserNum) { return NativeCall<FString *, FString *, int>(this, "FOnlineIdentitySteam.GetAuthToken", result, LocalUserNum); }
	FString * GetAuthType(FString * result) { return NativeCall<FString *, FString *>(this, "FOnlineIdentitySteam.GetAuthType", result); }
	ELoginStatus::Type GetLoginStatus(const FUniqueNetId * UserId) { return NativeCall<ELoginStatus::Type, const FUniqueNetId *>(this, "FOnlineIdentitySteam.GetLoginStatus", UserId); }
	ELoginStatus::Type GetLoginStatus(int LocalUserNum) { return NativeCall<ELoginStatus::Type, int>(this, "FOnlineIdentitySteam.GetLoginStatus", LocalUserNum); }
	int GetPlatformUserIdFromUniqueNetId(const FUniqueNetId * UniqueNetId) { return NativeCall<int, const FUniqueNetId *>(this, "FOnlineIdentitySteam.GetPlatformUserIdFromUniqueNetId", UniqueNetId); }
	FString * GetPlayerNickname(FString * result, const FUniqueNetId * UserId) { return NativeCall<FString *, FString *, const FUniqueNetId *>(this, "FOnlineIdentitySteam.GetPlayerNickname", result, UserId); }
	FString * GetPlayerNickname(FString * result, int LocalUserNum) { return NativeCall<FString *, FString *, int>(this, "FOnlineIdentitySteam.GetPlayerNickname", result, LocalUserNum); }
	bool Login(int LocalUserNum, const FOnlineAccountCredentials * AccountCredentials) { return NativeCall<bool, int, const FOnlineAccountCredentials *>(this, "FOnlineIdentitySteam.Login", LocalUserNum, AccountCredentials); }
	bool Logout(int LocalUserNum) { return NativeCall<bool, int>(this, "FOnlineIdentitySteam.Logout", LocalUserNum); }
};

