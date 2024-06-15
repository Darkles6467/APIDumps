#pragma once

#include "BaseDeclarations.h"
struct VkBufferCreateInfo
{
	char __padding[0x38L];
	VkStructureType& sTypeField() { return *GetNativePointerField<VkStructureType*>(this, "VkBufferCreateInfo.sType"); }
	const void * pNextField() { return GetNativePointerField<const void *>(this, "VkBufferCreateInfo.pNext"); }
	unsigned int& flagsField() { return *GetNativePointerField<unsigned int*>(this, "VkBufferCreateInfo.flags"); }
	unsigned __int64& sizeField() { return *GetNativePointerField<unsigned __int64*>(this, "VkBufferCreateInfo.size"); }
	unsigned int& usageField() { return *GetNativePointerField<unsigned int*>(this, "VkBufferCreateInfo.usage"); }
	VkSharingMode& sharingModeField() { return *GetNativePointerField<VkSharingMode*>(this, "VkBufferCreateInfo.sharingMode"); }
	unsigned int& queueFamilyIndexCountField() { return *GetNativePointerField<unsigned int*>(this, "VkBufferCreateInfo.queueFamilyIndexCount"); }
	const unsigned int * pQueueFamilyIndicesField() { return GetNativePointerField<const unsigned int *>(this, "VkBufferCreateInfo.pQueueFamilyIndices"); }
};

