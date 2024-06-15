#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacter_eventBPGetArmorDurabilityDecreaseMultiplier_Parms
{
	char __padding[0x4L];
	float& ReturnValueField() { return *GetNativePointerField<float*>(this, "PrimalCharacter_eventBPGetArmorDurabilityDecreaseMultiplier_Parms.ReturnValue"); }
};

