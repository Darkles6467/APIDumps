#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "FTranslationTrack.h"
#include "FRotationTrack.h"
#include "FScaleTrack.h"
#include "FBoneData.h"

struct UAnimCompress : UObject
{
	char __padding[0x18L];
	FString& DescriptionField() { return *GetNativePointerField<FString*>(this, "UAnimCompress.Description"); }
	TEnumAsByte<enum AnimationCompressionFormat>& TranslationCompressionFormatField() { return *GetNativePointerField<TEnumAsByte<enum AnimationCompressionFormat>*>(this, "UAnimCompress.TranslationCompressionFormat"); }
	TEnumAsByte<enum AnimationCompressionFormat>& RotationCompressionFormatField() { return *GetNativePointerField<TEnumAsByte<enum AnimationCompressionFormat>*>(this, "UAnimCompress.RotationCompressionFormat"); }
	TEnumAsByte<enum AnimationCompressionFormat>& ScaleCompressionFormatField() { return *GetNativePointerField<TEnumAsByte<enum AnimationCompressionFormat>*>(this, "UAnimCompress.ScaleCompressionFormat"); }

	// Functions

	static void BitwiseCompressAnimationTracks(UAnimSequence * Seq, AnimationCompressionFormat TargetTranslationFormat, AnimationCompressionFormat TargetRotationFormat, AnimationCompressionFormat TargetScaleFormat, const TArray<FTranslationTrack> * TranslationData, const TArray<FRotationTrack> * RotationData, const TArray<FScaleTrack> * ScaleData, bool IncludeKeyTable) { NativeCall<void, UAnimSequence *, AnimationCompressionFormat, AnimationCompressionFormat, AnimationCompressionFormat, const TArray<FTranslationTrack> *, const TArray<FRotationTrack> *, const TArray<FScaleTrack> *, bool>(nullptr, "UAnimCompress.BitwiseCompressAnimationTracks", Seq, TargetTranslationFormat, TargetRotationFormat, TargetScaleFormat, TranslationData, RotationData, ScaleData, IncludeKeyTable); }
	void DoReduction(UAnimSequence * AnimSeq, const TArray<FBoneData> * BoneData) { NativeCall<void, UAnimSequence *, const TArray<FBoneData> *>(this, "UAnimCompress.DoReduction", AnimSeq, BoneData); }
	static void FilterTrivialScaleKeys(TArray<FScaleTrack> * InputTracks, float MaxScaleDelta) { NativeCall<void, TArray<FScaleTrack> *, float>(nullptr, "UAnimCompress.FilterTrivialScaleKeys", InputTracks, MaxScaleDelta); }
	static void FilterTrivialRotationKeys(TArray<FRotationTrack> * InputTracks, float MaxRotDelta) { NativeCall<void, TArray<FRotationTrack> *, float>(nullptr, "UAnimCompress.FilterTrivialRotationKeys", InputTracks, MaxRotDelta); }
};

