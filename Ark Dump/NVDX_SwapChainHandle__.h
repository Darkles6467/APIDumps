#pragma once

#include "BaseDeclarations.h"
struct NVDX_SwapChainHandle__
{
	char __padding[0x4L];
	int& unusedField() { return *GetNativePointerField<int*>(this, "NVDX_SwapChainHandle__.unused"); }
};

