#pragma once

#include "BaseDeclarations.h"
struct PrimalTargetableActor_eventBPHitEffect_Parms
{
	char __padding[0x60L];
	float& DamageTakenField() { return *GetNativePointerField<float*>(this, "PrimalTargetableActor_eventBPHitEffect_Parms.DamageTaken"); }
	bool& bIsLocalPathField() { return *GetNativePointerField<bool*>(this, "PrimalTargetableActor_eventBPHitEffect_Parms.bIsLocalPath"); }
	FVector& DamageLocField() { return *GetNativePointerField<FVector*>(this, "PrimalTargetableActor_eventBPHitEffect_Parms.DamageLoc"); }
	FRotator& HitNormalField() { return *GetNativePointerField<FRotator*>(this, "PrimalTargetableActor_eventBPHitEffect_Parms.HitNormal"); }
};

