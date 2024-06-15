#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacter_eventPreventsTargeting_Parms
{
	char __padding[0x10L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalCharacter_eventPreventsTargeting_Parms.ReturnValue"); }
};

