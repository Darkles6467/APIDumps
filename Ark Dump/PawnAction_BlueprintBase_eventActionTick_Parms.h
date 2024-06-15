#pragma once

#include "BaseDeclarations.h"
struct PawnAction_BlueprintBase_eventActionTick_Parms
{
	char __padding[0x10L];
	float& DeltaSecondsField() { return *GetNativePointerField<float*>(this, "PawnAction_BlueprintBase_eventActionTick_Parms.DeltaSeconds"); }
};

