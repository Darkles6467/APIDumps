#pragma once

#include "BaseDeclarations.h"
struct VkDisplayModePropertiesKHR
{
	char __padding[0x18L];
	struct VkDisplayModeKHR_T * displayModeField() { return GetNativePointerField<struct VkDisplayModeKHR_T *>(this, "VkDisplayModePropertiesKHR.displayMode"); }
	VkDisplayModeParametersKHR& parametersField() { return *GetNativePointerField<VkDisplayModeParametersKHR*>(this, "VkDisplayModePropertiesKHR.parameters"); }
};

