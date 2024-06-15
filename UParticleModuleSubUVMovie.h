#pragma once

#include "BaseDeclarations.h"
#include "UParticleModule.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FParticleCurvePair.h"

struct UParticleModuleSubUVBase : UParticleModule
{

	// Functions

};

struct UParticleModuleSubUV : UParticleModuleSubUVBase
{
	char __padding[0x40L];

	// Functions

	void CompileModule(FParticleEmitterBuildInfo * EmitterInfo) { NativeCall<void, FParticleEmitterBuildInfo *>(this, "UParticleModuleSubUV.CompileModule", EmitterInfo); }
	float DetermineImageIndex(FParticleEmitterInstance * Owner, int Offset, FBaseParticle * Particle, EParticleSubUVInterpMethod InterpMethod, FFullSubUVPayload * SubUVPayload, float DeltaTime) { return NativeCall<float, FParticleEmitterInstance *, int, FBaseParticle *, EParticleSubUVInterpMethod, FFullSubUVPayload *, float>(this, "UParticleModuleSubUV.DetermineImageIndex", Owner, Offset, Particle, InterpMethod, SubUVPayload, DeltaTime); }
	void PostInitProperties() { NativeCall<void>(this, "UParticleModuleSubUV.PostInitProperties"); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UParticleModuleSubUV.Serialize", Ar); }
	void SetToSensibleDefaults(UParticleEmitter * Owner) { NativeCall<void, UParticleEmitter *>(this, "UParticleModuleSubUV.SetToSensibleDefaults", Owner); }
	void Spawn(FParticleEmitterInstance * Owner, int Offset, float SpawnTime, FBaseParticle * ParticleBase) { NativeCall<void, FParticleEmitterInstance *, int, float, FBaseParticle *>(this, "UParticleModuleSubUV.Spawn", Owner, Offset, SpawnTime, ParticleBase); }
	void Update(FParticleEmitterInstance * Owner, int Offset, float DeltaTime) { NativeCall<void, FParticleEmitterInstance *, int, float>(this, "UParticleModuleSubUV.Update", Owner, Offset, DeltaTime); }
};

struct UParticleModuleSubUVMovie : UParticleModuleSubUV
{
	char __padding[0x48L];
	int& StartingFrameField() { return *GetNativePointerField<int*>(this, "UParticleModuleSubUVMovie.StartingFrame"); }

	// Functions

	float DetermineImageIndex(FParticleEmitterInstance * Owner, int Offset, FBaseParticle * Particle, EParticleSubUVInterpMethod InterpMethod, FFullSubUVPayload * SubUVPayload, float DeltaTime) { return NativeCall<float, FParticleEmitterInstance *, int, FBaseParticle *, EParticleSubUVInterpMethod, FFullSubUVPayload *, float>(this, "UParticleModuleSubUVMovie.DetermineImageIndex", Owner, Offset, Particle, InterpMethod, SubUVPayload, DeltaTime); }
	void GetCurveObjects(TArray<FParticleCurvePair> * OutCurves) { NativeCall<void, TArray<FParticleCurvePair> *>(this, "UParticleModuleSubUVMovie.GetCurveObjects", OutCurves); }
	void InitializeDefaults() { NativeCall<void>(this, "UParticleModuleSubUVMovie.InitializeDefaults"); }
	void PostInitProperties() { NativeCall<void>(this, "UParticleModuleSubUVMovie.PostInitProperties"); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UParticleModuleSubUVMovie.Serialize", Ar); }
	void SetToSensibleDefaults(UParticleEmitter * Owner) { NativeCall<void, UParticleEmitter *>(this, "UParticleModuleSubUVMovie.SetToSensibleDefaults", Owner); }
	void Spawn(FParticleEmitterInstance * Owner, int Offset, float SpawnTime, FBaseParticle * ParticleBase) { NativeCall<void, FParticleEmitterInstance *, int, float, FBaseParticle *>(this, "UParticleModuleSubUVMovie.Spawn", Owner, Offset, SpawnTime, ParticleBase); }
};

