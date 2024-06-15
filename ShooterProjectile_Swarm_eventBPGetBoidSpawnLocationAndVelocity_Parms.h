#pragma once

#include "BaseDeclarations.h"
struct ShooterProjectile_Swarm_eventBPGetBoidSpawnLocationAndVelocity_Parms
{
	char __padding[0x70L];
	int& BoidIndexField() { return *GetNativePointerField<int*>(this, "ShooterProjectile_Swarm_eventBPGetBoidSpawnLocationAndVelocity_Parms.BoidIndex"); }
	FBoid& BoidDataField() { return *GetNativePointerField<FBoid*>(this, "ShooterProjectile_Swarm_eventBPGetBoidSpawnLocationAndVelocity_Parms.BoidData"); }
	FVector& SpawnLocationField() { return *GetNativePointerField<FVector*>(this, "ShooterProjectile_Swarm_eventBPGetBoidSpawnLocationAndVelocity_Parms.SpawnLocation"); }
	FVector& SpawnVelocityField() { return *GetNativePointerField<FVector*>(this, "ShooterProjectile_Swarm_eventBPGetBoidSpawnLocationAndVelocity_Parms.SpawnVelocity"); }
};

