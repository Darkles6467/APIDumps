#pragma once

#include "BaseDeclarations.h"
#include "UInterpTrack.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UInterpTrackToggle : UInterpTrack
{
	char __padding[0x18L];
	TArray<FToggleTrackKey>& ToggleTrackField() { return *GetNativePointerField<TArray<FToggleTrackKey>*>(this, "UInterpTrackToggle.ToggleTrack"); }

	// Functions

	int DuplicateKeyframe(int KeyIndex, float NewKeyTime, UInterpTrack * ToTrack) { return NativeCall<int, int, float, UInterpTrack *>(this, "UInterpTrackToggle.DuplicateKeyframe", KeyIndex, NewKeyTime, ToTrack); }
	bool GetClosestSnapPosition(float InPosition, TArray<int> * IgnoreKeys, float * OutPosition) { return NativeCall<bool, float, TArray<int> *, float *>(this, "UInterpTrackToggle.GetClosestSnapPosition", InPosition, IgnoreKeys, OutPosition); }
	const FString * GetEdHelperClassName(const FString * result) { return NativeCall<const FString *, const FString *>(this, "UInterpTrackToggle.GetEdHelperClassName", result); }
	int GetKeyframeIndex(float KeyTime) { return NativeCall<int, float>(this, "UInterpTrackToggle.GetKeyframeIndex", KeyTime); }
	float GetKeyframeTime(int KeyIndex) { return NativeCall<float, int>(this, "UInterpTrackToggle.GetKeyframeTime", KeyIndex); }
	const FString * GetSlateHelperClassName(const FString * result) { return NativeCall<const FString *, const FString *>(this, "UInterpTrackToggle.GetSlateHelperClassName", result); }
	int SetKeyframeTime(int KeyIndex, float NewKeyTime, bool bUpdateOrder) { return NativeCall<int, int, float, bool>(this, "UInterpTrackToggle.SetKeyframeTime", KeyIndex, NewKeyTime, bUpdateOrder); }
	void UpdateTrack(float NewPosition, UInterpTrackInst * TrInst, bool bJump) { NativeCall<void, float, UInterpTrackInst *, bool>(this, "UInterpTrackToggle.UpdateTrack", NewPosition, TrInst, bJump); }
};

