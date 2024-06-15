#pragma once

#include "BaseDeclarations.h"
struct PrimalRaft_eventBPAllowMovementSound_Parms
{
	char __padding[0x1L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalRaft_eventBPAllowMovementSound_Parms.ReturnValue"); }
};

