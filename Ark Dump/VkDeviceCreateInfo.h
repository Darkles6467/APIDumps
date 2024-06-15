#pragma once

#include "BaseDeclarations.h"
struct VkDeviceCreateInfo
{
	char __padding[0x48L];
	VkStructureType& sTypeField() { return *GetNativePointerField<VkStructureType*>(this, "VkDeviceCreateInfo.sType"); }
	const void * pNextField() { return GetNativePointerField<const void *>(this, "VkDeviceCreateInfo.pNext"); }
	unsigned int& flagsField() { return *GetNativePointerField<unsigned int*>(this, "VkDeviceCreateInfo.flags"); }
	unsigned int& queueCreateInfoCountField() { return *GetNativePointerField<unsigned int*>(this, "VkDeviceCreateInfo.queueCreateInfoCount"); }
	const VkDeviceQueueCreateInfo * pQueueCreateInfosField() { return GetNativePointerField<const VkDeviceQueueCreateInfo *>(this, "VkDeviceCreateInfo.pQueueCreateInfos"); }
	unsigned int& enabledLayerCountField() { return *GetNativePointerField<unsigned int*>(this, "VkDeviceCreateInfo.enabledLayerCount"); }
	const char *const * ppEnabledLayerNamesField() { return GetNativePointerField<const char *const *>(this, "VkDeviceCreateInfo.ppEnabledLayerNames"); }
	unsigned int& enabledExtensionCountField() { return *GetNativePointerField<unsigned int*>(this, "VkDeviceCreateInfo.enabledExtensionCount"); }
	const char *const * ppEnabledExtensionNamesField() { return GetNativePointerField<const char *const *>(this, "VkDeviceCreateInfo.ppEnabledExtensionNames"); }
	const VkPhysicalDeviceFeatures * pEnabledFeaturesField() { return GetNativePointerField<const VkPhysicalDeviceFeatures *>(this, "VkDeviceCreateInfo.pEnabledFeatures"); }
};

