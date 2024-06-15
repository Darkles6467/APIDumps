#pragma once

#include "BaseDeclarations.h"
#include "FOnlineSubsystemImpl.h"
#include "IOnlineSubsystem.h"
#include "IOnlinePresence.h"
#include "IOnlineUser.h"
#include "IHttpRequest.h"
#include "IHttpResponse.h"

struct FOnlineSubsystemEOS : FOnlineSubsystemImpl
{
	char __padding[0x240L];
	FieldArray<_BYTE, 56> ProductNameAnsiField() { return {this, "FOnlineSubsystemEOS.ProductNameAnsi"}; }
	FieldArray<char, 64> ProductVersionAnsiField() { return {this, "FOnlineSubsystemEOS.ProductVersionAnsi"}; }
	struct EOS_PlatformHandle * EOSPlatformHandleField() { return GetNativePointerField<struct EOS_PlatformHandle *>(this, "FOnlineSubsystemEOS.EOSPlatformHandle"); }
	struct EOS_AuthHandle * AuthHandleField() { return GetNativePointerField<struct EOS_AuthHandle *>(this, "FOnlineSubsystemEOS.AuthHandle"); }
	struct EOS_FriendsHandle * FriendsHandleField() { return GetNativePointerField<struct EOS_FriendsHandle *>(this, "FOnlineSubsystemEOS.FriendsHandle"); }
	struct EOS_UserInfoHandle * UserInfoHandleField() { return GetNativePointerField<struct EOS_UserInfoHandle *>(this, "FOnlineSubsystemEOS.UserInfoHandle"); }
	struct EOS_PresenceHandle * PresenceHandleField() { return GetNativePointerField<struct EOS_PresenceHandle *>(this, "FOnlineSubsystemEOS.PresenceHandle"); }
	struct EOS_ConnectHandle * ConnectHandleField() { return GetNativePointerField<struct EOS_ConnectHandle *>(this, "FOnlineSubsystemEOS.ConnectHandle"); }
	EOS_SessionsHandle * SessionsHandleField() { return GetNativePointerField<EOS_SessionsHandle *>(this, "FOnlineSubsystemEOS.SessionsHandle"); }
	struct EOS_StatsHandle * StatsHandleField() { return GetNativePointerField<struct EOS_StatsHandle *>(this, "FOnlineSubsystemEOS.StatsHandle"); }
	struct EOS_LeaderboardsHandle * LeaderboardsHandleField() { return GetNativePointerField<struct EOS_LeaderboardsHandle *>(this, "FOnlineSubsystemEOS.LeaderboardsHandle"); }
	struct EOS_MetricsHandle * MetricsHandleField() { return GetNativePointerField<struct EOS_MetricsHandle *>(this, "FOnlineSubsystemEOS.MetricsHandle"); }
	struct EOS_AchievementsHandle * AchievementsHandleField() { return GetNativePointerField<struct EOS_AchievementsHandle *>(this, "FOnlineSubsystemEOS.AchievementsHandle"); }
	struct EOS_EcomHandle * EcomHandleField() { return GetNativePointerField<struct EOS_EcomHandle *>(this, "FOnlineSubsystemEOS.EcomHandle"); }
	struct EOS_LobbyHandle * LobbyHandleField() { return GetNativePointerField<struct EOS_LobbyHandle *>(this, "FOnlineSubsystemEOS.LobbyHandle"); }
	struct EOS_PlayerDataStorageHandle * PlayerDataStorageField() { return GetNativePointerField<struct EOS_PlayerDataStorageHandle *>(this, "FOnlineSubsystemEOS.PlayerDataStorage"); }
	TSharedPtr<FUserManagerEOS,1>& UserManagerField() { return *GetNativePointerField<TSharedPtr<FUserManagerEOS,1>*>(this, "FOnlineSubsystemEOS.UserManager"); }
	TSharedPtr<FOnlineSessionEOS,1>& SessionInterfacePtrField() { return *GetNativePointerField<TSharedPtr<FOnlineSessionEOS,1>*>(this, "FOnlineSubsystemEOS.SessionInterfacePtr"); }
	TSharedPtr<FOnlineLeaderboardsEOS,1>& LeaderboardsInterfacePtrField() { return *GetNativePointerField<TSharedPtr<FOnlineLeaderboardsEOS,1>*>(this, "FOnlineSubsystemEOS.LeaderboardsInterfacePtr"); }
	TSharedPtr<FOnlineAchievementsEOS,1>& AchievementsInterfacePtrField() { return *GetNativePointerField<TSharedPtr<FOnlineAchievementsEOS,1>*>(this, "FOnlineSubsystemEOS.AchievementsInterfacePtr"); }
	TSharedPtr<FOnlineLobbiesEOS,1>& LobbiesPtrField() { return *GetNativePointerField<TSharedPtr<FOnlineLobbiesEOS,1>*>(this, "FOnlineSubsystemEOS.LobbiesPtr"); }
	TSharedPtr<FOnlineStoreEOS,1>& StorePtrField() { return *GetNativePointerField<TSharedPtr<FOnlineStoreEOS,1>*>(this, "FOnlineSubsystemEOS.StorePtr"); }
	FString& AllowedCheatersRequestURLField() { return *GetNativePointerField<FString*>(this, "FOnlineSubsystemEOS.AllowedCheatersRequestURL"); }
	float& LastUpdateAllowedCheatersTimerField() { return *GetNativePointerField<float*>(this, "FOnlineSubsystemEOS.LastUpdateAllowedCheatersTimer"); }
	float& UpdateAllowedCheatersIntervalField() { return *GetNativePointerField<float*>(this, "FOnlineSubsystemEOS.UpdateAllowedCheatersInterval"); }
	TArray<FString>& AllowedCheaterNetIdsField() { return *GetNativePointerField<TArray<FString>*>(this, "FOnlineSubsystemEOS.AllowedCheaterNetIds"); }
	TArray<FString>& OfficialServerIpsField() { return *GetNativePointerField<TArray<FString>*>(this, "FOnlineSubsystemEOS.OfficialServerIps"); }
	float& BanCheckTimerField() { return *GetNativePointerField<float*>(this, "FOnlineSubsystemEOS.BanCheckTimer"); }
	FString& BanListURLField() { return *GetNativePointerField<FString*>(this, "FOnlineSubsystemEOS.BanListURL"); }
	float& FavoritesRefreshCountdownTimerField() { return *GetNativePointerField<float*>(this, "FOnlineSubsystemEOS.FavoritesRefreshCountdownTimer"); }
	unsigned int& CurrentWritePosField() { return *GetNativePointerField<unsigned int*>(this, "FOnlineSubsystemEOS.CurrentWritePos"); }
	bool& FavoritesAreDirtyField() { return *GetNativePointerField<bool*>(this, "FOnlineSubsystemEOS.FavoritesAreDirty"); }
	struct EOS_PlayerDataStorageFileTransferRequestHandle * CurrentTransferRequestHandleField() { return GetNativePointerField<struct EOS_PlayerDataStorageFileTransferRequestHandle *>(this, "FOnlineSubsystemEOS.CurrentTransferRequestHandle"); }
	TArray<EOS_PlayerDataStorageFileTransferRequestHandle *>& TransferRequestHandlesToReleaseField() { return *GetNativePointerField<TArray<EOS_PlayerDataStorageFileTransferRequestHandle *>*>(this, "FOnlineSubsystemEOS.TransferRequestHandlesToRelease"); }
	FString& InProgressFileDataField() { return *GetNativePointerField<FString*>(this, "FOnlineSubsystemEOS.InProgressFileData"); }
	TArray<FString>& FavoriteServersField() { return *GetNativePointerField<TArray<FString>*>(this, "FOnlineSubsystemEOS.FavoriteServers"); }

