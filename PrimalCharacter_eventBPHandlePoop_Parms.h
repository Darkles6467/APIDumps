#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacter_eventBPHandlePoop_Parms
{
	char __padding[0x1L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalCharacter_eventBPHandlePoop_Parms.ReturnValue"); }
};

