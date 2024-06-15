#pragma once

#include "BaseDeclarations.h"
struct FSparseArrayAllocationInfo
{
	char __padding[0x10L];
	int& IndexField() { return *GetNativePointerField<int*>(this, "FSparseArrayAllocationInfo.Index"); }
	void * PointerField() { return GetNativePointerField<void *>(this, "FSparseArrayAllocationInfo.Pointer"); }
};

