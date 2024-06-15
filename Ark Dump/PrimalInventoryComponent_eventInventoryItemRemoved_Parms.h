#pragma once

#include "BaseDeclarations.h"
struct PrimalInventoryComponent_eventInventoryItemRemoved_Parms
{
	char __padding[0x18L];
	int& AmountRemovedField() { return *GetNativePointerField<int*>(this, "PrimalInventoryComponent_eventInventoryItemRemoved_Parms.AmountRemoved"); }
};

