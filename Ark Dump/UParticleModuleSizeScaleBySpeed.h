#pragma once

#include "BaseDeclarations.h"
#include "UParticleModuleSizeBase.h"
#include "UParticleModule.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UParticleModuleSizeScaleBySpeed : UParticleModuleSizeBase
{
	char __padding[0x10L];
	FVector2D& SpeedScaleField() { return *GetNativePointerField<FVector2D*>(this, "UParticleModuleSizeScaleBySpeed.SpeedScale"); }
	FVector2D& MaxScaleField() { return *GetNativePointerField<FVector2D*>(this, "UParticleModuleSizeScaleBySpeed.MaxScale"); }

	// Functions

	void CompileModule(FParticleEmitterBuildInfo * EmitterInfo) { NativeCall<void, FParticleEmitterBuildInfo *>(this, "UParticleModuleSizeScaleBySpeed.CompileModule", EmitterInfo); }
	void Update(FParticleEmitterInstance * Owner, int Offset, float DeltaTime) { NativeCall<void, FParticleEmitterInstance *, int, float>(this, "UParticleModuleSizeScaleBySpeed.Update", Owner, Offset, DeltaTime); }
};

