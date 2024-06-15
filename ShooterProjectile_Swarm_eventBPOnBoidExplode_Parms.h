#pragma once

#include "BaseDeclarations.h"
struct ShooterProjectile_Swarm_eventBPOnBoidExplode_Parms
{
	char __padding[0x98L];
	int& BoidIndexField() { return *GetNativePointerField<int*>(this, "ShooterProjectile_Swarm_eventBPOnBoidExplode_Parms.BoidIndex"); }
	FHitResult& HitField() { return *GetNativePointerField<FHitResult*>(this, "ShooterProjectile_Swarm_eventBPOnBoidExplode_Parms.Hit"); }
};

