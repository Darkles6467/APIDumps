#pragma once

#include "BaseDeclarations.h"
struct Actor_eventReceiveTick_Parms
{
	char __padding[0x4L];
	float& DeltaSecondsField() { return *GetNativePointerField<float*>(this, "Actor_eventReceiveTick_Parms.DeltaSeconds"); }
};

