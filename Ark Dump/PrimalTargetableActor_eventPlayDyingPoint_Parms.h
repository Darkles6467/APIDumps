#pragma once

#include "BaseDeclarations.h"
struct PrimalTargetableActor_eventPlayDyingPoint_Parms
{
	char __padding[0xd0L];
	float& KillingDamageField() { return *GetNativePointerField<float*>(this, "PrimalTargetableActor_eventPlayDyingPoint_Parms.KillingDamage"); }
	FPointDamageEvent& DamageEventField() { return *GetNativePointerField<FPointDamageEvent*>(this, "PrimalTargetableActor_eventPlayDyingPoint_Parms.DamageEvent"); }
};

