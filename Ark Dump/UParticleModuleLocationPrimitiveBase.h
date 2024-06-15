#pragma once

#include "BaseDeclarations.h"
#include "UParticleModuleLocationBase.h"

struct UParticleModuleLocationPrimitiveBase : UParticleModuleLocationBase
{
	char __padding[0x78L];

	// Functions

	void DetermineUnitDirection(FParticleEmitterInstance * Owner, FVector * vUnitDir, FRandomStream * InRandomStream) { NativeCall<void, FParticleEmitterInstance *, FVector *, FRandomStream *>(this, "UParticleModuleLocationPrimitiveBase.DetermineUnitDirection", Owner, vUnitDir, InRandomStream); }
	void InitializeDefaults() { NativeCall<void>(this, "UParticleModuleLocationPrimitiveBase.InitializeDefaults"); }
	void PostInitProperties() { NativeCall<void>(this, "UParticleModuleLocationPrimitiveBase.PostInitProperties"); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UParticleModuleLocationPrimitiveBase.Serialize", Ar); }
};

