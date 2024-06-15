#pragma once

#include "BaseDeclarations.h"
#include "FRootMotionExtractionStep.h"

struct FAnimTrack
{
	char __padding[0x10L];
	TArray<FAnimSegment>& AnimSegmentsField() { return *GetNativePointerField<TArray<FAnimSegment>*>(this, "FAnimTrack.AnimSegments"); }

	// Functions

	void GetRootMotionExtractionStepsForTrackRange(TArray<FRootMotionExtractionStep> * RootMotionExtractionSteps, const float StartTrackPosition, const float EndTrackPosition) { NativeCall<void, TArray<FRootMotionExtractionStep> *, const float, const float>(this, "FAnimTrack.GetRootMotionExtractionStepsForTrackRange", RootMotionExtractionSteps, StartTrackPosition, EndTrackPosition); }
	bool IsAdditive() { return NativeCall<bool>(this, "FAnimTrack.IsAdditive"); }
	bool IsRotationOffsetAdditive() { return NativeCall<bool>(this, "FAnimTrack.IsRotationOffsetAdditive"); }
};

