#pragma once

#include "BaseDeclarations.h"
struct IOnlineSubsystem
{
	char __padding[0xa8L];

	// Functions

	void AddInventoryItem(unsigned int ItemDefId, int Quantity, FString AdditionalProperties, float Version, const FUniqueNetId * SteamID, FString APIKey) { NativeCall<void, unsigned int, int, FString, float, const FUniqueNetId *, FString>(this, "IOnlineSubsystem.AddInventoryItem", ItemDefId, Quantity, AdditionalProperties, Version, SteamID, APIKey); }
	FString * GetItemPrimalData(FString * result, unsigned int ItemID) { return NativeCall<FString *, FString *, unsigned int>(this, "IOnlineSubsystem.GetItemPrimalData", result, ItemID); }
	FString * GetItemPropertyValue(FString * result, unsigned int ItemID, FString PropertyName) { return NativeCall<FString *, FString *, unsigned int, FString>(this, "IOnlineSubsystem.GetItemPropertyValue", result, ItemID, PropertyName); }
	void GetModInstallStatus(unsigned __int64 ItemId, ModItemStatus * Status, unsigned __int64 * BytesDownloaded, unsigned __int64 * BytesTotal) { NativeCall<void, unsigned __int64, ModItemStatus *, unsigned __int64 *, unsigned __int64 *>(this, "IOnlineSubsystem.GetModInstallStatus", ItemId, Status, BytesDownloaded, BytesTotal); }
	FString * GetOnlineIDHumanReadable(FString * result) { return NativeCall<FString *, FString *>(this, "IOnlineSubsystem.GetOnlineIDHumanReadable", result); }
	FString * GetOnlineIDLowLevel(FString * result) { return NativeCall<FString *, FString *>(this, "IOnlineSubsystem.GetOnlineIDLowLevel", result); }
	FString * ModInfoString(FString * result) { return NativeCall<FString *, FString *>(this, "IOnlineSubsystem.ModInfoString", result); }
	void RemoveInventoryItemWebAPI(TArray<unsigned __int64> ItemDefIds, int Quantity, const FUniqueNetId * SteamID, FString APIKey) { NativeCall<void, TArray<unsigned __int64>, int, const FUniqueNetId *, FString>(this, "IOnlineSubsystem.RemoveInventoryItemWebAPI", ItemDefIds, Quantity, SteamID, APIKey); }
	bool Steam_UnlockAchievement(const FUniqueNetId * PlayerId, FString AchievementId) { return NativeCall<bool, const FUniqueNetId *, FString>(this, "IOnlineSubsystem.Steam_UnlockAchievement", PlayerId, AchievementId); }
	TArray<unsigned __int64> * ValidateInventoryItemsExist(TArray<unsigned __int64> * result, const FUniqueNetId * SteamID, TArray<unsigned __int64> ItemIDs) { return NativeCall<TArray<unsigned __int64> *, TArray<unsigned __int64> *, const FUniqueNetId *, TArray<unsigned __int64>>(this, "IOnlineSubsystem.ValidateInventoryItemsExist", result, SteamID, ItemIDs); }
	void RemoveInventoryItemLocally(const FUniqueNetId * SteamID, TArray<unsigned __int64> ItemIds) { NativeCall<void, const FUniqueNetId *, TArray<unsigned __int64>>(this, "IOnlineSubsystem.RemoveInventoryItemLocally", SteamID, ItemIds); }
};

