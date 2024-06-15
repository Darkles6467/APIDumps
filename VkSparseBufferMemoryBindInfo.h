#pragma once

#include "BaseDeclarations.h"
struct VkSparseBufferMemoryBindInfo
{
	char __padding[0x18L];
	struct VkBuffer_T * bufferField() { return GetNativePointerField<struct VkBuffer_T *>(this, "VkSparseBufferMemoryBindInfo.buffer"); }
	unsigned int& bindCountField() { return *GetNativePointerField<unsigned int*>(this, "VkSparseBufferMemoryBindInfo.bindCount"); }
	const VkSparseMemoryBind * pBindsField() { return GetNativePointerField<const VkSparseMemoryBind *>(this, "VkSparseBufferMemoryBindInfo.pBinds"); }
};

