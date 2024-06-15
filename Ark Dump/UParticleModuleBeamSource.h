#pragma once

#include "BaseDeclarations.h"
#include "UParticleModuleBeamBase.h"
#include "UParticleModule.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UParticleModuleBeamSource : UParticleModuleBeamBase
{
	char __padding[0xd0L];
	TEnumAsByte<enum Beam2SourceTargetMethod>& SourceMethodField() { return *GetNativePointerField<TEnumAsByte<enum Beam2SourceTargetMethod>*>(this, "UParticleModuleBeamSource.SourceMethod"); }
	FName& SourceNameField() { return *GetNativePointerField<FName*>(this, "UParticleModuleBeamSource.SourceName"); }
	TEnumAsByte<enum Beam2SourceTargetTangentMethod>& SourceTangentMethodField() { return *GetNativePointerField<TEnumAsByte<enum Beam2SourceTargetTangentMethod>*>(this, "UParticleModuleBeamSource.SourceTangentMethod"); }

	// Functions

	void GetParticleSysParamsUtilized(TArray<FString> * ParticleSysParamList) { NativeCall<void, TArray<FString> *>(this, "UParticleModuleBeamSource.GetParticleSysParamsUtilized", ParticleSysParamList); }
	void InitializeDefaults() { NativeCall<void>(this, "UParticleModuleBeamSource.InitializeDefaults"); }
	void PostInitProperties() { NativeCall<void>(this, "UParticleModuleBeamSource.PostInitProperties"); }
	unsigned int RequiredBytes(FParticleEmitterInstance * Owner) { return NativeCall<unsigned int, FParticleEmitterInstance *>(this, "UParticleModuleBeamSource.RequiredBytes", Owner); }
	bool ResolveSourceData(FParticleBeam2EmitterInstance * BeamInst, FBeam2TypeDataPayload * BeamData, const char * ParticleBase, int * Offset, int ParticleIndex, bool bSpawning, FBeamParticleModifierPayloadData * ModifierData) { return NativeCall<bool, FParticleBeam2EmitterInstance *, FBeam2TypeDataPayload *, const char *, int *, int, bool, FBeamParticleModifierPayloadData *>(this, "UParticleModuleBeamSource.ResolveSourceData", BeamInst, BeamData, ParticleBase, Offset, ParticleIndex, bSpawning, ModifierData); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UParticleModuleBeamSource.Serialize", Ar); }
	void Spawn(FParticleEmitterInstance * Owner, int Offset, float SpawnTime, FBaseParticle * ParticleBase) { NativeCall<void, FParticleEmitterInstance *, int, float, FBaseParticle *>(this, "UParticleModuleBeamSource.Spawn", Owner, Offset, SpawnTime, ParticleBase); }
	void Update(FParticleEmitterInstance * Owner, int Offset, float DeltaTime) { NativeCall<void, FParticleEmitterInstance *, int, float>(this, "UParticleModuleBeamSource.Update", Owner, Offset, DeltaTime); }
};

