#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_eventPreventActorTargeting_Parms
{
	char __padding[0x10L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalBuff_eventPreventActorTargeting_Parms.ReturnValue"); }
};

