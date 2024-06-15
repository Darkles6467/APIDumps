#pragma once

#include "BaseDeclarations.h"
struct VkStencilOpState
{
	char __padding[0x1cL];
	VkStencilOp& failOpField() { return *GetNativePointerField<VkStencilOp*>(this, "VkStencilOpState.failOp"); }
	VkStencilOp& passOpField() { return *GetNativePointerField<VkStencilOp*>(this, "VkStencilOpState.passOp"); }
	VkStencilOp& depthFailOpField() { return *GetNativePointerField<VkStencilOp*>(this, "VkStencilOpState.depthFailOp"); }
	VkCompareOp& compareOpField() { return *GetNativePointerField<VkCompareOp*>(this, "VkStencilOpState.compareOp"); }
	unsigned int& compareMaskField() { return *GetNativePointerField<unsigned int*>(this, "VkStencilOpState.compareMask"); }
	unsigned int& writeMaskField() { return *GetNativePointerField<unsigned int*>(this, "VkStencilOpState.writeMask"); }
	unsigned int& referenceField() { return *GetNativePointerField<unsigned int*>(this, "VkStencilOpState.reference"); }
};

