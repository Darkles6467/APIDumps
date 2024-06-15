#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_eventBuffAdjustDamage_Parms
{
	char __padding[0xb0L];
	float& DamageField() { return *GetNativePointerField<float*>(this, "PrimalBuff_eventBuffAdjustDamage_Parms.Damage"); }
	FHitResult& HitInfoField() { return *GetNativePointerField<FHitResult*>(this, "PrimalBuff_eventBuffAdjustDamage_Parms.HitInfo"); }
	float& ReturnValueField() { return *GetNativePointerField<float*>(this, "PrimalBuff_eventBuffAdjustDamage_Parms.ReturnValue"); }

	// Functions

};

