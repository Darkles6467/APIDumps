#pragma once

#include "BaseDeclarations.h"
#include "FRunnable.h"

struct FRHIThread : FRunnable
{
	char __padding[0x8L];

	// Functions

	unsigned int Run() { return NativeCall<unsigned int>(this, "FRHIThread.Run"); }
};

