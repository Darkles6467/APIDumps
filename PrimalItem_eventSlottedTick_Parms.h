#pragma once

#include "BaseDeclarations.h"
struct PrimalItem_eventSlottedTick_Parms
{
	char __padding[0x4L];
	float& DeltaSecondsField() { return *GetNativePointerField<float*>(this, "PrimalItem_eventSlottedTick_Parms.DeltaSeconds"); }
};

