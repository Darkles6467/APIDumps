#pragma once

#include "BaseDeclarations.h"
#include "UParticleModule.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UParticleModuleTrailBase : UParticleModule
{

	// Functions

};

struct UParticleModuleTrailSource : UParticleModuleTrailBase
{
	char __padding[0x68L];
	TEnumAsByte<enum ETrail2SourceMethod>& SourceMethodField() { return *GetNativePointerField<TEnumAsByte<enum ETrail2SourceMethod>*>(this, "UParticleModuleTrailSource.SourceMethod"); }
	FName& SourceNameField() { return *GetNativePointerField<FName*>(this, "UParticleModuleTrailSource.SourceName"); }
	int& SourceOffsetCountField() { return *GetNativePointerField<int*>(this, "UParticleModuleTrailSource.SourceOffsetCount"); }
	TArray<FVector>& SourceOffsetDefaultsField() { return *GetNativePointerField<TArray<FVector>*>(this, "UParticleModuleTrailSource.SourceOffsetDefaults"); }
	TEnumAsByte<enum EParticleSourceSelectionMethod>& SelectionMethodField() { return *GetNativePointerField<TEnumAsByte<enum EParticleSourceSelectionMethod>*>(this, "UParticleModuleTrailSource.SelectionMethod"); }

	// Functions

	void AutoPopulateInstanceProperties(UParticleSystemComponent * PSysComp) { NativeCall<void, UParticleSystemComponent *>(this, "UParticleModuleTrailSource.AutoPopulateInstanceProperties", PSysComp); }
	void GetParticleSysParamsUtilized(TArray<FString> * ParticleSysParamList) { NativeCall<void, TArray<FString> *>(this, "UParticleModuleTrailSource.GetParticleSysParamsUtilized", ParticleSysParamList); }
	void InitializeDefaults() { NativeCall<void>(this, "UParticleModuleTrailSource.InitializeDefaults"); }
	void PostInitProperties() { NativeCall<void>(this, "UParticleModuleTrailSource.PostInitProperties"); }
	bool ResolveSourceOffset(int InTrailIdx, FParticleEmitterInstance * InEmitterInst, FVector * OutSourceOffset) { return NativeCall<bool, int, FParticleEmitterInstance *, FVector *>(this, "UParticleModuleTrailSource.ResolveSourceOffset", InTrailIdx, InEmitterInst, OutSourceOffset); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UParticleModuleTrailSource.Serialize", Ar); }
};

