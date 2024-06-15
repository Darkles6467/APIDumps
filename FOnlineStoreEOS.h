#pragma once

#include "BaseDeclarations.h"
struct IOnlineStore
{
	char __padding[0x68L];

	// Functions

};

struct FOnlineStoreEOS : IOnlineStore
{
	char __padding[0x1e8L];
	FOnlineSubsystemEOS * EOSSubsystemField() { return GetNativePointerField<FOnlineSubsystemEOS *>(this, "FOnlineStoreEOS.EOSSubsystem"); }

	// Functions

	void AddStoreAppId(unsigned int SteamAppId, const FString * EOSProductId, const FString * EOSOfferId, const FString * EGSStorePage) { NativeCall<void, unsigned int, const FString *, const FString *, const FString *>(this, "FOnlineStoreEOS.AddStoreAppId", SteamAppId, EOSProductId, EOSOfferId, EGSStorePage); }
	void BeginQueryOwnership() { NativeCall<void>(this, "FOnlineStoreEOS.BeginQueryOwnership"); }
	void BeginQueryUserOwnership(EOS_EpicAccountIdDetails * AccountId) { NativeCall<void, EOS_EpicAccountIdDetails *>(this, "FOnlineStoreEOS.BeginQueryUserOwnership", AccountId); }
	bool GetUserOwnership(EOS_EpicAccountIdDetails * AccountId, unsigned int SteamAppId) { return NativeCall<bool, EOS_EpicAccountIdDetails *, unsigned int>(this, "FOnlineStoreEOS.GetUserOwnership", AccountId, SteamAppId); }
	bool HasAnyOwnershipInfo(unsigned int SteamAppId) { return NativeCall<bool, unsigned int>(this, "FOnlineStoreEOS.HasAnyOwnershipInfo", SteamAppId); }
	void OnLoginComplete(int LocalUserNum, bool bWasSuccessful, const FUniqueNetId * UserId, const FString * Error) { NativeCall<void, int, bool, const FUniqueNetId *, const FString *>(this, "FOnlineStoreEOS.OnLoginComplete", LocalUserNum, bWasSuccessful, UserId, Error); }
	void OnLogoutComplete(int LocalUserNum, bool bWasSuccessful) { NativeCall<void, int, bool>(this, "FOnlineStoreEOS.OnLogoutComplete", LocalUserNum, bWasSuccessful); }
	void OpenStorePageForAppItem(unsigned int SteamAppId) { NativeCall<void, unsigned int>(this, "FOnlineStoreEOS.OpenStorePageForAppItem", SteamAppId); }
};

