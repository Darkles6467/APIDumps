#pragma once

#include "BaseDeclarations.h"
struct PrimalInventoryComponent_eventServerMergeItemStack_Parms
{
	char __padding[0x8L];
	FItemNetID& ItemIDField() { return *GetNativePointerField<FItemNetID*>(this, "PrimalInventoryComponent_eventServerMergeItemStack_Parms.ItemID"); }
};

