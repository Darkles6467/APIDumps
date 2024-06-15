#pragma once

#include "BaseDeclarations.h"
struct VkSemaphoreCreateInfo
{
	char __padding[0x18L];
	VkStructureType& sTypeField() { return *GetNativePointerField<VkStructureType*>(this, "VkSemaphoreCreateInfo.sType"); }
	const void * pNextField() { return GetNativePointerField<const void *>(this, "VkSemaphoreCreateInfo.pNext"); }
	unsigned int& flagsField() { return *GetNativePointerField<unsigned int*>(this, "VkSemaphoreCreateInfo.flags"); }
};

