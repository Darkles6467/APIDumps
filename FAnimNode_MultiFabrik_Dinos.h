#pragma once

#include "BaseDeclarations.h"
#include "FAnimNode_SkeletalControlBase.h"
#include "FAnimNode_Base.h"
#include "FBoneTransform.h"

struct FAnimNode_MultiFabrik_Dinos : FAnimNode_SkeletalControlBase
{
	char __padding[0x20L];
	float& PrecisionField() { return *GetNativePointerField<float*>(this, "FAnimNode_MultiFabrik_Dinos.Precision"); }
	bool& bEnableDebugDrawField() { return *GetNativePointerField<bool*>(this, "FAnimNode_MultiFabrik_Dinos.bEnableDebugDraw"); }
	float& RootOffsetField() { return *GetNativePointerField<float*>(this, "FAnimNode_MultiFabrik_Dinos.RootOffset"); }
	FRotator& RootRotationOffsetField() { return *GetNativePointerField<FRotator*>(this, "FAnimNode_MultiFabrik_Dinos.RootRotationOffset"); }
	bool& bInitOffsetField() { return *GetNativePointerField<bool*>(this, "FAnimNode_MultiFabrik_Dinos.bInitOffset"); }

	// Functions

	void EvaluateComponentSpace(FComponentSpacePoseContext * Output) { NativeCall<void, FComponentSpacePoseContext *>(this, "FAnimNode_MultiFabrik_Dinos.EvaluateComponentSpace", Output); }
	void EvaluateSingleLeg(FIKLegInfo * LegInfo, USkeletalMeshComponent * SkelComp, const FBoneContainer * RequiredBones, FA2CSPose * MeshBases, TArray<FBoneTransform> * OutBoneTransforms, FBoneReference * RootBone, FBoneReference * TipBone, FTransform * EffectorTransform, float FeetOffset, bool LockXY, float ExtraMaximumReach) { NativeCall<void, FIKLegInfo *, USkeletalMeshComponent *, const FBoneContainer *, FA2CSPose *, TArray<FBoneTransform> *, FBoneReference *, FBoneReference *, FTransform *, float, bool, float>(this, "FAnimNode_MultiFabrik_Dinos.EvaluateSingleLeg", LegInfo, SkelComp, RequiredBones, MeshBases, OutBoneTransforms, RootBone, TipBone, EffectorTransform, FeetOffset, LockXY, ExtraMaximumReach); }
};

