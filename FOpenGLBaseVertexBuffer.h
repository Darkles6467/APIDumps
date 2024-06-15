#pragma once

#include "BaseDeclarations.h"
#include "FRHIVertexBuffer.h"
#include "FRHIResource.h"

struct FOpenGLBaseVertexBuffer : FRHIVertexBuffer
{
	char __padding[0x8L];
	void * ZeroStrideVertexBufferField() { return GetNativePointerField<void *>(this, "FOpenGLBaseVertexBuffer.ZeroStrideVertexBuffer"); }

	// Functions

};

