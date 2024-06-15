#pragma once

#include "BaseDeclarations.h"
#include "IOnlineSession.h"
#include "FOnlineSessionSearch.h"

struct FSteamEOSCompositeOnlineSession : IOnlineSession
{
	char __padding[0x30L];

	// Functions

	void AddAdminSpectator(const FUniqueNetId * UniqueNetID) { NativeCall<void, const FUniqueNetId *>(this, "FSteamEOSCompositeOnlineSession.AddAdminSpectator", UniqueNetID); }
	void AddToFavoritesList(FString Ip, FString Port, int QueryPort) { NativeCall<void, FString, FString, int>(this, "FSteamEOSCompositeOnlineSession.AddToFavoritesList", Ip, Port, QueryPort); }
	void AddToHistoryList() { NativeCall<void>(this, "FSteamEOSCompositeOnlineSession.AddToHistoryList"); }
	bool CancelFindSessions() { return NativeCall<bool>(this, "FSteamEOSCompositeOnlineSession.CancelFindSessions"); }
	bool CancelMatchmaking(const FUniqueNetId * SearchingPlayerId, FName SessionName) { return NativeCall<bool, const FUniqueNetId *, FName>(this, "FSteamEOSCompositeOnlineSession.CancelMatchmaking", SearchingPlayerId, SessionName); }
	bool CancelMatchmaking(int SearchingPlayerNum, FName SessionName) { return NativeCall<bool, int, FName>(this, "FSteamEOSCompositeOnlineSession.CancelMatchmaking", SearchingPlayerNum, SessionName); }
	bool CheckAuthToken(const FString * authToken) { return NativeCall<bool, const FString *>(this, "FSteamEOSCompositeOnlineSession.CheckAuthToken", authToken); }
	bool CreateSession(const FUniqueNetId * HostingPlayerId, FName SessionName, const FOnlineSessionSettings * NewSessionSettings) { return NativeCall<bool, const FUniqueNetId *, FName, const FOnlineSessionSettings *>(this, "FSteamEOSCompositeOnlineSession.CreateSession", HostingPlayerId, SessionName, NewSessionSettings); }
	bool CreateSession(int HostingPlayerNum, FName SessionName, const FOnlineSessionSettings * NewSessionSettings) { return NativeCall<bool, int, FName, const FOnlineSessionSettings *>(this, "FSteamEOSCompositeOnlineSession.CreateSession", HostingPlayerNum, SessionName, NewSessionSettings); }
	bool DestroySession(FName SessionName) { return NativeCall<bool, FName>(this, "FSteamEOSCompositeOnlineSession.DestroySession", SessionName); }
	bool DidSessionRestarted(FName SessionName) { return NativeCall<bool, FName>(this, "FSteamEOSCompositeOnlineSession.DidSessionRestarted", SessionName); }
	void DumpSessionState() { NativeCall<void>(this, "FSteamEOSCompositeOnlineSession.DumpSessionState"); }
	bool EndSession(FName SessionName) { return NativeCall<bool, FName>(this, "FSteamEOSCompositeOnlineSession.EndSession", SessionName); }
	bool FindFriendSession(const FUniqueNetId * LocalUserId, const FUniqueNetId * Friend) { return NativeCall<bool, const FUniqueNetId *, const FUniqueNetId *>(this, "FSteamEOSCompositeOnlineSession.FindFriendSession", LocalUserId, Friend); }
	bool FindFriendSession(int LocalUserNum, const FUniqueNetId * Friend) { return NativeCall<bool, int, const FUniqueNetId *>(this, "FSteamEOSCompositeOnlineSession.FindFriendSession", LocalUserNum, Friend); }
	bool FindSessions(const FUniqueNetId * SearchingPlayerId, const TSharedRef<FOnlineSessionSearch,0> * SearchSettings) { return NativeCall<bool, const FUniqueNetId *, const TSharedRef<FOnlineSessionSearch,0> *>(this, "FSteamEOSCompositeOnlineSession.FindSessions", SearchingPlayerId, SearchSettings); }
	bool FindSessions(int SearchingPlayerNum, const TSharedRef<FOnlineSessionSearch,0> * SearchSettings) { return NativeCall<bool, int, const TSharedRef<FOnlineSessionSearch,0> *>(this, "FSteamEOSCompositeOnlineSession.FindSessions", SearchingPlayerNum, SearchSettings); }
	FName * GetFirstSessionName(FName * result) { return NativeCall<FName *, FName *>(this, "FSteamEOSCompositeOnlineSession.GetFirstSessionName", result); }
	FString * GetInviteUserInputPassword(FString * result) { return NativeCall<FString *, FString *>(this, "FSteamEOSCompositeOnlineSession.GetInviteUserInputPassword", result); }
	FNamedOnlineSession * GetNamedSession(FName SessionName) { return NativeCall<FNamedOnlineSession *, FName>(this, "FSteamEOSCompositeOnlineSession.GetNamedSession", SessionName); }
	int GetNumConnectedPlayersExcludingAuthToken(const FString * AuthToken) { return NativeCall<int, const FString *>(this, "FSteamEOSCompositeOnlineSession.GetNumConnectedPlayersExcludingAuthToken", AuthToken); }
	int GetNumSessions() { return NativeCall<int>(this, "FSteamEOSCompositeOnlineSession.GetNumSessions"); }
	bool GetResolvedConnectString(const FOnlineSessionSearchResult * SearchResult, FName PortType, FString * ConnectInfo) { return NativeCall<bool, const FOnlineSessionSearchResult *, FName, FString *>(this, "FSteamEOSCompositeOnlineSession.GetResolvedConnectString", SearchResult, PortType, ConnectInfo); }
	bool GetResolvedConnectString(FName SessionName, FString * ConnectInfo) { return NativeCall<bool, FName, FString *>(this, "FSteamEOSCompositeOnlineSession.GetResolvedConnectString", SessionName, ConnectInfo); }
	FString * GetSessionConnectionToken(FString * result, const FUniqueNetId * UserId) { return NativeCall<FString *, FString *, const FUniqueNetId *>(this, "FSteamEOSCompositeOnlineSession.GetSessionConnectionToken", result, UserId); }
	EOnlineSessionState::Type GetSessionState(FName SessionName) { return NativeCall<EOnlineSessionState::Type, FName>(this, "FSteamEOSCompositeOnlineSession.GetSessionState", SessionName); }
	void InlineCheckAuthToken(const FString * authToken, const FUniqueNetId * UserId, bool * bHasEarlyResult, bool * bEarlyResult) { NativeCall<void, const FString *, const FUniqueNetId *, bool *, bool *>(this, "FSteamEOSCompositeOnlineSession.InlineCheckAuthToken", authToken, UserId, bHasEarlyResult, bEarlyResult); }
	bool IsFavoriteServer(FString Ip, FString Port, int QueryPort) { return NativeCall<bool, FString, FString, int>(this, "FSteamEOSCompositeOnlineSession.IsFavoriteServer", Ip, Port, QueryPort); }
	bool IsPlayerInSession(FName SessionName, const FUniqueNetId * UniqueId) { return NativeCall<bool, FName, const FUniqueNetId *>(this, "FSteamEOSCompositeOnlineSession.IsPlayerInSession", SessionName, UniqueId); }
	bool JoinSession(const FUniqueNetId * LocalUserId, FName SessionName, const FOnlineSessionSearchResult * DesiredSession) { return NativeCall<bool, const FUniqueNetId *, FName, const FOnlineSessionSearchResult *>(this, "FSteamEOSCompositeOnlineSession.JoinSession", LocalUserId, SessionName, DesiredSession); }
	bool JoinSession(int LocalUserNum, FName SessionName, const FOnlineSessionSearchResult * DesiredSession) { return NativeCall<bool, int, FName, const FOnlineSessionSearchResult *>(this, "FSteamEOSCompositeOnlineSession.JoinSession", LocalUserNum, SessionName, DesiredSession); }
	bool PingSearchResults(const FOnlineSessionSearchResult * SearchResult) { return NativeCall<bool, const FOnlineSessionSearchResult *>(this, "FSteamEOSCompositeOnlineSession.PingSearchResults", SearchResult); }
	bool RegisterPlayer(FName SessionName, const FUniqueNetId * PlayerId, bool bWasInvited) { return NativeCall<bool, FName, const FUniqueNetId *, bool>(this, "FSteamEOSCompositeOnlineSession.RegisterPlayer", SessionName, PlayerId, bWasInvited); }
	bool RegisterPlayers(FName SessionName, const TArray<TSharedRef<FUniqueNetId,0>> * Players, bool bWasInvited) { return NativeCall<bool, FName, const TArray<TSharedRef<FUniqueNetId,0>> *, bool>(this, "FSteamEOSCompositeOnlineSession.RegisterPlayers", SessionName, Players, bWasInvited); }
	void RemoveAdminSpectator(const FUniqueNetId * UniqueNetID) { NativeCall<void, const FUniqueNetId *>(this, "FSteamEOSCompositeOnlineSession.RemoveAdminSpectator", UniqueNetID); }
	void RemoveConnectedPlayer(const FUniqueNetId * UniqueNetId) { NativeCall<void, const FUniqueNetId *>(this, "FSteamEOSCompositeOnlineSession.RemoveConnectedPlayer", UniqueNetId); }
	void RemoveFromFavoritesList(FString Ip, FString Port, int QueryPort) { NativeCall<void, FString, FString, int>(this, "FSteamEOSCompositeOnlineSession.RemoveFromFavoritesList", Ip, Port, QueryPort); }
	void RemoveNamedSession(FName SessionName) { NativeCall<void, FName>(this, "FSteamEOSCompositeOnlineSession.RemoveNamedSession", SessionName); }
	bool SendSessionInviteToFriend(const FUniqueNetId * LocalUserId, FName SessionName, const FUniqueNetId * Friend) { return NativeCall<bool, const FUniqueNetId *, FName, const FUniqueNetId *>(this, "FSteamEOSCompositeOnlineSession.SendSessionInviteToFriend", LocalUserId, SessionName, Friend); }
	bool SendSessionInviteToFriend(int LocalUserNum, FName SessionName, const FUniqueNetId * Friend) { return NativeCall<bool, int, FName, const FUniqueNetId *>(this, "FSteamEOSCompositeOnlineSession.SendSessionInviteToFriend", LocalUserNum, SessionName, Friend); }
	bool SendSessionInviteToFriends(const FUniqueNetId * LocalUserId, FName SessionName, const TArray<TSharedRef<FUniqueNetId,0>> * Friends) { return NativeCall<bool, const FUniqueNetId *, FName, const TArray<TSharedRef<FUniqueNetId,0>> *>(this, "FSteamEOSCompositeOnlineSession.SendSessionInviteToFriends", LocalUserId, SessionName, Friends); }
	bool SendSessionInviteToFriends(int LocalUserNum, FName SessionName, const TArray<TSharedRef<FUniqueNetId,0>> * Friends) { return NativeCall<bool, int, FName, const TArray<TSharedRef<FUniqueNetId,0>> *>(this, "FSteamEOSCompositeOnlineSession.SendSessionInviteToFriends", LocalUserNum, SessionName, Friends); }
	void SetInviteUserInputPassword(const FString * Value) { NativeCall<void, const FString *>(this, "FSteamEOSCompositeOnlineSession.SetInviteUserInputPassword", Value); }
	void SetSessionRestarted(FName SessionName, bool bRestarted) { NativeCall<void, FName, bool>(this, "FSteamEOSCompositeOnlineSession.SetSessionRestarted", SessionName, bRestarted); }
	bool StartMatchmaking(const FUniqueNetId * SearchingPlayerId, FName SessionName, const FOnlineSessionSettings * NewSessionSettings, TSharedRef<FOnlineSessionSearch,0> * SearchSettings) { return NativeCall<bool, const FUniqueNetId *, FName, const FOnlineSessionSettings *, TSharedRef<FOnlineSessionSearch,0> *>(this, "FSteamEOSCompositeOnlineSession.StartMatchmaking", SearchingPlayerId, SessionName, NewSessionSettings, SearchSettings); }
	bool StartMatchmaking(int SearchingPlayerNum, FName SessionName, const FOnlineSessionSettings * NewSessionSettings, TSharedRef<FOnlineSessionSearch,0> * SearchSettings) { return NativeCall<bool, int, FName, const FOnlineSessionSettings *, TSharedRef<FOnlineSessionSearch,0> *>(this, "FSteamEOSCompositeOnlineSession.StartMatchmaking", SearchingPlayerNum, SessionName, NewSessionSettings, SearchSettings); }
	bool StartSession(FName SessionName) { return NativeCall<bool, FName>(this, "FSteamEOSCompositeOnlineSession.StartSession", SessionName); }
	bool Steam_DirectJoinSession(FString InURL, int Port, FString Password) { return NativeCall<bool, FString, int, FString>(this, "FSteamEOSCompositeOnlineSession.Steam_DirectJoinSession", InURL, Port, Password); }
	bool TryGetSessionSettings(FName SessionName, FOnlineSessionSettings * OutSessionSettings) { return NativeCall<bool, FName, FOnlineSessionSettings *>(this, "FSteamEOSCompositeOnlineSession.TryGetSessionSettings", SessionName, OutSessionSettings); }
	bool UnregisterPlayer(FName SessionName, const FUniqueNetId * PlayerId) { return NativeCall<bool, FName, const FUniqueNetId *>(this, "FSteamEOSCompositeOnlineSession.UnregisterPlayer", SessionName, PlayerId); }
	bool UnregisterPlayers(FName SessionName, const TArray<TSharedRef<FUniqueNetId,0>> * Players) { return NativeCall<bool, FName, const TArray<TSharedRef<FUniqueNetId,0>> *>(this, "FSteamEOSCompositeOnlineSession.UnregisterPlayers", SessionName, Players); }
	bool UpdateSession(FName SessionName, const FOnlineSessionSettings * UpdatedSessionSettings, bool bShouldRefreshOnlineData) { return NativeCall<bool, FName, const FOnlineSessionSettings *, bool>(this, "FSteamEOSCompositeOnlineSession.UpdateSession", SessionName, UpdatedSessionSettings, bShouldRefreshOnlineData); }
};

