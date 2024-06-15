#pragma once

#include "BaseDeclarations.h"
struct PrimalInventoryComponent_eventInventoryItemAdded_Parms
{
	char __padding[0x18L];
	int& AmountAddedField() { return *GetNativePointerField<int*>(this, "PrimalInventoryComponent_eventInventoryItemAdded_Parms.AmountAdded"); }
	bool& bEquippedItemField() { return *GetNativePointerField<bool*>(this, "PrimalInventoryComponent_eventInventoryItemAdded_Parms.bEquippedItem"); }
};

