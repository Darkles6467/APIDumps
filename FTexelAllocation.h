#pragma once

#include "BaseDeclarations.h"
struct FTexelAllocation
{
	char __padding[0x6L];
	unsigned __int16& XField() { return *GetNativePointerField<unsigned __int16*>(this, "FTexelAllocation.X"); }
	unsigned __int16& YField() { return *GetNativePointerField<unsigned __int16*>(this, "FTexelAllocation.Y"); }
	unsigned __int16& SizeField() { return *GetNativePointerField<unsigned __int16*>(this, "FTexelAllocation.Size"); }
};

