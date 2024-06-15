#pragma once

#include "BaseDeclarations.h"
struct PrimalInventoryComponent_eventOverrideUseItem_Parms
{
	char __padding[0x10L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalInventoryComponent_eventOverrideUseItem_Parms.ReturnValue"); }
};

