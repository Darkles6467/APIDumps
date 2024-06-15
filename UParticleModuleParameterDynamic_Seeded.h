#pragma once

#include "BaseDeclarations.h"
#include "UParticleModule.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FParticleCurvePair.h"

struct UParticleModuleParameterBase : UParticleModule
{

	// Functions

};

struct UParticleModuleParameterDynamic : UParticleModuleParameterBase
{
	char __padding[0x18L];
	TArray<FEmitterDynamicParameter>& DynamicParamsField() { return *GetNativePointerField<TArray<FEmitterDynamicParameter>*>(this, "UParticleModuleParameterDynamic.DynamicParams"); }
	int& UpdateFlagsField() { return *GetNativePointerField<int*>(this, "UParticleModuleParameterDynamic.UpdateFlags"); }

	// Functions

	void GetCurveObjects(TArray<FParticleCurvePair> * OutCurves) { NativeCall<void, TArray<FParticleCurvePair> *>(this, "UParticleModuleParameterDynamic.GetCurveObjects", OutCurves); }
	void PostInitProperties() { NativeCall<void>(this, "UParticleModuleParameterDynamic.PostInitProperties"); }
	void PostLoad() { NativeCall<void>(this, "UParticleModuleParameterDynamic.PostLoad"); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UParticleModuleParameterDynamic.Serialize", Ar); }
	void Spawn(FParticleEmitterInstance * Owner, int Offset, float SpawnTime, FBaseParticle * ParticleBase) { NativeCall<void, FParticleEmitterInstance *, int, float, FBaseParticle *>(this, "UParticleModuleParameterDynamic.Spawn", Owner, Offset, SpawnTime, ParticleBase); }
	void SpawnEx(FParticleEmitterInstance * Owner, int Offset, float SpawnTime, FRandomStream * InRandomStream, FBaseParticle * ParticleBase) { NativeCall<void, FParticleEmitterInstance *, int, float, FRandomStream *, FBaseParticle *>(this, "UParticleModuleParameterDynamic.SpawnEx", Owner, Offset, SpawnTime, InRandomStream, ParticleBase); }
	void Update(FParticleEmitterInstance * Owner, int Offset, float DeltaTime) { NativeCall<void, FParticleEmitterInstance *, int, float>(this, "UParticleModuleParameterDynamic.Update", Owner, Offset, DeltaTime); }
	void UpdateParameterNames(UMaterialInterface * InMaterialInterface, bool bIsMeshEmitter) { NativeCall<void, UMaterialInterface *, bool>(this, "UParticleModuleParameterDynamic.UpdateParameterNames", InMaterialInterface, bIsMeshEmitter); }
};

struct UParticleModuleParameterDynamic_Seeded : UParticleModuleParameterDynamic
{
	char __padding[0x20L];
	FParticleRandomSeedInfo& RandomSeedInfoField() { return *GetNativePointerField<FParticleRandomSeedInfo*>(this, "UParticleModuleParameterDynamic_Seeded.RandomSeedInfo"); }

	// Functions

	const FWeakObjectPtr * GetRandomSeedInfo() { return NativeCall<const FWeakObjectPtr *>(this, "UParticleModuleParameterDynamic_Seeded.GetRandomSeedInfo"); }
	void EmitterLoopingNotify(FParticleEmitterInstance * Owner) { NativeCall<void, FParticleEmitterInstance *>(this, "UParticleModuleParameterDynamic_Seeded.EmitterLoopingNotify", Owner); }
	unsigned int PrepPerInstanceBlock(FParticleEmitterInstance * Owner, void * InstData) { return NativeCall<unsigned int, FParticleEmitterInstance *, void *>(this, "UParticleModuleParameterDynamic_Seeded.PrepPerInstanceBlock", Owner, InstData); }
	unsigned int RequiredBytesPerInstance(FParticleEmitterInstance * Owner) { return NativeCall<unsigned int, FParticleEmitterInstance *>(this, "UParticleModuleParameterDynamic_Seeded.RequiredBytesPerInstance", Owner); }
	void Spawn(FParticleEmitterInstance * Owner, int Offset, float SpawnTime, FBaseParticle * ParticleBase) { NativeCall<void, FParticleEmitterInstance *, int, float, FBaseParticle *>(this, "UParticleModuleParameterDynamic_Seeded.Spawn", Owner, Offset, SpawnTime, ParticleBase); }
};

