#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventBPCanDragCharacter_Parms
{
	char __padding[0x10L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalDinoCharacter_eventBPCanDragCharacter_Parms.ReturnValue"); }
};

