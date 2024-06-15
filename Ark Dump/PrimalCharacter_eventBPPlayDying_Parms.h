#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacter_eventBPPlayDying_Parms
{
	char __padding[0x38L];
	float& KillingDamageField() { return *GetNativePointerField<float*>(this, "PrimalCharacter_eventBPPlayDying_Parms.KillingDamage"); }
};

