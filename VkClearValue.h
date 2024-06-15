#pragma once

#include "BaseDeclarations.h"
struct VkClearValue
{
	char __padding[0x10L];
	VkClearColorValue& colorField() { return *GetNativePointerField<VkClearColorValue*>(this, "VkClearValue.color"); }
	VkClearDepthStencilValue& depthStencilField() { return *GetNativePointerField<VkClearDepthStencilValue*>(this, "VkClearValue.depthStencil"); }
};

