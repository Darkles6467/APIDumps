#pragma once

#include "BaseDeclarations.h"
struct VkLayerProperties
{
	char __padding[0x208L];
	FieldArray<char, 256> layerNameField() { return {this, "VkLayerProperties.layerName"}; }
	unsigned int& specVersionField() { return *GetNativePointerField<unsigned int*>(this, "VkLayerProperties.specVersion"); }
	unsigned int& implementationVersionField() { return *GetNativePointerField<unsigned int*>(this, "VkLayerProperties.implementationVersion"); }
	FieldArray<char, 256> descriptionField() { return {this, "VkLayerProperties.description"}; }
};

