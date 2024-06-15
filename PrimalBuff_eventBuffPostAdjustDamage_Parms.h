#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_eventBuffPostAdjustDamage_Parms
{
	char __padding[0xa8L];
	float& DamageField() { return *GetNativePointerField<float*>(this, "PrimalBuff_eventBuffPostAdjustDamage_Parms.Damage"); }
	FHitResult& HitInfoField() { return *GetNativePointerField<FHitResult*>(this, "PrimalBuff_eventBuffPostAdjustDamage_Parms.HitInfo"); }
};

