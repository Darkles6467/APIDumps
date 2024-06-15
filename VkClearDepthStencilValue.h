#pragma once

#include "BaseDeclarations.h"
struct VkClearDepthStencilValue
{
	char __padding[0x8L];
	float& depthField() { return *GetNativePointerField<float*>(this, "VkClearDepthStencilValue.depth"); }
	unsigned int& stencilField() { return *GetNativePointerField<unsigned int*>(this, "VkClearDepthStencilValue.stencil"); }
};

