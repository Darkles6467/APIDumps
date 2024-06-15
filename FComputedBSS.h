#pragma once

#include "BaseDeclarations.h"
struct FComputedBSS
{
	char __padding[0x10L];
	int& UseCountField() { return *GetNativePointerField<int*>(this, "FComputedBSS.UseCount"); }
};

