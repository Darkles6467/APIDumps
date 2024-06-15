#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_eventBPAdjustImpulseFromDamage_Parms
{
	char __padding[0xe0L];
	FVector& DesiredImpulseField() { return *GetNativePointerField<FVector*>(this, "PrimalBuff_eventBPAdjustImpulseFromDamage_Parms.DesiredImpulse"); }
	float& DamageTakenField() { return *GetNativePointerField<float*>(this, "PrimalBuff_eventBPAdjustImpulseFromDamage_Parms.DamageTaken"); }
	bool& bIsPointDamageField() { return *GetNativePointerField<bool*>(this, "PrimalBuff_eventBPAdjustImpulseFromDamage_Parms.bIsPointDamage"); }
	FHitResult& PointHitInfoField() { return *GetNativePointerField<FHitResult*>(this, "PrimalBuff_eventBPAdjustImpulseFromDamage_Parms.PointHitInfo"); }
	FVector& ReturnValueField() { return *GetNativePointerField<FVector*>(this, "PrimalBuff_eventBPAdjustImpulseFromDamage_Parms.ReturnValue"); }
};

