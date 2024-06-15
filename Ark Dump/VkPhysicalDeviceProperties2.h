#pragma once

#include "BaseDeclarations.h"
struct VkPhysicalDeviceProperties2
{
	char __padding[0x348L];
	VkStructureType& sTypeField() { return *GetNativePointerField<VkStructureType*>(this, "VkPhysicalDeviceProperties2.sType"); }
	void * pNextField() { return GetNativePointerField<void *>(this, "VkPhysicalDeviceProperties2.pNext"); }
	VkPhysicalDeviceProperties& propertiesField() { return *GetNativePointerField<VkPhysicalDeviceProperties*>(this, "VkPhysicalDeviceProperties2.properties"); }
};

