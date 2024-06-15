#pragma once

#include "BaseDeclarations.h"
struct VkSparseMemoryBind
{
	char __padding[0x28L];
	unsigned __int64& resourceOffsetField() { return *GetNativePointerField<unsigned __int64*>(this, "VkSparseMemoryBind.resourceOffset"); }
	unsigned __int64& sizeField() { return *GetNativePointerField<unsigned __int64*>(this, "VkSparseMemoryBind.size"); }
	struct VkDeviceMemory_T * memoryField() { return GetNativePointerField<struct VkDeviceMemory_T *>(this, "VkSparseMemoryBind.memory"); }
	unsigned __int64& memoryOffsetField() { return *GetNativePointerField<unsigned __int64*>(this, "VkSparseMemoryBind.memoryOffset"); }
	unsigned int& flagsField() { return *GetNativePointerField<unsigned int*>(this, "VkSparseMemoryBind.flags"); }
};

