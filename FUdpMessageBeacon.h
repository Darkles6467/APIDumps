#pragma once

#include "BaseDeclarations.h"
#include "FRunnable.h"

struct FUdpMessageBeacon : FRunnable
{
	char __padding[0x60L];
	FTimespan& BeaconIntervalField() { return *GetNativePointerField<FTimespan*>(this, "FUdpMessageBeacon.BeaconInterval"); }
	int& LastEndpointCountField() { return *GetNativePointerField<int*>(this, "FUdpMessageBeacon.LastEndpointCount"); }
	FDateTime& LastHelloSentField() { return *GetNativePointerField<FDateTime*>(this, "FUdpMessageBeacon.LastHelloSent"); }
	FDateTime& NextHelloTimeField() { return *GetNativePointerField<FDateTime*>(this, "FUdpMessageBeacon.NextHelloTime"); }
	FGuid& NodeIdField() { return *GetNativePointerField<FGuid*>(this, "FUdpMessageBeacon.NodeId"); }
	bool& StoppingField() { return *GetNativePointerField<bool*>(this, "FUdpMessageBeacon.Stopping"); }

	// Functions

	void Stop() { NativeCall<void>(this, "FUdpMessageBeacon.Stop"); }
	unsigned int Run() { return NativeCall<unsigned int>(this, "FUdpMessageBeacon.Run"); }
	void SendSegment(EUdpMessageSegments::Type SegmentType) { NativeCall<void, EUdpMessageSegments::Type>(this, "FUdpMessageBeacon.SendSegment", SegmentType); }
};

