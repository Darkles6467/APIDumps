#pragma once

#include "BaseDeclarations.h"
#include "UInterpTrack.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UInterpTrackVisibility : UInterpTrack
{
	char __padding[0x18L];
	TArray<FVisibilityTrackKey>& VisibilityTrackField() { return *GetNativePointerField<TArray<FVisibilityTrackKey>*>(this, "UInterpTrackVisibility.VisibilityTrack"); }

	// Functions

	int AddKeyframe(float Time, UInterpTrackInst * TrInst, EInterpCurveMode InitInterpMode) { return NativeCall<int, float, UInterpTrackInst *, EInterpCurveMode>(this, "UInterpTrackVisibility.AddKeyframe", Time, TrInst, InitInterpMode); }
	int DuplicateKeyframe(int KeyIndex, float NewKeyTime, UInterpTrack * ToTrack) { return NativeCall<int, int, float, UInterpTrack *>(this, "UInterpTrackVisibility.DuplicateKeyframe", KeyIndex, NewKeyTime, ToTrack); }
	const FString * GetEdHelperClassName(const FString * result) { return NativeCall<const FString *, const FString *>(this, "UInterpTrackVisibility.GetEdHelperClassName", result); }
	const FString * GetSlateHelperClassName(const FString * result) { return NativeCall<const FString *, const FString *>(this, "UInterpTrackVisibility.GetSlateHelperClassName", result); }
	void GetTimeRange(float * StartTime, float * EndTime) { NativeCall<void, float *, float *>(this, "UInterpTrackVisibility.GetTimeRange", StartTime, EndTime); }
	void RemoveKeyframe(int KeyIndex) { NativeCall<void, int>(this, "UInterpTrackVisibility.RemoveKeyframe", KeyIndex); }
	int SetKeyframeTime(int KeyIndex, float NewKeyTime, bool bUpdateOrder) { return NativeCall<int, int, float, bool>(this, "UInterpTrackVisibility.SetKeyframeTime", KeyIndex, NewKeyTime, bUpdateOrder); }
	void UpdateTrack(float NewPosition, UInterpTrackInst * TrInst, bool bJump) { NativeCall<void, float, UInterpTrackInst *, bool>(this, "UInterpTrackVisibility.UpdateTrack", NewPosition, TrInst, bJump); }
};

