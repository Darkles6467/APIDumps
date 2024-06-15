#pragma once

#include "BaseDeclarations.h"
struct FRangeAllocator
{
	char __padding[0x10L];
	TArray<FRangeAllocator::FRange>& EntriesField() { return *GetNativePointerField<TArray<FRangeAllocator::FRange>*>(this, "FRangeAllocator.Entries"); }
};

