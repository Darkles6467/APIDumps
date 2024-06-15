#pragma once

#include "BaseDeclarations.h"
#include "FRHIResource.h"

struct FRHIStructuredBuffer : FRHIResource
{
	char __padding[0x10L];
	unsigned int& StrideField() { return *GetNativePointerField<unsigned int*>(this, "FRHIStructuredBuffer.Stride"); }
	unsigned int& SizeField() { return *GetNativePointerField<unsigned int*>(this, "FRHIStructuredBuffer.Size"); }
	unsigned int& UsageField() { return *GetNativePointerField<unsigned int*>(this, "FRHIStructuredBuffer.Usage"); }
};

