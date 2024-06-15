#pragma once

#include "BaseDeclarations.h"
#include "FRunnable.h"

struct FUdpSocketReceiver : FRunnable
{
	char __padding[0x30L];
	bool& StoppingField() { return *GetNativePointerField<bool*>(this, "FUdpSocketReceiver.Stopping"); }
	FTimespan& WaitTimeField() { return *GetNativePointerField<FTimespan*>(this, "FUdpSocketReceiver.WaitTime"); }

	// Functions

	unsigned int Run() { return NativeCall<unsigned int>(this, "FUdpSocketReceiver.Run"); }
};

