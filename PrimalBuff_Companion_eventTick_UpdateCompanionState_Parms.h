#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_Companion_eventTick_UpdateCompanionState_Parms
{
	char __padding[0x4L];
	float& DeltaTimeField() { return *GetNativePointerField<float*>(this, "PrimalBuff_Companion_eventTick_UpdateCompanionState_Parms.DeltaTime"); }
};

