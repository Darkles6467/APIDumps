#pragma once

#include "BaseDeclarations.h"
#include "FSocket.h"
#include "FTimespan.h"

struct FThreadedFSocketBSD : FSocket
{
	char __padding[0x28L];
	FBSDRunnable * RunnableField() { return GetNativePointerField<FBSDRunnable *>(this, "FThreadedFSocketBSD.Runnable"); }
	unsigned __int64& SocketField() { return *GetNativePointerField<unsigned __int64*>(this, "FThreadedFSocketBSD.Socket"); }
	FDateTime& LastActivityTimeField() { return *GetNativePointerField<FDateTime*>(this, "FThreadedFSocketBSD.LastActivityTime"); }

	// Functions

	bool Bind(FInternetAddr * Addr) { return NativeCall<bool, FInternetAddr *>(this, "FThreadedFSocketBSD.Bind", Addr); }
	bool Close() { return NativeCall<bool>(this, "FThreadedFSocketBSD.Close"); }
	bool Connect(FInternetAddr * Addr) { return NativeCall<bool, FInternetAddr *>(this, "FThreadedFSocketBSD.Connect", Addr); }
	void GetAddress(FInternetAddr * OutAddr) { NativeCall<void, FInternetAddr *>(this, "FThreadedFSocketBSD.GetAddress", OutAddr); }
	ESocketConnectionState GetConnectionState() { return NativeCall<ESocketConnectionState>(this, "FThreadedFSocketBSD.GetConnectionState"); }
	int GetPortNo() { return NativeCall<int>(this, "FThreadedFSocketBSD.GetPortNo"); }
	bool HasPendingConnection(bool * bHasPendingConnection) { return NativeCall<bool, bool *>(this, "FThreadedFSocketBSD.HasPendingConnection", bHasPendingConnection); }
	bool HasPendingData(unsigned int * PendingDataSize) { return NativeCall<bool, unsigned int *>(this, "FThreadedFSocketBSD.HasPendingData", PendingDataSize); }
	bool JoinMulticastGroup(FInternetAddr * GroupAddress) { return NativeCall<bool, FInternetAddr *>(this, "FThreadedFSocketBSD.JoinMulticastGroup", GroupAddress); }
	bool LeaveMulticastGroup(FInternetAddr * GroupAddress) { return NativeCall<bool, FInternetAddr *>(this, "FThreadedFSocketBSD.LeaveMulticastGroup", GroupAddress); }
	bool Listen(int MaxBacklog) { return NativeCall<bool, int>(this, "FThreadedFSocketBSD.Listen", MaxBacklog); }
	bool RecvFrom(char * Data, int BufferSize, int * BytesRead, FInternetAddr * Source, ESocketReceiveFlags::Type Flags) { return NativeCall<bool, char *, int, int *, FInternetAddr *, ESocketReceiveFlags::Type>(this, "FThreadedFSocketBSD.RecvFrom", Data, BufferSize, BytesRead, Source, Flags); }
	bool SendTo(const char * Data, int Count, int * BytesSent, FInternetAddr * Destination) { return NativeCall<bool, const char *, int, int *, FInternetAddr *>(this, "FThreadedFSocketBSD.SendTo", Data, Count, BytesSent, Destination); }
	bool SetBroadcast(bool bAllowBroadcast) { return NativeCall<bool, bool>(this, "FThreadedFSocketBSD.SetBroadcast", bAllowBroadcast); }
	bool SetLinger(bool bShouldLinger, int Timeout) { return NativeCall<bool, bool, int>(this, "FThreadedFSocketBSD.SetLinger", bShouldLinger, Timeout); }
	bool SetMulticastLoopback(bool bLoopback) { return NativeCall<bool, bool>(this, "FThreadedFSocketBSD.SetMulticastLoopback", bLoopback); }
	bool SetMulticastTtl(char TimeToLive) { return NativeCall<bool, char>(this, "FThreadedFSocketBSD.SetMulticastTtl", TimeToLive); }
	bool SetNonBlocking(bool bIsNonBlocking) { return NativeCall<bool, bool>(this, "FThreadedFSocketBSD.SetNonBlocking", bIsNonBlocking); }
	bool SetReceiveBufferSize(int Size, int * NewSize) { return NativeCall<bool, int, int *>(this, "FThreadedFSocketBSD.SetReceiveBufferSize", Size, NewSize); }
	bool SetRecvErr(bool bUseErrorQueue) { return NativeCall<bool, bool>(this, "FThreadedFSocketBSD.SetRecvErr", bUseErrorQueue); }
	bool SetReuseAddr(bool bAllowReuse) { return NativeCall<bool, bool>(this, "FThreadedFSocketBSD.SetReuseAddr", bAllowReuse); }
	bool SetSendBufferSize(int Size, int * NewSize) { return NativeCall<bool, int, int *>(this, "FThreadedFSocketBSD.SetSendBufferSize", Size, NewSize); }
	bool Wait(ESocketWaitConditions::Type Condition, FTimespan WaitTime) { return NativeCall<bool, ESocketWaitConditions::Type, FTimespan>(this, "FThreadedFSocketBSD.Wait", Condition, WaitTime); }
};

