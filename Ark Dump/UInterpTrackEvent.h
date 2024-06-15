#pragma once

#include "BaseDeclarations.h"
#include "UInterpTrack.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UInterpTrackEvent : UInterpTrack
{
	char __padding[0x18L];

	// Functions

	int AddKeyframe(float Time, UInterpTrackInst * TrInst, EInterpCurveMode InitInterpMode) { return NativeCall<int, float, UInterpTrackInst *, EInterpCurveMode>(this, "UInterpTrackEvent.AddKeyframe", Time, TrInst, InitInterpMode); }
	bool GetClosestSnapPosition(float InPosition, TArray<int> * IgnoreKeys, float * OutPosition) { return NativeCall<bool, float, TArray<int> *, float *>(this, "UInterpTrackEvent.GetClosestSnapPosition", InPosition, IgnoreKeys, OutPosition); }
	const FString * GetEdHelperClassName(const FString * result) { return NativeCall<const FString *, const FString *>(this, "UInterpTrackEvent.GetEdHelperClassName", result); }
	int GetKeyframeIndex(float KeyTime) { return NativeCall<int, float>(this, "UInterpTrackEvent.GetKeyframeIndex", KeyTime); }
	float GetKeyframeTime(int KeyIndex) { return NativeCall<float, int>(this, "UInterpTrackEvent.GetKeyframeTime", KeyIndex); }
	const FString * GetSlateHelperClassName(const FString * result) { return NativeCall<const FString *, const FString *>(this, "UInterpTrackEvent.GetSlateHelperClassName", result); }
	float GetTrackEndTime() { return NativeCall<float>(this, "UInterpTrackEvent.GetTrackEndTime"); }
	void RemoveKeyframe(int KeyIndex) { NativeCall<void, int>(this, "UInterpTrackEvent.RemoveKeyframe", KeyIndex); }
	int SetKeyframeTime(int KeyIndex, float NewKeyTime, bool bUpdateOrder) { return NativeCall<int, int, float, bool>(this, "UInterpTrackEvent.SetKeyframeTime", KeyIndex, NewKeyTime, bUpdateOrder); }
	void UpdateTrack(float NewPosition, UInterpTrackInst * TrInst, bool bJump) { NativeCall<void, float, UInterpTrackInst *, bool>(this, "UInterpTrackEvent.UpdateTrack", NewPosition, TrInst, bJump); }
};

