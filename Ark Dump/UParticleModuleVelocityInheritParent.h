#pragma once

#include "BaseDeclarations.h"
#include "UParticleModuleVelocityBase.h"
#include "UParticleModule.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UParticleModuleVelocityInheritParent : UParticleModuleVelocityBase
{
	char __padding[0x38L];

	// Functions

	void InitializeDefaults() { NativeCall<void>(this, "UParticleModuleVelocityInheritParent.InitializeDefaults"); }
	void PostInitProperties() { NativeCall<void>(this, "UParticleModuleVelocityInheritParent.PostInitProperties"); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UParticleModuleVelocityInheritParent.Serialize", Ar); }
	void Spawn(FParticleEmitterInstance * Owner, int Offset, float SpawnTime, FBaseParticle * ParticleBase) { NativeCall<void, FParticleEmitterInstance *, int, float, FBaseParticle *>(this, "UParticleModuleVelocityInheritParent.Spawn", Owner, Offset, SpawnTime, ParticleBase); }
};

