#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_eventBPAdjustRadialDamage_Parms
{
	char __padding[0x68L];
	float& currentDamageField() { return *GetNativePointerField<float*>(this, "PrimalBuff_eventBPAdjustRadialDamage_Parms.currentDamage"); }
	FVector& OriginField() { return *GetNativePointerField<FVector*>(this, "PrimalBuff_eventBPAdjustRadialDamage_Parms.Origin"); }
	FRadialDamageEvent& DamageEventField() { return *GetNativePointerField<FRadialDamageEvent*>(this, "PrimalBuff_eventBPAdjustRadialDamage_Parms.DamageEvent"); }
	float& ReturnValueField() { return *GetNativePointerField<float*>(this, "PrimalBuff_eventBPAdjustRadialDamage_Parms.ReturnValue"); }

	// Functions

};

