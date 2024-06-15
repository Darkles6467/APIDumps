#pragma once

#include "BaseDeclarations.h"
#include "UParticleModuleLocationBase.h"
#include "UParticleModule.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UParticleModuleSourceMovement : UParticleModuleLocationBase
{
	char __padding[0x38L];

	// Functions

	void FinalUpdate(FParticleEmitterInstance * Owner, int Offset, float DeltaTime) { NativeCall<void, FParticleEmitterInstance *, int, float>(this, "UParticleModuleSourceMovement.FinalUpdate", Owner, Offset, DeltaTime); }
	void PostInitProperties() { NativeCall<void>(this, "UParticleModuleSourceMovement.PostInitProperties"); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UParticleModuleSourceMovement.Serialize", Ar); }
};

