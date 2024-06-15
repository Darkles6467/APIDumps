#pragma once

#include "BaseDeclarations.h"
struct VkFenceCreateInfo
{
	char __padding[0x18L];
	VkStructureType& sTypeField() { return *GetNativePointerField<VkStructureType*>(this, "VkFenceCreateInfo.sType"); }
	const void * pNextField() { return GetNativePointerField<const void *>(this, "VkFenceCreateInfo.pNext"); }
	unsigned int& flagsField() { return *GetNativePointerField<unsigned int*>(this, "VkFenceCreateInfo.flags"); }
};

