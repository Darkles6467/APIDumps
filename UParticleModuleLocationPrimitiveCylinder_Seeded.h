#pragma once

#include "BaseDeclarations.h"
#include "UParticleModuleLocationPrimitiveBase.h"
#include "UParticleModuleLocationBase.h"
#include "UParticleModule.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UParticleModuleLocationPrimitiveCylinder : UParticleModuleLocationPrimitiveBase
{
	char __padding[0x80L];
	TEnumAsByte<enum CylinderHeightAxis>& HeightAxisField() { return *GetNativePointerField<TEnumAsByte<enum CylinderHeightAxis>*>(this, "UParticleModuleLocationPrimitiveCylinder.HeightAxis"); }

	// Functions

	void InitializeDefaults() { NativeCall<void>(this, "UParticleModuleLocationPrimitiveCylinder.InitializeDefaults"); }
	void PostInitProperties() { NativeCall<void>(this, "UParticleModuleLocationPrimitiveCylinder.PostInitProperties"); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UParticleModuleLocationPrimitiveCylinder.Serialize", Ar); }
	void Spawn(FParticleEmitterInstance * Owner, int Offset, float SpawnTime, FBaseParticle * ParticleBase) { NativeCall<void, FParticleEmitterInstance *, int, float, FBaseParticle *>(this, "UParticleModuleLocationPrimitiveCylinder.Spawn", Owner, Offset, SpawnTime, ParticleBase); }
	void SpawnEx(FParticleEmitterInstance * Owner, int Offset, float SpawnTime, FRandomStream * InRandomStream, FBaseParticle * ParticleBase) { NativeCall<void, FParticleEmitterInstance *, int, float, FRandomStream *, FBaseParticle *>(this, "UParticleModuleLocationPrimitiveCylinder.SpawnEx", Owner, Offset, SpawnTime, InRandomStream, ParticleBase); }
};

struct UParticleModuleLocationPrimitiveCylinder_Seeded : UParticleModuleLocationPrimitiveCylinder
{
	char __padding[0x20L];
	FParticleRandomSeedInfo& RandomSeedInfoField() { return *GetNativePointerField<FParticleRandomSeedInfo*>(this, "UParticleModuleLocationPrimitiveCylinder_Seeded.RandomSeedInfo"); }

	// Functions

	void EmitterLoopingNotify(FParticleEmitterInstance * Owner) { NativeCall<void, FParticleEmitterInstance *>(this, "UParticleModuleLocationPrimitiveCylinder_Seeded.EmitterLoopingNotify", Owner); }
	unsigned int PrepPerInstanceBlock(FParticleEmitterInstance * Owner, void * InstData) { return NativeCall<unsigned int, FParticleEmitterInstance *, void *>(this, "UParticleModuleLocationPrimitiveCylinder_Seeded.PrepPerInstanceBlock", Owner, InstData); }
	unsigned int RequiredBytesPerInstance(FParticleEmitterInstance * Owner) { return NativeCall<unsigned int, FParticleEmitterInstance *>(this, "UParticleModuleLocationPrimitiveCylinder_Seeded.RequiredBytesPerInstance", Owner); }
	void Spawn(FParticleEmitterInstance * Owner, int Offset, float SpawnTime, FBaseParticle * ParticleBase) { NativeCall<void, FParticleEmitterInstance *, int, float, FBaseParticle *>(this, "UParticleModuleLocationPrimitiveCylinder_Seeded.Spawn", Owner, Offset, SpawnTime, ParticleBase); }
};

