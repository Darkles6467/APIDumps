#pragma once

#include "BaseDeclarations.h"
struct FRepRecord
{
	char __padding[0x10L];
	int& IndexField() { return *GetNativePointerField<int*>(this, "FRepRecord.Index"); }
};

