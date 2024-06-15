#pragma once

#include "BaseDeclarations.h"
#include "UParticleModuleLocationBase.h"

struct UParticleModuleLocation : UParticleModuleLocationBase
{
	char __padding[0x40L];
	float& DistributeOverNPointsField() { return *GetNativePointerField<float*>(this, "UParticleModuleLocation.DistributeOverNPoints"); }
	float& DistributeThresholdField() { return *GetNativePointerField<float*>(this, "UParticleModuleLocation.DistributeThreshold"); }

	// Functions

	void InitializeDefaults() { NativeCall<void>(this, "UParticleModuleLocation.InitializeDefaults"); }
	void PostInitProperties() { NativeCall<void>(this, "UParticleModuleLocation.PostInitProperties"); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UParticleModuleLocation.Serialize", Ar); }
	void Spawn(FParticleEmitterInstance * Owner, int Offset, float SpawnTime, FBaseParticle * ParticleBase) { NativeCall<void, FParticleEmitterInstance *, int, float, FBaseParticle *>(this, "UParticleModuleLocation.Spawn", Owner, Offset, SpawnTime, ParticleBase); }
	void SpawnEx(FParticleEmitterInstance * Owner, int Offset, float SpawnTime, FRandomStream * InRandomStream, FBaseParticle * ParticleBase) { NativeCall<void, FParticleEmitterInstance *, int, float, FRandomStream *, FBaseParticle *>(this, "UParticleModuleLocation.SpawnEx", Owner, Offset, SpawnTime, InRandomStream, ParticleBase); }
};

