#pragma once

#include "BaseDeclarations.h"
#include "UParticleModuleKillBase.h"
#include "UParticleModule.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UParticleModuleKillHeight : UParticleModuleKillBase
{
	char __padding[0x40L];

	// Functions

	void InitializeDefaults() { NativeCall<void>(this, "UParticleModuleKillHeight.InitializeDefaults"); }
	void PostInitProperties() { NativeCall<void>(this, "UParticleModuleKillHeight.PostInitProperties"); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UParticleModuleKillHeight.Serialize", Ar); }
	void Update(FParticleEmitterInstance * Owner, int Offset, float DeltaTime) { NativeCall<void, FParticleEmitterInstance *, int, float>(this, "UParticleModuleKillHeight.Update", Owner, Offset, DeltaTime); }
};

