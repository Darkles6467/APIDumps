#pragma once

#include "BaseDeclarations.h"
struct PrimalTargetableActor_eventPlayHitEffectRadial_Parms
{
	char __padding[0x68L];
	float& DamageTakenField() { return *GetNativePointerField<float*>(this, "PrimalTargetableActor_eventPlayHitEffectRadial_Parms.DamageTaken"); }
	FRadialDamageEvent& DamageEventField() { return *GetNativePointerField<FRadialDamageEvent*>(this, "PrimalTargetableActor_eventPlayHitEffectRadial_Parms.DamageEvent"); }
};

