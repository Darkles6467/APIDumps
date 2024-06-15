#pragma once

#include "BaseDeclarations.h"
struct VkQueueFamilyProperties
{
	char __padding[0x18L];
	unsigned int& queueFlagsField() { return *GetNativePointerField<unsigned int*>(this, "VkQueueFamilyProperties.queueFlags"); }
	unsigned int& queueCountField() { return *GetNativePointerField<unsigned int*>(this, "VkQueueFamilyProperties.queueCount"); }
	unsigned int& timestampValidBitsField() { return *GetNativePointerField<unsigned int*>(this, "VkQueueFamilyProperties.timestampValidBits"); }
	VkExtent3D& minImageTransferGranularityField() { return *GetNativePointerField<VkExtent3D*>(this, "VkQueueFamilyProperties.minImageTransferGranularity"); }
};

