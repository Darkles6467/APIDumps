#pragma once

#include "BaseDeclarations.h"
struct FRHICommandListFenceAllocator
{
	char __padding[0xc008L];
	volatile int& CurrentFenceIndexField() { return *GetNativePointerField<volatile int*>(this, "FRHICommandListFenceAllocator.CurrentFenceIndex"); }
	FieldArray<unsigned __int64[4096], 644096> FenceIDsField() { return {this, "FRHICommandListFenceAllocator.FenceIDs"}; }
	FieldArray<unsigned int, 4096> FenceFrameNumberField() { return {this, "FRHICommandListFenceAllocator.FenceFrameNumber"}; }
};

