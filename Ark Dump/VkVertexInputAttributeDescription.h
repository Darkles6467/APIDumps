#pragma once

#include "BaseDeclarations.h"
struct VkVertexInputAttributeDescription
{
	char __padding[0x10L];
	unsigned int& locationField() { return *GetNativePointerField<unsigned int*>(this, "VkVertexInputAttributeDescription.location"); }
	unsigned int& bindingField() { return *GetNativePointerField<unsigned int*>(this, "VkVertexInputAttributeDescription.binding"); }
	VkFormat& formatField() { return *GetNativePointerField<VkFormat*>(this, "VkVertexInputAttributeDescription.format"); }
	unsigned int& offsetField() { return *GetNativePointerField<unsigned int*>(this, "VkVertexInputAttributeDescription.offset"); }
};

