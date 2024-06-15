#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacter_eventPlayDyingGeneric_Parms
{
	char __padding[0x38L];
	float& KillingDamageField() { return *GetNativePointerField<float*>(this, "PrimalCharacter_eventPlayDyingGeneric_Parms.KillingDamage"); }
};

