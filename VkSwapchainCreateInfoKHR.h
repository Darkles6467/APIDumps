#pragma once

#include "BaseDeclarations.h"
struct VkSwapchainCreateInfoKHR
{
	char __padding[0x68L];
	VkStructureType& sTypeField() { return *GetNativePointerField<VkStructureType*>(this, "VkSwapchainCreateInfoKHR.sType"); }
	const void * pNextField() { return GetNativePointerField<const void *>(this, "VkSwapchainCreateInfoKHR.pNext"); }
	unsigned int& flagsField() { return *GetNativePointerField<unsigned int*>(this, "VkSwapchainCreateInfoKHR.flags"); }
	struct VkSurfaceKHR_T * surfaceField() { return GetNativePointerField<struct VkSurfaceKHR_T *>(this, "VkSwapchainCreateInfoKHR.surface"); }
	unsigned int& minImageCountField() { return *GetNativePointerField<unsigned int*>(this, "VkSwapchainCreateInfoKHR.minImageCount"); }
	VkFormat& imageFormatField() { return *GetNativePointerField<VkFormat*>(this, "VkSwapchainCreateInfoKHR.imageFormat"); }
	VkColorSpaceKHR& imageColorSpaceField() { return *GetNativePointerField<VkColorSpaceKHR*>(this, "VkSwapchainCreateInfoKHR.imageColorSpace"); }
	VkExtent2D& imageExtentField() { return *GetNativePointerField<VkExtent2D*>(this, "VkSwapchainCreateInfoKHR.imageExtent"); }
	unsigned int& imageArrayLayersField() { return *GetNativePointerField<unsigned int*>(this, "VkSwapchainCreateInfoKHR.imageArrayLayers"); }
	unsigned int& imageUsageField() { return *GetNativePointerField<unsigned int*>(this, "VkSwapchainCreateInfoKHR.imageUsage"); }
	VkSharingMode& imageSharingModeField() { return *GetNativePointerField<VkSharingMode*>(this, "VkSwapchainCreateInfoKHR.imageSharingMode"); }
	unsigned int& queueFamilyIndexCountField() { return *GetNativePointerField<unsigned int*>(this, "VkSwapchainCreateInfoKHR.queueFamilyIndexCount"); }
	const unsigned int * pQueueFamilyIndicesField() { return GetNativePointerField<const unsigned int *>(this, "VkSwapchainCreateInfoKHR.pQueueFamilyIndices"); }
	VkSurfaceTransformFlagBitsKHR& preTransformField() { return *GetNativePointerField<VkSurfaceTransformFlagBitsKHR*>(this, "VkSwapchainCreateInfoKHR.preTransform"); }
	VkCompositeAlphaFlagBitsKHR& compositeAlphaField() { return *GetNativePointerField<VkCompositeAlphaFlagBitsKHR*>(this, "VkSwapchainCreateInfoKHR.compositeAlpha"); }
	VkPresentModeKHR& presentModeField() { return *GetNativePointerField<VkPresentModeKHR*>(this, "VkSwapchainCreateInfoKHR.presentMode"); }
	unsigned int& clippedField() { return *GetNativePointerField<unsigned int*>(this, "VkSwapchainCreateInfoKHR.clipped"); }
	struct VkSwapchainKHR_T * oldSwapchainField() { return GetNativePointerField<struct VkSwapchainKHR_T *>(this, "VkSwapchainCreateInfoKHR.oldSwapchain"); }
};

