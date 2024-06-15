#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacter_eventBPShouldLimitRightDirection_Parms
{
	char __padding[0x1L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalCharacter_eventBPShouldLimitRightDirection_Parms.ReturnValue"); }
};

