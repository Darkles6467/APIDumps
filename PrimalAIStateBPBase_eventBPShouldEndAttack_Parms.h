#pragma once

#include "BaseDeclarations.h"
struct PrimalAIStateBPBase_eventBPShouldEndAttack_Parms
{
	char __padding[0x1L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalAIStateBPBase_eventBPShouldEndAttack_Parms.ReturnValue"); }
};

