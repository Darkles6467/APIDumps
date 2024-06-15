#pragma once

#include "BaseDeclarations.h"
#include "UParticleModule.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UParticleModuleRequired : UParticleModule
{
	char __padding[0x100L];
	FVector& EmitterOriginField() { return *GetNativePointerField<FVector*>(this, "UParticleModuleRequired.EmitterOrigin"); }
	FRotator& EmitterRotationField() { return *GetNativePointerField<FRotator*>(this, "UParticleModuleRequired.EmitterRotation"); }
	TEnumAsByte<enum EParticleScreenAlignment>& ScreenAlignmentField() { return *GetNativePointerField<TEnumAsByte<enum EParticleScreenAlignment>*>(this, "UParticleModuleRequired.ScreenAlignment"); }
	TEnumAsByte<enum EParticleSortMode>& SortModeField() { return *GetNativePointerField<TEnumAsByte<enum EParticleSortMode>*>(this, "UParticleModuleRequired.SortMode"); }
	float& EmitterDurationField() { return *GetNativePointerField<float*>(this, "UParticleModuleRequired.EmitterDuration"); }
	float& EmitterDurationLowField() { return *GetNativePointerField<float*>(this, "UParticleModuleRequired.EmitterDurationLow"); }
	int& EmitterLoopsField() { return *GetNativePointerField<int*>(this, "UParticleModuleRequired.EmitterLoops"); }
	TEnumAsByte<enum EParticleBurstMethod>& ParticleBurstMethodField() { return *GetNativePointerField<TEnumAsByte<enum EParticleBurstMethod>*>(this, "UParticleModuleRequired.ParticleBurstMethod"); }
	TArray<FParticleBurst>& BurstListField() { return *GetNativePointerField<TArray<FParticleBurst>*>(this, "UParticleModuleRequired.BurstList"); }
	float& EmitterDelayField() { return *GetNativePointerField<float*>(this, "UParticleModuleRequired.EmitterDelay"); }
	float& EmitterDelayLowField() { return *GetNativePointerField<float*>(this, "UParticleModuleRequired.EmitterDelayLow"); }
	TEnumAsByte<enum EParticleSubUVInterpMethod>& InterpolationMethodField() { return *GetNativePointerField<TEnumAsByte<enum EParticleSubUVInterpMethod>*>(this, "UParticleModuleRequired.InterpolationMethod"); }
	int& SubImages_HorizontalField() { return *GetNativePointerField<int*>(this, "UParticleModuleRequired.SubImages_Horizontal"); }
	int& SubImages_VerticalField() { return *GetNativePointerField<int*>(this, "UParticleModuleRequired.SubImages_Vertical"); }
	float& RandomImageTimeField() { return *GetNativePointerField<float*>(this, "UParticleModuleRequired.RandomImageTime"); }
	int& RandomImageChangesField() { return *GetNativePointerField<int*>(this, "UParticleModuleRequired.RandomImageChanges"); }
	FVector& MacroUVPositionField() { return *GetNativePointerField<FVector*>(this, "UParticleModuleRequired.MacroUVPosition"); }
	float& MacroUVRadiusField() { return *GetNativePointerField<float*>(this, "UParticleModuleRequired.MacroUVRadius"); }
	int& MaxDrawCountField() { return *GetNativePointerField<int*>(this, "UParticleModuleRequired.MaxDrawCount"); }
	TEnumAsByte<enum EEmitterNormalsMode>& EmitterNormalsModeField() { return *GetNativePointerField<TEnumAsByte<enum EEmitterNormalsMode>*>(this, "UParticleModuleRequired.EmitterNormalsMode"); }
	FVector& NormalsSphereCenterField() { return *GetNativePointerField<FVector*>(this, "UParticleModuleRequired.NormalsSphereCenter"); }
	FVector& NormalsCylinderDirectionField() { return *GetNativePointerField<FVector*>(this, "UParticleModuleRequired.NormalsCylinderDirection"); }
	TArray<FName>& NamedMaterialOverridesField() { return *GetNativePointerField<TArray<FName>*>(this, "UParticleModuleRequired.NamedMaterialOverrides"); }

	// Functions

	bool GenerateLODModuleValues(UParticleModule * SourceModule, float Percentage, UParticleLODLevel * LODLevel) { return NativeCall<bool, UParticleModule *, float, UParticleLODLevel *>(this, "UParticleModuleRequired.GenerateLODModuleValues", SourceModule, Percentage, LODLevel); }
	void InitializeDefaults() { NativeCall<void>(this, "UParticleModuleRequired.InitializeDefaults"); }
	void PostInitProperties() { NativeCall<void>(this, "UParticleModuleRequired.PostInitProperties"); }
	void PostLoad() { NativeCall<void>(this, "UParticleModuleRequired.PostLoad"); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UParticleModuleRequired.Serialize", Ar); }
	void SetToSensibleDefaults(UParticleEmitter * Owner) { NativeCall<void, UParticleEmitter *>(this, "UParticleModuleRequired.SetToSensibleDefaults", Owner); }
};

