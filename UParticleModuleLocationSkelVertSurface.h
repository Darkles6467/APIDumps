#pragma once

#include "BaseDeclarations.h"
#include "UParticleModuleLocationBase.h"
#include "UParticleModule.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UParticleModuleLocationSkelVertSurface : UParticleModuleLocationBase
{
	char __padding[0x60L];
	TEnumAsByte<enum ELocationSkelVertSurfaceSource>& SourceTypeField() { return *GetNativePointerField<TEnumAsByte<enum ELocationSkelVertSurfaceSource>*>(this, "UParticleModuleLocationSkelVertSurface.SourceType"); }
	FVector& UniversalOffsetField() { return *GetNativePointerField<FVector*>(this, "UParticleModuleLocationSkelVertSurface.UniversalOffset"); }
	FName& SkelMeshActorParamNameField() { return *GetNativePointerField<FName*>(this, "UParticleModuleLocationSkelVertSurface.SkelMeshActorParamName"); }
	TArray<FName>& ValidAssociatedBonesField() { return *GetNativePointerField<TArray<FName>*>(this, "UParticleModuleLocationSkelVertSurface.ValidAssociatedBones"); }
	FVector& NormalToCompareField() { return *GetNativePointerField<FVector*>(this, "UParticleModuleLocationSkelVertSurface.NormalToCompare"); }
	float& NormalCheckToleranceDegreesField() { return *GetNativePointerField<float*>(this, "UParticleModuleLocationSkelVertSurface.NormalCheckToleranceDegrees"); }
	float& NormalCheckToleranceField() { return *GetNativePointerField<float*>(this, "UParticleModuleLocationSkelVertSurface.NormalCheckTolerance"); }
	TArray<int>& ValidMaterialIndicesField() { return *GetNativePointerField<TArray<int>*>(this, "UParticleModuleLocationSkelVertSurface.ValidMaterialIndices"); }

	// Functions

	void AutoPopulateInstanceProperties(UParticleSystemComponent * PSysComp) { NativeCall<void, UParticleSystemComponent *>(this, "UParticleModuleLocationSkelVertSurface.AutoPopulateInstanceProperties", PSysComp); }
	void FinalUpdate(FParticleEmitterInstance * Owner, int Offset, float DeltaTime) { NativeCall<void, FParticleEmitterInstance *, int, float>(this, "UParticleModuleLocationSkelVertSurface.FinalUpdate", Owner, Offset, DeltaTime); }
	bool GetParticleLocation(FParticleEmitterInstance * Owner, USkeletalMeshComponent * InSkelMeshComponent, int InPrimaryVertexIndex, FVector * OutPosition, FQuat * OutRotation, bool bSpawning) { return NativeCall<bool, FParticleEmitterInstance *, USkeletalMeshComponent *, int, FVector *, FQuat *, bool>(this, "UParticleModuleLocationSkelVertSurface.GetParticleLocation", Owner, InSkelMeshComponent, InPrimaryVertexIndex, OutPosition, OutRotation, bSpawning); }
	void PostLoad() { NativeCall<void>(this, "UParticleModuleLocationSkelVertSurface.PostLoad"); }
	unsigned int PrepPerInstanceBlock(FParticleEmitterInstance * Owner, void * InstData) { return NativeCall<unsigned int, FParticleEmitterInstance *, void *>(this, "UParticleModuleLocationSkelVertSurface.PrepPerInstanceBlock", Owner, InstData); }
	unsigned int RequiredBytesPerInstance(FParticleEmitterInstance * Owner) { return NativeCall<unsigned int, FParticleEmitterInstance *>(this, "UParticleModuleLocationSkelVertSurface.RequiredBytesPerInstance", Owner); }
	void Spawn(FParticleEmitterInstance * Owner, int Offset, float SpawnTime, FBaseParticle * ParticleBase) { NativeCall<void, FParticleEmitterInstance *, int, float, FBaseParticle *>(this, "UParticleModuleLocationSkelVertSurface.Spawn", Owner, Offset, SpawnTime, ParticleBase); }
	void Update(FParticleEmitterInstance * Owner, int Offset, float DeltaTime) { NativeCall<void, FParticleEmitterInstance *, int, float>(this, "UParticleModuleLocationSkelVertSurface.Update", Owner, Offset, DeltaTime); }
	void UpdateBoneIndicesList(FParticleEmitterInstance * Owner) { NativeCall<void, FParticleEmitterInstance *>(this, "UParticleModuleLocationSkelVertSurface.UpdateBoneIndicesList", Owner); }
	bool VertInfluencedByActiveBone(FParticleEmitterInstance * Owner, USkeletalMeshComponent * InSkelMeshComponent, int InVertexIndex, int * OutBoneIndex) { return NativeCall<bool, FParticleEmitterInstance *, USkeletalMeshComponent *, int, int *>(this, "UParticleModuleLocationSkelVertSurface.VertInfluencedByActiveBone", Owner, InSkelMeshComponent, InVertexIndex, OutBoneIndex); }
};

