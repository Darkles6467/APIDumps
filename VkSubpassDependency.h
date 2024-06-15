#pragma once

#include "BaseDeclarations.h"
struct VkSubpassDependency
{
	char __padding[0x1cL];
	unsigned int& srcSubpassField() { return *GetNativePointerField<unsigned int*>(this, "VkSubpassDependency.srcSubpass"); }
	unsigned int& dstSubpassField() { return *GetNativePointerField<unsigned int*>(this, "VkSubpassDependency.dstSubpass"); }
	unsigned int& srcStageMaskField() { return *GetNativePointerField<unsigned int*>(this, "VkSubpassDependency.srcStageMask"); }
	unsigned int& dstStageMaskField() { return *GetNativePointerField<unsigned int*>(this, "VkSubpassDependency.dstStageMask"); }
	unsigned int& srcAccessMaskField() { return *GetNativePointerField<unsigned int*>(this, "VkSubpassDependency.srcAccessMask"); }
	unsigned int& dstAccessMaskField() { return *GetNativePointerField<unsigned int*>(this, "VkSubpassDependency.dstAccessMask"); }
	unsigned int& dependencyFlagsField() { return *GetNativePointerField<unsigned int*>(this, "VkSubpassDependency.dependencyFlags"); }
};

