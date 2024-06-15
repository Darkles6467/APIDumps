#pragma once

#include "BaseDeclarations.h"
struct VkInstanceCreateInfo
{
	char __padding[0x40L];
	VkStructureType& sTypeField() { return *GetNativePointerField<VkStructureType*>(this, "VkInstanceCreateInfo.sType"); }
	const void * pNextField() { return GetNativePointerField<const void *>(this, "VkInstanceCreateInfo.pNext"); }
	unsigned int& flagsField() { return *GetNativePointerField<unsigned int*>(this, "VkInstanceCreateInfo.flags"); }
	const VkApplicationInfo * pApplicationInfoField() { return GetNativePointerField<const VkApplicationInfo *>(this, "VkInstanceCreateInfo.pApplicationInfo"); }
	unsigned int& enabledLayerCountField() { return *GetNativePointerField<unsigned int*>(this, "VkInstanceCreateInfo.enabledLayerCount"); }
	const char *const * ppEnabledLayerNamesField() { return GetNativePointerField<const char *const *>(this, "VkInstanceCreateInfo.ppEnabledLayerNames"); }
	unsigned int& enabledExtensionCountField() { return *GetNativePointerField<unsigned int*>(this, "VkInstanceCreateInfo.enabledExtensionCount"); }
	const char *const * ppEnabledExtensionNamesField() { return GetNativePointerField<const char *const *>(this, "VkInstanceCreateInfo.ppEnabledExtensionNames"); }
};

