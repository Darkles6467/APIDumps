#pragma once

#include "BaseDeclarations.h"
struct FBTEnvQueryTaskMemory
{
	char __padding[0x4L];
	int& RequestIDField() { return *GetNativePointerField<int*>(this, "FBTEnvQueryTaskMemory.RequestID"); }
};

