#pragma once

#include "BaseDeclarations.h"
#include "UParticleModuleTypeDataBase.h"
#include "UParticleModule.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UParticleModuleTypeDataGpu : UParticleModuleTypeDataBase
{
	char __padding[0x3e0L];
	FGPUSpriteEmitterInfo& EmitterInfoField() { return *GetNativePointerField<FGPUSpriteEmitterInfo*>(this, "UParticleModuleTypeDataGpu.EmitterInfo"); }
	FGPUSpriteResourceData& ResourceDataField() { return *GetNativePointerField<FGPUSpriteResourceData*>(this, "UParticleModuleTypeDataGpu.ResourceData"); }
	float& CameraMotionBlurAmountField() { return *GetNativePointerField<float*>(this, "UParticleModuleTypeDataGpu.CameraMotionBlurAmount"); }

	// Functions

	void BeginDestroy() { NativeCall<void>(this, "UParticleModuleTypeDataGpu.BeginDestroy"); }
	void Build(FParticleEmitterBuildInfo * EmitterBuildInfo) { NativeCall<void, FParticleEmitterBuildInfo *>(this, "UParticleModuleTypeDataGpu.Build", EmitterBuildInfo); }
};

