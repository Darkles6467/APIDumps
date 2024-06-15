#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_Companion_eventClientToggleForceMonologue_Parms
{
	char __padding[0x1L];
	bool& NewvalField() { return *GetNativePointerField<bool*>(this, "PrimalBuff_Companion_eventClientToggleForceMonologue_Parms.Newval"); }
};

