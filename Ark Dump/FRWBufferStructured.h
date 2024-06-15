#pragma once

#include "BaseDeclarations.h"
struct FRWBufferStructured
{
	char __padding[0x20L];
	unsigned int& NumBytesField() { return *GetNativePointerField<unsigned int*>(this, "FRWBufferStructured.NumBytes"); }
};

