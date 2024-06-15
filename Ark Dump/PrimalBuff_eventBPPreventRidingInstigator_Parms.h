#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_eventBPPreventRidingInstigator_Parms
{
	char __padding[0x10L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalBuff_eventBPPreventRidingInstigator_Parms.ReturnValue"); }
};

