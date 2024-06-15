#pragma once

#include "BaseDeclarations.h"
#include "UParticleModuleSizeBase.h"
#include "UParticleModule.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UParticleModuleSize : UParticleModuleSizeBase
{
	char __padding[0x38L];

	// Functions

	void CompileModule(FParticleEmitterBuildInfo * EmitterInfo) { NativeCall<void, FParticleEmitterBuildInfo *>(this, "UParticleModuleSize.CompileModule", EmitterInfo); }
	void InitializeDefaults() { NativeCall<void>(this, "UParticleModuleSize.InitializeDefaults"); }
	void PostInitProperties() { NativeCall<void>(this, "UParticleModuleSize.PostInitProperties"); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UParticleModuleSize.Serialize", Ar); }
	void Spawn(FParticleEmitterInstance * Owner, int Offset, float SpawnTime, FBaseParticle * ParticleBase) { NativeCall<void, FParticleEmitterInstance *, int, float, FBaseParticle *>(this, "UParticleModuleSize.Spawn", Owner, Offset, SpawnTime, ParticleBase); }
	void SpawnEx(FParticleEmitterInstance * Owner, int Offset, float SpawnTime, FRandomStream * InRandomStream, FBaseParticle * ParticleBase) { NativeCall<void, FParticleEmitterInstance *, int, float, FRandomStream *, FBaseParticle *>(this, "UParticleModuleSize.SpawnEx", Owner, Offset, SpawnTime, InRandomStream, ParticleBase); }
};

struct UParticleModuleSize_Seeded : UParticleModuleSize
{
	char __padding[0x20L];
	FParticleRandomSeedInfo& RandomSeedInfoField() { return *GetNativePointerField<FParticleRandomSeedInfo*>(this, "UParticleModuleSize_Seeded.RandomSeedInfo"); }

	// Functions

	void EmitterLoopingNotify(FParticleEmitterInstance * Owner) { NativeCall<void, FParticleEmitterInstance *>(this, "UParticleModuleSize_Seeded.EmitterLoopingNotify", Owner); }
	void Spawn(FParticleEmitterInstance * Owner, int Offset, float SpawnTime, FBaseParticle * ParticleBase) { NativeCall<void, FParticleEmitterInstance *, int, float, FBaseParticle *>(this, "UParticleModuleSize_Seeded.Spawn", Owner, Offset, SpawnTime, ParticleBase); }
};

