#pragma once

#include "BaseDeclarations.h"
#include "FAnimNode_SkeletalControlBase.h"
#include "FAnimNode_Base.h"
#include "FBoneTransform.h"

struct FAnimNode_MultiFabrik : FAnimNode_SkeletalControlBase
{
	char __padding[0x10L];
	float& PrecisionField() { return *GetNativePointerField<float*>(this, "FAnimNode_MultiFabrik.Precision"); }
	bool& bEnableDebugDrawField() { return *GetNativePointerField<bool*>(this, "FAnimNode_MultiFabrik.bEnableDebugDraw"); }
	FName& NodeNameField() { return *GetNativePointerField<FName*>(this, "FAnimNode_MultiFabrik.NodeName"); }

	// Functions

	void EvaluateComponentSpace(FComponentSpacePoseContext * Output) { NativeCall<void, FComponentSpacePoseContext *>(this, "FAnimNode_MultiFabrik.EvaluateComponentSpace", Output); }
	void EvaluateSingleLeg(FIKLegInfo * LegInfo, USkeletalMeshComponent * SkelComp, const FBoneContainer * RequiredBones, FA2CSPose * MeshBases, TArray<FBoneTransform> * OutBoneTransforms, FBoneReference * RootBone, FBoneReference * TipBone, FTransform * EffectorTransform, float FeetOffset, bool LockXY, FRotator IKBoneRotationOffset, float ExtraMaximumReach, bool bForceUpdateFabrikPositions) { NativeCall<void, FIKLegInfo *, USkeletalMeshComponent *, const FBoneContainer *, FA2CSPose *, TArray<FBoneTransform> *, FBoneReference *, FBoneReference *, FTransform *, float, bool, FRotator, float, bool>(this, "FAnimNode_MultiFabrik.EvaluateSingleLeg", LegInfo, SkelComp, RequiredBones, MeshBases, OutBoneTransforms, RootBone, TipBone, EffectorTransform, FeetOffset, LockXY, IKBoneRotationOffset, ExtraMaximumReach, bForceUpdateFabrikPositions); }
	bool IsValidToEvaluate(const USkeleton * Skeleton, const FBoneContainer * RequiredBones) { return NativeCall<bool, const USkeleton *, const FBoneContainer *>(this, "FAnimNode_MultiFabrik.IsValidToEvaluate", Skeleton, RequiredBones); }
};

