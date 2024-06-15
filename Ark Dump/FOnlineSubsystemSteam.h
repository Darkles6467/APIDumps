#pragma once

#include "BaseDeclarations.h"
#include "FOnlineSubsystemImpl.h"
#include "IOnlineSubsystem.h"
#include "FModInfo.h"
#include "FInstalledItemInfo.h"
#include "FSteamInventoryItemInfo.h"
#include "IHttpRequest.h"
#include "IHttpResponse.h"
#include "FOnlineInventorySteam.h"

struct FOnlineSubsystemSteam : FOnlineSubsystemImpl
{
	char __padding[0x1f0L];
	FieldArray<_BYTE, 8> SteamInvField() { return {this, "FOnlineSubsystemSteam.SteamInv"}; }
	TSharedPtr<FSteamWorkshop,1>& SteamWorkshopField() { return *GetNativePointerField<TSharedPtr<FSteamWorkshop,1>*>(this, "FOnlineSubsystemSteam.SteamWorkshop"); }
	bool& bSteamworksClientInitializedField() { return *GetNativePointerField<bool*>(this, "FOnlineSubsystemSteam.bSteamworksClientInitialized"); }
	bool& bSteamworksGameServerInitializedField() { return *GetNativePointerField<bool*>(this, "FOnlineSubsystemSteam.bSteamworksGameServerInitialized"); }
	unsigned int& SteamAppIDField() { return *GetNativePointerField<unsigned int*>(this, "FOnlineSubsystemSteam.SteamAppID"); }
	int& GameServerSteamPortField() { return *GetNativePointerField<int*>(this, "FOnlineSubsystemSteam.GameServerSteamPort"); }
	int& GameServerGamePortField() { return *GetNativePointerField<int*>(this, "FOnlineSubsystemSteam.GameServerGamePort"); }
	int& GameServerQueryPortField() { return *GetNativePointerField<int*>(this, "FOnlineSubsystemSteam.GameServerQueryPort"); }
	float& BanCheckTimerField() { return *GetNativePointerField<float*>(this, "FOnlineSubsystemSteam.BanCheckTimer"); }
	FString& BanListURLField() { return *GetNativePointerField<FString*>(this, "FOnlineSubsystemSteam.BanListURL"); }
	bool& bIgnoreAuthField() { return *GetNativePointerField<bool*>(this, "FOnlineSubsystemSteam.bIgnoreAuth"); }
	TArray<FSteamUserCloudData *>& UserCloudDataField() { return *GetNativePointerField<TArray<FSteamUserCloudData *>*>(this, "FOnlineSubsystemSteam.UserCloudData"); }
	FString& AllowedCheatersRequestURLField() { return *GetNativePointerField<FString*>(this, "FOnlineSubsystemSteam.AllowedCheatersRequestURL"); }
	float& LastUpdateAllowedCheatersTimerField() { return *GetNativePointerField<float*>(this, "FOnlineSubsystemSteam.LastUpdateAllowedCheatersTimer"); }
	float& UpdateAllowedCheatersIntervalField() { return *GetNativePointerField<float*>(this, "FOnlineSubsystemSteam.UpdateAllowedCheatersInterval"); }
	TArray<FString>& LocalAllowedCheaterSteamIdsField() { return *GetNativePointerField<TArray<FString>*>(this, "FOnlineSubsystemSteam.LocalAllowedCheaterSteamIds"); }
	TArray<FString>& AllowedCheaterSteamIdsField() { return *GetNativePointerField<TArray<FString>*>(this, "FOnlineSubsystemSteam.AllowedCheaterSteamIds"); }
	TArray<FString>& OfficialServerIpsField() { return *GetNativePointerField<TArray<FString>*>(this, "FOnlineSubsystemSteam.OfficialServerIps"); }
	TSharedPtr<FOnlineSessionSteam,1>& SessionInterfaceField() { return *GetNativePointerField<TSharedPtr<FOnlineSessionSteam,1>*>(this, "FOnlineSubsystemSteam.SessionInterface"); }
	TSharedPtr<FOnlineIdentitySteam,1>& IdentityInterfaceField() { return *GetNativePointerField<TSharedPtr<FOnlineIdentitySteam,1>*>(this, "FOnlineSubsystemSteam.IdentityInterface"); }
	TSharedPtr<FOnlineSharedCloudSteam,1>& SharedCloudInterfaceField() { return *GetNativePointerField<TSharedPtr<FOnlineSharedCloudSteam,1>*>(this, "FOnlineSubsystemSteam.SharedCloudInterface"); }
	TSharedPtr<FOnlineLeaderboardsSteam,1>& LeaderboardsInterfaceField() { return *GetNativePointerField<TSharedPtr<FOnlineLeaderboardsSteam,1>*>(this, "FOnlineSubsystemSteam.LeaderboardsInterface"); }
	TSharedPtr<FOnlineVoiceSteam,1>& VoiceInterfaceField() { return *GetNativePointerField<TSharedPtr<FOnlineVoiceSteam,1>*>(this, "FOnlineSubsystemSteam.VoiceInterface"); }
	TSharedPtr<FOnlineExternalUISteam,1>& ExternalUIInterfaceField() { return *GetNativePointerField<TSharedPtr<FOnlineExternalUISteam,1>*>(this, "FOnlineSubsystemSteam.ExternalUIInterface"); }
	TSharedPtr<FOnlineAchievementsSteam,1>& AchievementsInterfaceField() { return *GetNativePointerField<TSharedPtr<FOnlineAchievementsSteam,1>*>(this, "FOnlineSubsystemSteam.AchievementsInterface"); }
	FWindowsCriticalSection& UserCloudDataLockField() { return *GetNativePointerField<FWindowsCriticalSection*>(this, "FOnlineSubsystemSteam.UserCloudDataLock"); }
	FWindowsCriticalSection& LoadCheaterSteamIdsSafetyLockField() { return *GetNativePointerField<FWindowsCriticalSection*>(this, "FOnlineSubsystemSteam.LoadCheaterSteamIdsSafetyLock"); }

