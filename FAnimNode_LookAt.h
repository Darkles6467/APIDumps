#pragma once

#include "BaseDeclarations.h"
#include "FAnimNode_SkeletalControlBase.h"
#include "FAnimNode_Base.h"
#include "FBoneTransform.h"

struct FAnimNode_LookAt : FAnimNode_SkeletalControlBase
{
	char __padding[0x38L];
	FBoneReference& BoneToModifyField() { return *GetNativePointerField<FBoneReference*>(this, "FAnimNode_LookAt.BoneToModify"); }
	FBoneReference& LookAtBoneField() { return *GetNativePointerField<FBoneReference*>(this, "FAnimNode_LookAt.LookAtBone"); }
	FVector& LookAtLocationField() { return *GetNativePointerField<FVector*>(this, "FAnimNode_LookAt.LookAtLocation"); }
	TEnumAsByte<enum EAxisOption::Type>& LookAtAxisField() { return *GetNativePointerField<TEnumAsByte<enum EAxisOption::Type>*>(this, "FAnimNode_LookAt.LookAtAxis"); }
	FVector& CurrentLookAtLocationField() { return *GetNativePointerField<FVector*>(this, "FAnimNode_LookAt.CurrentLookAtLocation"); }

	// Functions

	void EvaluateBoneTransforms(USkeletalMeshComponent * SkelComp, const FBoneContainer * RequiredBones, FA2CSPose * MeshBases, TArray<FBoneTransform> * OutBoneTransforms) { NativeCall<void, USkeletalMeshComponent *, const FBoneContainer *, FA2CSPose *, TArray<FBoneTransform> *>(this, "FAnimNode_LookAt.EvaluateBoneTransforms", SkelComp, RequiredBones, MeshBases, OutBoneTransforms); }
	void GatherDebugData(FNodeDebugData * DebugData) { NativeCall<void, FNodeDebugData *>(this, "FAnimNode_LookAt.GatherDebugData", DebugData); }
	FVector * GetAlignVector(FVector * result, FTransform * Transform, EAxisOption::Type AxisOption) { return NativeCall<FVector *, FVector *, FTransform *, EAxisOption::Type>(this, "FAnimNode_LookAt.GetAlignVector", result, Transform, AxisOption); }
	bool IsValidToEvaluate(const USkeleton * Skeleton, const FBoneContainer * RequiredBones) { return NativeCall<bool, const USkeleton *, const FBoneContainer *>(this, "FAnimNode_LookAt.IsValidToEvaluate", Skeleton, RequiredBones); }
};

