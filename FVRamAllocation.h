#pragma once

#include "BaseDeclarations.h"
struct FVRamAllocation
{
	char __padding[0x10L];
	FRangeAllocator::FRange& InitialRangeField() { return *GetNativePointerField<FRangeAllocator::FRange*>(this, "FVRamAllocation.InitialRange"); }
	unsigned int& AllocationStartField() { return *GetNativePointerField<unsigned int*>(this, "FVRamAllocation.AllocationStart"); }
	unsigned int& AllocationSizeField() { return *GetNativePointerField<unsigned int*>(this, "FVRamAllocation.AllocationSize"); }
};

