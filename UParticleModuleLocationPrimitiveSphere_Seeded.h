#pragma once

#include "BaseDeclarations.h"
#include "UParticleModuleLocationPrimitiveBase.h"
#include "UParticleModuleLocationBase.h"
#include "UParticleModule.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UParticleModuleLocationPrimitiveSphere : UParticleModuleLocationPrimitiveBase
{
	char __padding[0x38L];

	// Functions

	void InitializeDefaults() { NativeCall<void>(this, "UParticleModuleLocationPrimitiveSphere.InitializeDefaults"); }
	void PostInitProperties() { NativeCall<void>(this, "UParticleModuleLocationPrimitiveSphere.PostInitProperties"); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UParticleModuleLocationPrimitiveSphere.Serialize", Ar); }
	void Spawn(FParticleEmitterInstance * Owner, int Offset, float SpawnTime, FBaseParticle * ParticleBase) { NativeCall<void, FParticleEmitterInstance *, int, float, FBaseParticle *>(this, "UParticleModuleLocationPrimitiveSphere.Spawn", Owner, Offset, SpawnTime, ParticleBase); }
	void SpawnEx(FParticleEmitterInstance * Owner, int Offset, float SpawnTime, FRandomStream * InRandomStream, FBaseParticle * ParticleBase) { NativeCall<void, FParticleEmitterInstance *, int, float, FRandomStream *, FBaseParticle *>(this, "UParticleModuleLocationPrimitiveSphere.SpawnEx", Owner, Offset, SpawnTime, InRandomStream, ParticleBase); }
};

struct UParticleModuleLocationPrimitiveSphere_Seeded : UParticleModuleLocationPrimitiveSphere
{
	char __padding[0x20L];
	FParticleRandomSeedInfo& RandomSeedInfoField() { return *GetNativePointerField<FParticleRandomSeedInfo*>(this, "UParticleModuleLocationPrimitiveSphere_Seeded.RandomSeedInfo"); }

	// Functions

	void EmitterLoopingNotify(FParticleEmitterInstance * Owner) { NativeCall<void, FParticleEmitterInstance *>(this, "UParticleModuleLocationPrimitiveSphere_Seeded.EmitterLoopingNotify", Owner); }
	unsigned int PrepPerInstanceBlock(FParticleEmitterInstance * Owner, void * InstData) { return NativeCall<unsigned int, FParticleEmitterInstance *, void *>(this, "UParticleModuleLocationPrimitiveSphere_Seeded.PrepPerInstanceBlock", Owner, InstData); }
	unsigned int RequiredBytesPerInstance(FParticleEmitterInstance * Owner) { return NativeCall<unsigned int, FParticleEmitterInstance *>(this, "UParticleModuleLocationPrimitiveSphere_Seeded.RequiredBytesPerInstance", Owner); }
	void Spawn(FParticleEmitterInstance * Owner, int Offset, float SpawnTime, FBaseParticle * ParticleBase) { NativeCall<void, FParticleEmitterInstance *, int, float, FBaseParticle *>(this, "UParticleModuleLocationPrimitiveSphere_Seeded.Spawn", Owner, Offset, SpawnTime, ParticleBase); }
	FParticleRandomSeedInfo * GetRandomSeedInfo() { return NativeCall<FParticleRandomSeedInfo *>(this, "UParticleModuleLocationPrimitiveSphere_Seeded.GetRandomSeedInfo"); }
};

