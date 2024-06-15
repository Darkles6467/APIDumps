#pragma once

#include "BaseDeclarations.h"
struct FPrimitiveVisibilityId
{
	char __padding[0x8L];
	int& ByteIndexField() { return *GetNativePointerField<int*>(this, "FPrimitiveVisibilityId.ByteIndex"); }
	char& BitMaskField() { return *GetNativePointerField<char*>(this, "FPrimitiveVisibilityId.BitMask"); }
};

