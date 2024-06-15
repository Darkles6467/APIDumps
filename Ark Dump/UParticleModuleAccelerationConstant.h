#pragma once

#include "BaseDeclarations.h"
#include "UParticleModuleAccelerationBase.h"
#include "UParticleModule.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UParticleModuleAccelerationConstant : UParticleModuleAccelerationBase
{
	char __padding[0x10L];
	FVector& AccelerationField() { return *GetNativePointerField<FVector*>(this, "UParticleModuleAccelerationConstant.Acceleration"); }

	// Functions

	void CompileModule(FParticleEmitterBuildInfo * EmitterInfo) { NativeCall<void, FParticleEmitterBuildInfo *>(this, "UParticleModuleAccelerationConstant.CompileModule", EmitterInfo); }
	void Spawn(FParticleEmitterInstance * Owner, int Offset, float SpawnTime, FBaseParticle * ParticleBase) { NativeCall<void, FParticleEmitterInstance *, int, float, FBaseParticle *>(this, "UParticleModuleAccelerationConstant.Spawn", Owner, Offset, SpawnTime, ParticleBase); }
	void Update(FParticleEmitterInstance * Owner, int Offset, float DeltaTime) { NativeCall<void, FParticleEmitterInstance *, int, float>(this, "UParticleModuleAccelerationConstant.Update", Owner, Offset, DeltaTime); }
};

