#pragma once

#include "BaseDeclarations.h"
struct FCompareFSortedTexture
{
	char __padding[0x1L];
	bool& bAlphaSortField() { return *GetNativePointerField<bool*>(this, "FCompareFSortedTexture.bAlphaSort"); }
};

