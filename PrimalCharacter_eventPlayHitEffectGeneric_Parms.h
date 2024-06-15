#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacter_eventPlayHitEffectGeneric_Parms
{
	char __padding[0x38L];
	float& DamageTakenField() { return *GetNativePointerField<float*>(this, "PrimalCharacter_eventPlayHitEffectGeneric_Parms.DamageTaken"); }
};

