#pragma once

#include "BaseDeclarations.h"
struct PrimalItem_eventSkinEquippedBlueprintTick_Parms
{
	char __padding[0x10L];
	float& DeltaSecondsField() { return *GetNativePointerField<float*>(this, "PrimalItem_eventSkinEquippedBlueprintTick_Parms.DeltaSeconds"); }
};

