#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_eventBPCustomAllowAddBuff_Parms
{
	char __padding[0x18L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalBuff_eventBPCustomAllowAddBuff_Parms.ReturnValue"); }
};

