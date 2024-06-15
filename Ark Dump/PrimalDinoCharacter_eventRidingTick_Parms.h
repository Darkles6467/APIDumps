#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventRidingTick_Parms
{
	char __padding[0x4L];
	float& DeltaSecondsField() { return *GetNativePointerField<float*>(this, "PrimalDinoCharacter_eventRidingTick_Parms.DeltaSeconds"); }
};

