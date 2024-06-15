#pragma once

#include "BaseDeclarations.h"
#include "UAnimCompress.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FBoneData.h"
#include "FTranslationTrack.h"
#include "FRotationTrack.h"
#include "FScaleTrack.h"

struct UAnimCompress_RemoveLinearKeys : UAnimCompress
{
	char __padding[0x20L];
	float& MaxPosDiffField() { return *GetNativePointerField<float*>(this, "UAnimCompress_RemoveLinearKeys.MaxPosDiff"); }
	float& MaxAngleDiffField() { return *GetNativePointerField<float*>(this, "UAnimCompress_RemoveLinearKeys.MaxAngleDiff"); }
	float& MaxScaleDiffField() { return *GetNativePointerField<float*>(this, "UAnimCompress_RemoveLinearKeys.MaxScaleDiff"); }
	float& MaxEffectorDiffField() { return *GetNativePointerField<float*>(this, "UAnimCompress_RemoveLinearKeys.MaxEffectorDiff"); }
	float& MinEffectorDiffField() { return *GetNativePointerField<float*>(this, "UAnimCompress_RemoveLinearKeys.MinEffectorDiff"); }
	float& EffectorDiffSocketField() { return *GetNativePointerField<float*>(this, "UAnimCompress_RemoveLinearKeys.EffectorDiffSocket"); }
	float& ParentKeyScaleField() { return *GetNativePointerField<float*>(this, "UAnimCompress_RemoveLinearKeys.ParentKeyScale"); }

	// Functions

	void CompressUsingUnderlyingCompressor(UAnimSequence * AnimSeq, const TArray<FBoneData> * BoneData, const TArray<FTranslationTrack> * TranslationData, const TArray<FRotationTrack> * RotationData, const TArray<FScaleTrack> * ScaleData, const bool bFinalPass) { NativeCall<void, UAnimSequence *, const TArray<FBoneData> *, const TArray<FTranslationTrack> *, const TArray<FRotationTrack> *, const TArray<FScaleTrack> *, const bool>(this, "UAnimCompress_RemoveLinearKeys.CompressUsingUnderlyingCompressor", AnimSeq, BoneData, TranslationData, RotationData, ScaleData, bFinalPass); }
	void FilterBeforeMainKeyRemoval(UAnimSequence * AnimSeq, const TArray<FBoneData> * BoneData, TArray<FTranslationTrack> * TranslationData, TArray<FRotationTrack> * RotationData, TArray<FScaleTrack> * ScaleData) { NativeCall<void, UAnimSequence *, const TArray<FBoneData> *, TArray<FTranslationTrack> *, TArray<FRotationTrack> *, TArray<FScaleTrack> *>(this, "UAnimCompress_RemoveLinearKeys.FilterBeforeMainKeyRemoval", AnimSeq, BoneData, TranslationData, RotationData, ScaleData); }
};

