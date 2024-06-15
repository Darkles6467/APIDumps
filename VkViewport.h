#pragma once

#include "BaseDeclarations.h"
struct VkViewport
{
	char __padding[0x18L];
	float& xField() { return *GetNativePointerField<float*>(this, "VkViewport.x"); }
	float& yField() { return *GetNativePointerField<float*>(this, "VkViewport.y"); }
	float& widthField() { return *GetNativePointerField<float*>(this, "VkViewport.width"); }
	float& heightField() { return *GetNativePointerField<float*>(this, "VkViewport.height"); }
	float& minDepthField() { return *GetNativePointerField<float*>(this, "VkViewport.minDepth"); }
	float& maxDepthField() { return *GetNativePointerField<float*>(this, "VkViewport.maxDepth"); }
};

