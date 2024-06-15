#pragma once

#include "BaseDeclarations.h"
#include "UParticleModuleRotationBase.h"
#include "UParticleModule.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UParticleModuleRotationOverLifetime : UParticleModuleRotationBase
{
	char __padding[0x40L];

	// Functions

	void PostInitProperties() { NativeCall<void>(this, "UParticleModuleRotationOverLifetime.PostInitProperties"); }
	void Update(FParticleEmitterInstance * Owner, int Offset, float DeltaTime) { NativeCall<void, FParticleEmitterInstance *, int, float>(this, "UParticleModuleRotationOverLifetime.Update", Owner, Offset, DeltaTime); }
};

