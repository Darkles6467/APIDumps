#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventBPSetupTamed_Parms
{
	char __padding[0x1L];
	bool& bWasJustTamedField() { return *GetNativePointerField<bool*>(this, "PrimalDinoCharacter_eventBPSetupTamed_Parms.bWasJustTamed"); }
};

