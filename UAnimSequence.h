#pragma once

#include "BaseDeclarations.h"
#include "UAnimSequenceBase.h"
#include "UAnimationAsset.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FRawAnimSequenceTrack.h"

struct UAnimSequence : UAnimSequenceBase
{
	char __padding[0xe8L];
	int& NumFramesField() { return *GetNativePointerField<int*>(this, "UAnimSequence.NumFrames"); }
	TArray<FTrackToSkeletonMap>& TrackToSkeletonMapTableField() { return *GetNativePointerField<TArray<FTrackToSkeletonMap>*>(this, "UAnimSequence.TrackToSkeletonMapTable"); }
	TArray<FRawAnimSequenceTrack>& RawAnimationDataField() { return *GetNativePointerField<TArray<FRawAnimSequenceTrack>*>(this, "UAnimSequence.RawAnimationData"); }
	TArray<FTranslationTrack>& TranslationDataField() { return *GetNativePointerField<TArray<FTranslationTrack>*>(this, "UAnimSequence.TranslationData"); }
	TArray<FRotationTrack>& RotationDataField() { return *GetNativePointerField<TArray<FRotationTrack>*>(this, "UAnimSequence.RotationData"); }
	TArray<FScaleTrack>& ScaleDataField() { return *GetNativePointerField<TArray<FScaleTrack>*>(this, "UAnimSequence.ScaleData"); }
	TArray<FCurveTrack>& CurveData_DEPRECATEDField() { return *GetNativePointerField<TArray<FCurveTrack>*>(this, "UAnimSequence.CurveData_DEPRECATED"); }
	TEnumAsByte<enum AnimationCompressionFormat>& TranslationCompressionFormatField() { return *GetNativePointerField<TEnumAsByte<enum AnimationCompressionFormat>*>(this, "UAnimSequence.TranslationCompressionFormat"); }
	TEnumAsByte<enum AnimationCompressionFormat>& RotationCompressionFormatField() { return *GetNativePointerField<TEnumAsByte<enum AnimationCompressionFormat>*>(this, "UAnimSequence.RotationCompressionFormat"); }
	TEnumAsByte<enum AnimationCompressionFormat>& ScaleCompressionFormatField() { return *GetNativePointerField<TEnumAsByte<enum AnimationCompressionFormat>*>(this, "UAnimSequence.ScaleCompressionFormat"); }
	TArray<int>& CompressedTrackOffsetsField() { return *GetNativePointerField<TArray<int>*>(this, "UAnimSequence.CompressedTrackOffsets"); }
	FCompressedOffsetData& CompressedScaleOffsetsField() { return *GetNativePointerField<FCompressedOffsetData*>(this, "UAnimSequence.CompressedScaleOffsets"); }
	TArray<unsigned char>& CompressedByteStreamField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "UAnimSequence.CompressedByteStream"); }
	TEnumAsByte<enum AnimationKeyFormat>& KeyEncodingFormatField() { return *GetNativePointerField<TEnumAsByte<enum AnimationKeyFormat>*>(this, "UAnimSequence.KeyEncodingFormat"); }
	TEnumAsByte<enum EAdditiveAnimationType>& AdditiveAnimTypeField() { return *GetNativePointerField<TEnumAsByte<enum EAdditiveAnimationType>*>(this, "UAnimSequence.AdditiveAnimType"); }
	TEnumAsByte<enum EAdditiveBasePoseType>& RefPoseTypeField() { return *GetNativePointerField<TEnumAsByte<enum EAdditiveBasePoseType>*>(this, "UAnimSequence.RefPoseType"); }
	UAnimSequence * RefPoseSeqField() { return GetNativePointerField<UAnimSequence *>(this, "UAnimSequence.RefPoseSeq"); }
	int& RefFrameIndexField() { return *GetNativePointerField<int*>(this, "UAnimSequence.RefFrameIndex"); }
	int& EncodingPkgVersionField() { return *GetNativePointerField<int*>(this, "UAnimSequence.EncodingPkgVersion"); }
	FName& RetargetSourceField() { return *GetNativePointerField<FName*>(this, "UAnimSequence.RetargetSource"); }

	// Functions

	void BeginDestroy() { NativeCall<void>(this, "UAnimSequence.BeginDestroy"); }
	void ExtractBoneTransform(const TArray<FRawAnimSequenceTrack> * InRawAnimationData, FTransform * OutAtom, int TrackIndex, float Time) { NativeCall<void, const TArray<FRawAnimSequenceTrack> *, FTransform *, int, float>(this, "UAnimSequence.ExtractBoneTransform", InRawAnimationData, OutAtom, TrackIndex, Time); }
	void ExtractRootTrack(float Pos, FTransform * RootTransform, const FBoneContainer * RequiredBones) { NativeCall<void, float, FTransform *, const FBoneContainer *>(this, "UAnimSequence.ExtractRootTrack", Pos, RootTransform, RequiredBones); }
	void GetAdditiveBasePose(TArray<FTransform> * OutAtoms, const FBoneContainer * RequiredBones, const FAnimExtractContext * ExtractionContext) { NativeCall<void, TArray<FTransform> *, const FBoneContainer *, const FAnimExtractContext *>(this, "UAnimSequence.GetAdditiveBasePose", OutAtoms, RequiredBones, ExtractionContext); }
	void GetAnimationPose(TArray<FTransform> * OutAtoms, const FBoneContainer * RequiredBones, const FAnimExtractContext * ExtractionContext) { NativeCall<void, TArray<FTransform> *, const FBoneContainer *, const FAnimExtractContext *>(this, "UAnimSequence.GetAnimationPose", OutAtoms, RequiredBones, ExtractionContext); }
	void GetBonePose(TArray<FTransform> * OutAtoms, const FBoneContainer * RequiredBones, const FAnimExtractContext * ExtractionContext) { NativeCall<void, TArray<FTransform> *, const FBoneContainer *, const FAnimExtractContext *>(this, "UAnimSequence.GetBonePose", OutAtoms, RequiredBones, ExtractionContext); }
	void GetBonePose_Additive(TArray<FTransform> * OutAtoms, const FBoneContainer * RequiredBones, const FAnimExtractContext * ExtractionContext) { NativeCall<void, TArray<FTransform> *, const FBoneContainer *, const FAnimExtractContext *>(this, "UAnimSequence.GetBonePose_Additive", OutAtoms, RequiredBones, ExtractionContext); }
	void GetBonePose_AdditiveMeshRotationOnly(TArray<FTransform> * OutAtoms, const FBoneContainer * RequiredBones, const FAnimExtractContext * ExtractionContext) { NativeCall<void, TArray<FTransform> *, const FBoneContainer *, const FAnimExtractContext *>(this, "UAnimSequence.GetBonePose_AdditiveMeshRotationOnly", OutAtoms, RequiredBones, ExtractionContext); }
	void GetBoneTransform(FTransform * OutAtom, int TrackIndex, float Time, bool bUseRawData) { NativeCall<void, FTransform *, int, float, bool>(this, "UAnimSequence.GetBoneTransform", OutAtom, TrackIndex, Time, bUseRawData); }
	unsigned __int64 GetResourceSize(EResourceSizeMode::Type Mode) { return NativeCall<unsigned __int64, EResourceSizeMode::Type>(this, "UAnimSequence.GetResourceSize", Mode); }
	bool IsValidAdditive() { return NativeCall<bool>(this, "UAnimSequence.IsValidAdditive"); }
	bool IsValidToPlay() { return NativeCall<bool>(this, "UAnimSequence.IsValidToPlay"); }
	void PostLoad() { NativeCall<void>(this, "UAnimSequence.PostLoad"); }
	void ResetRootBoneForRootMotion(TArray<FTransform> * BoneTransforms, const FBoneContainer * RequiredBones, const FAnimExtractContext * ExtractionContext) { NativeCall<void, TArray<FTransform> *, const FBoneContainer *, const FAnimExtractContext *>(this, "UAnimSequence.ResetRootBoneForRootMotion", BoneTransforms, RequiredBones, ExtractionContext); }
	void RetargetBoneTransform(FTransform * BoneTransform, const int * SkeletonBoneIndex, const int * PoseBoneIndex, const FBoneContainer * RequiredBones) { NativeCall<void, FTransform *, const int *, const int *, const FBoneContainer *>(this, "UAnimSequence.RetargetBoneTransform", BoneTransform, SkeletonBoneIndex, PoseBoneIndex, RequiredBones); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UAnimSequence.Serialize", Ar); }
	void UpgradeMorphTargetCurves() { NativeCall<void>(this, "UAnimSequence.UpgradeMorphTargetCurves"); }
};

