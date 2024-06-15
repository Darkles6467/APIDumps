#pragma once

#include "BaseDeclarations.h"
#include "UParticleModuleRotationBase.h"
#include "UParticleModule.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UParticleModuleRotation : UParticleModuleRotationBase
{
	char __padding[0x38L];

	// Functions

	void InitializeDefaults() { NativeCall<void>(this, "UParticleModuleRotation.InitializeDefaults"); }
	void PostInitProperties() { NativeCall<void>(this, "UParticleModuleRotation.PostInitProperties"); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UParticleModuleRotation.Serialize", Ar); }
	void Spawn(FParticleEmitterInstance * Owner, int Offset, float SpawnTime, FBaseParticle * ParticleBase) { NativeCall<void, FParticleEmitterInstance *, int, float, FBaseParticle *>(this, "UParticleModuleRotation.Spawn", Owner, Offset, SpawnTime, ParticleBase); }
};

struct UParticleModuleRotation_Seeded : UParticleModuleRotation
{
	char __padding[0x20L];
	FParticleRandomSeedInfo& RandomSeedInfoField() { return *GetNativePointerField<FParticleRandomSeedInfo*>(this, "UParticleModuleRotation_Seeded.RandomSeedInfo"); }

	// Functions

	unsigned int RequiredBytesPerInstance(FParticleEmitterInstance * Owner) { return NativeCall<unsigned int, FParticleEmitterInstance *>(this, "UParticleModuleRotation_Seeded.RequiredBytesPerInstance", Owner); }
	void Spawn(FParticleEmitterInstance * Owner, int Offset, float SpawnTime, FBaseParticle * ParticleBase) { NativeCall<void, FParticleEmitterInstance *, int, float, FBaseParticle *>(this, "UParticleModuleRotation_Seeded.Spawn", Owner, Offset, SpawnTime, ParticleBase); }
};

