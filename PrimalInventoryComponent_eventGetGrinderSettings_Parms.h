#pragma once

#include "BaseDeclarations.h"
struct PrimalInventoryComponent_eventGetGrinderSettings_Parms
{
	char __padding[0xcL];
	int& MaxQuantityToGrindField() { return *GetNativePointerField<int*>(this, "PrimalInventoryComponent_eventGetGrinderSettings_Parms.MaxQuantityToGrind"); }
	float& GrindGiveItemsPercentField() { return *GetNativePointerField<float*>(this, "PrimalInventoryComponent_eventGetGrinderSettings_Parms.GrindGiveItemsPercent"); }
	int& MaxItemsToGivePerGrindField() { return *GetNativePointerField<int*>(this, "PrimalInventoryComponent_eventGetGrinderSettings_Parms.MaxItemsToGivePerGrind"); }
};

