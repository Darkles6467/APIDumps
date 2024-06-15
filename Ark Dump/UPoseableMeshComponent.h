#pragma once

#include "BaseDeclarations.h"
#include "USkinnedMeshComponent.h"
#include "UMeshComponent.h"
#include "UPrimitiveComponent.h"
#include "USceneComponent.h"
#include "UActorComponent.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UPoseableMeshComponent : USkinnedMeshComponent
{
	char __padding[0x80L];
	FieldArray<_BYTE, 8> LocalAtomsField() { return {this, "UPoseableMeshComponent.LocalAtoms"}; }
	FBoneContainer& RequiredBonesField() { return *GetNativePointerField<FBoneContainer*>(this, "UPoseableMeshComponent.RequiredBones"); }

	// Functions

	bool AllocateTransformData() { return NativeCall<bool>(this, "UPoseableMeshComponent.AllocateTransformData"); }
	void FillSpaceBases() { NativeCall<void>(this, "UPoseableMeshComponent.FillSpaceBases"); }
	FVector * GetBoneLocationByName(FVector * result, FName BoneName, EBoneSpaces::Type BoneSpace) { return NativeCall<FVector *, FVector *, FName, EBoneSpaces::Type>(this, "UPoseableMeshComponent.GetBoneLocationByName", result, BoneName, BoneSpace); }
	FRotator * GetBoneRotationByName(FRotator * result, FName BoneName, EBoneSpaces::Type BoneSpace) { return NativeCall<FRotator *, FRotator *, FName, EBoneSpaces::Type>(this, "UPoseableMeshComponent.GetBoneRotationByName", result, BoneName, BoneSpace); }
	FVector * GetBoneScaleByName(FVector * result, FName BoneName, EBoneSpaces::Type BoneSpace) { return NativeCall<FVector *, FVector *, FName, EBoneSpaces::Type>(this, "UPoseableMeshComponent.GetBoneScaleByName", result, BoneName, BoneSpace); }
	FTransform * GetBoneTransformByName(FTransform * result, FName BoneName, EBoneSpaces::Type BoneSpace) { return NativeCall<FTransform *, FTransform *, FName, EBoneSpaces::Type>(this, "UPoseableMeshComponent.GetBoneTransformByName", result, BoneName, BoneSpace); }
	void ResetBoneTransformByName(FName BoneName) { NativeCall<void, FName>(this, "UPoseableMeshComponent.ResetBoneTransformByName", BoneName); }
	void SetBoneLocationByName(FName BoneName, FVector InLocation, EBoneSpaces::Type BoneSpace) { NativeCall<void, FName, FVector, EBoneSpaces::Type>(this, "UPoseableMeshComponent.SetBoneLocationByName", BoneName, InLocation, BoneSpace); }
	void SetBoneRotationByName(FName BoneName, FRotator InRotation, EBoneSpaces::Type BoneSpace) { NativeCall<void, FName, FRotator, EBoneSpaces::Type>(this, "UPoseableMeshComponent.SetBoneRotationByName", BoneName, InRotation, BoneSpace); }
	void SetBoneScaleByName(FName BoneName, FVector InScale3D, EBoneSpaces::Type BoneSpace) { NativeCall<void, FName, FVector, EBoneSpaces::Type>(this, "UPoseableMeshComponent.SetBoneScaleByName", BoneName, InScale3D, BoneSpace); }
	void SetBoneTransformByName(FName BoneName, const FTransform * InTransform, EBoneSpaces::Type BoneSpace) { NativeCall<void, FName, const FTransform *, EBoneSpaces::Type>(this, "UPoseableMeshComponent.SetBoneTransformByName", BoneName, InTransform, BoneSpace); }
};

