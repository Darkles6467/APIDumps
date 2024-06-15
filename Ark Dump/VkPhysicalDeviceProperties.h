#pragma once

#include "BaseDeclarations.h"
struct VkPhysicalDeviceProperties
{
	char __padding[0x338L];
	unsigned int& apiVersionField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceProperties.apiVersion"); }
	unsigned int& driverVersionField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceProperties.driverVersion"); }
	unsigned int& vendorIDField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceProperties.vendorID"); }
	unsigned int& deviceIDField() { return *GetNativePointerField<unsigned int*>(this, "VkPhysicalDeviceProperties.deviceID"); }
	VkPhysicalDeviceType& deviceTypeField() { return *GetNativePointerField<VkPhysicalDeviceType*>(this, "VkPhysicalDeviceProperties.deviceType"); }
	FieldArray<char, 256> deviceNameField() { return {this, "VkPhysicalDeviceProperties.deviceName"}; }
	FieldArray<char, 16> pipelineCacheUUIDField() { return {this, "VkPhysicalDeviceProperties.pipelineCacheUUID"}; }
	VkPhysicalDeviceLimits& limitsField() { return *GetNativePointerField<VkPhysicalDeviceLimits*>(this, "VkPhysicalDeviceProperties.limits"); }
	VkPhysicalDeviceSparseProperties& sparsePropertiesField() { return *GetNativePointerField<VkPhysicalDeviceSparseProperties*>(this, "VkPhysicalDeviceProperties.sparseProperties"); }
};

