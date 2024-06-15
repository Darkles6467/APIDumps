#pragma once

#include "BaseDeclarations.h"
#include "UParticleModuleRotationRateBase.h"
#include "UParticleModule.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UParticleModuleMeshRotationRateMultiplyLife : UParticleModuleRotationRateBase
{
	char __padding[0x38L];

	// Functions

	void PostInitProperties() { NativeCall<void>(this, "UParticleModuleMeshRotationRateMultiplyLife.PostInitProperties"); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UParticleModuleMeshRotationRateMultiplyLife.Serialize", Ar); }
	void Spawn(FParticleEmitterInstance * Owner, int Offset, float SpawnTime, FBaseParticle * ParticleBase) { NativeCall<void, FParticleEmitterInstance *, int, float, FBaseParticle *>(this, "UParticleModuleMeshRotationRateMultiplyLife.Spawn", Owner, Offset, SpawnTime, ParticleBase); }
	void Update(FParticleEmitterInstance * Owner, int Offset, float DeltaTime) { NativeCall<void, FParticleEmitterInstance *, int, float>(this, "UParticleModuleMeshRotationRateMultiplyLife.Update", Owner, Offset, DeltaTime); }
};

