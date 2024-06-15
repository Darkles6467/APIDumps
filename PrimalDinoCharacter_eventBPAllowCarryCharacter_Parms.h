#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventBPAllowCarryCharacter_Parms
{
	char __padding[0x10L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalDinoCharacter_eventBPAllowCarryCharacter_Parms.ReturnValue"); }
};

