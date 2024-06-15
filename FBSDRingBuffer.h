#pragma once

#include "BaseDeclarations.h"
struct FBSDRingBuffer
{
	char __padding[0x18L];
	TArray<unsigned char>& BufferField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FBSDRingBuffer.Buffer"); }
	int& WriteIndexField() { return *GetNativePointerField<int*>(this, "FBSDRingBuffer.WriteIndex"); }
};

