#pragma once

#include "BaseDeclarations.h"
struct PrimalTargetableActor_eventPlayDyingRadial_Parms
{
	char __padding[0x68L];
	float& KillingDamageField() { return *GetNativePointerField<float*>(this, "PrimalTargetableActor_eventPlayDyingRadial_Parms.KillingDamage"); }
	FRadialDamageEvent& DamageEventField() { return *GetNativePointerField<FRadialDamageEvent*>(this, "PrimalTargetableActor_eventPlayDyingRadial_Parms.DamageEvent"); }
};

