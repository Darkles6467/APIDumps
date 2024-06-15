#pragma once

#include "BaseDeclarations.h"
#include "UParticleModuleLocationBase.h"
#include "UParticleModule.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UParticleModuleLocationEmitter : UParticleModuleLocationBase
{
	char __padding[0x20L];
	FName& EmitterNameField() { return *GetNativePointerField<FName*>(this, "UParticleModuleLocationEmitter.EmitterName"); }
	TEnumAsByte<enum ELocationEmitterSelectionMethod>& SelectionMethodField() { return *GetNativePointerField<TEnumAsByte<enum ELocationEmitterSelectionMethod>*>(this, "UParticleModuleLocationEmitter.SelectionMethod"); }
	float& InheritSourceVelocityScaleField() { return *GetNativePointerField<float*>(this, "UParticleModuleLocationEmitter.InheritSourceVelocityScale"); }
	float& InheritSourceRotationScaleField() { return *GetNativePointerField<float*>(this, "UParticleModuleLocationEmitter.InheritSourceRotationScale"); }

	// Functions

	void Spawn(FParticleEmitterInstance * Owner, int Offset, float SpawnTime, FBaseParticle * ParticleBase) { NativeCall<void, FParticleEmitterInstance *, int, float, FBaseParticle *>(this, "UParticleModuleLocationEmitter.Spawn", Owner, Offset, SpawnTime, ParticleBase); }
};

