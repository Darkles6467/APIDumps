#pragma once

#include "BaseDeclarations.h"
struct ShooterProjectile_Swarm_eventMultiPrimaryProjectileDestroyed_Parms
{
	char __padding[0x18L];
	FVector& ImpactLocationField() { return *GetNativePointerField<FVector*>(this, "ShooterProjectile_Swarm_eventMultiPrimaryProjectileDestroyed_Parms.ImpactLocation"); }
	long double& DestroyNetworkTimeField() { return *GetNativePointerField<long double*>(this, "ShooterProjectile_Swarm_eventMultiPrimaryProjectileDestroyed_Parms.DestroyNetworkTime"); }
};

