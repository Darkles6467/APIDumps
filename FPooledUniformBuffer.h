#pragma once

#include "BaseDeclarations.h"
struct FPooledUniformBuffer
{
	char __padding[0x10L];
	TRefCountPtr<ID3D11Buffer>& BufferField() { return *GetNativePointerField<TRefCountPtr<ID3D11Buffer>*>(this, "FPooledUniformBuffer.Buffer"); }
	unsigned int& CreatedSizeField() { return *GetNativePointerField<unsigned int*>(this, "FPooledUniformBuffer.CreatedSize"); }
	unsigned int& FrameFreedField() { return *GetNativePointerField<unsigned int*>(this, "FPooledUniformBuffer.FrameFreed"); }
};

