#pragma once

#include "BaseDeclarations.h"
struct FBTWaitTaskMemory
{
	char __padding[0x4L];
	float& RemainingWaitTimeField() { return *GetNativePointerField<float*>(this, "FBTWaitTaskMemory.RemainingWaitTime"); }
};

