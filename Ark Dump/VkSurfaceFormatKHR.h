#pragma once

#include "BaseDeclarations.h"
struct VkSurfaceFormatKHR
{
	char __padding[0x8L];
	VkFormat& formatField() { return *GetNativePointerField<VkFormat*>(this, "VkSurfaceFormatKHR.format"); }
	VkColorSpaceKHR& colorSpaceField() { return *GetNativePointerField<VkColorSpaceKHR*>(this, "VkSurfaceFormatKHR.colorSpace"); }
};

