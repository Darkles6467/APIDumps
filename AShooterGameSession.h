#pragma once

#include "BaseDeclarations.h"
#include "AInfo.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FUniqueNetId.h"

struct AGameSession : AInfo
{
	char __padding[0x18L];
	int& MaxSpectatorsField() { return *GetNativePointerField<int*>(this, "AGameSession.MaxSpectators"); }
	int& MaxPlayersField() { return *GetNativePointerField<int*>(this, "AGameSession.MaxPlayers"); }
	char& MaxSplitscreensPerConnectionField() { return *GetNativePointerField<char*>(this, "AGameSession.MaxSplitscreensPerConnection"); }
	bool& bRequiresPushToTalkField() { return *GetNativePointerField<bool*>(this, "AGameSession.bRequiresPushToTalk"); }
	FName& SessionNameField() { return *GetNativePointerField<FName*>(this, "AGameSession.SessionName"); }

	// Functions

	bool RequiresPushToTalk() { return NativeCall<bool>(this, "AGameSession.RequiresPushToTalk"); }
	FString * ApproveLogin(FString * result, const FString * Options, const FString * authToken, UNetConnection * Connection) { return NativeCall<FString *, FString *, const FString *, const FString *, UNetConnection *>(this, "AGameSession.ApproveLogin", result, Options, authToken, Connection); }
	bool AtCapacity(bool bSpectator, const FString * AuthToken, UNetConnection * Connection) { return NativeCall<bool, bool, const FString *, UNetConnection *>(this, "AGameSession.AtCapacity", bSpectator, AuthToken, Connection); }
	void BanPlayer() { NativeCall<void>(this, "AGameSession.BanPlayer"); }
	void DumpSessionState() { NativeCall<void>(this, "AGameSession.DumpSessionState"); }
	void InitOptions(const FString * Options) { NativeCall<void, const FString *>(this, "AGameSession.InitOptions", Options); }
	bool KickPlayer(APlayerController * KickedPlayer, const FText * KickReason) { return NativeCall<bool, APlayerController *, const FText *>(this, "AGameSession.KickPlayer", KickedPlayer, KickReason); }
	void NotifyLogout(APlayerController * PC) { NativeCall<void, APlayerController *>(this, "AGameSession.NotifyLogout", PC); }
	void OnLoginComplete(int LocalUserNum, bool bWasSuccessful, const FUniqueNetId * UserId, const FString * Error) { NativeCall<void, int, bool, const FUniqueNetId *, const FString *>(this, "AGameSession.OnLoginComplete", LocalUserNum, bWasSuccessful, UserId, Error); }
	bool ProcessAutoLogin() { return NativeCall<bool>(this, "AGameSession.ProcessAutoLogin"); }
	void RegisterPlayer(APlayerController * NewPlayer, const TSharedPtr<FUniqueNetId,0> * UniqueId, bool bWasFromInvite) { NativeCall<void, APlayerController *, const TSharedPtr<FUniqueNetId,0> *, bool>(this, "AGameSession.RegisterPlayer", NewPlayer, UniqueId, bWasFromInvite); }
	void ReturnToMainMenuHost() { NativeCall<void>(this, "AGameSession.ReturnToMainMenuHost"); }
	bool TravelToSession(int ControllerId, FName InSessionName) { return NativeCall<bool, int, FName>(this, "AGameSession.TravelToSession", ControllerId, InSessionName); }
	void UnregisterPlayer(APlayerController * ExitingPlayer) { NativeCall<void, APlayerController *>(this, "AGameSession.UnregisterPlayer", ExitingPlayer); }
	void UpdateSessionJoinability(FName InSessionName, bool bPublicSearchable, bool bAllowInvites, bool bJoinViaPresence, bool bJoinViaPresenceFriendsOnly) { NativeCall<void, FName, bool, bool, bool, bool>(this, "AGameSession.UpdateSessionJoinability", InSessionName, bPublicSearchable, bAllowInvites, bJoinViaPresence, bJoinViaPresenceFriendsOnly); }
};

