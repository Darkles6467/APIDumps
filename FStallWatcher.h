#pragma once

#include "BaseDeclarations.h"
struct FStallWatcher
{
	char __padding[0x8L];
	long double& StartTimeField() { return *GetNativePointerField<long double*>(this, "FStallWatcher.StartTime"); }
};

