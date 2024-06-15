#pragma once

#include "BaseDeclarations.h"
struct VkDescriptorPoolSize
{
	char __padding[0x8L];
	VkDescriptorType& typeField() { return *GetNativePointerField<VkDescriptorType*>(this, "VkDescriptorPoolSize.type"); }
	unsigned int& descriptorCountField() { return *GetNativePointerField<unsigned int*>(this, "VkDescriptorPoolSize.descriptorCount"); }
};

