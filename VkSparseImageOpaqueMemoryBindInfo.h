#pragma once

#include "BaseDeclarations.h"
struct VkSparseImageOpaqueMemoryBindInfo
{
	char __padding[0x18L];
	struct VkImage_T * imageField() { return GetNativePointerField<struct VkImage_T *>(this, "VkSparseImageOpaqueMemoryBindInfo.image"); }
	unsigned int& bindCountField() { return *GetNativePointerField<unsigned int*>(this, "VkSparseImageOpaqueMemoryBindInfo.bindCount"); }
	const VkSparseMemoryBind * pBindsField() { return GetNativePointerField<const VkSparseMemoryBind *>(this, "VkSparseImageOpaqueMemoryBindInfo.pBinds"); }
};

