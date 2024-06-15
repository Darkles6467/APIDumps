#pragma once

#include "BaseDeclarations.h"
struct PrimalWorldBuffCustomImplement_eventTick_Parms
{
	char __padding[0x4L];
	float& DeltaSecondsField() { return *GetNativePointerField<float*>(this, "PrimalWorldBuffCustomImplement_eventTick_Parms.DeltaSeconds"); }
};

