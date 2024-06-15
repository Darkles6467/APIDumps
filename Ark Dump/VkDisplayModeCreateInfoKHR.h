#pragma once

#include "BaseDeclarations.h"
struct VkDisplayModeCreateInfoKHR
{
	char __padding[0x20L];
	VkStructureType& sTypeField() { return *GetNativePointerField<VkStructureType*>(this, "VkDisplayModeCreateInfoKHR.sType"); }
	const void * pNextField() { return GetNativePointerField<const void *>(this, "VkDisplayModeCreateInfoKHR.pNext"); }
	unsigned int& flagsField() { return *GetNativePointerField<unsigned int*>(this, "VkDisplayModeCreateInfoKHR.flags"); }
	VkDisplayModeParametersKHR& parametersField() { return *GetNativePointerField<VkDisplayModeParametersKHR*>(this, "VkDisplayModeCreateInfoKHR.parameters"); }
};

