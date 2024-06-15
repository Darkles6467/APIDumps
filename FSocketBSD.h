#pragma once

#include "BaseDeclarations.h"
#include "FSocket.h"
#include "FTimespan.h"

struct FSocketBSD : FSocket
{
	char __padding[0x18L];
	unsigned __int64& SocketField() { return *GetNativePointerField<unsigned __int64*>(this, "FSocketBSD.Socket"); }
	FDateTime& LastActivityTimeField() { return *GetNativePointerField<FDateTime*>(this, "FSocketBSD.LastActivityTime"); }

	// Functions

	bool Bind(FInternetAddr * Addr) { return NativeCall<bool, FInternetAddr *>(this, "FSocketBSD.Bind", Addr); }
	bool Close() { return NativeCall<bool>(this, "FSocketBSD.Close"); }
	bool Connect(FInternetAddr * Addr) { return NativeCall<bool, FInternetAddr *>(this, "FSocketBSD.Connect", Addr); }
	void GetAddress(FInternetAddr * OutAddr) { NativeCall<void, FInternetAddr *>(this, "FSocketBSD.GetAddress", OutAddr); }
	ESocketConnectionState GetConnectionState() { return NativeCall<ESocketConnectionState>(this, "FSocketBSD.GetConnectionState"); }
	int GetPortNo() { return NativeCall<int>(this, "FSocketBSD.GetPortNo"); }
	bool HasPendingConnection(bool * bHasPendingConnection) { return NativeCall<bool, bool *>(this, "FSocketBSD.HasPendingConnection", bHasPendingConnection); }
	bool HasPendingData(unsigned int * PendingDataSize) { return NativeCall<bool, unsigned int *>(this, "FSocketBSD.HasPendingData", PendingDataSize); }
	ESocketInternalState::Return HasState(ESocketInternalState::Param State, FTimespan WaitTime) { return NativeCall<ESocketInternalState::Return, ESocketInternalState::Param, FTimespan>(this, "FSocketBSD.HasState", State, WaitTime); }
	bool JoinMulticastGroup(FInternetAddr * GroupAddress) { return NativeCall<bool, FInternetAddr *>(this, "FSocketBSD.JoinMulticastGroup", GroupAddress); }
	bool LeaveMulticastGroup(FInternetAddr * GroupAddress) { return NativeCall<bool, FInternetAddr *>(this, "FSocketBSD.LeaveMulticastGroup", GroupAddress); }
	bool Listen(int MaxBacklog) { return NativeCall<bool, int>(this, "FSocketBSD.Listen", MaxBacklog); }
	bool Recv(char * Data, int BufferSize, int * BytesRead, ESocketReceiveFlags::Type Flags) { return NativeCall<bool, char *, int, int *, ESocketReceiveFlags::Type>(this, "FSocketBSD.Recv", Data, BufferSize, BytesRead, Flags); }
	bool RecvFrom(char * Data, int BufferSize, int * BytesRead, FInternetAddr * Source, ESocketReceiveFlags::Type Flags) { return NativeCall<bool, char *, int, int *, FInternetAddr *, ESocketReceiveFlags::Type>(this, "FSocketBSD.RecvFrom", Data, BufferSize, BytesRead, Source, Flags); }
	bool Send(const char * Data, int Count, int * BytesSent) { return NativeCall<bool, const char *, int, int *>(this, "FSocketBSD.Send", Data, Count, BytesSent); }
	bool SendTo(const char * Data, int Count, int * BytesSent, FInternetAddr * Destination) { return NativeCall<bool, const char *, int, int *, FInternetAddr *>(this, "FSocketBSD.SendTo", Data, Count, BytesSent, Destination); }
	bool SetBroadcast(bool bAllowBroadcast) { return NativeCall<bool, bool>(this, "FSocketBSD.SetBroadcast", bAllowBroadcast); }
	bool SetLinger(bool bShouldLinger, int Timeout) { return NativeCall<bool, bool, int>(this, "FSocketBSD.SetLinger", bShouldLinger, Timeout); }
	bool SetMulticastLoopback(bool bLoopback) { return NativeCall<bool, bool>(this, "FSocketBSD.SetMulticastLoopback", bLoopback); }
	bool SetMulticastTtl(char TimeToLive) { return NativeCall<bool, char>(this, "FSocketBSD.SetMulticastTtl", TimeToLive); }
	bool SetNonBlocking(bool bIsNonBlocking) { return NativeCall<bool, bool>(this, "FSocketBSD.SetNonBlocking", bIsNonBlocking); }
	bool SetReceiveBufferSize(int Size, int * NewSize) { return NativeCall<bool, int, int *>(this, "FSocketBSD.SetReceiveBufferSize", Size, NewSize); }
	bool SetReuseAddr(bool bAllowReuse) { return NativeCall<bool, bool>(this, "FSocketBSD.SetReuseAddr", bAllowReuse); }
	bool SetSendBufferSize(int Size, int * NewSize) { return NativeCall<bool, int, int *>(this, "FSocketBSD.SetSendBufferSize", Size, NewSize); }
	bool Wait(ESocketWaitConditions::Type Condition, FTimespan WaitTime) { return NativeCall<bool, ESocketWaitConditions::Type, FTimespan>(this, "FSocketBSD.Wait", Condition, WaitTime); }
};

