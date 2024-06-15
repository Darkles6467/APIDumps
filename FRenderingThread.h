#pragma once

#include "BaseDeclarations.h"
#include "FRunnable.h"

struct FRenderingThread : FRunnable
{
	char __padding[0x10L];
	bool& bAcquiredThreadOwnershipField() { return *GetNativePointerField<bool*>(this, "FRenderingThread.bAcquiredThreadOwnership"); }

	// Functions

	void Exit() { NativeCall<void>(this, "FRenderingThread.Exit"); }
	bool Init() { return NativeCall<bool>(this, "FRenderingThread.Init"); }
	unsigned int Run() { return NativeCall<unsigned int>(this, "FRenderingThread.Run"); }
};

