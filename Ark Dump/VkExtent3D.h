#pragma once

#include "BaseDeclarations.h"
struct VkExtent3D
{
	char __padding[0xcL];
	unsigned int& widthField() { return *GetNativePointerField<unsigned int*>(this, "VkExtent3D.width"); }
	unsigned int& heightField() { return *GetNativePointerField<unsigned int*>(this, "VkExtent3D.height"); }
	unsigned int& depthField() { return *GetNativePointerField<unsigned int*>(this, "VkExtent3D.depth"); }
};

