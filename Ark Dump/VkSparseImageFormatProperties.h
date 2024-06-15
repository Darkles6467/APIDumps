#pragma once

#include "BaseDeclarations.h"
struct VkSparseImageFormatProperties
{
	char __padding[0x14L];
	unsigned int& aspectMaskField() { return *GetNativePointerField<unsigned int*>(this, "VkSparseImageFormatProperties.aspectMask"); }
	VkExtent3D& imageGranularityField() { return *GetNativePointerField<VkExtent3D*>(this, "VkSparseImageFormatProperties.imageGranularity"); }
	unsigned int& flagsField() { return *GetNativePointerField<unsigned int*>(this, "VkSparseImageFormatProperties.flags"); }
};

