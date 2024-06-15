#pragma once

#include "BaseDeclarations.h"
#include "IOnlineSession.h"
#include "FOnlineSessionSearch.h"

struct FOnlineSessionSteam : IOnlineSession
{
	char __padding[0x220L];
	FWindowsCriticalSection& CheckAuthResultsLockField() { return *GetNativePointerField<FWindowsCriticalSection*>(this, "FOnlineSessionSteam.CheckAuthResultsLock"); }
	FOnlineSubsystemSteam * SteamSubsystemField() { return GetNativePointerField<FOnlineSubsystemSteam *>(this, "FOnlineSessionSteam.SteamSubsystem"); }
	FLANSession * LANSessionField() { return GetNativePointerField<FLANSession *>(this, "FOnlineSessionSteam.LANSession"); }
	FWindowsCriticalSection& SessionLockField() { return *GetNativePointerField<FWindowsCriticalSection*>(this, "FOnlineSessionSteam.SessionLock"); }
	TArray<FNamedOnlineSession>& SessionsField() { return *GetNativePointerField<TArray<FNamedOnlineSession>*>(this, "FOnlineSessionSteam.Sessions"); }
	bool& bSteamworksGameServerConnectedField() { return *GetNativePointerField<bool*>(this, "FOnlineSessionSteam.bSteamworksGameServerConnected"); }
	bool& bPolicyResponseReceivedField() { return *GetNativePointerField<bool*>(this, "FOnlineSessionSteam.bPolicyResponseReceived"); }
	CCallback<FOnlineSessionSteam,GSClientApprove_t,1>& m_CallbackClientApproveField() { return *GetNativePointerField<CCallback<FOnlineSessionSteam,GSClientApprove_t,1>*>(this, "FOnlineSessionSteam.m_CallbackClientApprove"); }
	CCallback<FOnlineSessionSteam,GSClientDeny_t,1>& m_CallbackClientDenyField() { return *GetNativePointerField<CCallback<FOnlineSessionSteam,GSClientDeny_t,1>*>(this, "FOnlineSessionSteam.m_CallbackClientDeny"); }
	TArray<unsigned __int64>& ConnectedPlayersSteamIDsField() { return *GetNativePointerField<TArray<unsigned __int64>*>(this, "FOnlineSessionSteam.ConnectedPlayersSteamIDs"); }
	TArray<unsigned __int64>& ConnectedAdminSpecatatorsSteamIDsField() { return *GetNativePointerField<TArray<unsigned __int64>*>(this, "FOnlineSessionSteam.ConnectedAdminSpecatatorsSteamIDs"); }
	TArray<FString>& ConnectedPlayerIDsField() { return *GetNativePointerField<TArray<FString>*>(this, "FOnlineSessionSteam.ConnectedPlayerIDs"); }
	FOnlineSessionSteam::FPendingInviteData& PendingInviteField() { return *GetNativePointerField<FOnlineSessionSteam::FPendingInviteData*>(this, "FOnlineSessionSteam.PendingInvite"); }
	FWindowsCriticalSection& JoinedLobbyLockField() { return *GetNativePointerField<FWindowsCriticalSection*>(this, "FOnlineSessionSteam.JoinedLobbyLock"); }

	// Functions

