#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_Companion_eventIsCompanionAbleToMonologue_Parms
{
	char __padding[0x1L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalBuff_Companion_eventIsCompanionAbleToMonologue_Parms.ReturnValue"); }
};

