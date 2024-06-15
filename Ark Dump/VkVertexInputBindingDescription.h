#pragma once

#include "BaseDeclarations.h"
struct VkVertexInputBindingDescription
{
	char __padding[0xcL];
	unsigned int& bindingField() { return *GetNativePointerField<unsigned int*>(this, "VkVertexInputBindingDescription.binding"); }
	unsigned int& strideField() { return *GetNativePointerField<unsigned int*>(this, "VkVertexInputBindingDescription.stride"); }
	VkVertexInputRate& inputRateField() { return *GetNativePointerField<VkVertexInputRate*>(this, "VkVertexInputBindingDescription.inputRate"); }
};

