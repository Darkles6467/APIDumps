#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_eventBPAdjustDamage_Ex_Parms
{
	char __padding[0xc0L];
	float& DamageField() { return *GetNativePointerField<float*>(this, "PrimalBuff_eventBPAdjustDamage_Ex_Parms.Damage"); }
	FHitResult& HitInfoField() { return *GetNativePointerField<FHitResult*>(this, "PrimalBuff_eventBPAdjustDamage_Ex_Parms.HitInfo"); }
	FVector& ImpulseDirField() { return *GetNativePointerField<FVector*>(this, "PrimalBuff_eventBPAdjustDamage_Ex_Parms.ImpulseDir"); }
	float& ReturnValueField() { return *GetNativePointerField<float*>(this, "PrimalBuff_eventBPAdjustDamage_Ex_Parms.ReturnValue"); }

	// Functions

};

