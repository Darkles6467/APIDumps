#pragma once

#include "BaseDeclarations.h"
struct PrimalItem_eventBPOverrideCraftingConsumption_Parms
{
	char __padding[0x4L];
	int& AmountToConsumeField() { return *GetNativePointerField<int*>(this, "PrimalItem_eventBPOverrideCraftingConsumption_Parms.AmountToConsume"); }
};

