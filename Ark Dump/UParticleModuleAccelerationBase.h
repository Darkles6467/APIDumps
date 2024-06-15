#pragma once

#include "BaseDeclarations.h"
#include "UParticleModule.h"

struct UParticleModuleAccelerationBase : UParticleModule
{
	char __padding[0x8L];

	// Functions

	void SetToSensibleDefaults(UParticleEmitter * Owner) { NativeCall<void, UParticleEmitter *>(this, "UParticleModuleAccelerationBase.SetToSensibleDefaults", Owner); }
};

