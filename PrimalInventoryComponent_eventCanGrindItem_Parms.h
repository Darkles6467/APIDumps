#pragma once

#include "BaseDeclarations.h"
struct PrimalInventoryComponent_eventCanGrindItem_Parms
{
	char __padding[0x10L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalInventoryComponent_eventCanGrindItem_Parms.ReturnValue"); }
};

