#pragma once

#include "BaseDeclarations.h"
struct FCompareFSortedSet
{
	char __padding[0x1L];
	bool& bAlphaSortField() { return *GetNativePointerField<bool*>(this, "FCompareFSortedSet.bAlphaSort"); }
};

