#pragma once

#include "BaseDeclarations.h"
#include "FRunnable.h"

struct FScreenSaverInhibitor : FRunnable
{

	// Functions

	unsigned int Run() { return NativeCall<unsigned int>(this, "FScreenSaverInhibitor.Run"); }
};

