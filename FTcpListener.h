#pragma once

#include "BaseDeclarations.h"
#include "FRunnable.h"

struct FTcpListener : FRunnable
{
	char __padding[0x38L];
	bool& DeleteSocketField() { return *GetNativePointerField<bool*>(this, "FTcpListener.DeleteSocket"); }
	FIPv4Endpoint& EndpointField() { return *GetNativePointerField<FIPv4Endpoint*>(this, "FTcpListener.Endpoint"); }
	FTimespan& SleepTimeField() { return *GetNativePointerField<FTimespan*>(this, "FTcpListener.SleepTime"); }
	bool& StoppingField() { return *GetNativePointerField<bool*>(this, "FTcpListener.Stopping"); }

	// Functions

	bool Init() { return NativeCall<bool>(this, "FTcpListener.Init"); }
	unsigned int Run() { return NativeCall<unsigned int>(this, "FTcpListener.Run"); }
	void Stop() { NativeCall<void>(this, "FTcpListener.Stop"); }
};

