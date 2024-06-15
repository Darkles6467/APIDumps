#pragma once

#include "BaseDeclarations.h"
struct VkDisplayPlanePropertiesKHR
{
	char __padding[0x10L];
	struct VkDisplayKHR_T * currentDisplayField() { return GetNativePointerField<struct VkDisplayKHR_T *>(this, "VkDisplayPlanePropertiesKHR.currentDisplay"); }
	unsigned int& currentStackIndexField() { return *GetNativePointerField<unsigned int*>(this, "VkDisplayPlanePropertiesKHR.currentStackIndex"); }
};

