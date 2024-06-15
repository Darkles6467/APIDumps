#pragma once

#include "BaseDeclarations.h"
struct VkBufferMemoryBarrier
{
	char __padding[0x38L];
	VkStructureType& sTypeField() { return *GetNativePointerField<VkStructureType*>(this, "VkBufferMemoryBarrier.sType"); }
	const void * pNextField() { return GetNativePointerField<const void *>(this, "VkBufferMemoryBarrier.pNext"); }
	unsigned int& srcAccessMaskField() { return *GetNativePointerField<unsigned int*>(this, "VkBufferMemoryBarrier.srcAccessMask"); }
	unsigned int& dstAccessMaskField() { return *GetNativePointerField<unsigned int*>(this, "VkBufferMemoryBarrier.dstAccessMask"); }
	unsigned int& srcQueueFamilyIndexField() { return *GetNativePointerField<unsigned int*>(this, "VkBufferMemoryBarrier.srcQueueFamilyIndex"); }
	unsigned int& dstQueueFamilyIndexField() { return *GetNativePointerField<unsigned int*>(this, "VkBufferMemoryBarrier.dstQueueFamilyIndex"); }
	struct VkBuffer_T * bufferField() { return GetNativePointerField<struct VkBuffer_T *>(this, "VkBufferMemoryBarrier.buffer"); }
	unsigned __int64& offsetField() { return *GetNativePointerField<unsigned __int64*>(this, "VkBufferMemoryBarrier.offset"); }
	unsigned __int64& sizeField() { return *GetNativePointerField<unsigned __int64*>(this, "VkBufferMemoryBarrier.size"); }
};

