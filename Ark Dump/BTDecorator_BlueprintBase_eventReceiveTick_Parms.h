#pragma once

#include "BaseDeclarations.h"
struct BTDecorator_BlueprintBase_eventReceiveTick_Parms
{
	char __padding[0x10L];
	float& DeltaSecondsField() { return *GetNativePointerField<float*>(this, "BTDecorator_BlueprintBase_eventReceiveTick_Parms.DeltaSeconds"); }
};

