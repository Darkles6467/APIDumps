#pragma once

#include "BaseDeclarations.h"
struct PrimalInventoryComponent_eventSetNextItemConsumptionID_Parms
{
	char __padding[0x8L];
	FItemNetID& NextItemIDField() { return *GetNativePointerField<FItemNetID*>(this, "PrimalInventoryComponent_eventSetNextItemConsumptionID_Parms.NextItemID"); }
};

