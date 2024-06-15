#pragma once

#include "BaseDeclarations.h"
#include "UParticleModuleAccelerationBase.h"
#include "UParticleModule.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UParticleModuleAccelerationDragScaleOverLife : UParticleModuleAccelerationBase
{
	char __padding[0x8L];

	// Functions

	void CompileModule(FParticleEmitterBuildInfo * EmitterInfo) { NativeCall<void, FParticleEmitterBuildInfo *>(this, "UParticleModuleAccelerationDragScaleOverLife.CompileModule", EmitterInfo); }
	void InitializeDefaults() { NativeCall<void>(this, "UParticleModuleAccelerationDragScaleOverLife.InitializeDefaults"); }
	void PostInitProperties() { NativeCall<void>(this, "UParticleModuleAccelerationDragScaleOverLife.PostInitProperties"); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UParticleModuleAccelerationDragScaleOverLife.Serialize", Ar); }
};

