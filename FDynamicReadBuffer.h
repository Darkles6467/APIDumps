#pragma once

#include "BaseDeclarations.h"
struct FReadBuffer
{
	char __padding[0x18L];
	unsigned int& NumBytesField() { return *GetNativePointerField<unsigned int*>(this, "FReadBuffer.NumBytes"); }
};

struct FDynamicReadBuffer : FReadBuffer
{
	char __padding[0x10L];
	char * MappedBufferField() { return GetNativePointerField<char *>(this, "FDynamicReadBuffer.MappedBuffer"); }
};