	// Functions

	void AddInventoryItem(unsigned int ItemDefId, int Quantity, FString AdditionalProperties, float Version, const FUniqueNetId * UniqueID, FString APIKey) { NativeCall<void, unsigned int, int, FString, float, const FUniqueNetId *, FString>(this, "FOnlineSubsystemEOS.AddInventoryItem", ItemDefId, Quantity, AdditionalProperties, Version, UniqueID, APIKey); }
	FString * GetAppId(FString * result) { return NativeCall<FString *, FString *>(this, "FOnlineSubsystemEOS.GetAppId", result); }
	FString * GetItemPropertyValue(FString * result, unsigned int ItemID, FString PropertyName) { return NativeCall<FString *, FString *, unsigned int, FString>(this, "FOnlineSubsystemEOS.GetItemPropertyValue", result, ItemID, PropertyName); }
	TArray<FString> * GetOfficialServerIps(TArray<FString> * result) { return NativeCall<TArray<FString> *, TArray<FString> *>(this, "FOnlineSubsystemEOS.GetOfficialServerIps", result); }
	FString * GetOnlineIDHumanReadable(FString * result) { return NativeCall<FString *, FString *>(this, "FOnlineSubsystemEOS.GetOnlineIDHumanReadable", result); }
	FString * GetOnlineIDLowLevel(FString * result) { return NativeCall<FString *, FString *>(this, "FOnlineSubsystemEOS.GetOnlineIDLowLevel", result); }
	TSharedPtr<IOnlinePresence,1> * GetPresenceInterface(TSharedPtr<IOnlinePresence,1> * result) { return NativeCall<TSharedPtr<IOnlinePresence,1> *, TSharedPtr<IOnlinePresence,1> *>(this, "FOnlineSubsystemEOS.GetPresenceInterface", result); }
	TSharedPtr<IOnlineUser,1> * GetUserInterface(TSharedPtr<IOnlineUser,1> * result) { return NativeCall<TSharedPtr<IOnlineUser,1> *, TSharedPtr<IOnlineUser,1> *>(this, "FOnlineSubsystemEOS.GetUserInterface", result); }
	void HttpGetAllowedCheatersListComplete(TSharedPtr<IHttpRequest,0> HttpRequest, TSharedPtr<IHttpResponse,1> HttpResponse, bool bSucceeded) { NativeCall<void, TSharedPtr<IHttpRequest,0>, TSharedPtr<IHttpResponse,1>, bool>(this, "FOnlineSubsystemEOS.HttpGetAllowedCheatersListComplete", HttpRequest, HttpResponse, bSucceeded); }
	void HttpGetBannedListComplete(TSharedPtr<IHttpRequest,0> HttpRequest, TSharedPtr<IHttpResponse,1> HttpResponse, bool bSucceeded) { NativeCall<void, TSharedPtr<IHttpRequest,0>, TSharedPtr<IHttpResponse,1>, bool>(this, "FOnlineSubsystemEOS.HttpGetBannedListComplete", HttpRequest, HttpResponse, bSucceeded); }
	bool Init() { return NativeCall<bool>(this, "FOnlineSubsystemEOS.Init"); }
	bool IsAllowedToCheat(const FUniqueNetId * UserId) { return NativeCall<bool, const FUniqueNetId *>(this, "FOnlineSubsystemEOS.IsAllowedToCheat", UserId); }
	bool IsAppItemOwned(unsigned int ItemId) { return NativeCall<bool, unsigned int>(this, "FOnlineSubsystemEOS.IsAppItemOwned", ItemId); }
	bool IsAppItemOwnedServer(const FUniqueNetId * PlayerId, unsigned int ItemId) { return NativeCall<bool, const FUniqueNetId *, unsigned int>(this, "FOnlineSubsystemEOS.IsAppItemOwnedServer", PlayerId, ItemId); }
	bool IsGloballyBanned(const FUniqueNetId * UniqueID) { return NativeCall<bool, const FUniqueNetId *>(this, "FOnlineSubsystemEOS.IsGloballyBanned", UniqueID); }
	bool IsInAllowedToCheatList(const FUniqueNetId * UserId) { return NativeCall<bool, const FUniqueNetId *>(this, "FOnlineSubsystemEOS.IsInAllowedToCheatList", UserId); }
	void LoadAllowedCheatersList(FString RawContents) { NativeCall<void, FString>(this, "FOnlineSubsystemEOS.LoadAllowedCheatersList", RawContents); }
	void LoadFavoritesFromCloud() { NativeCall<void>(this, "FOnlineSubsystemEOS.LoadFavoritesFromCloud"); }
	void LoadOfficialServerList() { NativeCall<void>(this, "FOnlineSubsystemEOS.LoadOfficialServerList"); }
	static EOS_PlayerDataStorage_EReadResult OnFileDataReceived(const _tagEOS_PlayerDataStorage_ReadFileDataCallbackInfo * Data) { return NativeCall<EOS_PlayerDataStorage_EReadResult, const _tagEOS_PlayerDataStorage_ReadFileDataCallbackInfo *>(nullptr, "FOnlineSubsystemEOS.OnFileDataReceived", Data); }
	static EOS_PlayerDataStorage_EWriteResult OnFileDataSend(const _tagEOS_PlayerDataStorage_WriteFileDataCallbackInfo * Data, void * OutDataBuffer, unsigned int * OutDataWritten) { return NativeCall<EOS_PlayerDataStorage_EWriteResult, const _tagEOS_PlayerDataStorage_WriteFileDataCallbackInfo *, void *, unsigned int *>(nullptr, "FOnlineSubsystemEOS.OnFileDataSend", Data, OutDataBuffer, OutDataWritten); }
	static void OnFileReceived(const _tagEOS_PlayerDataStorage_ReadFileCallbackInfo * Data) { NativeCall<void, const _tagEOS_PlayerDataStorage_ReadFileCallbackInfo *>(nullptr, "FOnlineSubsystemEOS.OnFileReceived", Data); }
	static void OnFileSent(const _tagEOS_PlayerDataStorage_WriteFileCallbackInfo * Data) { NativeCall<void, const _tagEOS_PlayerDataStorage_WriteFileCallbackInfo *>(nullptr, "FOnlineSubsystemEOS.OnFileSent", Data); }
	void OpenOverlayToWebPage(FString URL) { NativeCall<void, FString>(this, "FOnlineSubsystemEOS.OpenOverlayToWebPage", URL); }
	void OpenStorePageForAppItem(unsigned int ItemId) { NativeCall<void, unsigned int>(this, "FOnlineSubsystemEOS.OpenStorePageForAppItem", ItemId); }
	void RemoveInventoryItemWebAPI(TArray<unsigned __int64> ItemDefIds, int Quantity, const FUniqueNetId * UniqueID, FString APIKey) { NativeCall<void, TArray<unsigned __int64>, int, const FUniqueNetId *, FString>(this, "FOnlineSubsystemEOS.RemoveInventoryItemWebAPI", ItemDefIds, Quantity, UniqueID, APIKey); }
	void RequestAllowedCheaterList() { NativeCall<void>(this, "FOnlineSubsystemEOS.RequestAllowedCheaterList"); }
	void RequestBanList() { NativeCall<void>(this, "FOnlineSubsystemEOS.RequestBanList"); }
	void SaveFavoritesToCloud() { NativeCall<void>(this, "FOnlineSubsystemEOS.SaveFavoritesToCloud"); }
	bool Shutdown() { return NativeCall<bool>(this, "FOnlineSubsystemEOS.Shutdown"); }
	bool Steam_UnlockAchievement(const FUniqueNetId * PlayerId, FString AchievementId) { return NativeCall<bool, const FUniqueNetId *, FString>(this, "FOnlineSubsystemEOS.Steam_UnlockAchievement", PlayerId, AchievementId); }
	bool Tick(float DeltaTime) { return NativeCall<bool, float>(this, "FOnlineSubsystemEOS.Tick", DeltaTime); }
	void TickBanList(float DeltaTime) { NativeCall<void, float>(this, "FOnlineSubsystemEOS.TickBanList", DeltaTime); }
	TArray<unsigned __int64> * ValidateInventoryItemsExist(TArray<unsigned __int64> * result, const FUniqueNetId * UniqueID, TArray<unsigned __int64> ItemIDs) { return NativeCall<TArray<unsigned __int64> *, TArray<unsigned __int64> *, const FUniqueNetId *, TArray<unsigned __int64>>(this, "FOnlineSubsystemEOS.ValidateInventoryItemsExist", result, UniqueID, ItemIDs); }
};

