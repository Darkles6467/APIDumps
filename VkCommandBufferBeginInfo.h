#pragma once

#include "BaseDeclarations.h"
struct VkCommandBufferBeginInfo
{
	char __padding[0x20L];
	VkStructureType& sTypeField() { return *GetNativePointerField<VkStructureType*>(this, "VkCommandBufferBeginInfo.sType"); }
	const void * pNextField() { return GetNativePointerField<const void *>(this, "VkCommandBufferBeginInfo.pNext"); }
	unsigned int& flagsField() { return *GetNativePointerField<unsigned int*>(this, "VkCommandBufferBeginInfo.flags"); }
	const VkCommandBufferInheritanceInfo * pInheritanceInfoField() { return GetNativePointerField<const VkCommandBufferInheritanceInfo *>(this, "VkCommandBufferBeginInfo.pInheritanceInfo"); }
};