struct AShooterGameSession : AGameSession
{
	char __padding[0x1c8L];
	FWindowsCriticalSection& SearchResultsCSField() { return *GetNativePointerField<FWindowsCriticalSection*>(this, "AShooterGameSession.SearchResultsCS"); }
	TArray<FInstalledItemInfo>& CachedModsField() { return *GetNativePointerField<TArray<FInstalledItemInfo>*>(this, "AShooterGameSession.CachedMods"); }
	TArray<FShooterSessionData>& ThreadSafeSearchResultsField() { return *GetNativePointerField<TArray<FShooterSessionData>*>(this, "AShooterGameSession.ThreadSafeSearchResults"); }
	FShooterGameSessionParams& CurrentSessionParamsField() { return *GetNativePointerField<FShooterGameSessionParams*>(this, "AShooterGameSession.CurrentSessionParams"); }
	TSharedPtr<FShooterOnlineSessionSettings,0>& HostSettingsField() { return *GetNativePointerField<TSharedPtr<FShooterOnlineSessionSettings,0>*>(this, "AShooterGameSession.HostSettings"); }
	AShooterGameSession::FOnCreatePresenceSessionComplete& CreatePresenceSessionCompleteEventField() { return *GetNativePointerField<AShooterGameSession::FOnCreatePresenceSessionComplete*>(this, "AShooterGameSession.CreatePresenceSessionCompleteEvent"); }
	AShooterGameSession::FOnJoinSessionComplete& JoinSessionCompleteEventField() { return *GetNativePointerField<AShooterGameSession::FOnJoinSessionComplete*>(this, "AShooterGameSession.JoinSessionCompleteEvent"); }
	AShooterGameSession::FOnFindSessionsComplete& FindSessionsCompleteEventField() { return *GetNativePointerField<AShooterGameSession::FOnFindSessionsComplete*>(this, "AShooterGameSession.FindSessionsCompleteEvent"); }
	AShooterGameSession::FOnFoundSession& FoundSessionEventField() { return *GetNativePointerField<AShooterGameSession::FOnFoundSession*>(this, "AShooterGameSession.FoundSessionEvent"); }
	bool& bFoundSessionField() { return *GetNativePointerField<bool*>(this, "AShooterGameSession.bFoundSession"); }

	// Functions

