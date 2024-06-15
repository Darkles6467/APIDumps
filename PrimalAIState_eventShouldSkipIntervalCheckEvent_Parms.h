#pragma once

#include "BaseDeclarations.h"
struct PrimalAIState_eventShouldSkipIntervalCheckEvent_Parms
{
	char __padding[0x1L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalAIState_eventShouldSkipIntervalCheckEvent_Parms.ReturnValue"); }
};

