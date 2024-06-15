#pragma once

#include "BaseDeclarations.h"
#include "UParticleModuleCollisionBase.h"
#include "UParticleModule.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UParticleModuleCollisionGPU : UParticleModuleCollisionBase
{
	char __padding[0x80L];
	float& FrictionField() { return *GetNativePointerField<float*>(this, "UParticleModuleCollisionGPU.Friction"); }
	float& RadiusScaleField() { return *GetNativePointerField<float*>(this, "UParticleModuleCollisionGPU.RadiusScale"); }
	float& RadiusBiasField() { return *GetNativePointerField<float*>(this, "UParticleModuleCollisionGPU.RadiusBias"); }
	TEnumAsByte<enum EParticleCollisionResponse::Type>& ResponseField() { return *GetNativePointerField<TEnumAsByte<enum EParticleCollisionResponse::Type>*>(this, "UParticleModuleCollisionGPU.Response"); }

	// Functions

	void CompileModule(FParticleEmitterBuildInfo * EmitterInfo) { NativeCall<void, FParticleEmitterBuildInfo *>(this, "UParticleModuleCollisionGPU.CompileModule", EmitterInfo); }
	void InitializeDefaults() { NativeCall<void>(this, "UParticleModuleCollisionGPU.InitializeDefaults"); }
	void PostInitProperties() { NativeCall<void>(this, "UParticleModuleCollisionGPU.PostInitProperties"); }
	void SetToSensibleDefaults(UParticleEmitter * Owner) { NativeCall<void, UParticleEmitter *>(this, "UParticleModuleCollisionGPU.SetToSensibleDefaults", Owner); }
};