struct UAnimCompress_PerTrackCompression : UAnimCompress_RemoveLinearKeys
{
	char __padding[0x80L];
	float& MaxZeroingThresholdField() { return *GetNativePointerField<float*>(this, "UAnimCompress_PerTrackCompression.MaxZeroingThreshold"); }
	float& MaxPosDiffBitwiseField() { return *GetNativePointerField<float*>(this, "UAnimCompress_PerTrackCompression.MaxPosDiffBitwise"); }
	float& MaxAngleDiffBitwiseField() { return *GetNativePointerField<float*>(this, "UAnimCompress_PerTrackCompression.MaxAngleDiffBitwise"); }
	float& MaxScaleDiffBitwiseField() { return *GetNativePointerField<float*>(this, "UAnimCompress_PerTrackCompression.MaxScaleDiffBitwise"); }
	TArray<TEnumAsByte<enum AnimationCompressionFormat>>& AllowedRotationFormatsField() { return *GetNativePointerField<TArray<TEnumAsByte<enum AnimationCompressionFormat>>*>(this, "UAnimCompress_PerTrackCompression.AllowedRotationFormats"); }
	TArray<TEnumAsByte<enum AnimationCompressionFormat>>& AllowedTranslationFormatsField() { return *GetNativePointerField<TArray<TEnumAsByte<enum AnimationCompressionFormat>>*>(this, "UAnimCompress_PerTrackCompression.AllowedTranslationFormats"); }
	TArray<TEnumAsByte<enum AnimationCompressionFormat>>& AllowedScaleFormatsField() { return *GetNativePointerField<TArray<TEnumAsByte<enum AnimationCompressionFormat>>*>(this, "UAnimCompress_PerTrackCompression.AllowedScaleFormats"); }
	float& ResampledFramerateField() { return *GetNativePointerField<float*>(this, "UAnimCompress_PerTrackCompression.ResampledFramerate"); }
	int& MinKeysForResamplingField() { return *GetNativePointerField<int*>(this, "UAnimCompress_PerTrackCompression.MinKeysForResampling"); }
	int& TrackHeightBiasField() { return *GetNativePointerField<int*>(this, "UAnimCompress_PerTrackCompression.TrackHeightBias"); }
	float& ParentingDivisorField() { return *GetNativePointerField<float*>(this, "UAnimCompress_PerTrackCompression.ParentingDivisor"); }
	float& ParentingDivisorExponentField() { return *GetNativePointerField<float*>(this, "UAnimCompress_PerTrackCompression.ParentingDivisorExponent"); }
	float& RotationErrorSourceRatioField() { return *GetNativePointerField<float*>(this, "UAnimCompress_PerTrackCompression.RotationErrorSourceRatio"); }
	float& TranslationErrorSourceRatioField() { return *GetNativePointerField<float*>(this, "UAnimCompress_PerTrackCompression.TranslationErrorSourceRatio"); }
	float& ScaleErrorSourceRatioField() { return *GetNativePointerField<float*>(this, "UAnimCompress_PerTrackCompression.ScaleErrorSourceRatio"); }
	float& MaxErrorPerTrackRatioField() { return *GetNativePointerField<float*>(this, "UAnimCompress_PerTrackCompression.MaxErrorPerTrackRatio"); }
	float& PerturbationProbeSizeField() { return *GetNativePointerField<float*>(this, "UAnimCompress_PerTrackCompression.PerturbationProbeSize"); }
	FPerTrackCachedInfo * PerReductionCachedDataField() { return GetNativePointerField<FPerTrackCachedInfo *>(this, "UAnimCompress_PerTrackCompression.PerReductionCachedData"); }

	// Functions

	void CompressUsingUnderlyingCompressor(UAnimSequence * AnimSeq, const TArray<FBoneData> * BoneData, const TArray<FTranslationTrack> * TranslationData, const TArray<FRotationTrack> * RotationData, const TArray<FScaleTrack> * ScaleData, const bool bFinalPass) { NativeCall<void, UAnimSequence *, const TArray<FBoneData> *, const TArray<FTranslationTrack> *, const TArray<FRotationTrack> *, const TArray<FScaleTrack> *, const bool>(this, "UAnimCompress_PerTrackCompression.CompressUsingUnderlyingCompressor", AnimSeq, BoneData, TranslationData, RotationData, ScaleData, bFinalPass); }
	void FilterBeforeMainKeyRemoval(UAnimSequence * AnimSeq, const TArray<FBoneData> * BoneData, TArray<FTranslationTrack> * TranslationData, TArray<FRotationTrack> * RotationData, TArray<FScaleTrack> * ScaleData) { NativeCall<void, UAnimSequence *, const TArray<FBoneData> *, TArray<FTranslationTrack> *, TArray<FRotationTrack> *, TArray<FScaleTrack> *>(this, "UAnimCompress_PerTrackCompression.FilterBeforeMainKeyRemoval", AnimSeq, BoneData, TranslationData, RotationData, ScaleData); }
};

