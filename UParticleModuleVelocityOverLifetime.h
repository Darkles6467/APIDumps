#pragma once

#include "BaseDeclarations.h"
#include "UParticleModuleVelocityBase.h"
#include "UParticleModule.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UParticleModuleVelocityOverLifetime : UParticleModuleVelocityBase
{
	char __padding[0x40L];

	// Functions

	void InitializeDefaults() { NativeCall<void>(this, "UParticleModuleVelocityOverLifetime.InitializeDefaults"); }
	void PostInitProperties() { NativeCall<void>(this, "UParticleModuleVelocityOverLifetime.PostInitProperties"); }
	void Spawn(FParticleEmitterInstance * Owner, int Offset, float SpawnTime, FBaseParticle * ParticleBase) { NativeCall<void, FParticleEmitterInstance *, int, float, FBaseParticle *>(this, "UParticleModuleVelocityOverLifetime.Spawn", Owner, Offset, SpawnTime, ParticleBase); }
	void Update(FParticleEmitterInstance * Owner, int Offset, float DeltaTime) { NativeCall<void, FParticleEmitterInstance *, int, float>(this, "UParticleModuleVelocityOverLifetime.Update", Owner, Offset, DeltaTime); }
};

