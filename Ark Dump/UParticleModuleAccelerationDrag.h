#pragma once

#include "BaseDeclarations.h"
#include "UParticleModuleAccelerationBase.h"
#include "UParticleModule.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UParticleModuleAccelerationDrag : UParticleModuleAccelerationBase
{
	char __padding[0x8L];

	// Functions

	void CompileModule(FParticleEmitterBuildInfo * EmitterInfo) { NativeCall<void, FParticleEmitterBuildInfo *>(this, "UParticleModuleAccelerationDrag.CompileModule", EmitterInfo); }
	void InitializeDefaults() { NativeCall<void>(this, "UParticleModuleAccelerationDrag.InitializeDefaults"); }
	void PostInitProperties() { NativeCall<void>(this, "UParticleModuleAccelerationDrag.PostInitProperties"); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UParticleModuleAccelerationDrag.Serialize", Ar); }
	void Update(FParticleEmitterInstance * Owner, int Offset, float DeltaTime) { NativeCall<void, FParticleEmitterInstance *, int, float>(this, "UParticleModuleAccelerationDrag.Update", Owner, Offset, DeltaTime); }
};

