#pragma once

#include "BaseDeclarations.h"
#include "UParticleModuleBeamBase.h"
#include "UParticleModule.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FParticleCurvePair.h"

struct UParticleModuleBeamModifier : UParticleModuleBeamBase
{
	char __padding[0xc0L];
	TEnumAsByte<enum BeamModifierType>& ModifierTypeField() { return *GetNativePointerField<TEnumAsByte<enum BeamModifierType>*>(this, "UParticleModuleBeamModifier.ModifierType"); }
	FBeamModifierOptions& PositionOptionsField() { return *GetNativePointerField<FBeamModifierOptions*>(this, "UParticleModuleBeamModifier.PositionOptions"); }
	FBeamModifierOptions& TangentOptionsField() { return *GetNativePointerField<FBeamModifierOptions*>(this, "UParticleModuleBeamModifier.TangentOptions"); }
	FBeamModifierOptions& StrengthOptionsField() { return *GetNativePointerField<FBeamModifierOptions*>(this, "UParticleModuleBeamModifier.StrengthOptions"); }

	// Functions

	void GetCurveObjects(TArray<FParticleCurvePair> * OutCurves) { NativeCall<void, TArray<FParticleCurvePair> *>(this, "UParticleModuleBeamModifier.GetCurveObjects", OutCurves); }
	void PostInitProperties() { NativeCall<void>(this, "UParticleModuleBeamModifier.PostInitProperties"); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UParticleModuleBeamModifier.Serialize", Ar); }
	void Spawn(FParticleEmitterInstance * Owner, int Offset, float SpawnTime, FBaseParticle * ParticleBase) { NativeCall<void, FParticleEmitterInstance *, int, float, FBaseParticle *>(this, "UParticleModuleBeamModifier.Spawn", Owner, Offset, SpawnTime, ParticleBase); }
	void Update(FParticleEmitterInstance * Owner, int Offset, float DeltaTime) { NativeCall<void, FParticleEmitterInstance *, int, float>(this, "UParticleModuleBeamModifier.Update", Owner, Offset, DeltaTime); }
};

