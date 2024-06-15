#pragma once

#include "BaseDeclarations.h"
#include "FRunnable.h"

struct FUdpSocketSender : FRunnable
{
	char __padding[0x58L];
	TQueue<FUdpSocketSender::FPacket,0>& SendQueueField() { return *GetNativePointerField<TQueue<FUdpSocketSender::FPacket,0>*>(this, "FUdpSocketSender.SendQueue"); }
	unsigned int& SendRateField() { return *GetNativePointerField<unsigned int*>(this, "FUdpSocketSender.SendRate"); }
	bool& StoppingField() { return *GetNativePointerField<bool*>(this, "FUdpSocketSender.Stopping"); }
	unsigned int& ThroughputField() { return *GetNativePointerField<unsigned int*>(this, "FUdpSocketSender.Throughput"); }
	FTimespan& WaitTimeField() { return *GetNativePointerField<FTimespan*>(this, "FUdpSocketSender.WaitTime"); }

	// Functions

	FUdpSocketSender::FPacket * FPacket(const FUdpSocketSender::FPacket * __that) { return NativeCall<FUdpSocketSender::FPacket *, const FUdpSocketSender::FPacket *>(this, "FUdpSocketSender.FPacket", __that); }
	unsigned int Run() { return NativeCall<unsigned int>(this, "FUdpSocketSender.Run"); }
	void Stop() { NativeCall<void>(this, "FUdpSocketSender.Stop"); }
};

