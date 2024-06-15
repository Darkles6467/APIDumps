#pragma once

#include "BaseDeclarations.h"
struct PrimalInventoryComponent_eventServerRemoveItemFromSlot_Parms
{
	char __padding[0x8L];
	FItemNetID& ItemIDField() { return *GetNativePointerField<FItemNetID*>(this, "PrimalInventoryComponent_eventServerRemoveItemFromSlot_Parms.ItemID"); }
};

