#pragma once

#include "BaseDeclarations.h"
#include "UParticleModuleAttractorBase.h"
#include "UParticleModule.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UParticleModuleAttractorParticle : UParticleModuleAttractorBase
{
	char __padding[0x90L];
	FName& EmitterNameField() { return *GetNativePointerField<FName*>(this, "UParticleModuleAttractorParticle.EmitterName"); }
	TEnumAsByte<enum EAttractorParticleSelectionMethod>& SelectionMethodField() { return *GetNativePointerField<TEnumAsByte<enum EAttractorParticleSelectionMethod>*>(this, "UParticleModuleAttractorParticle.SelectionMethod"); }
	int& LastSelIndexField() { return *GetNativePointerField<int*>(this, "UParticleModuleAttractorParticle.LastSelIndex"); }

	// Functions

	void InitializeDefaults() { NativeCall<void>(this, "UParticleModuleAttractorParticle.InitializeDefaults"); }
	void PostInitProperties() { NativeCall<void>(this, "UParticleModuleAttractorParticle.PostInitProperties"); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UParticleModuleAttractorParticle.Serialize", Ar); }
	void Spawn(FParticleEmitterInstance * Owner, int Offset, float SpawnTime, FBaseParticle * ParticleBase) { NativeCall<void, FParticleEmitterInstance *, int, float, FBaseParticle *>(this, "UParticleModuleAttractorParticle.Spawn", Owner, Offset, SpawnTime, ParticleBase); }
	void Update(FParticleEmitterInstance * Owner, int Offset, float DeltaTime) { NativeCall<void, FParticleEmitterInstance *, int, float>(this, "UParticleModuleAttractorParticle.Update", Owner, Offset, DeltaTime); }
	unsigned int RequiredBytes() { return NativeCall<unsigned int>(this, "UParticleModuleAttractorParticle.RequiredBytes"); }
};

