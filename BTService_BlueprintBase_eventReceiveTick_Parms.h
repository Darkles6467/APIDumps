#pragma once

#include "BaseDeclarations.h"
struct BTService_BlueprintBase_eventReceiveTick_Parms
{
	char __padding[0x10L];
	float& DeltaSecondsField() { return *GetNativePointerField<float*>(this, "BTService_BlueprintBase_eventReceiveTick_Parms.DeltaSeconds"); }
};

