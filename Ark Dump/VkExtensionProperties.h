#pragma once

#include "BaseDeclarations.h"
struct VkExtensionProperties
{
	char __padding[0x104L];
	FieldArray<char, 256> extensionNameField() { return {this, "VkExtensionProperties.extensionName"}; }
	unsigned int& specVersionField() { return *GetNativePointerField<unsigned int*>(this, "VkExtensionProperties.specVersion"); }
};

