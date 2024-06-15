#pragma once

#include "BaseDeclarations.h"
struct PrimalStructure_eventBPAllowPickupGiveItem_Parms
{
	char __padding[0x10L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalStructure_eventBPAllowPickupGiveItem_Parms.ReturnValue"); }
};

