#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacter_eventPlayHitEffectPoint_Parms
{
	char __padding[0xd0L];
	float& DamageTakenField() { return *GetNativePointerField<float*>(this, "PrimalCharacter_eventPlayHitEffectPoint_Parms.DamageTaken"); }
	FPointDamageEvent& DamageEventField() { return *GetNativePointerField<FPointDamageEvent*>(this, "PrimalCharacter_eventPlayHitEffectPoint_Parms.DamageEvent"); }
};

