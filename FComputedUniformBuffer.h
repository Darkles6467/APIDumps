#pragma once

#include "BaseDeclarations.h"
struct FComputedUniformBuffer
{
	char __padding[0x10L];
	int& UseCountField() { return *GetNativePointerField<int*>(this, "FComputedUniformBuffer.UseCount"); }
};

