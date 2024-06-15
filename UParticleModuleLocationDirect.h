#pragma once

#include "BaseDeclarations.h"
#include "UParticleModuleLocationBase.h"
#include "UParticleModule.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UParticleModuleLocationDirect : UParticleModuleLocationBase
{
	char __padding[0xe0L];

	// Functions

	void InitializeDefaults() { NativeCall<void>(this, "UParticleModuleLocationDirect.InitializeDefaults"); }
	void PostInitProperties() { NativeCall<void>(this, "UParticleModuleLocationDirect.PostInitProperties"); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UParticleModuleLocationDirect.Serialize", Ar); }
	void Spawn(FParticleEmitterInstance * Owner, int Offset, float SpawnTime, FBaseParticle * ParticleBase) { NativeCall<void, FParticleEmitterInstance *, int, float, FBaseParticle *>(this, "UParticleModuleLocationDirect.Spawn", Owner, Offset, SpawnTime, ParticleBase); }
	void Update(FParticleEmitterInstance * Owner, int Offset, float DeltaTime) { NativeCall<void, FParticleEmitterInstance *, int, float>(this, "UParticleModuleLocationDirect.Update", Owner, Offset, DeltaTime); }
};

