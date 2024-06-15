#pragma once

#include "BaseDeclarations.h"
struct VkBufferViewCreateInfo
{
	char __padding[0x38L];
	VkStructureType& sTypeField() { return *GetNativePointerField<VkStructureType*>(this, "VkBufferViewCreateInfo.sType"); }
	const void * pNextField() { return GetNativePointerField<const void *>(this, "VkBufferViewCreateInfo.pNext"); }
	unsigned int& flagsField() { return *GetNativePointerField<unsigned int*>(this, "VkBufferViewCreateInfo.flags"); }
	struct VkBuffer_T * bufferField() { return GetNativePointerField<struct VkBuffer_T *>(this, "VkBufferViewCreateInfo.buffer"); }
	VkFormat& formatField() { return *GetNativePointerField<VkFormat*>(this, "VkBufferViewCreateInfo.format"); }
	unsigned __int64& offsetField() { return *GetNativePointerField<unsigned __int64*>(this, "VkBufferViewCreateInfo.offset"); }
	unsigned __int64& rangeField() { return *GetNativePointerField<unsigned __int64*>(this, "VkBufferViewCreateInfo.range"); }
};

