#pragma once

#include "BaseDeclarations.h"
#include "IOnlineSession.h"
#include "FOnlineSessionSearch.h"
#include "FOnlineSessionInfo.h"

struct FOnlineSessionEOS : IOnlineSession
{
	char __padding[0xa8L];
	FWindowsCriticalSection& SessionLockField() { return *GetNativePointerField<FWindowsCriticalSection*>(this, "FOnlineSessionEOS.SessionLock"); }
	TArray<FNamedOnlineSession>& SessionsField() { return *GetNativePointerField<TArray<FNamedOnlineSession>*>(this, "FOnlineSessionEOS.Sessions"); }
	long double& SessionSearchStartInSecondsField() { return *GetNativePointerField<long double*>(this, "FOnlineSessionEOS.SessionSearchStartInSeconds"); }
	FOnlineSubsystemEOS * EOSSubsystemField() { return GetNativePointerField<FOnlineSubsystemEOS *>(this, "FOnlineSessionEOS.EOSSubsystem"); }
	TSharedPtr<FLANSession,0>& LANSessionField() { return *GetNativePointerField<TSharedPtr<FLANSession,0>*>(this, "FOnlineSessionEOS.LANSession"); }
	TSharedPtr<FSessionSearchEOS,0>& CurrentSearchHandleField() { return *GetNativePointerField<TSharedPtr<FSessionSearchEOS,0>*>(this, "FOnlineSessionEOS.CurrentSearchHandle"); }
	unsigned __int64& SessionInviteAcceptedIdField() { return *GetNativePointerField<unsigned __int64*>(this, "FOnlineSessionEOS.SessionInviteAcceptedId"); }
	FCallbackBase * SessionInviteAcceptedCallbackField() { return GetNativePointerField<FCallbackBase *>(this, "FOnlineSessionEOS.SessionInviteAcceptedCallback"); }
	unsigned __int64& PresenceJoinGameAcceptedIdField() { return *GetNativePointerField<unsigned __int64*>(this, "FOnlineSessionEOS.PresenceJoinGameAcceptedId"); }
	FCallbackBase * PresenceJoinGameAcceptedCallbackField() { return GetNativePointerField<FCallbackBase *>(this, "FOnlineSessionEOS.PresenceJoinGameAcceptedCallback"); }

	// Functions

