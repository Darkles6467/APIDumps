#pragma once

#include "BaseDeclarations.h"
struct DestructibleActor_eventActorFractureSignature_Parms
{
	char __padding[0x18L];
	FVector& HitPointField() { return *GetNativePointerField<FVector*>(this, "DestructibleActor_eventActorFractureSignature_Parms.HitPoint"); }
	FVector& HitDirectionField() { return *GetNativePointerField<FVector*>(this, "DestructibleActor_eventActorFractureSignature_Parms.HitDirection"); }
};

