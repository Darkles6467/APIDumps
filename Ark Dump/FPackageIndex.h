#pragma once

#include "BaseDeclarations.h"
struct FPackageIndex
{
	char __padding[0x4L];
	int& IndexField() { return *GetNativePointerField<int*>(this, "FPackageIndex.Index"); }
};

