#pragma once

#include "BaseDeclarations.h"
struct VkDeviceQueueCreateInfo
{
	char __padding[0x28L];
	VkStructureType& sTypeField() { return *GetNativePointerField<VkStructureType*>(this, "VkDeviceQueueCreateInfo.sType"); }
	const void * pNextField() { return GetNativePointerField<const void *>(this, "VkDeviceQueueCreateInfo.pNext"); }
	unsigned int& flagsField() { return *GetNativePointerField<unsigned int*>(this, "VkDeviceQueueCreateInfo.flags"); }
	unsigned int& queueFamilyIndexField() { return *GetNativePointerField<unsigned int*>(this, "VkDeviceQueueCreateInfo.queueFamilyIndex"); }
	unsigned int& queueCountField() { return *GetNativePointerField<unsigned int*>(this, "VkDeviceQueueCreateInfo.queueCount"); }
	const float * pQueuePrioritiesField() { return GetNativePointerField<const float *>(this, "VkDeviceQueueCreateInfo.pQueuePriorities"); }
};

