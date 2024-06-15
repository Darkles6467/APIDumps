#pragma once

#include "BaseDeclarations.h"
struct PrimalAIStateBPBase_eventBPOnAttackTick_Parms
{
	char __padding[0x4L];
	float& DeltaTimeField() { return *GetNativePointerField<float*>(this, "PrimalAIStateBPBase_eventBPOnAttackTick_Parms.DeltaTime"); }
};

