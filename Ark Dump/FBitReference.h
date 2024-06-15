#pragma once

#include "BaseDeclarations.h"
struct FBitReference
{
	char __padding[0x10L];
	unsigned int * DataField() { return GetNativePointerField<unsigned int *>(this, "FBitReference.Data"); }
	unsigned int& MaskField() { return *GetNativePointerField<unsigned int*>(this, "FBitReference.Mask"); }
};

