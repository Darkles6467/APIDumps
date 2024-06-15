#pragma once

#include "BaseDeclarations.h"
struct PrimalTargetableActor_eventPlayDyingGeneric_Parms
{
	char __padding[0x38L];
	float& KillingDamageField() { return *GetNativePointerField<float*>(this, "PrimalTargetableActor_eventPlayDyingGeneric_Parms.KillingDamage"); }
};

