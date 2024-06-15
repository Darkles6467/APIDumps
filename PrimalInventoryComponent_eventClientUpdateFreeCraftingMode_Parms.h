#pragma once

#include "BaseDeclarations.h"
struct PrimalInventoryComponent_eventClientUpdateFreeCraftingMode_Parms
{
	char __padding[0x1L];
	bool& bNewFreeCraftingModeValueField() { return *GetNativePointerField<bool*>(this, "PrimalInventoryComponent_eventClientUpdateFreeCraftingMode_Parms.bNewFreeCraftingModeValue"); }
};

