#pragma once

#include "BaseDeclarations.h"
struct Actor_eventActorHitSignature_Parms
{
	char __padding[0xa8L];
	FVector& NormalImpulseField() { return *GetNativePointerField<FVector*>(this, "Actor_eventActorHitSignature_Parms.NormalImpulse"); }
	FHitResult& HitField() { return *GetNativePointerField<FHitResult*>(this, "Actor_eventActorHitSignature_Parms.Hit"); }
};

