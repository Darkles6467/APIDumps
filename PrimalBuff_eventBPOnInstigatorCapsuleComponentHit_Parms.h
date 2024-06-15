#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_eventBPOnInstigatorCapsuleComponentHit_Parms
{
	char __padding[0xa8L];
	FVector& NormalImpulseField() { return *GetNativePointerField<FVector*>(this, "PrimalBuff_eventBPOnInstigatorCapsuleComponentHit_Parms.NormalImpulse"); }
	FHitResult& HitField() { return *GetNativePointerField<FHitResult*>(this, "PrimalBuff_eventBPOnInstigatorCapsuleComponentHit_Parms.Hit"); }
};

