#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventBPGetCustomDinoSetup_Parms
{
	char __padding[0xf0L];
	FDinoSetup& ReturnValueField() { return *GetNativePointerField<FDinoSetup*>(this, "PrimalDinoCharacter_eventBPGetCustomDinoSetup_Parms.ReturnValue"); }
};

