#pragma once

#include "BaseDeclarations.h"
#include "IOnlineSession.h"
#include "FOnlineSessionSearch.h"

struct FOnlineSessionNull : IOnlineSession
{
	char __padding[0x60L];
	FOnlineSubsystemNull * NullSubsystemField() { return GetNativePointerField<FOnlineSubsystemNull *>(this, "FOnlineSessionNull.NullSubsystem"); }
	FLANSession * LANSessionManagerField() { return GetNativePointerField<FLANSession *>(this, "FOnlineSessionNull.LANSessionManager"); }
	FWindowsCriticalSection& SessionLockField() { return *GetNativePointerField<FWindowsCriticalSection*>(this, "FOnlineSessionNull.SessionLock"); }
	TArray<FNamedOnlineSession>& SessionsField() { return *GetNativePointerField<TArray<FNamedOnlineSession>*>(this, "FOnlineSessionNull.Sessions"); }
	long double& SessionSearchStartInSecondsField() { return *GetNativePointerField<long double*>(this, "FOnlineSessionNull.SessionSearchStartInSeconds"); }

	// Functions

	bool CreateSession(const FUniqueNetId * HostingPlayerId, FName SessionName, const FOnlineSessionSettings * NewSessionSettings) { return NativeCall<bool, const FUniqueNetId *, FName, const FOnlineSessionSettings *>(this, "FOnlineSessionNull.CreateSession", HostingPlayerId, SessionName, NewSessionSettings); }
	bool FindSessions(const FUniqueNetId * SearchingPlayerId, const TSharedRef<FOnlineSessionSearch,0> * SearchSettings) { return NativeCall<bool, const FUniqueNetId *, const TSharedRef<FOnlineSessionSearch,0> *>(this, "FOnlineSessionNull.FindSessions", SearchingPlayerId, SearchSettings); }
	FNamedOnlineSession * GetNamedSession(FName SessionName) { return NativeCall<FNamedOnlineSession *, FName>(this, "FOnlineSessionNull.GetNamedSession", SessionName); }
	int GetNumSessions() { return NativeCall<int>(this, "FOnlineSessionNull.GetNumSessions"); }
	FNamedOnlineSession * AddNamedSession(FName SessionName, const FOnlineSession * Session) { return NativeCall<FNamedOnlineSession *, FName, const FOnlineSession *>(this, "FOnlineSessionNull.AddNamedSession", SessionName, Session); }
	FNamedOnlineSession * AddNamedSession(FName SessionName, const FOnlineSessionSettings * SessionSettings) { return NativeCall<FNamedOnlineSession *, FName, const FOnlineSessionSettings *>(this, "FOnlineSessionNull.AddNamedSession", SessionName, SessionSettings); }
	void AppendSessionSettingsToPacket(FNboSerializeToBufferNull * Packet, FOnlineSessionSettings * SessionSettings) { NativeCall<void, FNboSerializeToBufferNull *, FOnlineSessionSettings *>(this, "FOnlineSessionNull.AppendSessionSettingsToPacket", Packet, SessionSettings); }
	void AppendSessionToPacket(FNboSerializeToBufferNull * Packet, FOnlineSession * Session) { NativeCall<void, FNboSerializeToBufferNull *, FOnlineSession *>(this, "FOnlineSessionNull.AppendSessionToPacket", Packet, Session); }
	bool CancelFindSessions() { return NativeCall<bool>(this, "FOnlineSessionNull.CancelFindSessions"); }
	bool CreateSession(int HostingPlayerNum, FName SessionName, const FOnlineSessionSettings * NewSessionSettings) { return NativeCall<bool, int, FName, const FOnlineSessionSettings *>(this, "FOnlineSessionNull.CreateSession", HostingPlayerNum, SessionName, NewSessionSettings); }
	bool DestroySession(FName SessionName) { return NativeCall<bool, FName>(this, "FOnlineSessionNull.DestroySession", SessionName); }
	void DumpSessionState() { NativeCall<void>(this, "FOnlineSessionNull.DumpSessionState"); }
	bool EndSession(FName SessionName) { return NativeCall<bool, FName>(this, "FOnlineSessionNull.EndSession", SessionName); }
	bool FindFriendSession(const FUniqueNetId * LocalUserId, const FUniqueNetId * Friend) { return NativeCall<bool, const FUniqueNetId *, const FUniqueNetId *>(this, "FOnlineSessionNull.FindFriendSession", LocalUserId, Friend); }
	bool FindFriendSession(int LocalUserNum, const FUniqueNetId * Friend) { return NativeCall<bool, int, const FUniqueNetId *>(this, "FOnlineSessionNull.FindFriendSession", LocalUserNum, Friend); }
	unsigned int FindLANSession() { return NativeCall<unsigned int>(this, "FOnlineSessionNull.FindLANSession"); }
	bool FindSessions(int SearchingPlayerNum, const TSharedRef<FOnlineSessionSearch,0> * SearchSettings) { return NativeCall<bool, int, const TSharedRef<FOnlineSessionSearch,0> *>(this, "FOnlineSessionNull.FindSessions", SearchingPlayerNum, SearchSettings); }
	bool GetResolvedConnectString(const FOnlineSessionSearchResult * SearchResult, FName PortType, FString * ConnectInfo) { return NativeCall<bool, const FOnlineSessionSearchResult *, FName, FString *>(this, "FOnlineSessionNull.GetResolvedConnectString", SearchResult, PortType, ConnectInfo); }
	bool GetResolvedConnectString(FName SessionName, FString * ConnectInfo) { return NativeCall<bool, FName, FString *>(this, "FOnlineSessionNull.GetResolvedConnectString", SessionName, ConnectInfo); }
	bool HasPresenceSession() { return NativeCall<bool>(this, "FOnlineSessionNull.HasPresenceSession"); }
	unsigned int JoinLANSession(int PlayerNum, FNamedOnlineSession * Session, const FOnlineSession * SearchSession) { return NativeCall<unsigned int, int, FNamedOnlineSession *, const FOnlineSession *>(this, "FOnlineSessionNull.JoinLANSession", PlayerNum, Session, SearchSession); }
	bool JoinSession(int PlayerNum, FName SessionName, const FOnlineSessionSearchResult * DesiredSession) { return NativeCall<bool, int, FName, const FOnlineSessionSearchResult *>(this, "FOnlineSessionNull.JoinSession", PlayerNum, SessionName, DesiredSession); }
	bool NeedsToAdvertise() { return NativeCall<bool>(this, "FOnlineSessionNull.NeedsToAdvertise"); }
	void OnLANSearchTimeout() { NativeCall<void>(this, "FOnlineSessionNull.OnLANSearchTimeout"); }
	void OnValidQueryPacketReceived(char * PacketData, int PacketLength, unsigned __int64 ClientNonce) { NativeCall<void, char *, int, unsigned __int64>(this, "FOnlineSessionNull.OnValidQueryPacketReceived", PacketData, PacketLength, ClientNonce); }
	void OnValidResponsePacketReceived(char * PacketData, int PacketLength) { NativeCall<void, char *, int>(this, "FOnlineSessionNull.OnValidResponsePacketReceived", PacketData, PacketLength); }
	void ReadSessionFromPacket(FNboSerializeFromBufferNull * Packet, FOnlineSession * Session) { NativeCall<void, FNboSerializeFromBufferNull *, FOnlineSession *>(this, "FOnlineSessionNull.ReadSessionFromPacket", Packet, Session); }
	void ReadSettingsFromPacket(FNboSerializeFromBufferNull * Packet, FOnlineSessionSettings * SessionSettings) { NativeCall<void, FNboSerializeFromBufferNull *, FOnlineSessionSettings *>(this, "FOnlineSessionNull.ReadSettingsFromPacket", Packet, SessionSettings); }
	void RegisterLocalPlayers(FNamedOnlineSession * Session) { NativeCall<void, FNamedOnlineSession *>(this, "FOnlineSessionNull.RegisterLocalPlayers", Session); }
	bool RegisterPlayer(FName SessionName, const FUniqueNetId * PlayerId, bool bWasInvited) { return NativeCall<bool, FName, const FUniqueNetId *, bool>(this, "FOnlineSessionNull.RegisterPlayer", SessionName, PlayerId, bWasInvited); }
	bool RegisterPlayers(FName SessionName, const TArray<TSharedRef<FUniqueNetId,0>> * Players, bool bWasInvited) { return NativeCall<bool, FName, const TArray<TSharedRef<FUniqueNetId,0>> *, bool>(this, "FOnlineSessionNull.RegisterPlayers", SessionName, Players, bWasInvited); }
	void RegisterVoice(const FUniqueNetId * PlayerId) { NativeCall<void, const FUniqueNetId *>(this, "FOnlineSessionNull.RegisterVoice", PlayerId); }
	void RemoveNamedSession(FName SessionName) { NativeCall<void, FName>(this, "FOnlineSessionNull.RemoveNamedSession", SessionName); }
	bool StartSession(FName SessionName) { return NativeCall<bool, FName>(this, "FOnlineSessionNull.StartSession", SessionName); }
	bool TryGetSessionSettings(FName SessionName, FOnlineSessionSettings * OutSessionSettings) { return NativeCall<bool, FName, FOnlineSessionSettings *>(this, "FOnlineSessionNull.TryGetSessionSettings", SessionName, OutSessionSettings); }
	bool UnregisterPlayer(FName SessionName, const FUniqueNetId * PlayerId) { return NativeCall<bool, FName, const FUniqueNetId *>(this, "FOnlineSessionNull.UnregisterPlayer", SessionName, PlayerId); }
	bool UnregisterPlayers(FName SessionName, const TArray<TSharedRef<FUniqueNetId,0>> * Players) { return NativeCall<bool, FName, const TArray<TSharedRef<FUniqueNetId,0>> *>(this, "FOnlineSessionNull.UnregisterPlayers", SessionName, Players); }
	void UnregisterVoice(const FUniqueNetId * PlayerId) { NativeCall<void, const FUniqueNetId *>(this, "FOnlineSessionNull.UnregisterVoice", PlayerId); }
	unsigned int UpdateLANStatus() { return NativeCall<unsigned int>(this, "FOnlineSessionNull.UpdateLANStatus"); }
	bool UpdateSession(FName SessionName, const FOnlineSessionSettings * UpdatedSessionSettings, bool bShouldRefreshOnlineData) { return NativeCall<bool, FName, const FOnlineSessionSettings *, bool>(this, "FOnlineSessionNull.UpdateSession", SessionName, UpdatedSessionSettings, bShouldRefreshOnlineData); }
};

