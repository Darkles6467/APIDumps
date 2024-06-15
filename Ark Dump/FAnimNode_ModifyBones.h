#pragma once

#include "BaseDeclarations.h"
#include "FAnimNode_SkeletalControlBase.h"
#include "FAnimNode_Base.h"
#include "FBoneTransform.h"

struct FAnimNode_ModifyBones : FAnimNode_SkeletalControlBase
{
	char __padding[0x8L];
	float& FeetZOffsetField() { return *GetNativePointerField<float*>(this, "FAnimNode_ModifyBones.FeetZOffset"); }
	bool& bSetFeetZOffsetField() { return *GetNativePointerField<bool*>(this, "FAnimNode_ModifyBones.bSetFeetZOffset"); }

	// Functions

	void EvaluateBoneTransforms(USkeletalMeshComponent * SkelComp, const FBoneContainer * RequiredBones, FA2CSPose * MeshBases, TArray<FBoneTransform> * OutBoneTransforms) { NativeCall<void, USkeletalMeshComponent *, const FBoneContainer *, FA2CSPose *, TArray<FBoneTransform> *>(this, "FAnimNode_ModifyBones.EvaluateBoneTransforms", SkelComp, RequiredBones, MeshBases, OutBoneTransforms); }
	void GatherDebugData(FNodeDebugData * DebugData) { NativeCall<void, FNodeDebugData *>(this, "FAnimNode_ModifyBones.GatherDebugData", DebugData); }
};

