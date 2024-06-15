#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventBPIsBasedOnActor_Parms
{
	char __padding[0x10L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalDinoCharacter_eventBPIsBasedOnActor_Parms.ReturnValue"); }
};

