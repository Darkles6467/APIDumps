#pragma once

#include "BaseDeclarations.h"
#include "UParticleModuleAccelerationBase.h"
#include "UParticleModule.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UParticleModuleAccelerationOverLifetime : UParticleModuleAccelerationBase
{
	char __padding[0x38L];

	// Functions

	void InitializeDefaults() { NativeCall<void>(this, "UParticleModuleAccelerationOverLifetime.InitializeDefaults"); }
	void PostInitProperties() { NativeCall<void>(this, "UParticleModuleAccelerationOverLifetime.PostInitProperties"); }
	void Update(FParticleEmitterInstance * Owner, int Offset, float DeltaTime) { NativeCall<void, FParticleEmitterInstance *, int, float>(this, "UParticleModuleAccelerationOverLifetime.Update", Owner, Offset, DeltaTime); }
};

