#pragma once

#include "BaseDeclarations.h"
#include "FRootMotionExtractionStep.h"

struct FAnimSegment
{
	char __padding[0x28L];
	float& StartPosField() { return *GetNativePointerField<float*>(this, "FAnimSegment.StartPos"); }
	float& AnimStartOffset_DEPRECATEDField() { return *GetNativePointerField<float*>(this, "FAnimSegment.AnimStartOffset_DEPRECATED"); }
	float& AnimEndOffset_DEPRECATEDField() { return *GetNativePointerField<float*>(this, "FAnimSegment.AnimEndOffset_DEPRECATED"); }
	float& AnimStartTimeField() { return *GetNativePointerField<float*>(this, "FAnimSegment.AnimStartTime"); }
	float& AnimEndTimeField() { return *GetNativePointerField<float*>(this, "FAnimSegment.AnimEndTime"); }
	float& AnimPlayRateField() { return *GetNativePointerField<float*>(this, "FAnimSegment.AnimPlayRate"); }
	int& LoopingCountField() { return *GetNativePointerField<int*>(this, "FAnimSegment.LoopingCount"); }

	// Functions

	float ConvertTrackPosToAnimPos(const float * TrackPosition) { return NativeCall<float, const float *>(this, "FAnimSegment.ConvertTrackPosToAnimPos", TrackPosition); }
	void GetAnimNotifiesFromTrackPositions(const float * PreviousTrackPosition, const float * CurrentTrackPosition, TArray<FAnimNotifyEvent const *> * OutActiveNotifies) { NativeCall<void, const float *, const float *, TArray<FAnimNotifyEvent const *> *>(this, "FAnimSegment.GetAnimNotifiesFromTrackPositions", PreviousTrackPosition, CurrentTrackPosition, OutActiveNotifies); }
	float GetLength() { return NativeCall<float>(this, "FAnimSegment.GetLength"); }
	void GetRootMotionExtractionStepsForTrackRange(TArray<FRootMotionExtractionStep> * RootMotionExtractionSteps, const float StartTrackPosition, const float EndTrackPosition) { NativeCall<void, TArray<FRootMotionExtractionStep> *, const float, const float>(this, "FAnimSegment.GetRootMotionExtractionStepsForTrackRange", RootMotionExtractionSteps, StartTrackPosition, EndTrackPosition); }
};

