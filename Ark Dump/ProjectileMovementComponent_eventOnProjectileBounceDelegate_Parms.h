#pragma once

#include "BaseDeclarations.h"
struct ProjectileMovementComponent_eventOnProjectileBounceDelegate_Parms
{
	char __padding[0x98L];
	FHitResult& ImpactResultField() { return *GetNativePointerField<FHitResult*>(this, "ProjectileMovementComponent_eventOnProjectileBounceDelegate_Parms.ImpactResult"); }
	FVector& ImpactVelocityField() { return *GetNativePointerField<FVector*>(this, "ProjectileMovementComponent_eventOnProjectileBounceDelegate_Parms.ImpactVelocity"); }
};

