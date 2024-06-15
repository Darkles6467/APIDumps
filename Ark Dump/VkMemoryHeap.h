#pragma once

#include "BaseDeclarations.h"
struct VkMemoryHeap
{
	char __padding[0x10L];
	unsigned __int64& sizeField() { return *GetNativePointerField<unsigned __int64*>(this, "VkMemoryHeap.size"); }
	unsigned int& flagsField() { return *GetNativePointerField<unsigned int*>(this, "VkMemoryHeap.flags"); }
};

