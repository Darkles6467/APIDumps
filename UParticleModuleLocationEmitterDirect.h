#pragma once

#include "BaseDeclarations.h"
#include "UParticleModuleLocationBase.h"
#include "UParticleModule.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UParticleModuleLocationEmitterDirect : UParticleModuleLocationBase
{
	char __padding[0x8L];
	FName& EmitterNameField() { return *GetNativePointerField<FName*>(this, "UParticleModuleLocationEmitterDirect.EmitterName"); }

	// Functions

	void Spawn(FParticleEmitterInstance * Owner, int Offset, float SpawnTime, FBaseParticle * ParticleBase) { NativeCall<void, FParticleEmitterInstance *, int, float, FBaseParticle *>(this, "UParticleModuleLocationEmitterDirect.Spawn", Owner, Offset, SpawnTime, ParticleBase); }
	void Update(FParticleEmitterInstance * Owner, int Offset, float DeltaTime) { NativeCall<void, FParticleEmitterInstance *, int, float>(this, "UParticleModuleLocationEmitterDirect.Update", Owner, Offset, DeltaTime); }
};

