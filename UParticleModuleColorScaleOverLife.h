#pragma once

#include "BaseDeclarations.h"
#include "UParticleModuleColorBase.h"
#include "UParticleModule.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UParticleModuleColorScaleOverLife : UParticleModuleColorBase
{
	char __padding[0x78L];

	// Functions

	void CompileModule(FParticleEmitterBuildInfo * EmitterInfo) { NativeCall<void, FParticleEmitterBuildInfo *>(this, "UParticleModuleColorScaleOverLife.CompileModule", EmitterInfo); }
	void InitializeDefaults() { NativeCall<void>(this, "UParticleModuleColorScaleOverLife.InitializeDefaults"); }
	void PostInitProperties() { NativeCall<void>(this, "UParticleModuleColorScaleOverLife.PostInitProperties"); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UParticleModuleColorScaleOverLife.Serialize", Ar); }
	void Spawn(FParticleEmitterInstance * Owner, int Offset, float SpawnTime, FBaseParticle * ParticleBase) { NativeCall<void, FParticleEmitterInstance *, int, float, FBaseParticle *>(this, "UParticleModuleColorScaleOverLife.Spawn", Owner, Offset, SpawnTime, ParticleBase); }
	void Update(FParticleEmitterInstance * Owner, int Offset, float DeltaTime) { NativeCall<void, FParticleEmitterInstance *, int, float>(this, "UParticleModuleColorScaleOverLife.Update", Owner, Offset, DeltaTime); }
	void SetToSensibleDefaults(UParticleEmitter * Owner) { NativeCall<void, UParticleEmitter *>(this, "UParticleModuleColorScaleOverLife.SetToSensibleDefaults", Owner); }
};

