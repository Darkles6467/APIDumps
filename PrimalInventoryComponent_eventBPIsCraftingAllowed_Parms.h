#pragma once

#include "BaseDeclarations.h"
struct PrimalInventoryComponent_eventBPIsCraftingAllowed_Parms
{
	char __padding[0x10L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalInventoryComponent_eventBPIsCraftingAllowed_Parms.ReturnValue"); }
};

