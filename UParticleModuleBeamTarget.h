#pragma once

#include "BaseDeclarations.h"
#include "UParticleModuleBeamBase.h"
#include "UParticleModule.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UParticleModuleBeamTarget : UParticleModuleBeamBase
{
	char __padding[0xd0L];
	TEnumAsByte<enum Beam2SourceTargetMethod>& TargetMethodField() { return *GetNativePointerField<TEnumAsByte<enum Beam2SourceTargetMethod>*>(this, "UParticleModuleBeamTarget.TargetMethod"); }
	FName& TargetNameField() { return *GetNativePointerField<FName*>(this, "UParticleModuleBeamTarget.TargetName"); }
	TEnumAsByte<enum Beam2SourceTargetTangentMethod>& TargetTangentMethodField() { return *GetNativePointerField<TEnumAsByte<enum Beam2SourceTargetTangentMethod>*>(this, "UParticleModuleBeamTarget.TargetTangentMethod"); }
	float& LockRadiusField() { return *GetNativePointerField<float*>(this, "UParticleModuleBeamTarget.LockRadius"); }

	// Functions

	void AutoPopulateInstanceProperties(UParticleSystemComponent * PSysComp) { NativeCall<void, UParticleSystemComponent *>(this, "UParticleModuleBeamTarget.AutoPopulateInstanceProperties", PSysComp); }
	void GetParticleSysParamsUtilized(TArray<FString> * ParticleSysParamList) { NativeCall<void, TArray<FString> *>(this, "UParticleModuleBeamTarget.GetParticleSysParamsUtilized", ParticleSysParamList); }
	void InitializeDefaults() { NativeCall<void>(this, "UParticleModuleBeamTarget.InitializeDefaults"); }
	void PostInitProperties() { NativeCall<void>(this, "UParticleModuleBeamTarget.PostInitProperties"); }
	bool ResolveTargetData(FParticleBeam2EmitterInstance * BeamInst, FBeam2TypeDataPayload * BeamData, const char * ParticleBase, int * CurrentOffset, int ParticleIndex, bool bSpawning, FBeamParticleModifierPayloadData * ModifierData) { return NativeCall<bool, FParticleBeam2EmitterInstance *, FBeam2TypeDataPayload *, const char *, int *, int, bool, FBeamParticleModifierPayloadData *>(this, "UParticleModuleBeamTarget.ResolveTargetData", BeamInst, BeamData, ParticleBase, CurrentOffset, ParticleIndex, bSpawning, ModifierData); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UParticleModuleBeamTarget.Serialize", Ar); }
	void Spawn(FParticleEmitterInstance * Owner, int Offset, float SpawnTime, FBaseParticle * ParticleBase) { NativeCall<void, FParticleEmitterInstance *, int, float, FBaseParticle *>(this, "UParticleModuleBeamTarget.Spawn", Owner, Offset, SpawnTime, ParticleBase); }
	void Update(FParticleEmitterInstance * Owner, int Offset, float DeltaTime) { NativeCall<void, FParticleEmitterInstance *, int, float>(this, "UParticleModuleBeamTarget.Update", Owner, Offset, DeltaTime); }
};

