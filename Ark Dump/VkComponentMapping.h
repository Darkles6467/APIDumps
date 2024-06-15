#pragma once

#include "BaseDeclarations.h"
struct VkComponentMapping
{
	char __padding[0x10L];
	VkComponentSwizzle& rField() { return *GetNativePointerField<VkComponentSwizzle*>(this, "VkComponentMapping.r"); }
	VkComponentSwizzle& gField() { return *GetNativePointerField<VkComponentSwizzle*>(this, "VkComponentMapping.g"); }
	VkComponentSwizzle& bField() { return *GetNativePointerField<VkComponentSwizzle*>(this, "VkComponentMapping.b"); }
	VkComponentSwizzle& aField() { return *GetNativePointerField<VkComponentSwizzle*>(this, "VkComponentMapping.a"); }
};

