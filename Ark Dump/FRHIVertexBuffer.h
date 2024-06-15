#pragma once

#include "BaseDeclarations.h"
#include "FRHIResource.h"

struct FRHIVertexBuffer : FRHIResource
{
	char __padding[0x8L];
	unsigned int& SizeField() { return *GetNativePointerField<unsigned int*>(this, "FRHIVertexBuffer.Size"); }
	unsigned int& UsageField() { return *GetNativePointerField<unsigned int*>(this, "FRHIVertexBuffer.Usage"); }
};

