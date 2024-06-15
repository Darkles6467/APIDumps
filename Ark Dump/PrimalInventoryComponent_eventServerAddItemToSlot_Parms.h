#pragma once

#include "BaseDeclarations.h"
struct PrimalInventoryComponent_eventServerAddItemToSlot_Parms
{
	char __padding[0xcL];
	FItemNetID& ItemIDField() { return *GetNativePointerField<FItemNetID*>(this, "PrimalInventoryComponent_eventServerAddItemToSlot_Parms.ItemID"); }
	int& SlotIndexField() { return *GetNativePointerField<int*>(this, "PrimalInventoryComponent_eventServerAddItemToSlot_Parms.SlotIndex"); }
};

