#pragma once

#include "BaseDeclarations.h"
struct PrimalItem_eventBPIsValidForCrafting_Parms
{
	char __padding[0x1L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalItem_eventBPIsValidForCrafting_Parms.ReturnValue"); }
};