	AShooterGameSession::FOnCreatePresenceSessionComplete * OnCreatePresenceSessionComplete() { return NativeCall<AShooterGameSession::FOnCreatePresenceSessionComplete *>(this, "AShooterGameSession.OnCreatePresenceSessionComplete"); }
	AShooterGameSession::FOnFindSessionsComplete * OnFindSessionsComplete() { return NativeCall<AShooterGameSession::FOnFindSessionsComplete *>(this, "AShooterGameSession.OnFindSessionsComplete"); }
	AShooterGameSession::FOnJoinSessionComplete * OnJoinSessionComplete() { return NativeCall<AShooterGameSession::FOnJoinSessionComplete *>(this, "AShooterGameSession.OnJoinSessionComplete"); }
	void FOnFindSessionsComplete() { NativeCall<void>(this, "AShooterGameSession.FOnFindSessionsComplete"); }
	FString * ApproveLogin(FString * result, const FString * Options, const FString * authToken, UNetConnection * Connection) { return NativeCall<FString *, FString *, const FString *, const FString *, UNetConnection *>(this, "AShooterGameSession.ApproveLogin", result, Options, authToken, Connection); }
	void BroadcastFoundSessionEvent() { NativeCall<void>(this, "AShooterGameSession.BroadcastFoundSessionEvent"); }
	void CancelFindSessions() { NativeCall<void>(this, "AShooterGameSession.CancelFindSessions"); }
	void DelayedSessionDelete() { NativeCall<void>(this, "AShooterGameSession.DelayedSessionDelete"); }
	void FindSessions(TSharedPtr<FUniqueNetId,0> UserId, FName SessionName, bool bIsLAN, bool bIsPresence, bool bRecreateSearchSettings, EListSessionStatus::Type FindType, bool bQueryNotFullSessions, bool bPasswordServers, const wchar_t * ServerName, FString ClusterId, bool bIncludeServersWithActiveMods) { NativeCall<void, TSharedPtr<FUniqueNetId,0>, FName, bool, bool, bool, EListSessionStatus::Type, bool, bool, const wchar_t *, FString, bool>(this, "AShooterGameSession.FindSessions", UserId, SessionName, bIsLAN, bIsPresence, bRecreateSearchSettings, FindType, bQueryNotFullSessions, bPasswordServers, ServerName, ClusterId, bIncludeServersWithActiveMods); }
	EOnlineAsyncTaskState::Type GetSearchResultStatus(int * SearchResultIdx, int * NumSearchResults) { return NativeCall<EOnlineAsyncTaskState::Type, int *, int *>(this, "AShooterGameSession.GetSearchResultStatus", SearchResultIdx, NumSearchResults); }
	void HandleMatchHasEnded() { NativeCall<void>(this, "AShooterGameSession.HandleMatchHasEnded"); }
	void HandleMatchHasStarted() { NativeCall<void>(this, "AShooterGameSession.HandleMatchHasStarted"); }
	void InitHostSettings(FOnlineSessionSettings * HostSettings) { NativeCall<void, FOnlineSessionSettings *>(this, "AShooterGameSession.InitHostSettings", HostSettings); }
	void InitOptions(const FString * Options) { NativeCall<void, const FString *>(this, "AShooterGameSession.InitOptions", Options); }
	bool JoinSession(TSharedPtr<FUniqueNetId,0> UserId, FName SessionName, const FOnlineSessionSearchResult * SearchResult) { return NativeCall<bool, TSharedPtr<FUniqueNetId,0>, FName, const FOnlineSessionSearchResult *>(this, "AShooterGameSession.JoinSession", UserId, SessionName, SearchResult); }
	bool JoinSession(TSharedPtr<FUniqueNetId,0> UserId, FName SessionName, int SessionIndexInSearchResults) { return NativeCall<bool, TSharedPtr<FUniqueNetId,0>, FName, int>(this, "AShooterGameSession.JoinSession", UserId, SessionName, SessionIndexInSearchResults); }
	void OnCheckAuthTokenComplete(bool bWasSuccessful, const FUniqueNetId * UserId) { NativeCall<void, bool, const FUniqueNetId *>(this, "AShooterGameSession.OnCheckAuthTokenComplete", bWasSuccessful, UserId); }
	void OnCreateSessionComplete(FName SessionName, bool bWasSuccessful) { NativeCall<void, FName, bool>(this, "AShooterGameSession.OnCreateSessionComplete", SessionName, bWasSuccessful); }
	void OnDestroySessionComplete(FName SessionName, bool bWasSuccessful) { NativeCall<void, FName, bool>(this, "AShooterGameSession.OnDestroySessionComplete", SessionName, bWasSuccessful); }
	void OnFindSessionsComplete(bool bWasSuccessful) { NativeCall<void, bool>(this, "AShooterGameSession.OnFindSessionsComplete", bWasSuccessful); }
	void OnFoundSession() { NativeCall<void>(this, "AShooterGameSession.OnFoundSession"); }
	AShooterGameSession::FOnFoundSession * OnFoundSessionEvent() { return NativeCall<AShooterGameSession::FOnFoundSession *>(this, "AShooterGameSession.OnFoundSessionEvent"); }
	void OnINLINECheckAuthTokenComplete(bool bWasSuccessful, const FUniqueNetId * UserId) { NativeCall<void, bool, const FUniqueNetId *>(this, "AShooterGameSession.OnINLINECheckAuthTokenComplete", bWasSuccessful, UserId); }
	void OnJoinSessionComplete(FName SessionName, EOnJoinSessionCompleteResult::Type Result) { NativeCall<void, FName, EOnJoinSessionCompleteResult::Type>(this, "AShooterGameSession.OnJoinSessionComplete", SessionName, Result); }
	void OnNumConnectedPlayersChanged(int NewPlayersCount) { NativeCall<void, int>(this, "AShooterGameSession.OnNumConnectedPlayersChanged", NewPlayersCount); }
	void OnStartOnlineGameComplete(FName SessionName, bool bWasSuccessful) { NativeCall<void, FName, bool>(this, "AShooterGameSession.OnStartOnlineGameComplete", SessionName, bWasSuccessful); }
	void RegisterServer() { NativeCall<void>(this, "AShooterGameSession.RegisterServer"); }
	void Restart() { NativeCall<void>(this, "AShooterGameSession.Restart"); }
	void Tick(float __formal) { NativeCall<void, float>(this, "AShooterGameSession.Tick", __formal); }
	bool TravelToSession(int ControllerId, FName SessionName) { return NativeCall<bool, int, FName>(this, "AShooterGameSession.TravelToSession", ControllerId, SessionName); }
	void UpdatePublishedSession() { NativeCall<void>(this, "AShooterGameSession.UpdatePublishedSession"); }
};

