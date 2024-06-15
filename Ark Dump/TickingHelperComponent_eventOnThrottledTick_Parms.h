#pragma once

#include "BaseDeclarations.h"
struct TickingHelperComponent_eventOnThrottledTick_Parms
{
	char __padding[0x4L];
	float& DeltaTimeField() { return *GetNativePointerField<float*>(this, "TickingHelperComponent_eventOnThrottledTick_Parms.DeltaTime"); }
};

