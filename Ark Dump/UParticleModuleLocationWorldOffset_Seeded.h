#pragma once

#include "BaseDeclarations.h"
#include "UParticleModuleLocation.h"
#include "UParticleModuleLocationBase.h"
#include "UParticleModule.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UParticleModuleLocationWorldOffset : UParticleModuleLocation
{

	// Functions

	void SpawnEx(FParticleEmitterInstance * Owner, int Offset, float SpawnTime, FRandomStream * InRandomStream, FBaseParticle * ParticleBase) { NativeCall<void, FParticleEmitterInstance *, int, float, FRandomStream *, FBaseParticle *>(this, "UParticleModuleLocationWorldOffset.SpawnEx", Owner, Offset, SpawnTime, InRandomStream, ParticleBase); }
};

struct UParticleModuleLocationWorldOffset_Seeded : UParticleModuleLocationWorldOffset
{
	char __padding[0x20L];
	FParticleRandomSeedInfo& RandomSeedInfoField() { return *GetNativePointerField<FParticleRandomSeedInfo*>(this, "UParticleModuleLocationWorldOffset_Seeded.RandomSeedInfo"); }

	// Functions

	unsigned int PrepPerInstanceBlock(FParticleEmitterInstance * Owner, void * InstData) { return NativeCall<unsigned int, FParticleEmitterInstance *, void *>(this, "UParticleModuleLocationWorldOffset_Seeded.PrepPerInstanceBlock", Owner, InstData); }
	unsigned int RequiredBytesPerInstance(FParticleEmitterInstance * Owner) { return NativeCall<unsigned int, FParticleEmitterInstance *>(this, "UParticleModuleLocationWorldOffset_Seeded.RequiredBytesPerInstance", Owner); }
};

