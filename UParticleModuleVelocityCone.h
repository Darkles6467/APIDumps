#pragma once

#include "BaseDeclarations.h"
#include "UParticleModuleVelocityBase.h"
#include "UParticleModule.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UParticleModuleVelocityCone : UParticleModuleVelocityBase
{
	char __padding[0x80L];
	FVector& DirectionField() { return *GetNativePointerField<FVector*>(this, "UParticleModuleVelocityCone.Direction"); }

	// Functions

	void InitializeDefaults() { NativeCall<void>(this, "UParticleModuleVelocityCone.InitializeDefaults"); }
	void PostInitProperties() { NativeCall<void>(this, "UParticleModuleVelocityCone.PostInitProperties"); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UParticleModuleVelocityCone.Serialize", Ar); }
	void Spawn(FParticleEmitterInstance * Owner, int Offset, float SpawnTime, FBaseParticle * ParticleBase) { NativeCall<void, FParticleEmitterInstance *, int, float, FBaseParticle *>(this, "UParticleModuleVelocityCone.Spawn", Owner, Offset, SpawnTime, ParticleBase); }
	void SpawnEx(FParticleEmitterInstance * Owner, int Offset, float SpawnTime, FRandomStream * InRandomStream, FBaseParticle * ParticleBase) { NativeCall<void, FParticleEmitterInstance *, int, float, FRandomStream *, FBaseParticle *>(this, "UParticleModuleVelocityCone.SpawnEx", Owner, Offset, SpawnTime, InRandomStream, ParticleBase); }
};

