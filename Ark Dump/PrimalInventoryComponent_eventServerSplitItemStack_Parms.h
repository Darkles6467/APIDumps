#pragma once

#include "BaseDeclarations.h"
struct PrimalInventoryComponent_eventServerSplitItemStack_Parms
{
	char __padding[0xcL];
	FItemNetID& ItemIDField() { return *GetNativePointerField<FItemNetID*>(this, "PrimalInventoryComponent_eventServerSplitItemStack_Parms.ItemID"); }
	int& AmountToSplitField() { return *GetNativePointerField<int*>(this, "PrimalInventoryComponent_eventServerSplitItemStack_Parms.AmountToSplit"); }
};

