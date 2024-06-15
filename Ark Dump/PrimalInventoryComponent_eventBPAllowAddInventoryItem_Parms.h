#pragma once

#include "BaseDeclarations.h"
struct PrimalInventoryComponent_eventBPAllowAddInventoryItem_Parms
{
	char __padding[0x10L];
	int& RequestedQuantityField() { return *GetNativePointerField<int*>(this, "PrimalInventoryComponent_eventBPAllowAddInventoryItem_Parms.RequestedQuantity"); }
	bool& bOnlyAddAllField() { return *GetNativePointerField<bool*>(this, "PrimalInventoryComponent_eventBPAllowAddInventoryItem_Parms.bOnlyAddAll"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalInventoryComponent_eventBPAllowAddInventoryItem_Parms.ReturnValue"); }

	// Functions

};

