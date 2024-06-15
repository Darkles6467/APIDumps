#pragma once

#include "BaseDeclarations.h"
struct VkFormatProperties
{
	char __padding[0xcL];
	unsigned int& linearTilingFeaturesField() { return *GetNativePointerField<unsigned int*>(this, "VkFormatProperties.linearTilingFeatures"); }
	unsigned int& optimalTilingFeaturesField() { return *GetNativePointerField<unsigned int*>(this, "VkFormatProperties.optimalTilingFeatures"); }
	unsigned int& bufferFeaturesField() { return *GetNativePointerField<unsigned int*>(this, "VkFormatProperties.bufferFeatures"); }
};

