#pragma once

#include "BaseDeclarations.h"
#include "FBoneData.h"
#include "FAnimPerturbationError.h"

struct FAnimationUtils
{

	// Functions

	static void CalculateTrackHeights(UAnimSequence * AnimSeq, const TArray<FBoneData> * BoneData, int NumTracks, TArray<int> * TrackHeights) { NativeCall<void, UAnimSequence *, const TArray<FBoneData> *, int, TArray<int> *>(nullptr, "FAnimationUtils.CalculateTrackHeights", AnimSeq, BoneData, NumTracks, TrackHeights); }
	static bool GetForcedRecompressionSetting() { return NativeCall<bool>(nullptr, "FAnimationUtils.GetForcedRecompressionSetting"); }
	static void TallyErrorsFromPerturbation(const UAnimSequence * AnimSeq, int NumTracks, const TArray<FBoneData> * BoneData, const FVector * PositionNudge, const FQuat * RotationNudge, const FVector * ScaleNudge, TArray<FAnimPerturbationError> * InducedErrors) { NativeCall<void, const UAnimSequence *, int, const TArray<FBoneData> *, const FVector *, const FQuat *, const FVector *, TArray<FAnimPerturbationError> *>(nullptr, "FAnimationUtils.TallyErrorsFromPerturbation", AnimSeq, NumTracks, BoneData, PositionNudge, RotationNudge, ScaleNudge, InducedErrors); }
};

