#pragma once

#include "BaseDeclarations.h"
struct VkSurfaceCapabilitiesKHR
{
	char __padding[0x34L];
	unsigned int& minImageCountField() { return *GetNativePointerField<unsigned int*>(this, "VkSurfaceCapabilitiesKHR.minImageCount"); }
	unsigned int& maxImageCountField() { return *GetNativePointerField<unsigned int*>(this, "VkSurfaceCapabilitiesKHR.maxImageCount"); }
	VkExtent2D& currentExtentField() { return *GetNativePointerField<VkExtent2D*>(this, "VkSurfaceCapabilitiesKHR.currentExtent"); }
	VkExtent2D& minImageExtentField() { return *GetNativePointerField<VkExtent2D*>(this, "VkSurfaceCapabilitiesKHR.minImageExtent"); }
	VkExtent2D& maxImageExtentField() { return *GetNativePointerField<VkExtent2D*>(this, "VkSurfaceCapabilitiesKHR.maxImageExtent"); }
	unsigned int& maxImageArrayLayersField() { return *GetNativePointerField<unsigned int*>(this, "VkSurfaceCapabilitiesKHR.maxImageArrayLayers"); }
	unsigned int& supportedTransformsField() { return *GetNativePointerField<unsigned int*>(this, "VkSurfaceCapabilitiesKHR.supportedTransforms"); }
	VkSurfaceTransformFlagBitsKHR& currentTransformField() { return *GetNativePointerField<VkSurfaceTransformFlagBitsKHR*>(this, "VkSurfaceCapabilitiesKHR.currentTransform"); }
	unsigned int& supportedCompositeAlphaField() { return *GetNativePointerField<unsigned int*>(this, "VkSurfaceCapabilitiesKHR.supportedCompositeAlpha"); }
	unsigned int& supportedUsageFlagsField() { return *GetNativePointerField<unsigned int*>(this, "VkSurfaceCapabilitiesKHR.supportedUsageFlags"); }
};

