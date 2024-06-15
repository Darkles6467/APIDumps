#pragma once

#include "BaseDeclarations.h"
struct PrimalStructureItemContainer_eventBPGetQuantityOfItemWithoutCheckingInventory_Parms
{
	char __padding[0x10L];
	int& ReturnValueField() { return *GetNativePointerField<int*>(this, "PrimalStructureItemContainer_eventBPGetQuantityOfItemWithoutCheckingInventory_Parms.ReturnValue"); }
};

