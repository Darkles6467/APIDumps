#pragma once

#include "BaseDeclarations.h"
#include "FOnlineSubsystemImpl.h"
#include "IOnlineSubsystem.h"
#include "FModInfo.h"
#include "FInstalledItemInfo.h"
#include "IOnlinePresence.h"
#include "IOnlineUser.h"
#include "FSteamInventoryItemInfo.h"

struct FSteamEOSCompositeSubsystem : FOnlineSubsystemImpl
{
	char __padding[0x50L];
	FieldArray<_BYTE, 8> anonymous_0Field() { return {this, "FSteamEOSCompositeSubsystem.anonymous_0"}; }

	// Functions

	void AddInventoryItem(unsigned int ItemDefId, int Quantity, FString AdditionalProperties, float Version, const FUniqueNetId * SteamID, FString APIKey) { NativeCall<void, unsigned int, int, FString, float, const FUniqueNetId *, FString>(this, "FSteamEOSCompositeSubsystem.AddInventoryItem", ItemDefId, Quantity, AdditionalProperties, Version, SteamID, APIKey); }
	void CancelSubscription(unsigned __int64 ItemId) { NativeCall<void, unsigned __int64>(this, "FSteamEOSCompositeSubsystem.CancelSubscription", ItemId); }
	bool ConvertIdToModInfo(unsigned __int64 ModId, FModInfo * OutModInfo) { return NativeCall<bool, unsigned __int64, FModInfo *>(this, "FSteamEOSCompositeSubsystem.ConvertIdToModInfo", ModId, OutModInfo); }
	void ConvertIdsToModInfos(const TArray<unsigned __int64> * ModIds, TArray<FModInfo> * OutModInfos) { NativeCall<void, const TArray<unsigned __int64> *, TArray<FModInfo> *>(this, "FSteamEOSCompositeSubsystem.ConvertIdsToModInfos", ModIds, OutModInfos); }
	void DisplayAccountUpgradeDialog(const FUniqueNetId * UniqueId) { NativeCall<void, const FUniqueNetId *>(this, "FSteamEOSCompositeSubsystem.DisplayAccountUpgradeDialog", UniqueId); }
	bool DoesInventoryItemExist(const FUniqueNetId * SteamID, unsigned __int64 ItemID) { return NativeCall<bool, const FUniqueNetId *, unsigned __int64>(this, "FSteamEOSCompositeSubsystem.DoesInventoryItemExist", SteamID, ItemID); }
	bool Exec(UWorld * InWorld, const wchar_t * Cmd, FOutputDevice * Ar) { return NativeCall<bool, UWorld *, const wchar_t *, FOutputDevice *>(this, "FSteamEOSCompositeSubsystem.Exec", InWorld, Cmd, Ar); }
	void ForceTick(float DeltaTime) { NativeCall<void, float>(this, "FSteamEOSCompositeSubsystem.ForceTick", DeltaTime); }
	FString * GetAppId(FString * result) { return NativeCall<FString *, FString *>(this, "FSteamEOSCompositeSubsystem.GetAppId", result); }
	void GetItemDefinitions(FString APIKey) { NativeCall<void, FString>(this, "FSteamEOSCompositeSubsystem.GetItemDefinitions", APIKey); }
	FString * GetItemPrimalData(FString * result, unsigned int ItemID) { return NativeCall<FString *, FString *, unsigned int>(this, "FSteamEOSCompositeSubsystem.GetItemPrimalData", result, ItemID); }
	FString * GetItemPropertyValue(FString * result, unsigned int ItemID, FString PropertyName) { return NativeCall<FString *, FString *, unsigned int, FString>(this, "FSteamEOSCompositeSubsystem.GetItemPropertyValue", result, ItemID, PropertyName); }
	float GetItemVersion(unsigned int ItemID) { return NativeCall<float, unsigned int>(this, "FSteamEOSCompositeSubsystem.GetItemVersion", ItemID); }
	bool GetMod(unsigned __int64 ModId, FInstalledItemInfo * OutMod) { return NativeCall<bool, unsigned __int64, FInstalledItemInfo *>(this, "FSteamEOSCompositeSubsystem.GetMod", ModId, OutMod); }
	void GetModInstallStatus(unsigned __int64 ItemId, ModItemStatus * Status, unsigned __int64 * BytesDownloaded, unsigned __int64 * BytesTotal) { NativeCall<void, unsigned __int64, ModItemStatus *, unsigned __int64 *, unsigned __int64 *>(this, "FSteamEOSCompositeSubsystem.GetModInstallStatus", ItemId, Status, BytesDownloaded, BytesTotal); }
	EModType::Type GetModType(unsigned __int64 ItemId) { return NativeCall<EModType::Type, unsigned __int64>(this, "FSteamEOSCompositeSubsystem.GetModType", ItemId); }
	void GetMods(TArray<FInstalledItemInfo> * Mods) { NativeCall<void, TArray<FInstalledItemInfo> *>(this, "FSteamEOSCompositeSubsystem.GetMods", Mods); }
	TArray<FString> * GetOfficialServerIps(TArray<FString> * result) { return NativeCall<TArray<FString> *, TArray<FString> *>(this, "FSteamEOSCompositeSubsystem.GetOfficialServerIps", result); }
	FString * GetOnlineIDHumanReadable(FString * result) { return NativeCall<FString *, FString *>(this, "FSteamEOSCompositeSubsystem.GetOnlineIDHumanReadable", result); }
	FString * GetOnlineIDLowLevel(FString * result) { return NativeCall<FString *, FString *>(this, "FSteamEOSCompositeSubsystem.GetOnlineIDLowLevel", result); }
	TSharedPtr<IOnlinePresence,1> * GetPresenceInterface(TSharedPtr<IOnlinePresence,1> * result) { return NativeCall<TSharedPtr<IOnlinePresence,1> *, TSharedPtr<IOnlinePresence,1> *>(this, "FSteamEOSCompositeSubsystem.GetPresenceInterface", result); }
	unsigned int GetUTCSubSystemTime() { return NativeCall<unsigned int>(this, "FSteamEOSCompositeSubsystem.GetUTCSubSystemTime"); }
	TSharedPtr<IOnlineUser,1> * GetUserInterface(TSharedPtr<IOnlineUser,1> * result) { return NativeCall<TSharedPtr<IOnlineUser,1> *, TSharedPtr<IOnlineUser,1> *>(this, "FSteamEOSCompositeSubsystem.GetUserInterface", result); }
	void GetUserItems(const FUniqueNetId * SteamID, TArray<FSteamInventoryItemInfo> * ItemInfos) { NativeCall<void, const FUniqueNetId *, TArray<FSteamInventoryItemInfo> *>(this, "FSteamEOSCompositeSubsystem.GetUserItems", SteamID, ItemInfos); }
	void GrantTestItems() { NativeCall<void>(this, "FSteamEOSCompositeSubsystem.GrantTestItems"); }
	bool Init() { return NativeCall<bool>(this, "FSteamEOSCompositeSubsystem.Init"); }
	void InitServer() { NativeCall<void>(this, "FSteamEOSCompositeSubsystem.InitServer"); }
	void InstallSubscriptions() { NativeCall<void>(this, "FSteamEOSCompositeSubsystem.InstallSubscriptions"); }
	bool IsAllowedToCheat(const FUniqueNetId * UserId) { return NativeCall<bool, const FUniqueNetId *>(this, "FSteamEOSCompositeSubsystem.IsAllowedToCheat", UserId); }
	bool IsAppItemOwned(unsigned int ItemId) { return NativeCall<bool, unsigned int>(this, "FSteamEOSCompositeSubsystem.IsAppItemOwned", ItemId); }
	bool IsAppItemOwnedServer(const FUniqueNetId * PlayerId, unsigned int ItemId) { return NativeCall<bool, const FUniqueNetId *, unsigned int>(this, "FSteamEOSCompositeSubsystem.IsAppItemOwnedServer", PlayerId, ItemId); }
	bool IsDedicated() { return NativeCall<bool>(this, "FSteamEOSCompositeSubsystem.IsDedicated"); }
	bool IsEOSSubSystem() { return NativeCall<bool>(this, "FSteamEOSCompositeSubsystem.IsEOSSubSystem"); }
	bool IsGloballyBanned(const FUniqueNetId * SteamID) { return NativeCall<bool, const FUniqueNetId *>(this, "FSteamEOSCompositeSubsystem.IsGloballyBanned", SteamID); }
	bool IsInAllowedToCheatList(const FUniqueNetId * UserId) { return NativeCall<bool, const FUniqueNetId *>(this, "FSteamEOSCompositeSubsystem.IsInAllowedToCheatList", UserId); }
	int IsInstallingAnyMod() { return NativeCall<int>(this, "FSteamEOSCompositeSubsystem.IsInstallingAnyMod"); }
	bool IsLocalPlayer(const FUniqueNetId * UniqueId) { return NativeCall<bool, const FUniqueNetId *>(this, "FSteamEOSCompositeSubsystem.IsLocalPlayer", UniqueId); }
	bool IsSameSteamID(unsigned __int64 SteamID1, const FUniqueNetId * SteamID2) { return NativeCall<bool, unsigned __int64, const FUniqueNetId *>(this, "FSteamEOSCompositeSubsystem.IsSameSteamID", SteamID1, SteamID2); }
	bool IsServer() { return NativeCall<bool>(this, "FSteamEOSCompositeSubsystem.IsServer"); }
	bool IsSharedAccount() { return NativeCall<bool>(this, "FSteamEOSCompositeSubsystem.IsSharedAccount"); }
	bool IsSteamSubSystem() { return NativeCall<bool>(this, "FSteamEOSCompositeSubsystem.IsSteamSubSystem"); }
	bool IsWorkShopItemSubscribed(unsigned __int64 ItemId) { return NativeCall<bool, unsigned __int64>(this, "FSteamEOSCompositeSubsystem.IsWorkShopItemSubscribed", ItemId); }
	void LoadAllowedCheatersListFromFile() { NativeCall<void>(this, "FSteamEOSCompositeSubsystem.LoadAllowedCheatersListFromFile"); }
	void LowLevelUserCleanup(const FUniqueNetId * SteamID) { NativeCall<void, const FUniqueNetId *>(this, "FSteamEOSCompositeSubsystem.LowLevelUserCleanup", SteamID); }
	FString * ModInfoString(FString * result) { return NativeCall<FString *, FString *>(this, "FSteamEOSCompositeSubsystem.ModInfoString", result); }
	void OpenOverlayToWebPage(FString URL) { NativeCall<void, FString>(this, "FSteamEOSCompositeSubsystem.OpenOverlayToWebPage", URL); }
	void OpenStorePageForAppItem(unsigned int ItemId) { NativeCall<void, unsigned int>(this, "FSteamEOSCompositeSubsystem.OpenStorePageForAppItem", ItemId); }
	void RefreshInventoryItems(const FUniqueNetId * SteamID, FString APIKey) { NativeCall<void, const FUniqueNetId *, FString>(this, "FSteamEOSCompositeSubsystem.RefreshInventoryItems", SteamID, APIKey); }
	void RemoveInventoryItem(TArray<unsigned __int64> ItemDefIds, int Quantity) { NativeCall<void, TArray<unsigned __int64>, int>(this, "FSteamEOSCompositeSubsystem.RemoveInventoryItem", ItemDefIds, Quantity); }
	void RemoveInventoryItemLocally(const FUniqueNetId * SteamID, TArray<unsigned __int64> ItemIds) { NativeCall<void, const FUniqueNetId *, TArray<unsigned __int64>>(this, "FSteamEOSCompositeSubsystem.RemoveInventoryItemLocally", SteamID, ItemIds); }
	void RemoveInventoryItemWebAPI(TArray<unsigned __int64> ItemDefIds, int Quantity, const FUniqueNetId * SteamID, FString APIKey) { NativeCall<void, TArray<unsigned __int64>, int, const FUniqueNetId *, FString>(this, "FSteamEOSCompositeSubsystem.RemoveInventoryItemWebAPI", ItemDefIds, Quantity, SteamID, APIKey); }
	void SetForceDedicated(bool bForce) { NativeCall<void, bool>(this, "FSteamEOSCompositeSubsystem.SetForceDedicated", bForce); }
	void SetNamedInterface(FName InterfaceName, UObject * NewInterface) { NativeCall<void, FName, UObject *>(this, "FSteamEOSCompositeSubsystem.SetNamedInterface", InterfaceName, NewInterface); }
	void SetUsingMultiplayerFeatures(const FUniqueNetId * UniqueId, bool bUsingMP) { NativeCall<void, const FUniqueNetId *, bool>(this, "FSteamEOSCompositeSubsystem.SetUsingMultiplayerFeatures", UniqueId, bUsingMP); }
	void ShowVirtualKeyboard(const FString * ExistingText) { NativeCall<void, const FString *>(this, "FSteamEOSCompositeSubsystem.ShowVirtualKeyboard", ExistingText); }
	void ShutDownServer() { NativeCall<void>(this, "FSteamEOSCompositeSubsystem.ShutDownServer"); }
	bool Shutdown() { return NativeCall<bool>(this, "FSteamEOSCompositeSubsystem.Shutdown"); }
	bool Steam_UnlockAchievement(const FUniqueNetId * PlayerId, FString AchievementId) { return NativeCall<bool, const FUniqueNetId *, FString>(this, "FSteamEOSCompositeSubsystem.Steam_UnlockAchievement", PlayerId, AchievementId); }
	bool SubscribeAndInstall(unsigned __int64 ItemId) { return NativeCall<bool, unsigned __int64>(this, "FSteamEOSCompositeSubsystem.SubscribeAndInstall", ItemId); }
	bool Tick(float DeltaTime) { return NativeCall<bool, float>(this, "FSteamEOSCompositeSubsystem.Tick", DeltaTime); }
	bool UseVivox() { return NativeCall<bool>(this, "FSteamEOSCompositeSubsystem.UseVivox"); }
	TArray<unsigned __int64> * ValidateInventoryItemsExist(TArray<unsigned __int64> * result, const FUniqueNetId * SteamID, TArray<unsigned __int64> ItemIDs) { return NativeCall<TArray<unsigned __int64> *, TArray<unsigned __int64> *, const FUniqueNetId *, TArray<unsigned __int64>>(this, "FSteamEOSCompositeSubsystem.ValidateInventoryItemsExist", result, SteamID, ItemIDs); }
	void VirtualKeyboardCompleted(bool bIsAccepted) { NativeCall<void, bool>(this, "FSteamEOSCompositeSubsystem.VirtualKeyboardCompleted", bIsAccepted); }
};

