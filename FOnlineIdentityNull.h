#pragma once

#include "BaseDeclarations.h"
#include "IOnlineIdentity.h"

struct FOnlineIdentityNull : IOnlineIdentity
{
	char __padding[0xa0L];

	// Functions

	bool AutoLogin(int LocalUserNum) { return NativeCall<bool, int>(this, "FOnlineIdentityNull.AutoLogin", LocalUserNum); }
	FString * GetAuthToken(FString * result, int LocalUserNum) { return NativeCall<FString *, FString *, int>(this, "FOnlineIdentityNull.GetAuthToken", result, LocalUserNum); }
	FString * GetAuthType(FString * result) { return NativeCall<FString *, FString *>(this, "FOnlineIdentityNull.GetAuthType", result); }
	ELoginStatus::Type GetLoginStatus(const FUniqueNetId * UserId) { return NativeCall<ELoginStatus::Type, const FUniqueNetId *>(this, "FOnlineIdentityNull.GetLoginStatus", UserId); }
	ELoginStatus::Type GetLoginStatus(int LocalUserNum) { return NativeCall<ELoginStatus::Type, int>(this, "FOnlineIdentityNull.GetLoginStatus", LocalUserNum); }
	int GetPlatformUserIdFromUniqueNetId(const FUniqueNetId * UniqueNetId) { return NativeCall<int, const FUniqueNetId *>(this, "FOnlineIdentityNull.GetPlatformUserIdFromUniqueNetId", UniqueNetId); }
	FString * GetPlayerNickname(FString * result, const FUniqueNetId * UserId) { return NativeCall<FString *, FString *, const FUniqueNetId *>(this, "FOnlineIdentityNull.GetPlayerNickname", result, UserId); }
	FString * GetPlayerNickname(FString * result, int LocalUserNum) { return NativeCall<FString *, FString *, int>(this, "FOnlineIdentityNull.GetPlayerNickname", result, LocalUserNum); }
	bool Login(int LocalUserNum, const FOnlineAccountCredentials * AccountCredentials) { return NativeCall<bool, int, const FOnlineAccountCredentials *>(this, "FOnlineIdentityNull.Login", LocalUserNum, AccountCredentials); }
	bool Logout(int LocalUserNum) { return NativeCall<bool, int>(this, "FOnlineIdentityNull.Logout", LocalUserNum); }
};

