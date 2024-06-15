#pragma once

#include "BaseDeclarations.h"
struct PrimalTargetableActor_eventPlayHitEffectPoint_Parms
{
	char __padding[0xd0L];
	float& DamageTakenField() { return *GetNativePointerField<float*>(this, "PrimalTargetableActor_eventPlayHitEffectPoint_Parms.DamageTaken"); }
	FPointDamageEvent& DamageEventField() { return *GetNativePointerField<FPointDamageEvent*>(this, "PrimalTargetableActor_eventPlayHitEffectPoint_Parms.DamageEvent"); }
};

