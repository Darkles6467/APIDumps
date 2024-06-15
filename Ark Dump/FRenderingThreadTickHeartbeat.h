#pragma once

#include "BaseDeclarations.h"
#include "FRunnable.h"

struct FRenderingThreadTickHeartbeat : FRunnable
{

	// Functions

	unsigned int Run() { return NativeCall<unsigned int>(this, "FRenderingThreadTickHeartbeat.Run"); }
};

