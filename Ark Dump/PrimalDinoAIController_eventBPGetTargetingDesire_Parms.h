#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoAIController_eventBPGetTargetingDesire_Parms
{
	char __padding[0x10L];
	float& ForTargetingDesireValueField() { return *GetNativePointerField<float*>(this, "PrimalDinoAIController_eventBPGetTargetingDesire_Parms.ForTargetingDesireValue"); }
	float& ReturnValueField() { return *GetNativePointerField<float*>(this, "PrimalDinoAIController_eventBPGetTargetingDesire_Parms.ReturnValue"); }
};

