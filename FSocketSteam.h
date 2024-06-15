#pragma once

#include "BaseDeclarations.h"
#include "FSocket.h"
#include "FInternetAddr.h"

struct FSocketSteam : FSocket
{
	char __padding[0x78L];
	int& SteamChannelField() { return *GetNativePointerField<int*>(this, "FSocketSteam.SteamChannel"); }
	EP2PSend& SteamSendModeField() { return *GetNativePointerField<EP2PSend*>(this, "FSocketSteam.SteamSendMode"); }
	ISteamNetworking * SteamNetworkingPtrField() { return GetNativePointerField<ISteamNetworking *>(this, "FSocketSteam.SteamNetworkingPtr"); }

	// Functions

	unsigned int ARK_GetRemoteIP(TSharedPtr<FInternetAddr,0> RemoteAddr) { return NativeCall<unsigned int, TSharedPtr<FInternetAddr,0>>(this, "FSocketSteam.ARK_GetRemoteIP", RemoteAddr); }
	bool Bind(FInternetAddr * Addr) { return NativeCall<bool, FInternetAddr *>(this, "FSocketSteam.Bind", Addr); }
	void GetAddress(FInternetAddr * OutAddr) { NativeCall<void, FInternetAddr *>(this, "FSocketSteam.GetAddress", OutAddr); }
	bool HasPendingData(unsigned int * PendingDataSize) { return NativeCall<bool, unsigned int *>(this, "FSocketSteam.HasPendingData", PendingDataSize); }
	bool Send(const char * Data, int Count, int * BytesSent) { return NativeCall<bool, const char *, int, int *>(this, "FSocketSteam.Send", Data, Count, BytesSent); }
	bool RecvFrom(char * Data, int BufferSize, int * BytesRead, FInternetAddr * Source, ESocketReceiveFlags::Type Flags) { return NativeCall<bool, char *, int, int *, FInternetAddr *, ESocketReceiveFlags::Type>(this, "FSocketSteam.RecvFrom", Data, BufferSize, BytesRead, Source, Flags); }
	bool SendTo(const char * Data, int Count, int * BytesSent, FInternetAddr * Destination) { return NativeCall<bool, const char *, int, int *, FInternetAddr *>(this, "FSocketSteam.SendTo", Data, Count, BytesSent, Destination); }
};

