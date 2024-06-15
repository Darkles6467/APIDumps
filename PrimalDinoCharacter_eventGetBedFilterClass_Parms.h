#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventGetBedFilterClass_Parms
{
	char __padding[0x8L];
	TSubclassOf<APrimalDinoCharacter>& ReturnValueField() { return *GetNativePointerField<TSubclassOf<APrimalDinoCharacter>*>(this, "PrimalDinoCharacter_eventGetBedFilterClass_Parms.ReturnValue"); }
};

