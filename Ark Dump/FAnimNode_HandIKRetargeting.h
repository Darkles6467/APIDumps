#pragma once

#include "BaseDeclarations.h"
#include "FAnimNode_SkeletalControlBase.h"
#include "FAnimNode_Base.h"
#include "FBoneTransform.h"

struct FAnimNode_HandIKRetargeting : FAnimNode_SkeletalControlBase
{
	char __padding[0x48L];
	FBoneReference& RightHandFKField() { return *GetNativePointerField<FBoneReference*>(this, "FAnimNode_HandIKRetargeting.RightHandFK"); }
	FBoneReference& LeftHandFKField() { return *GetNativePointerField<FBoneReference*>(this, "FAnimNode_HandIKRetargeting.LeftHandFK"); }
	FBoneReference& RightHandIKField() { return *GetNativePointerField<FBoneReference*>(this, "FAnimNode_HandIKRetargeting.RightHandIK"); }
	FBoneReference& LeftHandIKField() { return *GetNativePointerField<FBoneReference*>(this, "FAnimNode_HandIKRetargeting.LeftHandIK"); }
	TArray<FBoneReference>& IKBonesToMoveField() { return *GetNativePointerField<TArray<FBoneReference>*>(this, "FAnimNode_HandIKRetargeting.IKBonesToMove"); }
	float& HandFKWeightField() { return *GetNativePointerField<float*>(this, "FAnimNode_HandIKRetargeting.HandFKWeight"); }

	// Functions

	void EvaluateBoneTransforms(USkeletalMeshComponent * SkelComp, const FBoneContainer * RequiredBones, FA2CSPose * MeshBases, TArray<FBoneTransform> * OutBoneTransforms) { NativeCall<void, USkeletalMeshComponent *, const FBoneContainer *, FA2CSPose *, TArray<FBoneTransform> *>(this, "FAnimNode_HandIKRetargeting.EvaluateBoneTransforms", SkelComp, RequiredBones, MeshBases, OutBoneTransforms); }
	void GatherDebugData(FNodeDebugData * DebugData) { NativeCall<void, FNodeDebugData *>(this, "FAnimNode_HandIKRetargeting.GatherDebugData", DebugData); }
	void InitializeBoneReferences(const FBoneContainer * RequiredBones) { NativeCall<void, const FBoneContainer *>(this, "FAnimNode_HandIKRetargeting.InitializeBoneReferences", RequiredBones); }
	bool IsValidToEvaluate(const USkeleton * Skeleton, const FBoneContainer * RequiredBones) { return NativeCall<bool, const USkeleton *, const FBoneContainer *>(this, "FAnimNode_HandIKRetargeting.IsValidToEvaluate", Skeleton, RequiredBones); }
	FAnimNode_HandIKRetargeting * operator=(const FAnimNode_HandIKRetargeting * __that) { return NativeCall<FAnimNode_HandIKRetargeting *, const FAnimNode_HandIKRetargeting *>(this, "FAnimNode_HandIKRetargeting.operator=", __that); }
};

