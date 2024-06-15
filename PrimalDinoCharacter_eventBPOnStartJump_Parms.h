#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventBPOnStartJump_Parms
{
	char __padding[0x1L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalDinoCharacter_eventBPOnStartJump_Parms.ReturnValue"); }
};

