#pragma once

#include "BaseDeclarations.h"
struct VkEventCreateInfo
{
	char __padding[0x18L];
	VkStructureType& sTypeField() { return *GetNativePointerField<VkStructureType*>(this, "VkEventCreateInfo.sType"); }
	const void * pNextField() { return GetNativePointerField<const void *>(this, "VkEventCreateInfo.pNext"); }
	unsigned int& flagsField() { return *GetNativePointerField<unsigned int*>(this, "VkEventCreateInfo.flags"); }
};

