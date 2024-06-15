#pragma once

#include "BaseDeclarations.h"
#include "UParticleModuleAttractorBase.h"
#include "UParticleModule.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UParticleModuleAttractorPoint : UParticleModuleAttractorBase
{
	char __padding[0xb0L];

	// Functions

	void InitializeDefaults() { NativeCall<void>(this, "UParticleModuleAttractorPoint.InitializeDefaults"); }
	void PostInitProperties() { NativeCall<void>(this, "UParticleModuleAttractorPoint.PostInitProperties"); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UParticleModuleAttractorPoint.Serialize", Ar); }
	void Update(FParticleEmitterInstance * Owner, int Offset, float DeltaTime) { NativeCall<void, FParticleEmitterInstance *, int, float>(this, "UParticleModuleAttractorPoint.Update", Owner, Offset, DeltaTime); }
};

