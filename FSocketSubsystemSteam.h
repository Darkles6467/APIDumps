#pragma once

#include "BaseDeclarations.h"
#include "ISocketSubsystem.h"

struct FSocketSubsystemSteam : ISocketSubsystem
{
	char __padding[0xf0L];
	TArray<FWeakObjectPtr>& SteamConnectionsField() { return *GetNativePointerField<TArray<FWeakObjectPtr>*>(this, "FSocketSubsystemSteam.SteamConnections"); }
	bool& bAllowP2PPacketRelayField() { return *GetNativePointerField<bool*>(this, "FSocketSubsystemSteam.bAllowP2PPacketRelay"); }
	float& P2PConnectionTimeoutField() { return *GetNativePointerField<float*>(this, "FSocketSubsystemSteam.P2PConnectionTimeout"); }
	long double& P2PDumpCounterField() { return *GetNativePointerField<long double*>(this, "FSocketSubsystemSteam.P2PDumpCounter"); }
	long double& P2PDumpIntervalField() { return *GetNativePointerField<long double*>(this, "FSocketSubsystemSteam.P2PDumpInterval"); }
	int& LastSocketErrorField() { return *GetNativePointerField<int*>(this, "FSocketSubsystemSteam.LastSocketError"); }

	// Functions

	ESocketErrors GetHostByName(const char * HostName, FInternetAddr * OutAddr) { return NativeCall<ESocketErrors, const char *, FInternetAddr *>(this, "FSocketSubsystemSteam.GetHostByName", HostName, OutAddr); }
	bool AcceptP2PConnection(ISteamNetworking * SteamNetworkingPtr, FUniqueNetIdSteam * RemoteId) { return NativeCall<bool, ISteamNetworking *, FUniqueNetIdSteam *>(this, "FSocketSubsystemSteam.AcceptP2PConnection", SteamNetworkingPtr, RemoteId); }
	void AddSocket(FSocketSteam * InSocket) { NativeCall<void, FSocketSteam *>(this, "FSocketSubsystemSteam.AddSocket", InSocket); }
	void CleanupDeadConnections() { NativeCall<void>(this, "FSocketSubsystemSteam.CleanupDeadConnections"); }
	void ConnectFailure(FUniqueNetIdSteam * RemoteId) { NativeCall<void, FUniqueNetIdSteam *>(this, "FSocketSubsystemSteam.ConnectFailure", RemoteId); }
	void DestroySocket(FSocket * Socket) { NativeCall<void, FSocket *>(this, "FSocketSubsystemSteam.DestroySocket", Socket); }
	void DumpSteamP2PSessionInfo(P2PSessionState_t * SessionInfo) { NativeCall<void, P2PSessionState_t *>(this, "FSocketSubsystemSteam.DumpSteamP2PSessionInfo", SessionInfo); }
	void FixupSockets(const FUniqueNetIdSteam * GameServerId) { NativeCall<void, const FUniqueNetIdSteam *>(this, "FSocketSubsystemSteam.FixupSockets", GameServerId); }
	ESocketErrors GetLastErrorCode() { return NativeCall<ESocketErrors>(this, "FSocketSubsystemSteam.GetLastErrorCode"); }
	bool GetLocalAdapterAddresses(TArray<TSharedPtr<FInternetAddr,0>> * OutAdresses) { return NativeCall<bool, TArray<TSharedPtr<FInternetAddr,0>> *>(this, "FSocketSubsystemSteam.GetLocalAdapterAddresses", OutAdresses); }
	const wchar_t * GetSocketAPIName() { return NativeCall<const wchar_t *>(this, "FSocketSubsystemSteam.GetSocketAPIName"); }
	bool Init(FString * Error) { return NativeCall<bool, FString *>(this, "FSocketSubsystemSteam.Init", Error); }
	void P2PRemove(FUniqueNetIdSteam * SessionId, int Channel) { NativeCall<void, FUniqueNetIdSteam *, int>(this, "FSocketSubsystemSteam.P2PRemove", SessionId, Channel); }
	bool P2PTouch(ISteamNetworking * SteamNetworkingPtr, FUniqueNetIdSteam * SessionId) { return NativeCall<bool, ISteamNetworking *, FUniqueNetIdSteam *>(this, "FSocketSubsystemSteam.P2PTouch", SteamNetworkingPtr, SessionId); }
	void RegisterConnection(USteamNetConnection * Connection) { NativeCall<void, USteamNetConnection *>(this, "FSocketSubsystemSteam.RegisterConnection", Connection); }
	void Shutdown() { NativeCall<void>(this, "FSocketSubsystemSteam.Shutdown"); }
	bool Tick(float DeltaTime) { return NativeCall<bool, float>(this, "FSocketSubsystemSteam.Tick", DeltaTime); }
	int TranslateErrorCode() { return NativeCall<int>(this, "FSocketSubsystemSteam.TranslateErrorCode"); }
	void UnregisterConnection(USteamNetConnection * Connection) { NativeCall<void, USteamNetConnection *>(this, "FSocketSubsystemSteam.UnregisterConnection", Connection); }
	bool ValidateDeadConnections(const FUniqueNetIdSteam * InSteamID) { return NativeCall<bool, const FUniqueNetIdSteam *>(this, "FSocketSubsystemSteam.ValidateDeadConnections", InSteamID); }
};

