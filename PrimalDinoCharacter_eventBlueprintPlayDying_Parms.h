#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventBlueprintPlayDying_Parms
{
	char __padding[0x38L];
	float& KillingDamageField() { return *GetNativePointerField<float*>(this, "PrimalDinoCharacter_eventBlueprintPlayDying_Parms.KillingDamage"); }
};

