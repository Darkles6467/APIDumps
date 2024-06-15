#pragma once

#include "BaseDeclarations.h"
struct FVulkanRenderPass
{
	char __padding[0x370L];
	FVulkanRenderTargetLayout& LayoutField() { return *GetNativePointerField<FVulkanRenderTargetLayout*>(this, "FVulkanRenderPass.Layout"); }
	struct VkRenderPass_T * RenderPassField() { return GetNativePointerField<struct VkRenderPass_T *>(this, "FVulkanRenderPass.RenderPass"); }
	unsigned int& NumUsedClearValuesField() { return *GetNativePointerField<unsigned int*>(this, "FVulkanRenderPass.NumUsedClearValues"); }
	FVulkanDevice * DeviceField() { return GetNativePointerField<FVulkanDevice *>(this, "FVulkanRenderPass.Device"); }

	// Functions

};

