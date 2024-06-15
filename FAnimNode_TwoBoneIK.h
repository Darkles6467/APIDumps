#pragma once

#include "BaseDeclarations.h"
#include "FAnimNode_SkeletalControlBase.h"
#include "FAnimNode_Base.h"
#include "FBoneTransform.h"

struct FAnimNode_TwoBoneIK : FAnimNode_SkeletalControlBase
{
	char __padding[0x48L];
	FBoneReference& IKBoneField() { return *GetNativePointerField<FBoneReference*>(this, "FAnimNode_TwoBoneIK.IKBone"); }
	FVector& EffectorLocationField() { return *GetNativePointerField<FVector*>(this, "FAnimNode_TwoBoneIK.EffectorLocation"); }
	FVector& JointTargetLocationField() { return *GetNativePointerField<FVector*>(this, "FAnimNode_TwoBoneIK.JointTargetLocation"); }
	FVector2D& StretchLimitsField() { return *GetNativePointerField<FVector2D*>(this, "FAnimNode_TwoBoneIK.StretchLimits"); }
	FName& EffectorSpaceBoneNameField() { return *GetNativePointerField<FName*>(this, "FAnimNode_TwoBoneIK.EffectorSpaceBoneName"); }
	TEnumAsByte<enum EBoneControlSpace>& EffectorLocationSpaceField() { return *GetNativePointerField<TEnumAsByte<enum EBoneControlSpace>*>(this, "FAnimNode_TwoBoneIK.EffectorLocationSpace"); }
	TEnumAsByte<enum EBoneControlSpace>& JointTargetLocationSpaceField() { return *GetNativePointerField<TEnumAsByte<enum EBoneControlSpace>*>(this, "FAnimNode_TwoBoneIK.JointTargetLocationSpace"); }
	FName& JointTargetSpaceBoneNameField() { return *GetNativePointerField<FName*>(this, "FAnimNode_TwoBoneIK.JointTargetSpaceBoneName"); }

	// Functions

	void EvaluateBoneTransforms(USkeletalMeshComponent * SkelComp, const FBoneContainer * RequiredBones, FA2CSPose * MeshBases, TArray<FBoneTransform> * OutBoneTransforms) { NativeCall<void, USkeletalMeshComponent *, const FBoneContainer *, FA2CSPose *, TArray<FBoneTransform> *>(this, "FAnimNode_TwoBoneIK.EvaluateBoneTransforms", SkelComp, RequiredBones, MeshBases, OutBoneTransforms); }
	void GatherDebugData(FNodeDebugData * DebugData) { NativeCall<void, FNodeDebugData *>(this, "FAnimNode_TwoBoneIK.GatherDebugData", DebugData); }
	void InitializeBoneReferences(const FBoneContainer * RequiredBones) { NativeCall<void, const FBoneContainer *>(this, "FAnimNode_TwoBoneIK.InitializeBoneReferences", RequiredBones); }
	bool IsValidToEvaluate(const USkeleton * Skeleton, const FBoneContainer * RequiredBones) { return NativeCall<bool, const USkeleton *, const FBoneContainer *>(this, "FAnimNode_TwoBoneIK.IsValidToEvaluate", Skeleton, RequiredBones); }
};

