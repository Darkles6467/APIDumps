#pragma once

#include "BaseDeclarations.h"
#include "UParticleModule.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UParticleModuleLifetimeBase : UParticleModule
{

	// Functions

	float GetMaxLifetime(AActor * ForActor) { return NativeCall<float, AActor *>(this, "UParticleModuleLifetimeBase.GetMaxLifetime", ForActor); }
	float GetLifetimeValue(FParticleEmitterInstance * Owner, float InTime, UObject * Data) { return NativeCall<float, FParticleEmitterInstance *, float, UObject *>(this, "UParticleModuleLifetimeBase.GetLifetimeValue", Owner, InTime, Data); }
};

struct UParticleModuleLifetime : UParticleModuleLifetimeBase
{
	char __padding[0x38L];

	// Functions

	void CompileModule(FParticleEmitterBuildInfo * EmitterInfo) { NativeCall<void, FParticleEmitterBuildInfo *>(this, "UParticleModuleLifetime.CompileModule", EmitterInfo); }
	float GetLifetimeValue(FParticleEmitterInstance * Owner, float InTime, UObject * Data) { return NativeCall<float, FParticleEmitterInstance *, float, UObject *>(this, "UParticleModuleLifetime.GetLifetimeValue", Owner, InTime, Data); }
	float GetMaxLifetime() { return NativeCall<float>(this, "UParticleModuleLifetime.GetMaxLifetime"); }
	void InitializeDefaults() { NativeCall<void>(this, "UParticleModuleLifetime.InitializeDefaults"); }
	void PostInitProperties() { NativeCall<void>(this, "UParticleModuleLifetime.PostInitProperties"); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UParticleModuleLifetime.Serialize", Ar); }
	void SetToSensibleDefaults(UParticleEmitter * Owner) { NativeCall<void, UParticleEmitter *>(this, "UParticleModuleLifetime.SetToSensibleDefaults", Owner); }
	void Spawn(FParticleEmitterInstance * Owner, int Offset, float SpawnTime, FBaseParticle * ParticleBase) { NativeCall<void, FParticleEmitterInstance *, int, float, FBaseParticle *>(this, "UParticleModuleLifetime.Spawn", Owner, Offset, SpawnTime, ParticleBase); }
	void SpawnEx(FParticleEmitterInstance * Owner, int Offset, float SpawnTime, FRandomStream * InRandomStream, FBaseParticle * ParticleBase) { NativeCall<void, FParticleEmitterInstance *, int, float, FRandomStream *, FBaseParticle *>(this, "UParticleModuleLifetime.SpawnEx", Owner, Offset, SpawnTime, InRandomStream, ParticleBase); }
};

struct UParticleModuleLifetime_Seeded : UParticleModuleLifetime
{
	char __padding[0x20L];
	FParticleRandomSeedInfo& RandomSeedInfoField() { return *GetNativePointerField<FParticleRandomSeedInfo*>(this, "UParticleModuleLifetime_Seeded.RandomSeedInfo"); }

	// Functions

	float GetLifetimeValue(FParticleEmitterInstance * Owner, float InTime, UObject * Data) { return NativeCall<float, FParticleEmitterInstance *, float, UObject *>(this, "UParticleModuleLifetime_Seeded.GetLifetimeValue", Owner, InTime, Data); }
	void Spawn(FParticleEmitterInstance * Owner, int Offset, float SpawnTime, FBaseParticle * ParticleBase) { NativeCall<void, FParticleEmitterInstance *, int, float, FBaseParticle *>(this, "UParticleModuleLifetime_Seeded.Spawn", Owner, Offset, SpawnTime, ParticleBase); }
};

