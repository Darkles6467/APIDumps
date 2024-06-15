#pragma once

#include "BaseDeclarations.h"
#include "UParticleModuleSpawnBase.h"
#include "UParticleModule.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UParticleModuleSpawnPerUnit : UParticleModuleSpawnBase
{
	char __padding[0x50L];
	float& UnitScalarField() { return *GetNativePointerField<float*>(this, "UParticleModuleSpawnPerUnit.UnitScalar"); }
	float& MovementToleranceField() { return *GetNativePointerField<float*>(this, "UParticleModuleSpawnPerUnit.MovementTolerance"); }
	float& MaxFrameDistanceField() { return *GetNativePointerField<float*>(this, "UParticleModuleSpawnPerUnit.MaxFrameDistance"); }

	// Functions

	void CompileModule(FParticleEmitterBuildInfo * EmitterInfo) { NativeCall<void, FParticleEmitterBuildInfo *>(this, "UParticleModuleSpawnPerUnit.CompileModule", EmitterInfo); }
	bool GetSpawnAmount(FParticleEmitterInstance * Owner, int Offset, float OldLeftover, float DeltaTime, int * Number, float * Rate) { return NativeCall<bool, FParticleEmitterInstance *, int, float, float, int *, float *>(this, "UParticleModuleSpawnPerUnit.GetSpawnAmount", Owner, Offset, OldLeftover, DeltaTime, Number, Rate); }
	void InitializeDefaults() { NativeCall<void>(this, "UParticleModuleSpawnPerUnit.InitializeDefaults"); }
	void PostInitProperties() { NativeCall<void>(this, "UParticleModuleSpawnPerUnit.PostInitProperties"); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UParticleModuleSpawnPerUnit.Serialize", Ar); }
};

