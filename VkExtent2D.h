#pragma once

#include "BaseDeclarations.h"
struct VkExtent2D
{
	char __padding[0x8L];
	unsigned int& widthField() { return *GetNativePointerField<unsigned int*>(this, "VkExtent2D.width"); }
	unsigned int& heightField() { return *GetNativePointerField<unsigned int*>(this, "VkExtent2D.height"); }
};

