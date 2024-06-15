#pragma once

#include "BaseDeclarations.h"
#include "UParticleModule.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UParticleModuleCameraBase : UParticleModule
{

	// Functions

};

struct UParticleModuleCameraOffset : UParticleModuleCameraBase
{
	char __padding[0x40L];
	TEnumAsByte<enum EParticleCameraOffsetUpdateMethod>& UpdateMethodField() { return *GetNativePointerField<TEnumAsByte<enum EParticleCameraOffsetUpdateMethod>*>(this, "UParticleModuleCameraOffset.UpdateMethod"); }

	// Functions

	void InitializeDefaults() { NativeCall<void>(this, "UParticleModuleCameraOffset.InitializeDefaults"); }
	void PostInitProperties() { NativeCall<void>(this, "UParticleModuleCameraOffset.PostInitProperties"); }
	unsigned int RequiredBytes(FParticleEmitterInstance * Owner) { return NativeCall<unsigned int, FParticleEmitterInstance *>(this, "UParticleModuleCameraOffset.RequiredBytes", Owner); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UParticleModuleCameraOffset.Serialize", Ar); }
	void Spawn(FParticleEmitterInstance * Owner, int Offset, float SpawnTime, FBaseParticle * ParticleBase) { NativeCall<void, FParticleEmitterInstance *, int, float, FBaseParticle *>(this, "UParticleModuleCameraOffset.Spawn", Owner, Offset, SpawnTime, ParticleBase); }
	void Update(FParticleEmitterInstance * Owner, int Offset, float DeltaTime) { NativeCall<void, FParticleEmitterInstance *, int, float>(this, "UParticleModuleCameraOffset.Update", Owner, Offset, DeltaTime); }
};

