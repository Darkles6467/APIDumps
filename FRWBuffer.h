#pragma once

#include "BaseDeclarations.h"
struct FRWBuffer
{
	char __padding[0x20L];
	unsigned int& NumBytesField() { return *GetNativePointerField<unsigned int*>(this, "FRWBuffer.NumBytes"); }

	// Functions

	void Initialize(unsigned int BytesPerElement, unsigned int NumElements, EPixelFormat Format, unsigned int AdditionalUsage) { NativeCall<void, unsigned int, unsigned int, EPixelFormat, unsigned int>(this, "FRWBuffer.Initialize", BytesPerElement, NumElements, Format, AdditionalUsage); }
};

