#pragma once

#include "BaseDeclarations.h"
struct ShooterProjectile_eventClientOnImpact_Parms
{
	char __padding[0xa0L];
	FVector& ProjectileLocationField() { return *GetNativePointerField<FVector*>(this, "ShooterProjectile_eventClientOnImpact_Parms.ProjectileLocation"); }
	FRotator& ProjectileRotationField() { return *GetNativePointerField<FRotator*>(this, "ShooterProjectile_eventClientOnImpact_Parms.ProjectileRotation"); }
	FHitResult& HitResultField() { return *GetNativePointerField<FHitResult*>(this, "ShooterProjectile_eventClientOnImpact_Parms.HitResult"); }
};

