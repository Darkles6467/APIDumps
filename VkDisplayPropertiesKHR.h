#pragma once

#include "BaseDeclarations.h"
struct VkDisplayPropertiesKHR
{
	char __padding[0x30L];
	struct VkDisplayKHR_T * displayField() { return GetNativePointerField<struct VkDisplayKHR_T *>(this, "VkDisplayPropertiesKHR.display"); }
	const char * displayNameField() { return GetNativePointerField<const char *>(this, "VkDisplayPropertiesKHR.displayName"); }
	VkExtent2D& physicalDimensionsField() { return *GetNativePointerField<VkExtent2D*>(this, "VkDisplayPropertiesKHR.physicalDimensions"); }
	VkExtent2D& physicalResolutionField() { return *GetNativePointerField<VkExtent2D*>(this, "VkDisplayPropertiesKHR.physicalResolution"); }
	unsigned int& supportedTransformsField() { return *GetNativePointerField<unsigned int*>(this, "VkDisplayPropertiesKHR.supportedTransforms"); }
	unsigned int& planeReorderPossibleField() { return *GetNativePointerField<unsigned int*>(this, "VkDisplayPropertiesKHR.planeReorderPossible"); }
	unsigned int& persistentContentField() { return *GetNativePointerField<unsigned int*>(this, "VkDisplayPropertiesKHR.persistentContent"); }
};

