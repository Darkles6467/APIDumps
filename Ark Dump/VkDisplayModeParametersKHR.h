#pragma once

#include "BaseDeclarations.h"
struct VkDisplayModeParametersKHR
{
	char __padding[0xcL];
	VkExtent2D& visibleRegionField() { return *GetNativePointerField<VkExtent2D*>(this, "VkDisplayModeParametersKHR.visibleRegion"); }
	unsigned int& refreshRateField() { return *GetNativePointerField<unsigned int*>(this, "VkDisplayModeParametersKHR.refreshRate"); }
};

