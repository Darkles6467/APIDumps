#pragma once

#include "BaseDeclarations.h"
#include "FRHIResource.h"

struct FRHIIndexBuffer : FRHIResource
{
	char __padding[0x10L];
	unsigned int& StrideField() { return *GetNativePointerField<unsigned int*>(this, "FRHIIndexBuffer.Stride"); }
	unsigned int& SizeField() { return *GetNativePointerField<unsigned int*>(this, "FRHIIndexBuffer.Size"); }
	unsigned int& UsageField() { return *GetNativePointerField<unsigned int*>(this, "FRHIIndexBuffer.Usage"); }
};

