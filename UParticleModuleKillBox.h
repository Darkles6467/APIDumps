#pragma once

#include "BaseDeclarations.h"
#include "UParticleModuleKillBase.h"
#include "UParticleModule.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UParticleModuleKillBox : UParticleModuleKillBase
{
	char __padding[0x78L];

	// Functions

	void InitializeDefaults() { NativeCall<void>(this, "UParticleModuleKillBox.InitializeDefaults"); }
	void PostInitProperties() { NativeCall<void>(this, "UParticleModuleKillBox.PostInitProperties"); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UParticleModuleKillBox.Serialize", Ar); }
	void Update(FParticleEmitterInstance * Owner, int Offset, float DeltaTime) { NativeCall<void, FParticleEmitterInstance *, int, float>(this, "UParticleModuleKillBox.Update", Owner, Offset, DeltaTime); }
};

