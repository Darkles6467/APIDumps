#pragma once

#include "BaseDeclarations.h"
#include "UParticleModuleAttractorBase.h"
#include "UParticleModule.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UParticleModuleAttractorPointGravity : UParticleModuleAttractorBase
{
	char __padding[0x18L];
	FVector& PositionField() { return *GetNativePointerField<FVector*>(this, "UParticleModuleAttractorPointGravity.Position"); }
	float& RadiusField() { return *GetNativePointerField<float*>(this, "UParticleModuleAttractorPointGravity.Radius"); }

	// Functions

	void CompileModule(FParticleEmitterBuildInfo * EmitterInfo) { NativeCall<void, FParticleEmitterBuildInfo *>(this, "UParticleModuleAttractorPointGravity.CompileModule", EmitterInfo); }
	void InitializeDefaults() { NativeCall<void>(this, "UParticleModuleAttractorPointGravity.InitializeDefaults"); }
	void PostInitProperties() { NativeCall<void>(this, "UParticleModuleAttractorPointGravity.PostInitProperties"); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UParticleModuleAttractorPointGravity.Serialize", Ar); }
};

