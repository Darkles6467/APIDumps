#pragma once

#include "BaseDeclarations.h"
#include "UParticleModuleRotationRateBase.h"
#include "UParticleModule.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UParticleModuleRotationRate : UParticleModuleRotationRateBase
{
	char __padding[0x38L];

	// Functions

	void CompileModule(FParticleEmitterBuildInfo * EmitterInfo) { NativeCall<void, FParticleEmitterBuildInfo *>(this, "UParticleModuleRotationRate.CompileModule", EmitterInfo); }
	void InitializeDefaults() { NativeCall<void>(this, "UParticleModuleRotationRate.InitializeDefaults"); }
	void PostInitProperties() { NativeCall<void>(this, "UParticleModuleRotationRate.PostInitProperties"); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UParticleModuleRotationRate.Serialize", Ar); }
	void SetToSensibleDefaults(UParticleEmitter * Owner) { NativeCall<void, UParticleEmitter *>(this, "UParticleModuleRotationRate.SetToSensibleDefaults", Owner); }
	void Spawn(FParticleEmitterInstance * Owner, int Offset, float SpawnTime, FBaseParticle * ParticleBase) { NativeCall<void, FParticleEmitterInstance *, int, float, FBaseParticle *>(this, "UParticleModuleRotationRate.Spawn", Owner, Offset, SpawnTime, ParticleBase); }
};

struct UParticleModuleRotationRate_Seeded : UParticleModuleRotationRate
{
	char __padding[0x20L];
	FParticleRandomSeedInfo& RandomSeedInfoField() { return *GetNativePointerField<FParticleRandomSeedInfo*>(this, "UParticleModuleRotationRate_Seeded.RandomSeedInfo"); }

	// Functions

	void Spawn(FParticleEmitterInstance * Owner, int Offset, float SpawnTime, FBaseParticle * ParticleBase) { NativeCall<void, FParticleEmitterInstance *, int, float, FBaseParticle *>(this, "UParticleModuleRotationRate_Seeded.Spawn", Owner, Offset, SpawnTime, ParticleBase); }
};

