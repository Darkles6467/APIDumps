#pragma once

#include "BaseDeclarations.h"
struct VkDisplayPlaneCapabilitiesKHR
{
	char __padding[0x44L];
	unsigned int& supportedAlphaField() { return *GetNativePointerField<unsigned int*>(this, "VkDisplayPlaneCapabilitiesKHR.supportedAlpha"); }
	VkOffset2D& minSrcPositionField() { return *GetNativePointerField<VkOffset2D*>(this, "VkDisplayPlaneCapabilitiesKHR.minSrcPosition"); }
	VkOffset2D& maxSrcPositionField() { return *GetNativePointerField<VkOffset2D*>(this, "VkDisplayPlaneCapabilitiesKHR.maxSrcPosition"); }
	VkExtent2D& minSrcExtentField() { return *GetNativePointerField<VkExtent2D*>(this, "VkDisplayPlaneCapabilitiesKHR.minSrcExtent"); }
	VkExtent2D& maxSrcExtentField() { return *GetNativePointerField<VkExtent2D*>(this, "VkDisplayPlaneCapabilitiesKHR.maxSrcExtent"); }
	VkOffset2D& minDstPositionField() { return *GetNativePointerField<VkOffset2D*>(this, "VkDisplayPlaneCapabilitiesKHR.minDstPosition"); }
	VkOffset2D& maxDstPositionField() { return *GetNativePointerField<VkOffset2D*>(this, "VkDisplayPlaneCapabilitiesKHR.maxDstPosition"); }
	VkExtent2D& minDstExtentField() { return *GetNativePointerField<VkExtent2D*>(this, "VkDisplayPlaneCapabilitiesKHR.minDstExtent"); }
	VkExtent2D& maxDstExtentField() { return *GetNativePointerField<VkExtent2D*>(this, "VkDisplayPlaneCapabilitiesKHR.maxDstExtent"); }
};

