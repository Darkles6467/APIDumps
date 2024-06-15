#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventHasSelfBuried_Parms
{
	char __padding[0x1L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalDinoCharacter_eventHasSelfBuried_Parms.ReturnValue"); }
};

