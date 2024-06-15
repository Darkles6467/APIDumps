#pragma once

#include "BaseDeclarations.h"
struct PoolAllocation
{
	char __padding[0x18L];
	char * PointerField() { return GetNativePointerField<char *>(this, "PoolAllocation.Pointer"); }
	unsigned int& SizeField() { return *GetNativePointerField<unsigned int*>(this, "PoolAllocation.Size"); }
	unsigned int& OffsetField() { return *GetNativePointerField<unsigned int*>(this, "PoolAllocation.Offset"); }
	int& FrameRetiredField() { return *GetNativePointerField<int*>(this, "PoolAllocation.FrameRetired"); }
};

