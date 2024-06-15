#pragma once

#include "BaseDeclarations.h"
#include "FAnimNode_SkeletalControlBase.h"
#include "FAnimNode_Base.h"
#include "FBoneTransform.h"

struct FAnimNode_RotationMultiplier : FAnimNode_SkeletalControlBase
{
	char __padding[0x20L];
	FBoneReference& TargetBoneField() { return *GetNativePointerField<FBoneReference*>(this, "FAnimNode_RotationMultiplier.TargetBone"); }
	FBoneReference& SourceBoneField() { return *GetNativePointerField<FBoneReference*>(this, "FAnimNode_RotationMultiplier.SourceBone"); }
	float& MultiplierField() { return *GetNativePointerField<float*>(this, "FAnimNode_RotationMultiplier.Multiplier"); }
	TEnumAsByte<enum EBoneAxis>& RotationAxisToReferField() { return *GetNativePointerField<TEnumAsByte<enum EBoneAxis>*>(this, "FAnimNode_RotationMultiplier.RotationAxisToRefer"); }

	// Functions

	void EvaluateBoneTransforms(USkeletalMeshComponent * SkelComp, const FBoneContainer * RequiredBones, FA2CSPose * MeshBases, TArray<FBoneTransform> * OutBoneTransforms) { NativeCall<void, USkeletalMeshComponent *, const FBoneContainer *, FA2CSPose *, TArray<FBoneTransform> *>(this, "FAnimNode_RotationMultiplier.EvaluateBoneTransforms", SkelComp, RequiredBones, MeshBases, OutBoneTransforms); }
	FQuat * ExtractAngle(FQuat * result, const TArray<FTransform> * RefPoseTransforms, FA2CSPose * MeshBases, const EBoneAxis Axis, int SourceBoneIndex) { return NativeCall<FQuat *, FQuat *, const TArray<FTransform> *, FA2CSPose *, const EBoneAxis, int>(this, "FAnimNode_RotationMultiplier.ExtractAngle", result, RefPoseTransforms, MeshBases, Axis, SourceBoneIndex); }
	void GatherDebugData(FNodeDebugData * DebugData) { NativeCall<void, FNodeDebugData *>(this, "FAnimNode_RotationMultiplier.GatherDebugData", DebugData); }
	void InitializeBoneReferences(const FBoneContainer * RequiredBones) { NativeCall<void, const FBoneContainer *>(this, "FAnimNode_RotationMultiplier.InitializeBoneReferences", RequiredBones); }
	bool IsValidToEvaluate(const USkeleton * Skeleton, const FBoneContainer * RequiredBones) { return NativeCall<bool, const USkeleton *, const FBoneContainer *>(this, "FAnimNode_RotationMultiplier.IsValidToEvaluate", Skeleton, RequiredBones); }
	void MultiplyQuatBasedOnSourceIndex(const TArray<FTransform> * RefPoseTransforms, FA2CSPose * MeshBases, const EBoneAxis Axis, int SourceBoneIndex, float Multiplier, const FQuat * ReferenceQuat, FQuat * OutQuat) { NativeCall<void, const TArray<FTransform> *, FA2CSPose *, const EBoneAxis, int, float, const FQuat *, FQuat *>(this, "FAnimNode_RotationMultiplier.MultiplyQuatBasedOnSourceIndex", RefPoseTransforms, MeshBases, Axis, SourceBoneIndex, Multiplier, ReferenceQuat, OutQuat); }
};

