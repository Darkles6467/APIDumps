#pragma once

#include "BaseDeclarations.h"
#include "UParticleModule.h"

struct UParticleModuleSpawnBase : UParticleModule
{
	char __padding[0x8L];

	// Functions

	bool GetBurstCount(FParticleEmitterInstance * Owner, int Offset, float OldLeftover, float DeltaTime, int * Number) { return NativeCall<bool, FParticleEmitterInstance *, int, float, float, int *>(this, "UParticleModuleSpawnBase.GetBurstCount", Owner, Offset, OldLeftover, DeltaTime, Number); }
	bool GetSpawnAmount(FParticleEmitterInstance * Owner, int Offset, float OldLeftover, float DeltaTime, int * Number, float * Rate) { return NativeCall<bool, FParticleEmitterInstance *, int, float, float, int *, float *>(this, "UParticleModuleSpawnBase.GetSpawnAmount", Owner, Offset, OldLeftover, DeltaTime, Number, Rate); }
};

