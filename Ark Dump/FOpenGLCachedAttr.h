#pragma once

#include "BaseDeclarations.h"
struct FOpenGLCachedAttr
{
	char __padding[0x28L];
	void * PointerField() { return GetNativePointerField<void *>(this, "FOpenGLCachedAttr.Pointer"); }
	int& StrideField() { return *GetNativePointerField<int*>(this, "FOpenGLCachedAttr.Stride"); }
	unsigned int& BufferField() { return *GetNativePointerField<unsigned int*>(this, "FOpenGLCachedAttr.Buffer"); }
	unsigned int& SizeField() { return *GetNativePointerField<unsigned int*>(this, "FOpenGLCachedAttr.Size"); }
	unsigned int& DivisorField() { return *GetNativePointerField<unsigned int*>(this, "FOpenGLCachedAttr.Divisor"); }
	unsigned int& TypeField() { return *GetNativePointerField<unsigned int*>(this, "FOpenGLCachedAttr.Type"); }
	unsigned int& StreamOffsetField() { return *GetNativePointerField<unsigned int*>(this, "FOpenGLCachedAttr.StreamOffset"); }
	unsigned int& StreamIndexField() { return *GetNativePointerField<unsigned int*>(this, "FOpenGLCachedAttr.StreamIndex"); }
	char& bNormalizedField() { return *GetNativePointerField<char*>(this, "FOpenGLCachedAttr.bNormalized"); }
	bool& bEnabledField() { return *GetNativePointerField<bool*>(this, "FOpenGLCachedAttr.bEnabled"); }
};