	void FPendingInviteData() { NativeCall<void>(this, "FOnlineSessionSteam.FPendingInviteData"); }
	void AddAdminSpectator(const FUniqueNetId * UniqueNetID) { NativeCall<void, const FUniqueNetId *>(this, "FOnlineSessionSteam.AddAdminSpectator", UniqueNetID); }
	FNamedOnlineSession * AddNamedSession(FName SessionName, const FOnlineSession * Session) { return NativeCall<FNamedOnlineSession *, FName, const FOnlineSession *>(this, "FOnlineSessionSteam.AddNamedSession", SessionName, Session); }
	FNamedOnlineSession * AddNamedSession(FName SessionName, const FOnlineSessionSettings * SessionSettings) { return NativeCall<FNamedOnlineSession *, FName, const FOnlineSessionSettings *>(this, "FOnlineSessionSteam.AddNamedSession", SessionName, SessionSettings); }
	void AddToFavoritesList(FString Ip, FString Port, int QueryPort) { NativeCall<void, FString, FString, int>(this, "FOnlineSessionSteam.AddToFavoritesList", Ip, Port, QueryPort); }
	void AddToHistoryList() { NativeCall<void>(this, "FOnlineSessionSteam.AddToHistoryList"); }
	void AppendSessionSettingsToPacket(FNboSerializeToBufferSteam * Packet, FOnlineSessionSettings * SessionSettings) { NativeCall<void, FNboSerializeToBufferSteam *, FOnlineSessionSettings *>(this, "FOnlineSessionSteam.AppendSessionSettingsToPacket", Packet, SessionSettings); }
	void AppendSessionToPacket(FNboSerializeToBufferSteam * Packet, FOnlineSession * Session) { NativeCall<void, FNboSerializeToBufferSteam *, FOnlineSession *>(this, "FOnlineSessionSteam.AppendSessionToPacket", Packet, Session); }
	bool CancelFindSessions() { return NativeCall<bool>(this, "FOnlineSessionSteam.CancelFindSessions"); }
	bool CheckAuthToken(const FString * authToken) { return NativeCall<bool, const FString *>(this, "FOnlineSessionSteam.CheckAuthToken", authToken); }
	void CheckPendingSessionInvite() { NativeCall<void>(this, "FOnlineSessionSteam.CheckPendingSessionInvite"); }
	unsigned int CreateInternetSession(int HostingPlayerNum, FNamedOnlineSession * Session) { return NativeCall<unsigned int, int, FNamedOnlineSession *>(this, "FOnlineSessionSteam.CreateInternetSession", HostingPlayerNum, Session); }
	unsigned int CreateLANSession(int HostingPlayerNum, FNamedOnlineSession * Session) { return NativeCall<unsigned int, int, FNamedOnlineSession *>(this, "FOnlineSessionSteam.CreateLANSession", HostingPlayerNum, Session); }
	unsigned int CreateLobbySession(int HostingPlayerNum, FNamedOnlineSession * Session) { return NativeCall<unsigned int, int, FNamedOnlineSession *>(this, "FOnlineSessionSteam.CreateLobbySession", HostingPlayerNum, Session); }
	bool CreateSession(int HostingPlayerNum, FName SessionName, const FOnlineSessionSettings * NewSessionSettings) { return NativeCall<bool, int, FName, const FOnlineSessionSettings *>(this, "FOnlineSessionSteam.CreateSession", HostingPlayerNum, SessionName, NewSessionSettings); }
	unsigned int DestroyInternetSession(FNamedOnlineSession * Session) { return NativeCall<unsigned int, FNamedOnlineSession *>(this, "FOnlineSessionSteam.DestroyInternetSession", Session); }
	unsigned int DestroyLobbySession(FNamedOnlineSession * Session) { return NativeCall<unsigned int, FNamedOnlineSession *>(this, "FOnlineSessionSteam.DestroyLobbySession", Session); }
	bool DestroySession(FName SessionName) { return NativeCall<bool, FName>(this, "FOnlineSessionSteam.DestroySession", SessionName); }
	void DumpSessionState() { NativeCall<void>(this, "FOnlineSessionSteam.DumpSessionState"); }
	unsigned int EndInternetSession(FNamedOnlineSession * Session) { return NativeCall<unsigned int, FNamedOnlineSession *>(this, "FOnlineSessionSteam.EndInternetSession", Session); }
	bool EndSession(FName SessionName) { return NativeCall<bool, FName>(this, "FOnlineSessionSteam.EndSession", SessionName); }
	bool FindFriendSession(const FUniqueNetId * LocalUserId, const FUniqueNetId * Friend) { return NativeCall<bool, const FUniqueNetId *, const FUniqueNetId *>(this, "FOnlineSessionSteam.FindFriendSession", LocalUserId, Friend); }
	bool FindFriendSession(int LocalUserNum, const FUniqueNetId * Friend) { return NativeCall<bool, int, const FUniqueNetId *>(this, "FOnlineSessionSteam.FindFriendSession", LocalUserNum, Friend); }
	unsigned int FindInternetSession(const TSharedRef<FOnlineSessionSearch,0> * SearchSettings) { return NativeCall<unsigned int, const TSharedRef<FOnlineSessionSearch,0> *>(this, "FOnlineSessionSteam.FindInternetSession", SearchSettings); }
	unsigned int FindLANSession() { return NativeCall<unsigned int>(this, "FOnlineSessionSteam.FindLANSession"); }
	bool FindSessions(int SearchingPlayerNum, const TSharedRef<FOnlineSessionSearch,0> * SearchSettings) { return NativeCall<bool, int, const TSharedRef<FOnlineSessionSearch,0> *>(this, "FOnlineSessionSteam.FindSessions", SearchingPlayerNum, SearchSettings); }
	FName * GetFirstSessionName(FName * result) { return NativeCall<FName *, FName *>(this, "FOnlineSessionSteam.GetFirstSessionName", result); }
	FNamedOnlineSession * GetGameServerSession() { return NativeCall<FNamedOnlineSession *>(this, "FOnlineSessionSteam.GetGameServerSession"); }
	FNamedOnlineSession * GetNamedSession(FName SessionName) { return NativeCall<FNamedOnlineSession *, FName>(this, "FOnlineSessionSteam.GetNamedSession", SessionName); }
	FNamedOnlineSession * GetNamedSessionFromLobbyId(FUniqueNetIdSteam * LobbyId) { return NativeCall<FNamedOnlineSession *, FUniqueNetIdSteam *>(this, "FOnlineSessionSteam.GetNamedSessionFromLobbyId", LobbyId); }
	int GetNumConnectedPlayersExcludingAuthToken(const FString * AuthToken) { return NativeCall<int, const FString *>(this, "FOnlineSessionSteam.GetNumConnectedPlayersExcludingAuthToken", AuthToken); }
	int GetNumSessions() { return NativeCall<int>(this, "FOnlineSessionSteam.GetNumSessions"); }
	bool GetResolvedConnectString(const FOnlineSessionSearchResult * SearchResult, FName PortType, FString * ConnectInfo) { return NativeCall<bool, const FOnlineSessionSearchResult *, FName, FString *>(this, "FOnlineSessionSteam.GetResolvedConnectString", SearchResult, PortType, ConnectInfo); }
	bool GetResolvedConnectString(FName SessionName, FString * ConnectInfo) { return NativeCall<bool, FName, FString *>(this, "FOnlineSessionSteam.GetResolvedConnectString", SessionName, ConnectInfo); }
	FString * GetSessionConnectionToken(FString * result, const FUniqueNetId * UserId) { return NativeCall<FString *, FString *, const FUniqueNetId *>(this, "FOnlineSessionSteam.GetSessionConnectionToken", result, UserId); }
	EOnlineSessionState::Type GetSessionState(FName SessionName) { return NativeCall<EOnlineSessionState::Type, FName>(this, "FOnlineSessionSteam.GetSessionState", SessionName); }
	FString * GetSteamConnectionString(FString * result, FName SessionName) { return NativeCall<FString *, FString *, FName>(this, "FOnlineSessionSteam.GetSteamConnectionString", result, SessionName); }
	int GetSteamConnectionTokenForSession(FName SessionName, const FUniqueNetId * UserId, char * AuthBlob, int MaxAuthBlobSize) { return NativeCall<int, FName, const FUniqueNetId *, char *, int>(this, "FOnlineSessionSteam.GetSteamConnectionTokenForSession", SessionName, UserId, AuthBlob, MaxAuthBlobSize); }
	bool HasPresenceSession() { return NativeCall<bool>(this, "FOnlineSessionSteam.HasPresenceSession"); }
	void InlineCheckAuthToken(const FString * authToken, const FUniqueNetId * UserId, bool * bHasEarlyResult, bool * bEarlyResult) { NativeCall<void, const FString *, const FUniqueNetId *, bool *, bool *>(this, "FOnlineSessionSteam.InlineCheckAuthToken", authToken, UserId, bHasEarlyResult, bEarlyResult); }
	bool IsFavoriteServer(FString Ip, FString Port, int QueryPort) { return NativeCall<bool, FString, FString, int>(this, "FOnlineSessionSteam.IsFavoriteServer", Ip, Port, QueryPort); }
	unsigned int JoinInternetSession(int PlayerNum, FNamedOnlineSession * Session, const FOnlineSession * SearchSession) { return NativeCall<unsigned int, int, FNamedOnlineSession *, const FOnlineSession *>(this, "FOnlineSessionSteam.JoinInternetSession", PlayerNum, Session, SearchSession); }
	unsigned int JoinLANSession(int PlayerNum, FNamedOnlineSession * Session, const FOnlineSession * SearchSession) { return NativeCall<unsigned int, int, FNamedOnlineSession *, const FOnlineSession *>(this, "FOnlineSessionSteam.JoinLANSession", PlayerNum, Session, SearchSession); }
	unsigned int JoinLobbySession(int PlayerNum, FNamedOnlineSession * Session, const FOnlineSession * SearchSession) { return NativeCall<unsigned int, int, FNamedOnlineSession *, const FOnlineSession *>(this, "FOnlineSessionSteam.JoinLobbySession", PlayerNum, Session, SearchSession); }
	bool JoinSession(const FUniqueNetId * PlayerId, FName SessionName, const FOnlineSessionSearchResult * DesiredSession) { return NativeCall<bool, const FUniqueNetId *, FName, const FOnlineSessionSearchResult *>(this, "FOnlineSessionSteam.JoinSession", PlayerId, SessionName, DesiredSession); }
	bool JoinSession(int PlayerNum, FName SessionName, const FOnlineSessionSearchResult * DesiredSession) { return NativeCall<bool, int, FName, const FOnlineSessionSearchResult *>(this, "FOnlineSessionSteam.JoinSession", PlayerNum, SessionName, DesiredSession); }
	void JoinedLobby(FUniqueNetIdSteam * LobbyId) { NativeCall<void, FUniqueNetIdSteam *>(this, "FOnlineSessionSteam.JoinedLobby", LobbyId); }
	void LeftLobby(FUniqueNetIdSteam * LobbyId) { NativeCall<void, FUniqueNetIdSteam *>(this, "FOnlineSessionSteam.LeftLobby", LobbyId); }
	void OnClientApprove(GSClientApprove_t * pClientApprove) { NativeCall<void, GSClientApprove_t *>(this, "FOnlineSessionSteam.OnClientApprove", pClientApprove); }
	void OnClientDeny(GSClientDeny_t * pClientDeny) { NativeCall<void, GSClientDeny_t *>(this, "FOnlineSessionSteam.OnClientDeny", pClientDeny); }
	void OnLANSearchTimeout() { NativeCall<void>(this, "FOnlineSessionSteam.OnLANSearchTimeout"); }
	void OnValidQueryPacketReceived(char * PacketData, int PacketLength, unsigned __int64 ClientNonce) { NativeCall<void, char *, int, unsigned __int64>(this, "FOnlineSessionSteam.OnValidQueryPacketReceived", PacketData, PacketLength, ClientNonce); }
	void OnValidResponsePacketReceived(char * PacketData, int PacketLength) { NativeCall<void, char *, int>(this, "FOnlineSessionSteam.OnValidResponsePacketReceived", PacketData, PacketLength); }
	void ReadSessionFromPacket(FNboSerializeFromBufferSteam * Packet, FOnlineSession * Session) { NativeCall<void, FNboSerializeFromBufferSteam *, FOnlineSession *>(this, "FOnlineSessionSteam.ReadSessionFromPacket", Packet, Session); }
	void ReadSettingsFromPacket(FNboSerializeFromBufferSteam * Packet, FOnlineSessionSettings * SessionSettings) { NativeCall<void, FNboSerializeFromBufferSteam *, FOnlineSessionSettings *>(this, "FOnlineSessionSteam.ReadSettingsFromPacket", Packet, SessionSettings); }
	void RegisterLocalPlayers(FNamedOnlineSession * Session) { NativeCall<void, FNamedOnlineSession *>(this, "FOnlineSessionSteam.RegisterLocalPlayers", Session); }
	bool RegisterPlayer(FName SessionName, const FUniqueNetId * PlayerId, bool bWasInvited) { return NativeCall<bool, FName, const FUniqueNetId *, bool>(this, "FOnlineSessionSteam.RegisterPlayer", SessionName, PlayerId, bWasInvited); }
	bool RegisterPlayers(FName SessionName, const TArray<TSharedRef<FUniqueNetId,0>> * Players, bool bWasInvited) { return NativeCall<bool, FName, const TArray<TSharedRef<FUniqueNetId,0>> *, bool>(this, "FOnlineSessionSteam.RegisterPlayers", SessionName, Players, bWasInvited); }
	void RegisterVoice(const FUniqueNetId * PlayerId) { NativeCall<void, const FUniqueNetId *>(this, "FOnlineSessionSteam.RegisterVoice", PlayerId); }
	void RemoveAdminSpectator(const FUniqueNetId * UniqueNetID) { NativeCall<void, const FUniqueNetId *>(this, "FOnlineSessionSteam.RemoveAdminSpectator", UniqueNetID); }
	void RemoveConnectedPlayer(const FUniqueNetId * UniqueNetID) { NativeCall<void, const FUniqueNetId *>(this, "FOnlineSessionSteam.RemoveConnectedPlayer", UniqueNetID); }
	void RemoveFromFavoritesList(FString Ip, FString Port, int QueryPort) { NativeCall<void, FString, FString, int>(this, "FOnlineSessionSteam.RemoveFromFavoritesList", Ip, Port, QueryPort); }
	void RemoveNamedSession(FName SessionName) { NativeCall<void, FName>(this, "FOnlineSessionSteam.RemoveNamedSession", SessionName); }
	bool SendSessionInviteToFriend(const FUniqueNetId * LocalUserId, FName SessionName, const FUniqueNetId * Friend) { return NativeCall<bool, const FUniqueNetId *, FName, const FUniqueNetId *>(this, "FOnlineSessionSteam.SendSessionInviteToFriend", LocalUserId, SessionName, Friend); }
	bool SendSessionInviteToFriend(int LocalUserNum, FName SessionName, const FUniqueNetId * Friend) { return NativeCall<bool, int, FName, const FUniqueNetId *>(this, "FOnlineSessionSteam.SendSessionInviteToFriend", LocalUserNum, SessionName, Friend); }
	bool SendSessionInviteToFriends(const FUniqueNetId * LocalUserId, FName SessionName, const TArray<TSharedRef<FUniqueNetId,0>> * Friends) { return NativeCall<bool, const FUniqueNetId *, FName, const TArray<TSharedRef<FUniqueNetId,0>> *>(this, "FOnlineSessionSteam.SendSessionInviteToFriends", LocalUserId, SessionName, Friends); }
	bool SendSessionInviteToFriends(int LocalUserNum, FName SessionName, const TArray<TSharedRef<FUniqueNetId,0>> * Friends) { return NativeCall<bool, int, FName, const TArray<TSharedRef<FUniqueNetId,0>> *>(this, "FOnlineSessionSteam.SendSessionInviteToFriends", LocalUserNum, SessionName, Friends); }
	bool SendUserConnectAndAuthenticate(const TArray<unsigned char> * AuthBlob, const FUniqueNetIdSteam * UniqueId) { return NativeCall<bool, const TArray<unsigned char> *, const FUniqueNetIdSteam *>(this, "FOnlineSessionSteam.SendUserConnectAndAuthenticate", AuthBlob, UniqueId); }
	bool StartSession(FName SessionName) { return NativeCall<bool, FName>(this, "FOnlineSessionSteam.StartSession", SessionName); }
	bool Steam_DirectJoinSession(FString InURL, int Port, FString Password) { return NativeCall<bool, FString, int, FString>(this, "FOnlineSessionSteam.Steam_DirectJoinSession", InURL, Port, Password); }
	void SyncLobbies() { NativeCall<void>(this, "FOnlineSessionSteam.SyncLobbies"); }
	void Tick(float DeltaTime) { NativeCall<void, float>(this, "FOnlineSessionSteam.Tick", DeltaTime); }
	void TickPendingInvites(float DeltaTime) { NativeCall<void, float>(this, "FOnlineSessionSteam.TickPendingInvites", DeltaTime); }
	bool UnregisterPlayer(FName SessionName, const FUniqueNetId * PlayerId) { return NativeCall<bool, FName, const FUniqueNetId *>(this, "FOnlineSessionSteam.UnregisterPlayer", SessionName, PlayerId); }
	bool UnregisterPlayers(FName SessionName, const TArray<TSharedRef<FUniqueNetId,0>> * Players) { return NativeCall<bool, FName, const TArray<TSharedRef<FUniqueNetId,0>> *>(this, "FOnlineSessionSteam.UnregisterPlayers", SessionName, Players); }
	void UnregisterVoice(const FUniqueNetId * PlayerId) { NativeCall<void, const FUniqueNetId *>(this, "FOnlineSessionSteam.UnregisterVoice", PlayerId); }
	bool UpdateSession(FName SessionName, const FOnlineSessionSettings * UpdatedSessionSettings, bool bShouldRefreshOnlineData) { return NativeCall<bool, FName, const FOnlineSessionSettings *, bool>(this, "FOnlineSessionSteam.UpdateSession", SessionName, UpdatedSessionSettings, bShouldRefreshOnlineData); }
	bool StartMatchmaking(int SearchingPlayerNum, FName SessionName, const FOnlineSessionSettings * NewSessionSettings, TSharedRef<FOnlineSessionSearch,0> * SearchSettings) { return NativeCall<bool, int, FName, const FOnlineSessionSettings *, TSharedRef<FOnlineSessionSearch,0> *>(this, "FOnlineSessionSteam.StartMatchmaking", SearchingPlayerNum, SessionName, NewSessionSettings, SearchSettings); }
};

