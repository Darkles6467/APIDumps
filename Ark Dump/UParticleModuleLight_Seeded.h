#pragma once

#include "BaseDeclarations.h"
#include "UParticleModule.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UParticleModuleLightBase : UParticleModule
{

	// Functions

};

struct UParticleModuleLight : UParticleModuleLightBase
{
	char __padding[0xe8L];
	bool& bUseInverseSquaredFalloffField() { return *GetNativePointerField<bool*>(this, "UParticleModuleLight.bUseInverseSquaredFalloff"); }
	bool& bAffectsTranslucencyField() { return *GetNativePointerField<bool*>(this, "UParticleModuleLight.bAffectsTranslucency"); }
	bool& bPreviewLightRadiusField() { return *GetNativePointerField<bool*>(this, "UParticleModuleLight.bPreviewLightRadius"); }
	float& SpawnFractionField() { return *GetNativePointerField<float*>(this, "UParticleModuleLight.SpawnFraction"); }

	// Functions

	EModuleType GetModuleType() { return NativeCall<EModuleType>(this, "UParticleModuleLight.GetModuleType"); }
	void InitializeDefaults() { NativeCall<void>(this, "UParticleModuleLight.InitializeDefaults"); }
	void PostInitProperties() { NativeCall<void>(this, "UParticleModuleLight.PostInitProperties"); }
	unsigned __int16 RequiredBytes() { return NativeCall<unsigned __int16>(this, "UParticleModuleLight.RequiredBytes"); }
	void SetToSensibleDefaults(UParticleEmitter * Owner) { NativeCall<void, UParticleEmitter *>(this, "UParticleModuleLight.SetToSensibleDefaults", Owner); }
	void Spawn(FParticleEmitterInstance * Owner, int Offset, float SpawnTime, FBaseParticle * ParticleBase) { NativeCall<void, FParticleEmitterInstance *, int, float, FBaseParticle *>(this, "UParticleModuleLight.Spawn", Owner, Offset, SpawnTime, ParticleBase); }
	void SpawnEx(FParticleEmitterInstance * Owner, int Offset, float SpawnTime, FRandomStream * InRandomStream, FBaseParticle * ParticleBase) { NativeCall<void, FParticleEmitterInstance *, int, float, FRandomStream *, FBaseParticle *>(this, "UParticleModuleLight.SpawnEx", Owner, Offset, SpawnTime, InRandomStream, ParticleBase); }
	void Update(FParticleEmitterInstance * Owner, int Offset, float DeltaTime) { NativeCall<void, FParticleEmitterInstance *, int, float>(this, "UParticleModuleLight.Update", Owner, Offset, DeltaTime); }
};

struct UParticleModuleLight_Seeded : UParticleModuleLight
{
	char __padding[0x20L];
	FParticleRandomSeedInfo& RandomSeedInfoField() { return *GetNativePointerField<FParticleRandomSeedInfo*>(this, "UParticleModuleLight_Seeded.RandomSeedInfo"); }

	// Functions

	void EmitterLoopingNotify(FParticleEmitterInstance * Owner) { NativeCall<void, FParticleEmitterInstance *>(this, "UParticleModuleLight_Seeded.EmitterLoopingNotify", Owner); }
	unsigned int PrepPerInstanceBlock(FParticleEmitterInstance * Owner, void * InstData) { return NativeCall<unsigned int, FParticleEmitterInstance *, void *>(this, "UParticleModuleLight_Seeded.PrepPerInstanceBlock", Owner, InstData); }
	unsigned int RequiredBytesPerInstance(FParticleEmitterInstance * Owner) { return NativeCall<unsigned int, FParticleEmitterInstance *>(this, "UParticleModuleLight_Seeded.RequiredBytesPerInstance", Owner); }
	void Spawn(FParticleEmitterInstance * Owner, int Offset, float SpawnTime, FBaseParticle * ParticleBase) { NativeCall<void, FParticleEmitterInstance *, int, float, FBaseParticle *>(this, "UParticleModuleLight_Seeded.Spawn", Owner, Offset, SpawnTime, ParticleBase); }
};

