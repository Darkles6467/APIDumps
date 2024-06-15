#pragma once

#include "BaseDeclarations.h"
#include "UParticleModuleRotationRateBase.h"
#include "UParticleModule.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UParticleModuleRotationRateMultiplyLife : UParticleModuleRotationRateBase
{
	char __padding[0x38L];

	// Functions

	void InitializeDefaults() { NativeCall<void>(this, "UParticleModuleRotationRateMultiplyLife.InitializeDefaults"); }
	void PostInitProperties() { NativeCall<void>(this, "UParticleModuleRotationRateMultiplyLife.PostInitProperties"); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UParticleModuleRotationRateMultiplyLife.Serialize", Ar); }
	void SetToSensibleDefaults(UParticleEmitter * Owner) { NativeCall<void, UParticleEmitter *>(this, "UParticleModuleRotationRateMultiplyLife.SetToSensibleDefaults", Owner); }
	void Spawn(FParticleEmitterInstance * Owner, int Offset, float SpawnTime, FBaseParticle * ParticleBase) { NativeCall<void, FParticleEmitterInstance *, int, float, FBaseParticle *>(this, "UParticleModuleRotationRateMultiplyLife.Spawn", Owner, Offset, SpawnTime, ParticleBase); }
	void Update(FParticleEmitterInstance * Owner, int Offset, float DeltaTime) { NativeCall<void, FParticleEmitterInstance *, int, float>(this, "UParticleModuleRotationRateMultiplyLife.Update", Owner, Offset, DeltaTime); }
};

