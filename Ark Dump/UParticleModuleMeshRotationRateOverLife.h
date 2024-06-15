#pragma once

#include "BaseDeclarations.h"
#include "UParticleModuleRotationRateBase.h"
#include "UParticleModule.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UParticleModuleMeshRotationRateOverLife : UParticleModuleRotationRateBase
{
	char __padding[0x40L];

	// Functions

	void PostInitProperties() { NativeCall<void>(this, "UParticleModuleMeshRotationRateOverLife.PostInitProperties"); }
	void SetToSensibleDefaults(UParticleEmitter * Owner) { NativeCall<void, UParticleEmitter *>(this, "UParticleModuleMeshRotationRateOverLife.SetToSensibleDefaults", Owner); }
	void Spawn(FParticleEmitterInstance * Owner, int Offset, float SpawnTime, FBaseParticle * ParticleBase) { NativeCall<void, FParticleEmitterInstance *, int, float, FBaseParticle *>(this, "UParticleModuleMeshRotationRateOverLife.Spawn", Owner, Offset, SpawnTime, ParticleBase); }
	void Update(FParticleEmitterInstance * Owner, int Offset, float DeltaTime) { NativeCall<void, FParticleEmitterInstance *, int, float>(this, "UParticleModuleMeshRotationRateOverLife.Update", Owner, Offset, DeltaTime); }
};

