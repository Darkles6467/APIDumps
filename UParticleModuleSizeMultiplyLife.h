#pragma once

#include "BaseDeclarations.h"
#include "UParticleModuleSizeBase.h"
#include "UParticleModule.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UParticleModuleSizeMultiplyLife : UParticleModuleSizeBase
{
	char __padding[0x40L];

	// Functions

	void CompileModule(FParticleEmitterBuildInfo * EmitterInfo) { NativeCall<void, FParticleEmitterBuildInfo *>(this, "UParticleModuleSizeMultiplyLife.CompileModule", EmitterInfo); }
	void InitializeDefaults() { NativeCall<void>(this, "UParticleModuleSizeMultiplyLife.InitializeDefaults"); }
	void PostInitProperties() { NativeCall<void>(this, "UParticleModuleSizeMultiplyLife.PostInitProperties"); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UParticleModuleSizeMultiplyLife.Serialize", Ar); }
	void Spawn(FParticleEmitterInstance * Owner, int Offset, float SpawnTime, FBaseParticle * ParticleBase) { NativeCall<void, FParticleEmitterInstance *, int, float, FBaseParticle *>(this, "UParticleModuleSizeMultiplyLife.Spawn", Owner, Offset, SpawnTime, ParticleBase); }
	void Update(FParticleEmitterInstance * Owner, int Offset, float DeltaTime) { NativeCall<void, FParticleEmitterInstance *, int, float>(this, "UParticleModuleSizeMultiplyLife.Update", Owner, Offset, DeltaTime); }
};

