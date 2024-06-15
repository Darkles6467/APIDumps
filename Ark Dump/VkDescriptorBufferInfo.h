#pragma once

#include "BaseDeclarations.h"
struct VkDescriptorBufferInfo
{
	char __padding[0x18L];
	struct VkBuffer_T * bufferField() { return GetNativePointerField<struct VkBuffer_T *>(this, "VkDescriptorBufferInfo.buffer"); }
	unsigned __int64& offsetField() { return *GetNativePointerField<unsigned __int64*>(this, "VkDescriptorBufferInfo.offset"); }
	unsigned __int64& rangeField() { return *GetNativePointerField<unsigned __int64*>(this, "VkDescriptorBufferInfo.range"); }
};

