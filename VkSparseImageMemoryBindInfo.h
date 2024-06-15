#pragma once

#include "BaseDeclarations.h"
struct VkSparseImageMemoryBindInfo
{
	char __padding[0x18L];
	struct VkImage_T * imageField() { return GetNativePointerField<struct VkImage_T *>(this, "VkSparseImageMemoryBindInfo.image"); }
	unsigned int& bindCountField() { return *GetNativePointerField<unsigned int*>(this, "VkSparseImageMemoryBindInfo.bindCount"); }
	const VkSparseImageMemoryBind * pBindsField() { return GetNativePointerField<const VkSparseImageMemoryBind *>(this, "VkSparseImageMemoryBindInfo.pBinds"); }
};

