#pragma once

#include "BaseDeclarations.h"
struct ProjectileMovementComponent_eventOnProjectileStopDelegate_Parms
{
	char __padding[0x88L];
	FHitResult& ImpactResultField() { return *GetNativePointerField<FHitResult*>(this, "ProjectileMovementComponent_eventOnProjectileStopDelegate_Parms.ImpactResult"); }
};

