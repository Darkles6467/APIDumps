#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacter_eventPlayDyingRadial_Parms
{
	char __padding[0x68L];
	float& KillingDamageField() { return *GetNativePointerField<float*>(this, "PrimalCharacter_eventPlayDyingRadial_Parms.KillingDamage"); }
	FRadialDamageEvent& DamageEventField() { return *GetNativePointerField<FRadialDamageEvent*>(this, "PrimalCharacter_eventPlayDyingRadial_Parms.DamageEvent"); }
};

