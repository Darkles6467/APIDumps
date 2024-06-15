#pragma once

#include "BaseDeclarations.h"
struct VkCommandPoolCreateInfo
{
	char __padding[0x18L];
	VkStructureType& sTypeField() { return *GetNativePointerField<VkStructureType*>(this, "VkCommandPoolCreateInfo.sType"); }
	const void * pNextField() { return GetNativePointerField<const void *>(this, "VkCommandPoolCreateInfo.pNext"); }
	unsigned int& flagsField() { return *GetNativePointerField<unsigned int*>(this, "VkCommandPoolCreateInfo.flags"); }
	unsigned int& queueFamilyIndexField() { return *GetNativePointerField<unsigned int*>(this, "VkCommandPoolCreateInfo.queueFamilyIndex"); }
};

