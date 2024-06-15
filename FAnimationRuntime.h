#pragma once

#include "BaseDeclarations.h"
#include "FA2CSPose.h"
#include "FPerBoneBlendWeight.h"
#include "FBlendSampleData.h"
#include "FInputBlendPose.h"

struct FAnimationRuntime
{

	// Functions

	static ETypeAdvanceAnim AdvanceTime(const bool * bAllowLooping, const float * MoveDelta, float * InOutTime, const float * EndTime) { return NativeCall<ETypeAdvanceAnim, const bool *, const float *, float *, const float *>(nullptr, "FAnimationRuntime.AdvanceTime", bAllowLooping, MoveDelta, InOutTime, EndTime); }
	static void BlendAdditivePose(const TArray<FTransform> * SourcePoses, const TArray<FTransform> * AdditiveBlendPoses, const float BlendWeight, const FBoneContainer * RequiredBones, TArray<FTransform> * ResultAtoms) { NativeCall<void, const TArray<FTransform> *, const TArray<FTransform> *, const float, const FBoneContainer *, TArray<FTransform> *>(nullptr, "FAnimationRuntime.BlendAdditivePose", SourcePoses, AdditiveBlendPoses, BlendWeight, RequiredBones, ResultAtoms); }
	static void BlendLocalPosesPerBoneWeights(FA2Pose * BasePose, TArray<FA2Pose> * BlendPoses, const TArray<FPerBoneBlendWeight> * BoneBlendWeights, const FBoneContainer * RequiredBones, FA2Pose * OutPose) { NativeCall<void, FA2Pose *, TArray<FA2Pose> *, const TArray<FPerBoneBlendWeight> *, const FBoneContainer *, FA2Pose *>(nullptr, "FAnimationRuntime.BlendLocalPosesPerBoneWeights", BasePose, BlendPoses, BoneBlendWeights, RequiredBones, OutPose); }
	static void BlendMeshPosesPerBoneWeights(FA2Pose * BasePose, TArray<FA2Pose> * BlendPoses, const TArray<FPerBoneBlendWeight> * BoneBlendWeights, const FBoneContainer * RequiredBones, USkeleton * Skeleton, FA2Pose * OutPose) { NativeCall<void, FA2Pose *, TArray<FA2Pose> *, const TArray<FPerBoneBlendWeight> *, const FBoneContainer *, USkeleton *, FA2Pose *>(nullptr, "FAnimationRuntime.BlendMeshPosesPerBoneWeights", BasePose, BlendPoses, BoneBlendWeights, RequiredBones, Skeleton, OutPose); }
	static void BlendPosesPerBoneFilter(FA2Pose * BasePose, const TArray<FA2Pose> * BlendPoses, FA2Pose * OutPose, TArray<FPerBoneBlendWeight> * BoneBlendWeights, bool bMeshSpaceRotationBlending, const FBoneContainer * RequiredBones, USkeleton * Skeleton) { NativeCall<void, FA2Pose *, const TArray<FA2Pose> *, FA2Pose *, TArray<FPerBoneBlendWeight> *, bool, const FBoneContainer *, USkeleton *>(nullptr, "FAnimationRuntime.BlendPosesPerBoneFilter", BasePose, BlendPoses, OutPose, BoneBlendWeights, bMeshSpaceRotationBlending, RequiredBones, Skeleton); }
	static void BlendPosesTogether(int NumPoses, const TArray<TArray<FTransform>> * SourcePoses, const TArray<float> * SourceWeights, const FBoneContainer * RequiredBones, TArray<FTransform> * ResultAtoms) { NativeCall<void, int, const TArray<TArray<FTransform>> *, const TArray<float> *, const FBoneContainer *, TArray<FTransform> *>(nullptr, "FAnimationRuntime.BlendPosesTogether", NumPoses, SourcePoses, SourceWeights, RequiredBones, ResultAtoms); }
	static void BlendPosesTogether(int NumPoses, const TArray<FTransform> ** SourcePoses, const float * SourceWeights, const FBoneContainer * RequiredBones, TArray<FTransform> * ResultAtoms) { NativeCall<void, int, const TArray<FTransform> **, const float *, const FBoneContainer *, TArray<FTransform> *>(nullptr, "FAnimationRuntime.BlendPosesTogether", NumPoses, SourcePoses, SourceWeights, RequiredBones, ResultAtoms); }
	static void BlendPosesTogetherPerBone(int NumPoses, const TArray<TArray<FTransform>> * SourcePoses, const UBlendSpaceBase * BlendSpace, const TArray<FBlendSampleData> * BlendSampleDataCache, const FBoneContainer * RequiredBones, TArray<FTransform> * ResultAtoms) { NativeCall<void, int, const TArray<TArray<FTransform>> *, const UBlendSpaceBase *, const TArray<FBlendSampleData> *, const FBoneContainer *, TArray<FTransform> *>(nullptr, "FAnimationRuntime.BlendPosesTogetherPerBone", NumPoses, SourcePoses, BlendSpace, BlendSampleDataCache, RequiredBones, ResultAtoms); }
	static void BlendPosesTogetherPerBoneInMeshSpace(int NumPoses, TArray<TArray<FTransform>> * SourcePoses, const UBlendSpaceBase * BlendSpace, const TArray<FBlendSampleData> * BlendSampleDataCache, const FBoneContainer * RequiredBones, TArray<FTransform> * ResultAtoms) { NativeCall<void, int, TArray<TArray<FTransform>> *, const UBlendSpaceBase *, const TArray<FBlendSampleData> *, const FBoneContainer *, TArray<FTransform> *>(nullptr, "FAnimationRuntime.BlendPosesTogetherPerBoneInMeshSpace", NumPoses, SourcePoses, BlendSpace, BlendSampleDataCache, RequiredBones, ResultAtoms); }
	static void ConvertBoneSpaceTransformToCS(USkeletalMeshComponent * SkelComp, FA2CSPose * MeshBases, FTransform * BoneSpaceTM, int BoneIndex, char Space) { NativeCall<void, USkeletalMeshComponent *, FA2CSPose *, FTransform *, int, char>(nullptr, "FAnimationRuntime.ConvertBoneSpaceTransformToCS", SkelComp, MeshBases, BoneSpaceTM, BoneIndex, Space); }
	static void ConvertCSTransformToBoneSpace(USkeletalMeshComponent * SkelComp, FA2CSPose * MeshBases, FTransform * CSBoneTM, int BoneIndex, char Space) { NativeCall<void, USkeletalMeshComponent *, FA2CSPose *, FTransform *, int, char>(nullptr, "FAnimationRuntime.ConvertCSTransformToBoneSpace", SkelComp, MeshBases, CSBoneTM, BoneIndex, Space); }
	static void ConvertPoseToAdditive(TArray<FTransform> * TargetPose, const TArray<FTransform> * BasePose, const FBoneContainer * RequiredBones) { NativeCall<void, TArray<FTransform> *, const TArray<FTransform> *, const FBoneContainer *>(nullptr, "FAnimationRuntime.ConvertPoseToAdditive", TargetPose, BasePose, RequiredBones); }
	static void ConvertPoseToMeshRotation(TArray<FTransform> * LocalPose, const FBoneContainer * RequiredBones) { NativeCall<void, TArray<FTransform> *, const FBoneContainer *>(nullptr, "FAnimationRuntime.ConvertPoseToMeshRotation", LocalPose, RequiredBones); }
	static void CreateMaskWeights(int NumOfBones, TArray<FPerBoneBlendWeight> * BoneBlendWeights, const TArray<FInputBlendPose> * BlendFilters, const FBoneContainer * RequiredBones, const USkeleton * Skeleton) { NativeCall<void, int, TArray<FPerBoneBlendWeight> *, const TArray<FInputBlendPose> *, const FBoneContainer *, const USkeleton *>(nullptr, "FAnimationRuntime.CreateMaskWeights", NumOfBones, BoneBlendWeights, BlendFilters, RequiredBones, Skeleton); }
	static void EnsureParentsPresent(TArray<unsigned short> * BoneIndices, USkeletalMesh * SkelMesh) { NativeCall<void, TArray<unsigned short> *, USkeletalMesh *>(nullptr, "FAnimationRuntime.EnsureParentsPresent", BoneIndices, SkelMesh); }
	static void FillWithRefPose(TArray<FTransform> * OutAtoms, const FBoneContainer * RequiredBones) { NativeCall<void, TArray<FTransform> *, const FBoneContainer *>(nullptr, "FAnimationRuntime.FillWithRefPose", OutAtoms, RequiredBones); }
	static void GetKeyIndicesFromTime(int * OutKeyIndex1, int * OutKeyIndex2, float * OutAlpha, const float Time, const int NumFrames, const float SequenceLength) { NativeCall<void, int *, int *, float *, const float, const int, const float>(nullptr, "FAnimationRuntime.GetKeyIndicesFromTime", OutKeyIndex1, OutKeyIndex2, OutAlpha, Time, NumFrames, SequenceLength); }
	static void GetPoseFromAnimTrack(const FAnimTrack * Track, const FBoneContainer * RequiredBones, TArray<FTransform> * ResultAtoms, const FAnimExtractContext * ExtractionContext) { NativeCall<void, const FAnimTrack *, const FBoneContainer *, TArray<FTransform> *, const FAnimExtractContext *>(nullptr, "FAnimationRuntime.GetPoseFromAnimTrack", Track, RequiredBones, ResultAtoms, ExtractionContext); }
	static void GetPoseFromBlendSpace(UBlendSpaceBase * BlendSpace, TArray<FBlendSampleData> * BlendSampleDataCache, FBoneContainer * RequiredBones, TArray<FTransform> * ResultAtoms) { NativeCall<void, UBlendSpaceBase *, TArray<FBlendSampleData> *, FBoneContainer *, TArray<FTransform> *>(nullptr, "FAnimationRuntime.GetPoseFromBlendSpace", BlendSpace, BlendSampleDataCache, RequiredBones, ResultAtoms); }
	static void GetPoseFromSequence(const UAnimSequenceBase * InSequence, const FBoneContainer * RequiredBones, TArray<FTransform> * ResultAtoms, const FAnimExtractContext * ExtractionContext) { NativeCall<void, const UAnimSequenceBase *, const FBoneContainer *, TArray<FTransform> *, const FAnimExtractContext *>(nullptr, "FAnimationRuntime.GetPoseFromSequence", InSequence, RequiredBones, ResultAtoms, ExtractionContext); }
	static void InitializeTransform(const FBoneContainer * RequiredBones, TArray<FTransform> * Atoms) { NativeCall<void, const FBoneContainer *, TArray<FTransform> *>(nullptr, "FAnimationRuntime.InitializeTransform", RequiredBones, Atoms); }
	static void LerpBoneTransforms(TArray<FTransform> * A, const TArray<FTransform> * B, float Alpha, const TArray<unsigned short> * RequiredBonesArray) { NativeCall<void, TArray<FTransform> *, const TArray<FTransform> *, float, const TArray<unsigned short> *>(nullptr, "FAnimationRuntime.LerpBoneTransforms", A, B, Alpha, RequiredBonesArray); }
	static void NormalizeRotations(TArray<FTransform> * Atoms) { NativeCall<void, TArray<FTransform> *>(nullptr, "FAnimationRuntime.NormalizeRotations", Atoms); }
	static void NormalizeRotations(const FBoneContainer * RequiredBones, TArray<FTransform> * Atoms) { NativeCall<void, const FBoneContainer *, TArray<FTransform> *>(nullptr, "FAnimationRuntime.NormalizeRotations", RequiredBones, Atoms); }
	static void TickBlendWeight(float DeltaTime, float DesiredWeight, float * Weight, float * BlendTime) { NativeCall<void, float, float, float *, float *>(nullptr, "FAnimationRuntime.TickBlendWeight", DeltaTime, DesiredWeight, Weight, BlendTime); }
	static void UpdateDesiredBoneWeight(const TArray<FPerBoneBlendWeight> * SrcBoneBlendWeights, TArray<FPerBoneBlendWeight> * TargetBoneBlendWeights, const TArray<float> * BlendWeights, const FBoneContainer * RequiredBones, USkeleton * Skeleton) { NativeCall<void, const TArray<FPerBoneBlendWeight> *, TArray<FPerBoneBlendWeight> *, const TArray<float> *, const FBoneContainer *, USkeleton *>(nullptr, "FAnimationRuntime.UpdateDesiredBoneWeight", SrcBoneBlendWeights, TargetBoneBlendWeights, BlendWeights, RequiredBones, Skeleton); }
};

