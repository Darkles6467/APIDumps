#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacter_eventPlayDyingPoint_Parms
{
	char __padding[0xd0L];
	float& KillingDamageField() { return *GetNativePointerField<float*>(this, "PrimalCharacter_eventPlayDyingPoint_Parms.KillingDamage"); }
	FPointDamageEvent& DamageEventField() { return *GetNativePointerField<FPointDamageEvent*>(this, "PrimalCharacter_eventPlayDyingPoint_Parms.DamageEvent"); }
};

