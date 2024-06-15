#pragma once

#include "BaseDeclarations.h"
struct BTTask_BlueprintBase_eventReceiveTick_Parms
{
	char __padding[0x10L];
	float& DeltaSecondsField() { return *GetNativePointerField<float*>(this, "BTTask_BlueprintBase_eventReceiveTick_Parms.DeltaSeconds"); }
};

