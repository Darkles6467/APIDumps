#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventBPGetTargetingDesirability_Parms
{
	char __padding[0x10L];
	float& ReturnValueField() { return *GetNativePointerField<float*>(this, "PrimalDinoCharacter_eventBPGetTargetingDesirability_Parms.ReturnValue"); }
};

