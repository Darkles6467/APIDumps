#pragma once

#include "BaseDeclarations.h"
struct FRingAllocation
{
	char __padding[0x18L];
	ID3D11Buffer * BufferField() { return GetNativePointerField<ID3D11Buffer *>(this, "FRingAllocation.Buffer"); }
	void * DataPtrField() { return GetNativePointerField<void *>(this, "FRingAllocation.DataPtr"); }
	unsigned int& OffsetField() { return *GetNativePointerField<unsigned int*>(this, "FRingAllocation.Offset"); }
	unsigned int& SizeField() { return *GetNativePointerField<unsigned int*>(this, "FRingAllocation.Size"); }
};

