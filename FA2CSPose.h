#pragma once

#include "BaseDeclarations.h"
#include "FBoneTransform.h"

struct FA2Pose
{
	char __padding[0x10L];
	TArray<FTransform>& BonesField() { return *GetNativePointerField<TArray<FTransform>*>(this, "FA2Pose.Bones"); }

	// Functions

};

struct FA2CSPose : FA2Pose
{
	char __padding[0x18L];
	const FBoneContainer * BoneContainerField() { return GetNativePointerField<const FBoneContainer *>(this, "FA2CSPose.BoneContainer"); }
	TArray<unsigned char>& ComponentSpaceFlagsField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FA2CSPose.ComponentSpaceFlags"); }

	// Functions

	void AccumulateToLocalSpaceBoneTransforms(const TArray<FBoneTransform> * BoneTransforms) { NativeCall<void, const TArray<FBoneTransform> *>(this, "FA2CSPose.AccumulateToLocalSpaceBoneTransforms", BoneTransforms); }
	void AllocateLocalPoses(const FBoneContainer * InBoneContainer, const TArray<FTransform> * LocalBones) { NativeCall<void, const FBoneContainer *, const TArray<FTransform> *>(this, "FA2CSPose.AllocateLocalPoses", InBoneContainer, LocalBones); }
	void CalculateComponentSpaceTransform(int BoneIndex) { NativeCall<void, int>(this, "FA2CSPose.CalculateComponentSpaceTransform", BoneIndex); }
	void ConvertToLocalPoses(FA2Pose * LocalPoses) { NativeCall<void, FA2Pose *>(this, "FA2CSPose.ConvertToLocalPoses", LocalPoses); }
	FTransform * GetComponentSpaceTransform(FTransform * result, int BoneIndex) { return NativeCall<FTransform *, FTransform *, int>(this, "FA2CSPose.GetComponentSpaceTransform", result, BoneIndex); }
	FTransform * GetLocalSpaceTransform(FTransform * result, int BoneIndex) { return NativeCall<FTransform *, FTransform *, int>(this, "FA2CSPose.GetLocalSpaceTransform", result, BoneIndex); }
	void LocalBlendCSBoneTransforms(const TArray<FBoneTransform> * BoneTransforms, float Alpha) { NativeCall<void, const TArray<FBoneTransform> *, float>(this, "FA2CSPose.LocalBlendCSBoneTransforms", BoneTransforms, Alpha); }
	void SafeSetCSBoneTransforms(const TArray<FBoneTransform> * BoneTransforms) { NativeCall<void, const TArray<FBoneTransform> *>(this, "FA2CSPose.SafeSetCSBoneTransforms", BoneTransforms); }
};

