#pragma once

#include "BaseDeclarations.h"
struct PrimalAIState_eventOnCanUseStateEvent_Parms
{
	char __padding[0x1L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalAIState_eventOnCanUseStateEvent_Parms.ReturnValue"); }
};

