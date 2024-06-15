#pragma once

#include "BaseDeclarations.h"
#include "UParticleModule.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UParticleModuleMaterialBase : UParticleModule
{

	// Functions

};

struct UParticleModuleMeshMaterial : UParticleModuleMaterialBase
{
	char __padding[0x10L];

	// Functions

	unsigned int RequiredBytesPerInstance(FParticleEmitterInstance * Owner) { return NativeCall<unsigned int, FParticleEmitterInstance *>(this, "UParticleModuleMeshMaterial.RequiredBytesPerInstance", Owner); }
};

