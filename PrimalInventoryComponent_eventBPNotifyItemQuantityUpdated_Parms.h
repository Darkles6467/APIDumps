#pragma once

#include "BaseDeclarations.h"
struct PrimalInventoryComponent_eventBPNotifyItemQuantityUpdated_Parms
{
	char __padding[0x10L];
	int& amountField() { return *GetNativePointerField<int*>(this, "PrimalInventoryComponent_eventBPNotifyItemQuantityUpdated_Parms.amount"); }
};

