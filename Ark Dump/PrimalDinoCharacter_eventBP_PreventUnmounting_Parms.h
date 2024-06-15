#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventBP_PreventUnmounting_Parms
{
	char __padding[0x1L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalDinoCharacter_eventBP_PreventUnmounting_Parms.ReturnValue"); }
};

