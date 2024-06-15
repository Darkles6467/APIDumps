#pragma once

#include "BaseDeclarations.h"
struct VkMemoryBarrier
{
	char __padding[0x18L];
	VkStructureType& sTypeField() { return *GetNativePointerField<VkStructureType*>(this, "VkMemoryBarrier.sType"); }
	const void * pNextField() { return GetNativePointerField<const void *>(this, "VkMemoryBarrier.pNext"); }
	unsigned int& srcAccessMaskField() { return *GetNativePointerField<unsigned int*>(this, "VkMemoryBarrier.srcAccessMask"); }
	unsigned int& dstAccessMaskField() { return *GetNativePointerField<unsigned int*>(this, "VkMemoryBarrier.dstAccessMask"); }
};

