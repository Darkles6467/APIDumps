#pragma once

#include "BaseDeclarations.h"
struct VkOffset3D
{
	char __padding[0xcL];
	int& xField() { return *GetNativePointerField<int*>(this, "VkOffset3D.x"); }
	int& yField() { return *GetNativePointerField<int*>(this, "VkOffset3D.y"); }
	int& zField() { return *GetNativePointerField<int*>(this, "VkOffset3D.z"); }
};

