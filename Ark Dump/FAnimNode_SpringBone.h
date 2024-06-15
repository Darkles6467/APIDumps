#pragma once

#include "BaseDeclarations.h"
#include "FAnimNode_SkeletalControlBase.h"
#include "FAnimNode_Base.h"
#include "FBoneTransform.h"

struct FAnimNode_SpringBone : FAnimNode_SkeletalControlBase
{
	char __padding[0x48L];
	FBoneReference& SpringBoneField() { return *GetNativePointerField<FBoneReference*>(this, "FAnimNode_SpringBone.SpringBone"); }
	bool& bLimitDisplacementField() { return *GetNativePointerField<bool*>(this, "FAnimNode_SpringBone.bLimitDisplacement"); }
	float& MaxDisplacementField() { return *GetNativePointerField<float*>(this, "FAnimNode_SpringBone.MaxDisplacement"); }
	float& SpringStiffnessField() { return *GetNativePointerField<float*>(this, "FAnimNode_SpringBone.SpringStiffness"); }
	float& SpringDampingField() { return *GetNativePointerField<float*>(this, "FAnimNode_SpringBone.SpringDamping"); }
	float& ErrorResetThreshField() { return *GetNativePointerField<float*>(this, "FAnimNode_SpringBone.ErrorResetThresh"); }
	bool& bNoZSpringField() { return *GetNativePointerField<bool*>(this, "FAnimNode_SpringBone.bNoZSpring"); }
	float& RemainingTimeField() { return *GetNativePointerField<float*>(this, "FAnimNode_SpringBone.RemainingTime"); }
	bool& bHadValidStrengthField() { return *GetNativePointerField<bool*>(this, "FAnimNode_SpringBone.bHadValidStrength"); }
	FVector& BoneLocationField() { return *GetNativePointerField<FVector*>(this, "FAnimNode_SpringBone.BoneLocation"); }
	FVector& BoneVelocityField() { return *GetNativePointerField<FVector*>(this, "FAnimNode_SpringBone.BoneVelocity"); }

	// Functions

	void CacheBones(const FAnimationCacheBonesContext * Context) { NativeCall<void, const FAnimationCacheBonesContext *>(this, "FAnimNode_SpringBone.CacheBones", Context); }
	void EvaluateBoneTransforms(USkeletalMeshComponent * SkelComp, const FBoneContainer * RequiredBones, FA2CSPose * MeshBases, TArray<FBoneTransform> * OutBoneTransforms) { NativeCall<void, USkeletalMeshComponent *, const FBoneContainer *, FA2CSPose *, TArray<FBoneTransform> *>(this, "FAnimNode_SpringBone.EvaluateBoneTransforms", SkelComp, RequiredBones, MeshBases, OutBoneTransforms); }
	void GatherDebugData(FNodeDebugData * DebugData) { NativeCall<void, FNodeDebugData *>(this, "FAnimNode_SpringBone.GatherDebugData", DebugData); }
	void Initialize(const FAnimationInitializeContext * Context) { NativeCall<void, const FAnimationInitializeContext *>(this, "FAnimNode_SpringBone.Initialize", Context); }
	void Update(const FAnimationUpdateContext * Context) { NativeCall<void, const FAnimationUpdateContext *>(this, "FAnimNode_SpringBone.Update", Context); }
};

