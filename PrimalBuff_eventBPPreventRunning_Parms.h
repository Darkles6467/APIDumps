#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_eventBPPreventRunning_Parms
{
	char __padding[0x1L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalBuff_eventBPPreventRunning_Parms.ReturnValue"); }
};

