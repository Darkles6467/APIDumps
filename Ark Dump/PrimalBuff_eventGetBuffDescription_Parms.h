#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_eventGetBuffDescription_Parms
{
	char __padding[0x50L];
	FStatusValueModifierDescription& ReturnValueField() { return *GetNativePointerField<FStatusValueModifierDescription*>(this, "PrimalBuff_eventGetBuffDescription_Parms.ReturnValue"); }
};

