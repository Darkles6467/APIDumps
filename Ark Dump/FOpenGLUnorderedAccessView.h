#pragma once

#include "BaseDeclarations.h"
#include "FRHIUnorderedAccessView.h"

struct FOpenGLUnorderedAccessView : FRHIUnorderedAccessView
{
	char __padding[0x8L];
	unsigned int& ResourceField() { return *GetNativePointerField<unsigned int*>(this, "FOpenGLUnorderedAccessView.Resource"); }
	unsigned int& FormatField() { return *GetNativePointerField<unsigned int*>(this, "FOpenGLUnorderedAccessView.Format"); }
};

