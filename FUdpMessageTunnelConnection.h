#pragma once

#include "BaseDeclarations.h"
#include "FRunnable.h"

struct FUdpMessageTunnelConnection : FRunnable
{
	char __padding[0x88L];
	FDateTime& ClosedTimeField() { return *GetNativePointerField<FDateTime*>(this, "FUdpMessageTunnelConnection.ClosedTime"); }
	TQueue<TSharedPtr<FArrayReader,1>,1>& InboxField() { return *GetNativePointerField<TQueue<TSharedPtr<FArrayReader,1>,1>*>(this, "FUdpMessageTunnelConnection.Inbox"); }
	FDateTime& OpenedTimeField() { return *GetNativePointerField<FDateTime*>(this, "FUdpMessageTunnelConnection.OpenedTime"); }
	TQueue<TSharedPtr<FArrayReader,1>,1>& OutboxField() { return *GetNativePointerField<TQueue<TSharedPtr<FArrayReader,1>,1>*>(this, "FUdpMessageTunnelConnection.Outbox"); }
	FIPv4Endpoint& RemoteEndpointField() { return *GetNativePointerField<FIPv4Endpoint*>(this, "FUdpMessageTunnelConnection.RemoteEndpoint"); }
	unsigned __int64& TotalBytesReceivedField() { return *GetNativePointerField<unsigned __int64*>(this, "FUdpMessageTunnelConnection.TotalBytesReceived"); }
	unsigned __int64& TotalBytesSentField() { return *GetNativePointerField<unsigned __int64*>(this, "FUdpMessageTunnelConnection.TotalBytesSent"); }
	bool& bRunField() { return *GetNativePointerField<bool*>(this, "FUdpMessageTunnelConnection.bRun"); }

	// Functions

	void Close() { NativeCall<void>(this, "FUdpMessageTunnelConnection.Close"); }
	FText * GetName(FText * result) { return NativeCall<FText *, FText *>(this, "FUdpMessageTunnelConnection.GetName", result); }
	FTimespan * GetUptime(FTimespan * result) { return NativeCall<FTimespan *, FTimespan *>(this, "FUdpMessageTunnelConnection.GetUptime", result); }
	bool Init() { return NativeCall<bool>(this, "FUdpMessageTunnelConnection.Init"); }
	bool IsOpen() { return NativeCall<bool>(this, "FUdpMessageTunnelConnection.IsOpen"); }
	bool ReceivePayloads() { return NativeCall<bool>(this, "FUdpMessageTunnelConnection.ReceivePayloads"); }
	unsigned int Run() { return NativeCall<unsigned int>(this, "FUdpMessageTunnelConnection.Run"); }
	bool SendPayloads() { return NativeCall<bool>(this, "FUdpMessageTunnelConnection.SendPayloads"); }
	void Stop() { NativeCall<void>(this, "FUdpMessageTunnelConnection.Stop"); }
};

