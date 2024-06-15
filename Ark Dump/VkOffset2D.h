#pragma once

#include "BaseDeclarations.h"
struct VkOffset2D
{
	char __padding[0x8L];
	int& xField() { return *GetNativePointerField<int*>(this, "VkOffset2D.x"); }
	int& yField() { return *GetNativePointerField<int*>(this, "VkOffset2D.y"); }
};