	// Functions

	void AddInventoryItem(unsigned int ItemDefId, int Quantity, FString AdditionalProperties, float Version, const FUniqueNetId * SteamID, FString APIKey) { NativeCall<void, unsigned int, int, FString, float, const FUniqueNetId *, FString>(this, "FOnlineSubsystemSteam.AddInventoryItem", ItemDefId, Quantity, AdditionalProperties, Version, SteamID, APIKey); }
	void CancelSubscription(unsigned __int64 ItemId) { NativeCall<void, unsigned __int64>(this, "FOnlineSubsystemSteam.CancelSubscription", ItemId); }
	void ClearUserCloudFiles() { NativeCall<void>(this, "FOnlineSubsystemSteam.ClearUserCloudFiles"); }
	bool ConvertIdToModInfo(unsigned __int64 ModId, FModInfo * OutModInfo) { return NativeCall<bool, unsigned __int64, FModInfo *>(this, "FOnlineSubsystemSteam.ConvertIdToModInfo", ModId, OutModInfo); }
	void ConvertIdsToModInfos(const TArray<unsigned __int64> * ModIds, TArray<FModInfo> * OutModInfos) { NativeCall<void, const TArray<unsigned __int64> *, TArray<FModInfo> *>(this, "FOnlineSubsystemSteam.ConvertIdsToModInfos", ModIds, OutModInfos); }
	bool DoesInventoryItemExist(const FUniqueNetId * SteamID, unsigned __int64 ItemID) { return NativeCall<bool, const FUniqueNetId *, unsigned __int64>(this, "FOnlineSubsystemSteam.DoesInventoryItemExist", SteamID, ItemID); }
	bool Exec(UWorld * InWorld, const wchar_t * Cmd, FOutputDevice * Ar) { return NativeCall<bool, UWorld *, const wchar_t *, FOutputDevice *>(this, "FOnlineSubsystemSteam.Exec", InWorld, Cmd, Ar); }
	FString * GetAppId(FString * result) { return NativeCall<FString *, FString *>(this, "FOnlineSubsystemSteam.GetAppId", result); }
	void GetItemDefinitions(FString APIKey) { NativeCall<void, FString>(this, "FOnlineSubsystemSteam.GetItemDefinitions", APIKey); }
	FString * GetItemPrimalData(FString * result, unsigned int ItemDefID) { return NativeCall<FString *, FString *, unsigned int>(this, "FOnlineSubsystemSteam.GetItemPrimalData", result, ItemDefID); }
	FString * GetItemPropertyValue(FString * result, unsigned int ItemDefID, FString PropertyName) { return NativeCall<FString *, FString *, unsigned int, FString>(this, "FOnlineSubsystemSteam.GetItemPropertyValue", result, ItemDefID, PropertyName); }
	float GetItemVersion(unsigned int ItemDefID) { return NativeCall<float, unsigned int>(this, "FOnlineSubsystemSteam.GetItemVersion", ItemDefID); }
	bool GetMod(unsigned __int64 ModId, FInstalledItemInfo * OutMod) { return NativeCall<bool, unsigned __int64, FInstalledItemInfo *>(this, "FOnlineSubsystemSteam.GetMod", ModId, OutMod); }
	void GetModInstallStatus(unsigned __int64 ItemId, ModItemStatus * Status, unsigned __int64 * BytesDownloaded, unsigned __int64 * BytesTotal) { NativeCall<void, unsigned __int64, ModItemStatus *, unsigned __int64 *, unsigned __int64 *>(this, "FOnlineSubsystemSteam.GetModInstallStatus", ItemId, Status, BytesDownloaded, BytesTotal); }
	EModType::Type GetModType(unsigned __int64 ItemId) { return NativeCall<EModType::Type, unsigned __int64>(this, "FOnlineSubsystemSteam.GetModType", ItemId); }
	void GetMods(TArray<FInstalledItemInfo> * Mods) { NativeCall<void, TArray<FInstalledItemInfo> *>(this, "FOnlineSubsystemSteam.GetMods", Mods); }
	TArray<FString> * GetOfficialServerIps(TArray<FString> * result) { return NativeCall<TArray<FString> *, TArray<FString> *>(this, "FOnlineSubsystemSteam.GetOfficialServerIps", result); }
	FString * GetOnlineIDLowLevel(FString * result) { return NativeCall<FString *, FString *>(this, "FOnlineSubsystemSteam.GetOnlineIDLowLevel", result); }
	unsigned int GetUTCSubSystemTime() { return NativeCall<unsigned int>(this, "FOnlineSubsystemSteam.GetUTCSubSystemTime"); }
	void GetUserItems(const FUniqueNetId * SteamID, TArray<FSteamInventoryItemInfo> * ItemInfos) { NativeCall<void, const FUniqueNetId *, TArray<FSteamInventoryItemInfo> *>(this, "FOnlineSubsystemSteam.GetUserItems", SteamID, ItemInfos); }
	void GrantTestItems() { NativeCall<void>(this, "FOnlineSubsystemSteam.GrantTestItems"); }
	void HttpGetAllowedCheatersListComplete(TSharedPtr<IHttpRequest,0> HttpRequest, TSharedPtr<IHttpResponse,1> HttpResponse, bool bSucceeded) { NativeCall<void, TSharedPtr<IHttpRequest,0>, TSharedPtr<IHttpResponse,1>, bool>(this, "FOnlineSubsystemSteam.HttpGetAllowedCheatersListComplete", HttpRequest, HttpResponse, bSucceeded); }
	void HttpGetBannedListComplete(TSharedPtr<IHttpRequest,0> HttpRequest, TSharedPtr<IHttpResponse,1> HttpResponse, bool bSucceeded) { NativeCall<void, TSharedPtr<IHttpRequest,0>, TSharedPtr<IHttpResponse,1>, bool>(this, "FOnlineSubsystemSteam.HttpGetBannedListComplete", HttpRequest, HttpResponse, bSucceeded); }
	bool Init() { return NativeCall<bool>(this, "FOnlineSubsystemSteam.Init"); }
	void InitServer() { NativeCall<void>(this, "FOnlineSubsystemSteam.InitServer"); }
	bool InitSteamworksServer() { return NativeCall<bool>(this, "FOnlineSubsystemSteam.InitSteamworksServer"); }
	void InstallSubscriptions() { NativeCall<void>(this, "FOnlineSubsystemSteam.InstallSubscriptions"); }
	bool IsAllowedToCheat(const FUniqueNetId * UserId) { return NativeCall<bool, const FUniqueNetId *>(this, "FOnlineSubsystemSteam.IsAllowedToCheat", UserId); }
	bool IsAppItemOwned(unsigned int AppId) { return NativeCall<bool, unsigned int>(this, "FOnlineSubsystemSteam.IsAppItemOwned", AppId); }
	bool IsAppItemOwnedServer(const FUniqueNetId * PlayerId, unsigned int ItemId) { return NativeCall<bool, const FUniqueNetId *, unsigned int>(this, "FOnlineSubsystemSteam.IsAppItemOwnedServer", PlayerId, ItemId); }
	bool IsEnabled() { return NativeCall<bool>(this, "FOnlineSubsystemSteam.IsEnabled"); }
	bool IsGloballyBanned(const FUniqueNetId * SteamID) { return NativeCall<bool, const FUniqueNetId *>(this, "FOnlineSubsystemSteam.IsGloballyBanned", SteamID); }
	bool IsInAllowedToCheatList(const FUniqueNetId * UserId) { return NativeCall<bool, const FUniqueNetId *>(this, "FOnlineSubsystemSteam.IsInAllowedToCheatList", UserId); }
	int IsInstallingAnyMod() { return NativeCall<int>(this, "FOnlineSubsystemSteam.IsInstallingAnyMod"); }
	bool IsLocalPlayer(const FUniqueNetId * UniqueId) { return NativeCall<bool, const FUniqueNetId *>(this, "FOnlineSubsystemSteam.IsLocalPlayer", UniqueId); }
	bool IsSameSteamID(unsigned __int64 SteamID1, const FUniqueNetId * SteamID2) { return NativeCall<bool, unsigned __int64, const FUniqueNetId *>(this, "FOnlineSubsystemSteam.IsSameSteamID", SteamID1, SteamID2); }
	bool IsSharedAccount() { return NativeCall<bool>(this, "FOnlineSubsystemSteam.IsSharedAccount"); }
	bool IsWorkShopItemSubscribed(unsigned __int64 ItemId) { return NativeCall<bool, unsigned __int64>(this, "FOnlineSubsystemSteam.IsWorkShopItemSubscribed", ItemId); }
	void LoadAllowedCheatersList(FString RawContents, TArray<FString> * OutAllowedCheaterSteamIds) { NativeCall<void, FString, TArray<FString> *>(this, "FOnlineSubsystemSteam.LoadAllowedCheatersList", RawContents, OutAllowedCheaterSteamIds); }
	void LoadAllowedCheatersListFromFile() { NativeCall<void>(this, "FOnlineSubsystemSteam.LoadAllowedCheatersListFromFile"); }
	void LoadOfficialServerList() { NativeCall<void>(this, "FOnlineSubsystemSteam.LoadOfficialServerList"); }
	void LowLevelUserCleanup(const FUniqueNetId * SteamID) { NativeCall<void, const FUniqueNetId *>(this, "FOnlineSubsystemSteam.LowLevelUserCleanup", SteamID); }
	FString * ModInfoString(FString * result) { return NativeCall<FString *, FString *>(this, "FOnlineSubsystemSteam.ModInfoString", result); }
	void OpenOverlayToWebPage(FString URL) { NativeCall<void, FString>(this, "FOnlineSubsystemSteam.OpenOverlayToWebPage", URL); }
	void OpenStorePageForAppItem(unsigned int ItemId) { NativeCall<void, unsigned int>(this, "FOnlineSubsystemSteam.OpenStorePageForAppItem", ItemId); }
	void RefreshInventoryItems(const FUniqueNetId * SteamID, FString APIKey) { NativeCall<void, const FUniqueNetId *, FString>(this, "FOnlineSubsystemSteam.RefreshInventoryItems", SteamID, APIKey); }
	void RemoveInventoryItem(TArray<unsigned __int64> ItemDefIds, int Quantity) { NativeCall<void, TArray<unsigned __int64>, int>(this, "FOnlineSubsystemSteam.RemoveInventoryItem", ItemDefIds, Quantity); }
	void RemoveInventoryItemLocally(const FUniqueNetId * SteamID, TArray<unsigned __int64> ItemIds) { NativeCall<void, const FUniqueNetId *, TArray<unsigned __int64>>(this, "FOnlineSubsystemSteam.RemoveInventoryItemLocally", SteamID, ItemIds); }
	void RemoveInventoryItemWebAPI(TArray<unsigned __int64> ItemDefIds, int Quantity, const FUniqueNetId * SteamID, FString APIKey) { NativeCall<void, TArray<unsigned __int64>, int, const FUniqueNetId *, FString>(this, "FOnlineSubsystemSteam.RemoveInventoryItemWebAPI", ItemDefIds, Quantity, SteamID, APIKey); }
	void RequestAllowedCheaterList() { NativeCall<void>(this, "FOnlineSubsystemSteam.RequestAllowedCheaterList"); }
	void RequestBanList() { NativeCall<void>(this, "FOnlineSubsystemSteam.RequestBanList"); }
	void ShowVirtualKeyboard(const FString * ExistingText) { NativeCall<void, const FString *>(this, "FOnlineSubsystemSteam.ShowVirtualKeyboard", ExistingText); }
	void ShutDownServer() { NativeCall<void>(this, "FOnlineSubsystemSteam.ShutDownServer"); }
	bool Shutdown() { return NativeCall<bool>(this, "FOnlineSubsystemSteam.Shutdown"); }
	void ShutdownSteamworks() { NativeCall<void>(this, "FOnlineSubsystemSteam.ShutdownSteamworks"); }
	bool Steam_UnlockAchievement(const FUniqueNetId * PlayerId, FString AchievementId) { return NativeCall<bool, const FUniqueNetId *, FString>(this, "FOnlineSubsystemSteam.Steam_UnlockAchievement", PlayerId, AchievementId); }
	bool SubscribeAndInstall(unsigned __int64 ItemId) { return NativeCall<bool, unsigned __int64>(this, "FOnlineSubsystemSteam.SubscribeAndInstall", ItemId); }
	bool Tick(float DeltaTime) { return NativeCall<bool, float>(this, "FOnlineSubsystemSteam.Tick", DeltaTime); }
	void TickBanList(float DeltaTime) { NativeCall<void, float>(this, "FOnlineSubsystemSteam.TickBanList", DeltaTime); }
	bool UseVivox() { return NativeCall<bool>(this, "FOnlineSubsystemSteam.UseVivox"); }
	void ValidateAdmins(const TArray<FString> * PrevAllowedCheaterSteamIds) { NativeCall<void, const TArray<FString> *>(this, "FOnlineSubsystemSteam.ValidateAdmins", PrevAllowedCheaterSteamIds); }
	TArray<unsigned __int64> * ValidateInventoryItemsExist(TArray<unsigned __int64> * result, const FUniqueNetId * SteamID, TArray<unsigned __int64> ItemIDs) { return NativeCall<TArray<unsigned __int64> *, TArray<unsigned __int64> *, const FUniqueNetId *, TArray<unsigned __int64>>(this, "FOnlineSubsystemSteam.ValidateInventoryItemsExist", result, SteamID, ItemIDs); }
	void VirtualKeyboardCompleted(bool bIsAccepted) { NativeCall<void, bool>(this, "FOnlineSubsystemSteam.VirtualKeyboardCompleted", bIsAccepted); }
	void ForceTick(float DeltaTime) { NativeCall<void, float>(this, "FOnlineSubsystemSteam.ForceTick", DeltaTime); }
	TSharedPtr<FOnlineInventorySteam,1> * GetSteamInventory(TSharedPtr<FOnlineInventorySteam,1> * result) { return NativeCall<TSharedPtr<FOnlineInventorySteam,1> *, TSharedPtr<FOnlineInventorySteam,1> *>(this, "FOnlineSubsystemSteam.GetSteamInventory", result); }
};

