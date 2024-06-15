#pragma once

#include "BaseDeclarations.h"
#include "FAnimNode_SkeletalControlBase.h"
#include "FAnimNode_Base.h"
#include "FBoneTransform.h"

struct FAnimNode_CopyBone : FAnimNode_SkeletalControlBase
{
	char __padding[0x20L];
	FBoneReference& TargetBoneField() { return *GetNativePointerField<FBoneReference*>(this, "FAnimNode_CopyBone.TargetBone"); }
	FBoneReference& SourceBoneField() { return *GetNativePointerField<FBoneReference*>(this, "FAnimNode_CopyBone.SourceBone"); }
	bool& bCopyTranslationField() { return *GetNativePointerField<bool*>(this, "FAnimNode_CopyBone.bCopyTranslation"); }
	bool& bCopyRotationField() { return *GetNativePointerField<bool*>(this, "FAnimNode_CopyBone.bCopyRotation"); }
	bool& bCopyScaleField() { return *GetNativePointerField<bool*>(this, "FAnimNode_CopyBone.bCopyScale"); }

	// Functions

	void EvaluateBoneTransforms(USkeletalMeshComponent * SkelComp, const FBoneContainer * RequiredBones, FA2CSPose * MeshBases, TArray<FBoneTransform> * OutBoneTransforms) { NativeCall<void, USkeletalMeshComponent *, const FBoneContainer *, FA2CSPose *, TArray<FBoneTransform> *>(this, "FAnimNode_CopyBone.EvaluateBoneTransforms", SkelComp, RequiredBones, MeshBases, OutBoneTransforms); }
	void GatherDebugData(FNodeDebugData * DebugData) { NativeCall<void, FNodeDebugData *>(this, "FAnimNode_CopyBone.GatherDebugData", DebugData); }
};

