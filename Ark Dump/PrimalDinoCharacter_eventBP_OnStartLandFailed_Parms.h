#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventBP_OnStartLandFailed_Parms
{
	char __padding[0x4L];
	int& ReasonIndexField() { return *GetNativePointerField<int*>(this, "PrimalDinoCharacter_eventBP_OnStartLandFailed_Parms.ReasonIndex"); }
};

