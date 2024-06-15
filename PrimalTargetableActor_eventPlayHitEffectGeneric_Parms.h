#pragma once

#include "BaseDeclarations.h"
struct PrimalTargetableActor_eventPlayHitEffectGeneric_Parms
{
	char __padding[0x38L];
	float& DamageTakenField() { return *GetNativePointerField<float*>(this, "PrimalTargetableActor_eventPlayHitEffectGeneric_Parms.DamageTaken"); }
};

