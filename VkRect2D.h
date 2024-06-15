#pragma once

#include "BaseDeclarations.h"
struct VkRect2D
{
	char __padding[0x10L];
	VkOffset2D& offsetField() { return *GetNativePointerField<VkOffset2D*>(this, "VkRect2D.offset"); }
	VkExtent2D& extentField() { return *GetNativePointerField<VkExtent2D*>(this, "VkRect2D.extent"); }
};

