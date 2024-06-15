#pragma once

#include "BaseDeclarations.h"
struct FConstBitReference
{
	char __padding[0x10L];
	const unsigned int * DataField() { return GetNativePointerField<const unsigned int *>(this, "FConstBitReference.Data"); }
	unsigned int& MaskField() { return *GetNativePointerField<unsigned int*>(this, "FConstBitReference.Mask"); }
};

