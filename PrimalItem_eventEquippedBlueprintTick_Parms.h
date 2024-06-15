#pragma once

#include "BaseDeclarations.h"
struct PrimalItem_eventEquippedBlueprintTick_Parms
{
	char __padding[0x4L];
	float& DeltaSecondsField() { return *GetNativePointerField<float*>(this, "PrimalItem_eventEquippedBlueprintTick_Parms.DeltaSeconds"); }
};

