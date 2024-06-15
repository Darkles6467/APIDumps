#pragma once

#include "BaseDeclarations.h"
struct FHeapAllocator
{

	// Functions

	int ForAnyElementType(int NumElements, int NumAllocatedElements, unsigned __int64 NumBytesPerElement) { return NativeCall<int, int, int, unsigned __int64>(this, "FHeapAllocator.ForAnyElementType", NumElements, NumAllocatedElements, NumBytesPerElement); }
	void ForAnyElementType(int PreviousNumElements, int NumElements, unsigned __int64 NumBytesPerElement) { NativeCall<void, int, int, unsigned __int64>(this, "FHeapAllocator.ForAnyElementType", PreviousNumElements, NumElements, NumBytesPerElement); }
};

struct FDefaultAllocator : FHeapAllocator
{
};

