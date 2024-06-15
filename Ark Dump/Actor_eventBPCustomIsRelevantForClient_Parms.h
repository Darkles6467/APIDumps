#pragma once

#include "BaseDeclarations.h"
struct Actor_eventBPCustomIsRelevantForClient_Parms
{
	char __padding[0x10L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "Actor_eventBPCustomIsRelevantForClient_Parms.ReturnValue"); }
};

