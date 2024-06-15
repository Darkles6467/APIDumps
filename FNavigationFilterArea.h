#pragma once

#include "BaseDeclarations.h"
struct FNavigationFilterArea
{
	char __padding[0x18L];
	float& TravelCostOverrideField() { return *GetNativePointerField<float*>(this, "FNavigationFilterArea.TravelCostOverride"); }
	float& EnteringCostOverrideField() { return *GetNativePointerField<float*>(this, "FNavigationFilterArea.EnteringCostOverride"); }

	// Functions

};

