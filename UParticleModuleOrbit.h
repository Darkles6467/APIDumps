#pragma once

#include "BaseDeclarations.h"
#include "UParticleModule.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UParticleModuleOrbitBase : UParticleModule
{
	char __padding[0x8L];

	// Functions

};

struct UParticleModuleOrbit : UParticleModuleOrbitBase
{
	char __padding[0xc8L];
	TEnumAsByte<enum EOrbitChainMode>& ChainModeField() { return *GetNativePointerField<TEnumAsByte<enum EOrbitChainMode>*>(this, "UParticleModuleOrbit.ChainMode"); }
	FOrbitOptions& OffsetOptionsField() { return *GetNativePointerField<FOrbitOptions*>(this, "UParticleModuleOrbit.OffsetOptions"); }
	FOrbitOptions& RotationOptionsField() { return *GetNativePointerField<FOrbitOptions*>(this, "UParticleModuleOrbit.RotationOptions"); }
	FOrbitOptions& RotationRateOptionsField() { return *GetNativePointerField<FOrbitOptions*>(this, "UParticleModuleOrbit.RotationRateOptions"); }

	// Functions

	void CompileModule(FParticleEmitterBuildInfo * EmitterInfo) { NativeCall<void, FParticleEmitterBuildInfo *>(this, "UParticleModuleOrbit.CompileModule", EmitterInfo); }
	void InitializeDefaults() { NativeCall<void>(this, "UParticleModuleOrbit.InitializeDefaults"); }
	void PostInitProperties() { NativeCall<void>(this, "UParticleModuleOrbit.PostInitProperties"); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UParticleModuleOrbit.Serialize", Ar); }
	void Spawn(FParticleEmitterInstance * Owner, int Offset, float SpawnTime, FBaseParticle * ParticleBase) { NativeCall<void, FParticleEmitterInstance *, int, float, FBaseParticle *>(this, "UParticleModuleOrbit.Spawn", Owner, Offset, SpawnTime, ParticleBase); }
	void Update(FParticleEmitterInstance * Owner, int Offset, float DeltaTime) { NativeCall<void, FParticleEmitterInstance *, int, float>(this, "UParticleModuleOrbit.Update", Owner, Offset, DeltaTime); }
};

