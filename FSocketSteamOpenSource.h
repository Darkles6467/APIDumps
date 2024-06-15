#pragma once

#include "BaseDeclarations.h"
#include "FSocket.h"
#include "FInternetAddr.h"

struct FSocketSteamOpenSource : FSocket
{
	char __padding[0x100L];
	unsigned int& _IPField() { return *GetNativePointerField<unsigned int*>(this, "FSocketSteamOpenSource._IP"); }
	unsigned __int16& PortField() { return *GetNativePointerField<unsigned __int16*>(this, "FSocketSteamOpenSource.Port"); }
	unsigned int& ListenSocketField() { return *GetNativePointerField<unsigned int*>(this, "FSocketSteamOpenSource.ListenSocket"); }
	unsigned int& NetConnectionField() { return *GetNativePointerField<unsigned int*>(this, "FSocketSteamOpenSource.NetConnection"); }
	FDateTime& LastActivityTimeField() { return *GetNativePointerField<FDateTime*>(this, "FSocketSteamOpenSource.LastActivityTime"); }
	TArray<SteamNetConnectionStatusChangedCallback_t>& PendingConnectionsField() { return *GetNativePointerField<TArray<SteamNetConnectionStatusChangedCallback_t>*>(this, "FSocketSteamOpenSource.PendingConnections"); }
	bool& bIsAcceptedSocketField() { return *GetNativePointerField<bool*>(this, "FSocketSteamOpenSource.bIsAcceptedSocket"); }

	// Functions

	void SendBufferInfo(const FSocketSteamOpenSource::SendBufferInfo * __that) { NativeCall<void, const FSocketSteamOpenSource::SendBufferInfo *>(this, "FSocketSteamOpenSource.SendBufferInfo", __that); }
	void SendBufferInfo() { NativeCall<void>(this, "FSocketSteamOpenSource.SendBufferInfo"); }
	unsigned int ARK_GetRemoteIP(TSharedPtr<FInternetAddr,0> RemoteAddr) { return NativeCall<unsigned int, TSharedPtr<FInternetAddr,0>>(this, "FSocketSteamOpenSource.ARK_GetRemoteIP", RemoteAddr); }
	bool Bind(FInternetAddr * Addr) { return NativeCall<bool, FInternetAddr *>(this, "FSocketSteamOpenSource.Bind", Addr); }
	bool Close() { return NativeCall<bool>(this, "FSocketSteamOpenSource.Close"); }
	bool Connect(FInternetAddr * Addr) { return NativeCall<bool, FInternetAddr *>(this, "FSocketSteamOpenSource.Connect", Addr); }
	void GetAddress(FInternetAddr * OutAddr) { NativeCall<void, FInternetAddr *>(this, "FSocketSteamOpenSource.GetAddress", OutAddr); }
	ESocketConnectionState GetConnectionState() { return NativeCall<ESocketConnectionState>(this, "FSocketSteamOpenSource.GetConnectionState"); }
	int GetPortNo() { return NativeCall<int>(this, "FSocketSteamOpenSource.GetPortNo"); }
	bool HasPendingConnection(bool * bHasPendingConnection) { return NativeCall<bool, bool *>(this, "FSocketSteamOpenSource.HasPendingConnection", bHasPendingConnection); }
	bool Recv(char * Data, int BufferSize, int * BytesRead, ESocketReceiveFlags::Type Flags) { return NativeCall<bool, char *, int, int *, ESocketReceiveFlags::Type>(this, "FSocketSteamOpenSource.Recv", Data, BufferSize, BytesRead, Flags); }
	bool RecvFrom(char * Data, int BufferSize, int * BytesRead, FInternetAddr * Source, ESocketReceiveFlags::Type Flags) { return NativeCall<bool, char *, int, int *, FInternetAddr *, ESocketReceiveFlags::Type>(this, "FSocketSteamOpenSource.RecvFrom", Data, BufferSize, BytesRead, Source, Flags); }
	bool Send(const char * Data, int Count, int * BytesSent) { return NativeCall<bool, const char *, int, int *>(this, "FSocketSteamOpenSource.Send", Data, Count, BytesSent); }
	bool SendTo(const char * Data, int Count, int * BytesSent, FInternetAddr * Destination) { return NativeCall<bool, const char *, int, int *, FInternetAddr *>(this, "FSocketSteamOpenSource.SendTo", Data, Count, BytesSent, Destination); }
};

