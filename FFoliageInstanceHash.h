#pragma once

#include "BaseDeclarations.h"
struct FFoliageInstanceHash
{
	char __padding[0x58L];
	const int& HashCellBitsField() { return *GetNativePointerField<const int*>(this, "FFoliageInstanceHash.HashCellBits"); }
};

