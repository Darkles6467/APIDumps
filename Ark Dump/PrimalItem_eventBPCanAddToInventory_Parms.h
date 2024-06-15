#pragma once

#include "BaseDeclarations.h"
struct PrimalItem_eventBPCanAddToInventory_Parms
{
	char __padding[0x10L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalItem_eventBPCanAddToInventory_Parms.ReturnValue"); }
};