	bool IsPlayerInSession(FName SessionName, const FUniqueNetId * UniqueId) { return NativeCall<bool, FName, const FUniqueNetId *>(this, "FOnlineSessionEOS.IsPlayerInSession", SessionName, UniqueId); }
	FNamedOnlineSession * AddNamedSession(FName SessionName, const FOnlineSession * Session) { return NativeCall<FNamedOnlineSession *, FName, const FOnlineSession *>(this, "FOnlineSessionEOS.AddNamedSession", SessionName, Session); }
	FNamedOnlineSession * AddNamedSession(FName SessionName, const FOnlineSessionSettings * SessionSettings) { return NativeCall<FNamedOnlineSession *, FName, const FOnlineSessionSettings *>(this, "FOnlineSessionEOS.AddNamedSession", SessionName, SessionSettings); }
	void AddToFavoritesList(FString Ip, FString Port, int QueryPort) { NativeCall<void, FString, FString, int>(this, "FOnlineSessionEOS.AddToFavoritesList", Ip, Port, QueryPort); }
	void AppendSessionSettingsToPacket(FNboSerializeToBufferEOS * Packet, FOnlineSessionSettings * SessionSettings) { NativeCall<void, FNboSerializeToBufferEOS *, FOnlineSessionSettings *>(this, "FOnlineSessionEOS.AppendSessionSettingsToPacket", Packet, SessionSettings); }
	void AppendSessionToPacket(FNboSerializeToBufferEOS * Packet, FOnlineSession * Session) { NativeCall<void, FNboSerializeToBufferEOS *, FOnlineSession *>(this, "FOnlineSessionEOS.AppendSessionToPacket", Packet, Session); }
	void BeginSessionAnalytics(FNamedOnlineSession * Session) { NativeCall<void, FNamedOnlineSession *>(this, "FOnlineSessionEOS.BeginSessionAnalytics", Session); }
	bool CancelFindSessions() { return NativeCall<bool>(this, "FOnlineSessionEOS.CancelFindSessions"); }
	bool CancelMatchmaking(int SearchingPlayerNum, FName SessionName) { return NativeCall<bool, int, FName>(this, "FOnlineSessionEOS.CancelMatchmaking", SearchingPlayerNum, SessionName); }
	void CopyAttributes(EOS_SessionDetailsHandle * SessionHandle, FOnlineSession * OutSession) { NativeCall<void, EOS_SessionDetailsHandle *, FOnlineSession *>(this, "FOnlineSessionEOS.CopyAttributes", SessionHandle, OutSession); }
	void CopySearchResult(EOS_SessionDetailsHandle * SessionHandle, _tagEOS_SessionDetails_Info * SessionInfo, FOnlineSession * OutSession) { NativeCall<void, EOS_SessionDetailsHandle *, _tagEOS_SessionDetails_Info *, FOnlineSession *>(this, "FOnlineSessionEOS.CopySearchResult", SessionHandle, SessionInfo, OutSession); }
	unsigned int CreateEOSSession(int HostingPlayerNum, FNamedOnlineSession * Session) { return NativeCall<unsigned int, int, FNamedOnlineSession *>(this, "FOnlineSessionEOS.CreateEOSSession", HostingPlayerNum, Session); }
	unsigned int CreateLANSession(int HostingPlayerNum, FNamedOnlineSession * Session) { return NativeCall<unsigned int, int, FNamedOnlineSession *>(this, "FOnlineSessionEOS.CreateLANSession", HostingPlayerNum, Session); }
	bool CreateSession(const FUniqueNetId * HostingPlayerId, FName SessionName, const FOnlineSessionSettings * NewSessionSettings) { return NativeCall<bool, const FUniqueNetId *, FName, const FOnlineSessionSettings *>(this, "FOnlineSessionEOS.CreateSession", HostingPlayerId, SessionName, NewSessionSettings); }
	bool CreateSession(int HostingPlayerNum, FName SessionName, const FOnlineSessionSettings * NewSessionSettings) { return NativeCall<bool, int, FName, const FOnlineSessionSettings *>(this, "FOnlineSessionEOS.CreateSession", HostingPlayerNum, SessionName, NewSessionSettings); }
	bool DestroySession(FName SessionName) { return NativeCall<bool, FName>(this, "FOnlineSessionEOS.DestroySession", SessionName); }
	void DumpSessionState() { NativeCall<void>(this, "FOnlineSessionEOS.DumpSessionState"); }
	unsigned int EndEOSSession(FNamedOnlineSession * Session) { return NativeCall<unsigned int, FNamedOnlineSession *>(this, "FOnlineSessionEOS.EndEOSSession", Session); }
	bool EndSession(FName SessionName) { return NativeCall<bool, FName>(this, "FOnlineSessionEOS.EndSession", SessionName); }
	void EndSessionAnalytics() { NativeCall<void>(this, "FOnlineSessionEOS.EndSessionAnalytics"); }
	unsigned int FindEOSSession(int SearchingPlayerNum, const TSharedRef<FOnlineSessionSearch,0> * SearchSettings, int SessionBucketToSearch, int FavoriteToSearch) { return NativeCall<unsigned int, int, const TSharedRef<FOnlineSessionSearch,0> *, int, int>(this, "FOnlineSessionEOS.FindEOSSession", SearchingPlayerNum, SearchSettings, SessionBucketToSearch, FavoriteToSearch); }
	bool FindFriendSession(const FUniqueNetId * LocalUserId, const FUniqueNetId * Friend) { return NativeCall<bool, const FUniqueNetId *, const FUniqueNetId *>(this, "FOnlineSessionEOS.FindFriendSession", LocalUserId, Friend); }
	bool FindFriendSession(int LocalUserNum, const FUniqueNetId * Friend) { return NativeCall<bool, int, const FUniqueNetId *>(this, "FOnlineSessionEOS.FindFriendSession", LocalUserNum, Friend); }
	unsigned int FindLANSession() { return NativeCall<unsigned int>(this, "FOnlineSessionEOS.FindLANSession"); }
	void FindSessionById(const FString * SessionId, TEOSCallback<void (__cdecl*)(_tagEOS_SessionSearch_FindCallbackInfo const *),_tagEOS_SessionSearch_FindCallbackInfo> * TEOSCallback<void) { NativeCall<void, const FString *, TEOSCallback<void (__cdecl*)(_tagEOS_SessionSearch_FindCallbackInfo const *),_tagEOS_SessionSearch_FindCallbackInfo> *>(this, "FOnlineSessionEOS.FindSessionById", SessionId, TEOSCallback<void); }
	bool FindSessions(const FUniqueNetId * SearchingPlayerId, const TSharedRef<FOnlineSessionSearch,0> * SearchSettings) { return NativeCall<bool, const FUniqueNetId *, const TSharedRef<FOnlineSessionSearch,0> *>(this, "FOnlineSessionEOS.FindSessions", SearchingPlayerId, SearchSettings); }
	bool FindSessions(int SearchingPlayerNum, const TSharedRef<FOnlineSessionSearch,0> * SearchSettings) { return NativeCall<bool, int, const TSharedRef<FOnlineSessionSearch,0> *>(this, "FOnlineSessionEOS.FindSessions", SearchingPlayerNum, SearchSettings); }
	FName * GetFirstSessionName(FName * result) { return NativeCall<FName *, FName *>(this, "FOnlineSessionEOS.GetFirstSessionName", result); }
	int GetNumConnectedPlayersExcludingAuthToken(const FString * AuthToken) { return NativeCall<int, const FString *>(this, "FOnlineSessionEOS.GetNumConnectedPlayersExcludingAuthToken", AuthToken); }
	bool GetResolvedConnectString(const FOnlineSessionSearchResult * SearchResult, FName PortType, FString * ConnectInfo) { return NativeCall<bool, const FOnlineSessionSearchResult *, FName, FString *>(this, "FOnlineSessionEOS.GetResolvedConnectString", SearchResult, PortType, ConnectInfo); }
	bool GetResolvedConnectString(FName SessionName, FString * ConnectInfo) { return NativeCall<bool, FName, FString *>(this, "FOnlineSessionEOS.GetResolvedConnectString", SessionName, ConnectInfo); }
	FString * GetSessionConnectionToken(FString * result, const FUniqueNetId * UserId) { return NativeCall<FString *, FString *, const FUniqueNetId *>(this, "FOnlineSessionEOS.GetSessionConnectionToken", result, UserId); }
	EOnlineSessionState::Type GetSessionState(FName SessionName) { return NativeCall<EOnlineSessionState::Type, FName>(this, "FOnlineSessionEOS.GetSessionState", SessionName); }
	void Init(const char * InBucketId) { NativeCall<void, const char *>(this, "FOnlineSessionEOS.Init", InBucketId); }
	bool InitSearchResult(struct EOS_SessionSearchHandle * SearchHandle, FOnlineSessionSearchResult * SearchResult, unsigned int ResultIndex) { return NativeCall<bool, struct EOS_SessionSearchHandle *, FOnlineSessionSearchResult *, unsigned int>(this, "FOnlineSessionEOS.InitSearchResult", SearchHandle, SearchResult, ResultIndex); }
	void InlineCheckAuthToken(const FString * authToken, const FUniqueNetId * UserId, bool * bHasEarlyResult, bool * bEarlyResult) { NativeCall<void, const FString *, const FUniqueNetId *, bool *, bool *>(this, "FOnlineSessionEOS.InlineCheckAuthToken", authToken, UserId, bHasEarlyResult, bEarlyResult); }
	bool IsFavoriteServer(FString Ip, FString Port, int QueryPort) { return NativeCall<bool, FString, FString, int>(this, "FOnlineSessionEOS.IsFavoriteServer", Ip, Port, QueryPort); }
	unsigned int JoinEOSSession(int PlayerNum, FNamedOnlineSession * Session, const FOnlineSession * SearchSession) { return NativeCall<unsigned int, int, FNamedOnlineSession *, const FOnlineSession *>(this, "FOnlineSessionEOS.JoinEOSSession", PlayerNum, Session, SearchSession); }
	unsigned int JoinLANSession(int PlayerNum, FNamedOnlineSession * Session, const FOnlineSession * SearchSession) { return NativeCall<unsigned int, int, FNamedOnlineSession *, const FOnlineSession *>(this, "FOnlineSessionEOS.JoinLANSession", PlayerNum, Session, SearchSession); }
	bool JoinSession(const FUniqueNetId * SearchingUserId, FName SessionName, const FOnlineSessionSearchResult * DesiredSession) { return NativeCall<bool, const FUniqueNetId *, FName, const FOnlineSessionSearchResult *>(this, "FOnlineSessionEOS.JoinSession", SearchingUserId, SessionName, DesiredSession); }
	bool JoinSession(int PlayerNum, FName SessionName, const FOnlineSessionSearchResult * DesiredSession) { return NativeCall<bool, int, FName, const FOnlineSessionSearchResult *>(this, "FOnlineSessionEOS.JoinSession", PlayerNum, SessionName, DesiredSession); }
	void JoinSessionById(const FString * SessionId, int LocalUserIndex) { NativeCall<void, const FString *, int>(this, "FOnlineSessionEOS.JoinSessionById", SessionId, LocalUserIndex); }
	void OnLANSearchTimeout() { NativeCall<void>(this, "FOnlineSessionEOS.OnLANSearchTimeout"); }
	void OnValidQueryPacketReceived(char * PacketData, int PacketLength, unsigned __int64 ClientNonce) { NativeCall<void, char *, int, unsigned __int64>(this, "FOnlineSessionEOS.OnValidQueryPacketReceived", PacketData, PacketLength, ClientNonce); }
	void OnValidResponsePacketReceived(char * PacketData, int PacketLength) { NativeCall<void, char *, int>(this, "FOnlineSessionEOS.OnValidResponsePacketReceived", PacketData, PacketLength); }
	void ReadSessionFromPacket(FNboSerializeFromBufferEOS * Packet, FOnlineSession * Session) { NativeCall<void, FNboSerializeFromBufferEOS *, FOnlineSession *>(this, "FOnlineSessionEOS.ReadSessionFromPacket", Packet, Session); }
	void ReadSettingsFromPacket(FNboSerializeFromBufferEOS * Packet, FOnlineSessionSettings * SessionSettings) { NativeCall<void, FNboSerializeFromBufferEOS *, FOnlineSessionSettings *>(this, "FOnlineSessionEOS.ReadSettingsFromPacket", Packet, SessionSettings); }
	bool RegisterPlayer(FName SessionName, const FUniqueNetId * PlayerId, bool bWasInvited) { return NativeCall<bool, FName, const FUniqueNetId *, bool>(this, "FOnlineSessionEOS.RegisterPlayer", SessionName, PlayerId, bWasInvited); }
	bool RegisterPlayers(FName SessionName, const TArray<TSharedRef<FUniqueNetId,0>> * Players, bool bWasInvited) { return NativeCall<bool, FName, const TArray<TSharedRef<FUniqueNetId,0>> *, bool>(this, "FOnlineSessionEOS.RegisterPlayers", SessionName, Players, bWasInvited); }
	void RemoveConnectedPlayer(const FUniqueNetId * UniqueNetId) { NativeCall<void, const FUniqueNetId *>(this, "FOnlineSessionEOS.RemoveConnectedPlayer", UniqueNetId); }
	void RemoveFromFavoritesList(FString Ip, FString Port, int QueryPort) { NativeCall<void, FString, FString, int>(this, "FOnlineSessionEOS.RemoveFromFavoritesList", Ip, Port, QueryPort); }
	void RemoveNamedSession(FName SessionName) { NativeCall<void, FName>(this, "FOnlineSessionEOS.RemoveNamedSession", SessionName); }
	bool SendSessionInvite(FName SessionName, EOS_ProductUserIdDetails * SenderId, EOS_ProductUserIdDetails * ReceiverId) { return NativeCall<bool, FName, EOS_ProductUserIdDetails *, EOS_ProductUserIdDetails *>(this, "FOnlineSessionEOS.SendSessionInvite", SessionName, SenderId, ReceiverId); }
	bool SendSessionInviteToFriend(const FUniqueNetId * LocalNetId, FName SessionName, const FUniqueNetId * Friend) { return NativeCall<bool, const FUniqueNetId *, FName, const FUniqueNetId *>(this, "FOnlineSessionEOS.SendSessionInviteToFriend", LocalNetId, SessionName, Friend); }
	bool SendSessionInviteToFriend(int LocalUserNum, FName SessionName, const FUniqueNetId * Friend) { return NativeCall<bool, int, FName, const FUniqueNetId *>(this, "FOnlineSessionEOS.SendSessionInviteToFriend", LocalUserNum, SessionName, Friend); }
	bool SendSessionInviteToFriends(const FUniqueNetId * LocalUserId, FName SessionName, const TArray<TSharedRef<FUniqueNetId,0>> * Friends) { return NativeCall<bool, const FUniqueNetId *, FName, const TArray<TSharedRef<FUniqueNetId,0>> *>(this, "FOnlineSessionEOS.SendSessionInviteToFriends", LocalUserId, SessionName, Friends); }
	bool SendSessionInviteToFriends(int LocalUserNum, FName SessionName, const TArray<TSharedRef<FUniqueNetId,0>> * Friends) { return NativeCall<bool, int, FName, const TArray<TSharedRef<FUniqueNetId,0>> *>(this, "FOnlineSessionEOS.SendSessionInviteToFriends", LocalUserNum, SessionName, Friends); }
	void SetAttributes(EOS_SessionModificationHandle * SessionModHandle, FNamedOnlineSession * Session) { NativeCall<void, EOS_SessionModificationHandle *, FNamedOnlineSession *>(this, "FOnlineSessionEOS.SetAttributes", SessionModHandle, Session); }
	void SetHostAddress(EOS_SessionModificationHandle * SessionModHandle, FNamedOnlineSession * Session) { NativeCall<void, EOS_SessionModificationHandle *, FNamedOnlineSession *>(this, "FOnlineSessionEOS.SetHostAddress", SessionModHandle, Session); }
	void SetJoinInfo(FNamedOnlineSession * Session) { NativeCall<void, FNamedOnlineSession *>(this, "FOnlineSessionEOS.SetJoinInfo", Session); }
	static void SetPortFromNetDriver(const FOnlineSubsystemEOS * Subsystem, const TSharedPtr<FOnlineSessionInfo,0> * SessionInfo) { NativeCall<void, const FOnlineSubsystemEOS *, const TSharedPtr<FOnlineSessionInfo,0> *>(nullptr, "FOnlineSessionEOS.SetPortFromNetDriver", Subsystem, SessionInfo); }
	unsigned int SharedSessionUpdate(EOS_SessionModificationHandle * SessionModHandle, FNamedOnlineSession * Session, TEOSCallback<void (__cdecl*)(_tagEOS_Sessions_UpdateSessionCallbackInfo const *),_tagEOS_Sessions_UpdateSessionCallbackInfo> * TEOSCallback<void) { return NativeCall<unsigned int, EOS_SessionModificationHandle *, FNamedOnlineSession *, TEOSCallback<void (__cdecl*)(_tagEOS_Sessions_UpdateSessionCallbackInfo const *),_tagEOS_Sessions_UpdateSessionCallbackInfo> *>(this, "FOnlineSessionEOS.SharedSessionUpdate", SessionModHandle, Session, TEOSCallback<void); }
	unsigned int StartEOSSession(FNamedOnlineSession * Session) { return NativeCall<unsigned int, FNamedOnlineSession *>(this, "FOnlineSessionEOS.StartEOSSession", Session); }
	bool StartSession(FName SessionName) { return NativeCall<bool, FName>(this, "FOnlineSessionEOS.StartSession", SessionName); }
	bool Steam_DirectJoinSession(FString InURL, int Port, FString Password) { return NativeCall<bool, FString, int, FString>(this, "FOnlineSessionEOS.Steam_DirectJoinSession", InURL, Port, Password); }
	bool UnregisterPlayer(FName SessionName, const FUniqueNetId * PlayerId) { return NativeCall<bool, FName, const FUniqueNetId *>(this, "FOnlineSessionEOS.UnregisterPlayer", SessionName, PlayerId); }
	bool UnregisterPlayers(FName SessionName, const TArray<TSharedRef<FUniqueNetId,0>> * Players) { return NativeCall<bool, FName, const TArray<TSharedRef<FUniqueNetId,0>> *>(this, "FOnlineSessionEOS.UnregisterPlayers", SessionName, Players); }
	unsigned int UpdateEOSSession(FNamedOnlineSession * Session) { return NativeCall<unsigned int, FNamedOnlineSession *>(this, "FOnlineSessionEOS.UpdateEOSSession", Session); }
	bool UpdateSession(FName SessionName, const FOnlineSessionSettings * UpdatedSessionSettings, bool bShouldRefreshOnlineData) { return NativeCall<bool, FName, const FOnlineSessionSettings *, bool>(this, "FOnlineSessionEOS.UpdateSession", SessionName, UpdatedSessionSettings, bShouldRefreshOnlineData); }
};

