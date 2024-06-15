#pragma once

#include "BaseDeclarations.h"
struct PrimalInventoryComponent_eventInventoryCustomSortPredicate_Parms
{
	char __padding[0x18L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalInventoryComponent_eventInventoryCustomSortPredicate_Parms.ReturnValue"); }
};

