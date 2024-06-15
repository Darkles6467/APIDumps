#pragma once

#include "BaseDeclarations.h"
struct ShooterProjectile_eventBPProjectileBounced_Parms
{
	char __padding[0x98L];
	FHitResult& ImpactResultField() { return *GetNativePointerField<FHitResult*>(this, "ShooterProjectile_eventBPProjectileBounced_Parms.ImpactResult"); }
	FVector& ImpactVelocityField() { return *GetNativePointerField<FVector*>(this, "ShooterProjectile_eventBPProjectileBounced_Parms.ImpactVelocity"); }
};

