#pragma once

#include "BaseDeclarations.h"
#include "UParticleModuleVelocityBase.h"
#include "UParticleModule.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UParticleModuleVelocity : UParticleModuleVelocityBase
{
	char __padding[0x70L];

	// Functions

	void InitializeDefaults() { NativeCall<void>(this, "UParticleModuleVelocity.InitializeDefaults"); }
	void PostInitProperties() { NativeCall<void>(this, "UParticleModuleVelocity.PostInitProperties"); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UParticleModuleVelocity.Serialize", Ar); }
	void Spawn(FParticleEmitterInstance * Owner, int Offset, float SpawnTime, FBaseParticle * ParticleBase) { NativeCall<void, FParticleEmitterInstance *, int, float, FBaseParticle *>(this, "UParticleModuleVelocity.Spawn", Owner, Offset, SpawnTime, ParticleBase); }
	void SpawnEx(FParticleEmitterInstance * Owner, int Offset, float SpawnTime, FRandomStream * InRandomStream, FBaseParticle * ParticleBase) { NativeCall<void, FParticleEmitterInstance *, int, float, FRandomStream *, FBaseParticle *>(this, "UParticleModuleVelocity.SpawnEx", Owner, Offset, SpawnTime, InRandomStream, ParticleBase); }
};

struct UParticleModuleVelocity_Seeded : UParticleModuleVelocity
{
	char __padding[0x20L];
	FParticleRandomSeedInfo& RandomSeedInfoField() { return *GetNativePointerField<FParticleRandomSeedInfo*>(this, "UParticleModuleVelocity_Seeded.RandomSeedInfo"); }

	// Functions

	void Spawn(FParticleEmitterInstance * Owner, int Offset, float SpawnTime, FBaseParticle * ParticleBase) { NativeCall<void, FParticleEmitterInstance *, int, float, FBaseParticle *>(this, "UParticleModuleVelocity_Seeded.Spawn", Owner, Offset, SpawnTime, ParticleBase); }
};

