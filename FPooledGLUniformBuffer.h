#pragma once

#include "BaseDeclarations.h"
struct FPooledGLUniformBuffer
{
	char __padding[0x18L];
	unsigned int& BufferField() { return *GetNativePointerField<unsigned int*>(this, "FPooledGLUniformBuffer.Buffer"); }
	unsigned int& CreatedSizeField() { return *GetNativePointerField<unsigned int*>(this, "FPooledGLUniformBuffer.CreatedSize"); }
	unsigned int& OffsetField() { return *GetNativePointerField<unsigned int*>(this, "FPooledGLUniformBuffer.Offset"); }
	unsigned int& FrameFreedField() { return *GetNativePointerField<unsigned int*>(this, "FPooledGLUniformBuffer.FrameFreed"); }
	char * PersistentlyMappedBufferField() { return GetNativePointerField<char *>(this, "FPooledGLUniformBuffer.PersistentlyMappedBuffer"); }
};

