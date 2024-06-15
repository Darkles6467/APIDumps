#pragma once

#include "BaseDeclarations.h"
struct PrimalAIState_eventOnTickEvent_Parms
{
	char __padding[0x4L];
	float& DeltaSecondsField() { return *GetNativePointerField<float*>(this, "PrimalAIState_eventOnTickEvent_Parms.DeltaSeconds"); }
};

