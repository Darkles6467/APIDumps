#pragma once

#include "BaseDeclarations.h"
struct FOpenGLStream
{
	char __padding[0x18L];
	unsigned int& StrideField() { return *GetNativePointerField<unsigned int*>(this, "FOpenGLStream.Stride"); }
	unsigned int& OffsetField() { return *GetNativePointerField<unsigned int*>(this, "FOpenGLStream.Offset"); }
	unsigned int& DivisorField() { return *GetNativePointerField<unsigned int*>(this, "FOpenGLStream.Divisor"); }
};

