#pragma once

#include "BaseDeclarations.h"
#include "UParticleModuleLocationBase.h"
#include "UParticleModule.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UParticleModuleLocationBoneSocket : UParticleModuleLocationBase
{
	char __padding[0x30L];
	TEnumAsByte<enum ELocationBoneSocketSource>& SourceTypeField() { return *GetNativePointerField<TEnumAsByte<enum ELocationBoneSocketSource>*>(this, "UParticleModuleLocationBoneSocket.SourceType"); }
	FVector& UniversalOffsetField() { return *GetNativePointerField<FVector*>(this, "UParticleModuleLocationBoneSocket.UniversalOffset"); }
	TArray<FLocationBoneSocketInfo>& SourceLocationsField() { return *GetNativePointerField<TArray<FLocationBoneSocketInfo>*>(this, "UParticleModuleLocationBoneSocket.SourceLocations"); }
	TEnumAsByte<enum ELocationBoneSocketSelectionMethod>& SelectionMethodField() { return *GetNativePointerField<TEnumAsByte<enum ELocationBoneSocketSelectionMethod>*>(this, "UParticleModuleLocationBoneSocket.SelectionMethod"); }
	FName& SkelMeshActorParamNameField() { return *GetNativePointerField<FName*>(this, "UParticleModuleLocationBoneSocket.SkelMeshActorParamName"); }

	// Functions

	void AutoPopulateInstanceProperties(UParticleSystemComponent * PSysComp) { NativeCall<void, UParticleSystemComponent *>(this, "UParticleModuleLocationBoneSocket.AutoPopulateInstanceProperties", PSysComp); }
	void FinalUpdate(FParticleEmitterInstance * Owner, int Offset, float DeltaTime) { NativeCall<void, FParticleEmitterInstance *, int, float>(this, "UParticleModuleLocationBoneSocket.FinalUpdate", Owner, Offset, DeltaTime); }
	bool GetParticleLocation(FParticleEmitterInstance * Owner, USkeletalMeshComponent * InSkelMeshComponent, int InBoneSocketIndex, FVector * OutPosition, FQuat * OutRotation) { return NativeCall<bool, FParticleEmitterInstance *, USkeletalMeshComponent *, int, FVector *, FQuat *>(this, "UParticleModuleLocationBoneSocket.GetParticleLocation", Owner, InSkelMeshComponent, InBoneSocketIndex, OutPosition, OutRotation); }
	unsigned int PrepPerInstanceBlock(FParticleEmitterInstance * Owner, void * InstData) { return NativeCall<unsigned int, FParticleEmitterInstance *, void *>(this, "UParticleModuleLocationBoneSocket.PrepPerInstanceBlock", Owner, InstData); }
	unsigned int RequiredBytesPerInstance(FParticleEmitterInstance * Owner) { return NativeCall<unsigned int, FParticleEmitterInstance *>(this, "UParticleModuleLocationBoneSocket.RequiredBytesPerInstance", Owner); }
	void Spawn(FParticleEmitterInstance * Owner, int Offset, float SpawnTime, FBaseParticle * ParticleBase) { NativeCall<void, FParticleEmitterInstance *, int, float, FBaseParticle *>(this, "UParticleModuleLocationBoneSocket.Spawn", Owner, Offset, SpawnTime, ParticleBase); }
	void Update(FParticleEmitterInstance * Owner, int Offset, float DeltaTime) { NativeCall<void, FParticleEmitterInstance *, int, float>(this, "UParticleModuleLocationBoneSocket.Update", Owner, Offset, DeltaTime); }
};

