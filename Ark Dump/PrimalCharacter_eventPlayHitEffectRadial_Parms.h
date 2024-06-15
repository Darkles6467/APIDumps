#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacter_eventPlayHitEffectRadial_Parms
{
	char __padding[0x68L];
	float& DamageTakenField() { return *GetNativePointerField<float*>(this, "PrimalCharacter_eventPlayHitEffectRadial_Parms.DamageTaken"); }
	FRadialDamageEvent& DamageEventField() { return *GetNativePointerField<FRadialDamageEvent*>(this, "PrimalCharacter_eventPlayHitEffectRadial_Parms.DamageEvent"); }
};

