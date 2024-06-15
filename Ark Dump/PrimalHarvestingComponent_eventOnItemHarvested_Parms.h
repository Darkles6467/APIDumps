#pragma once

#include "BaseDeclarations.h"
struct PrimalHarvestingComponent_eventOnItemHarvested_Parms
{
	char __padding[0x18L];
	int& ItemQuantityField() { return *GetNativePointerField<int*>(this, "PrimalHarvestingComponent_eventOnItemHarvested_Parms.ItemQuantity"); }
};

