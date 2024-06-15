#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventBPCanAutodrag_Parms
{
	char __padding[0x10L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalDinoCharacter_eventBPCanAutodrag_Parms.ReturnValue"); }
};

