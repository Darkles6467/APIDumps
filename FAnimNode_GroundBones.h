#pragma once

#include "BaseDeclarations.h"
#include "FAnimNode_SkeletalControlBase.h"
#include "FAnimNode_Base.h"
#include "FBoneTransform.h"

struct FAnimNode_GroundBones : FAnimNode_SkeletalControlBase
{
	char __padding[0x80L];
	long double& NodeCreatedTimeField() { return *GetNativePointerField<long double*>(this, "FAnimNode_GroundBones.NodeCreatedTime"); }
	long double& LastUpdatedActorTimeField() { return *GetNativePointerField<long double*>(this, "FAnimNode_GroundBones.LastUpdatedActorTime"); }
	long double& RealLastUpdatedActorTimeField() { return *GetNativePointerField<long double*>(this, "FAnimNode_GroundBones.RealLastUpdatedActorTime"); }
	FVector& LastUpdatedActorLocationField() { return *GetNativePointerField<FVector*>(this, "FAnimNode_GroundBones.LastUpdatedActorLocation"); }

	// Functions

	void AlignGroundBoneChain(int BoneChainIndex, USkeletalMeshComponent * SkelComp, const FBoneContainer * RequiredBones, FA2CSPose * MeshBases, TArray<FBoneTransform> * OutBoneTransforms) { NativeCall<void, int, USkeletalMeshComponent *, const FBoneContainer *, FA2CSPose *, TArray<FBoneTransform> *>(this, "FAnimNode_GroundBones.AlignGroundBoneChain", BoneChainIndex, SkelComp, RequiredBones, MeshBases, OutBoneTransforms); }
	void EvaluateBoneTransforms(USkeletalMeshComponent * SkelComp, const FBoneContainer * RequiredBones, FA2CSPose * MeshBases, TArray<FBoneTransform> * OutBoneTransforms) { NativeCall<void, USkeletalMeshComponent *, const FBoneContainer *, FA2CSPose *, TArray<FBoneTransform> *>(this, "FAnimNode_GroundBones.EvaluateBoneTransforms", SkelComp, RequiredBones, MeshBases, OutBoneTransforms); }
	void GatherDebugData(FNodeDebugData * DebugData) { NativeCall<void, FNodeDebugData *>(this, "FAnimNode_GroundBones.GatherDebugData", DebugData); }
	FAnimNode_GroundBones * operator=(const FAnimNode_GroundBones * __that) { return NativeCall<FAnimNode_GroundBones *, const FAnimNode_GroundBones *>(this, "FAnimNode_GroundBones.operator=", __that); }
};

