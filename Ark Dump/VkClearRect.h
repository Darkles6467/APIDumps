#pragma once

#include "BaseDeclarations.h"
struct VkClearRect
{
	char __padding[0x18L];
	VkRect2D& rectField() { return *GetNativePointerField<VkRect2D*>(this, "VkClearRect.rect"); }
	unsigned int& baseArrayLayerField() { return *GetNativePointerField<unsigned int*>(this, "VkClearRect.baseArrayLayer"); }
	unsigned int& layerCountField() { return *GetNativePointerField<unsigned int*>(this, "VkClearRect.layerCount"); }
};

