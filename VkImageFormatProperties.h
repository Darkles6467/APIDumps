#pragma once

#include "BaseDeclarations.h"
struct VkImageFormatProperties
{
	char __padding[0x20L];
	VkExtent3D& maxExtentField() { return *GetNativePointerField<VkExtent3D*>(this, "VkImageFormatProperties.maxExtent"); }
	unsigned int& maxMipLevelsField() { return *GetNativePointerField<unsigned int*>(this, "VkImageFormatProperties.maxMipLevels"); }
	unsigned int& maxArrayLayersField() { return *GetNativePointerField<unsigned int*>(this, "VkImageFormatProperties.maxArrayLayers"); }
	unsigned int& sampleCountsField() { return *GetNativePointerField<unsigned int*>(this, "VkImageFormatProperties.sampleCounts"); }
	unsigned __int64& maxResourceSizeField() { return *GetNativePointerField<unsigned __int64*>(this, "VkImageFormatProperties.maxResourceSize"); }
};

