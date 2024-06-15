#pragma once

#include "BaseDeclarations.h"
struct PrimalInventoryComponent_eventBPIsValidCraftingResource_Parms
{
	char __padding[0x10L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalInventoryComponent_eventBPIsValidCraftingResource_Parms.ReturnValue"); }
};

