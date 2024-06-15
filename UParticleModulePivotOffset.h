#pragma once

#include "BaseDeclarations.h"
#include "UParticleModuleLocationBase.h"
#include "UParticleModule.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UParticleModulePivotOffset : UParticleModuleLocationBase
{
	char __padding[0x8L];
	FVector2D& PivotOffsetField() { return *GetNativePointerField<FVector2D*>(this, "UParticleModulePivotOffset.PivotOffset"); }

	// Functions

	void CompileModule(FParticleEmitterBuildInfo * EmitterInfo) { NativeCall<void, FParticleEmitterBuildInfo *>(this, "UParticleModulePivotOffset.CompileModule", EmitterInfo); }
	void PostInitProperties() { NativeCall<void>(this, "UParticleModulePivotOffset.PostInitProperties"); }
};

