#pragma once

#include "BaseDeclarations.h"
struct FThrottleRequest
{
	char __padding[0x4L];
	int& IndexField() { return *GetNativePointerField<int*>(this, "FThrottleRequest.Index"); }
};

