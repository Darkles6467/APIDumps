#pragma once

#include "BaseDeclarations.h"
struct FSetElementId
{
	char __padding[0x4L];
	int& IndexField() { return *GetNativePointerField<int*>(this, "FSetElementId.Index"); }
};

