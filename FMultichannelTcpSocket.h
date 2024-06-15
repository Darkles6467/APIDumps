#pragma once

#include "BaseDeclarations.h"
struct FMultichannelTcpSocket
{
	char __padding[0x160L];
	unsigned __int64& BandwidthLatencyProductField() { return *GetNativePointerField<unsigned __int64*>(this, "FMultichannelTcpSocket.BandwidthLatencyProduct"); }
	FWindowsCriticalSection& ReceiveBuffersCriticalSectionField() { return *GetNativePointerField<FWindowsCriticalSection*>(this, "FMultichannelTcpSocket.ReceiveBuffersCriticalSection"); }
	FMultichannelTcpReceiver& ReceiverField() { return *GetNativePointerField<FMultichannelTcpReceiver*>(this, "FMultichannelTcpSocket.Receiver"); }
	__int64& RemoteReceiverBytesReceivedField() { return *GetNativePointerField<__int64*>(this, "FMultichannelTcpSocket.RemoteReceiverBytesReceived"); }
	FMultichannelTcpSender& SenderField() { return *GetNativePointerField<FMultichannelTcpSender*>(this, "FMultichannelTcpSocket.Sender"); }
};

