#pragma once

#include "BaseDeclarations.h"
#include "FRefCountedObject.h"

struct FOpenGLBasePixelBuffer : FRefCountedObject
{
	char __padding[0x8L];
	unsigned int& SizeField() { return *GetNativePointerField<unsigned int*>(this, "FOpenGLBasePixelBuffer.Size"); }
	unsigned int& UsageField() { return *GetNativePointerField<unsigned int*>(this, "FOpenGLBasePixelBuffer.Usage"); }
};

