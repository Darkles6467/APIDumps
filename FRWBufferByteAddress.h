#pragma once

#include "BaseDeclarations.h"
struct FRWBufferByteAddress
{
	char __padding[0x20L];
	unsigned int& NumBytesField() { return *GetNativePointerField<unsigned int*>(this, "FRWBufferByteAddress.NumBytes"); }
};

