#pragma once

#include "BaseDeclarations.h"
#include "UParticleModuleRotationBase.h"
#include "UParticleModule.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UParticleModuleMeshRotation : UParticleModuleRotationBase
{
	char __padding[0x40L];

	// Functions

	void PostInitProperties() { NativeCall<void>(this, "UParticleModuleMeshRotation.PostInitProperties"); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UParticleModuleMeshRotation.Serialize", Ar); }
	void Spawn(FParticleEmitterInstance * Owner, int Offset, float SpawnTime, FBaseParticle * ParticleBase) { NativeCall<void, FParticleEmitterInstance *, int, float, FBaseParticle *>(this, "UParticleModuleMeshRotation.Spawn", Owner, Offset, SpawnTime, ParticleBase); }
	void SpawnEx(FParticleEmitterInstance * Owner, int Offset, float SpawnTime, FRandomStream * InRandomStream, FBaseParticle * ParticleBase) { NativeCall<void, FParticleEmitterInstance *, int, float, FRandomStream *, FBaseParticle *>(this, "UParticleModuleMeshRotation.SpawnEx", Owner, Offset, SpawnTime, InRandomStream, ParticleBase); }
};

struct UParticleModuleMeshRotation_Seeded : UParticleModuleMeshRotation
{
	char __padding[0x20L];
	FParticleRandomSeedInfo& RandomSeedInfoField() { return *GetNativePointerField<FParticleRandomSeedInfo*>(this, "UParticleModuleMeshRotation_Seeded.RandomSeedInfo"); }

	// Functions

	void Spawn(FParticleEmitterInstance * Owner, int Offset, float SpawnTime, FBaseParticle * ParticleBase) { NativeCall<void, FParticleEmitterInstance *, int, float, FBaseParticle *>(this, "UParticleModuleMeshRotation_Seeded.Spawn", Owner, Offset, SpawnTime, ParticleBase); }
};

