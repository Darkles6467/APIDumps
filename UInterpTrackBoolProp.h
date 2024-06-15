#pragma once

#include "BaseDeclarations.h"
#include "UInterpTrack.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UInterpTrackBoolProp : UInterpTrack
{
	char __padding[0x18L];
	TArray<FBoolTrackKey>& BoolTrackField() { return *GetNativePointerField<TArray<FBoolTrackKey>*>(this, "UInterpTrackBoolProp.BoolTrack"); }
	FName& PropertyNameField() { return *GetNativePointerField<FName*>(this, "UInterpTrackBoolProp.PropertyName"); }

	// Functions

	int AddKeyframe(float Time, UInterpTrackInst * TrackInst, EInterpCurveMode InitInterpMode) { return NativeCall<int, float, UInterpTrackInst *, EInterpCurveMode>(this, "UInterpTrackBoolProp.AddKeyframe", Time, TrackInst, InitInterpMode); }
	bool CanAddKeyframe(UInterpTrackInst * TrackInst) { return NativeCall<bool, UInterpTrackInst *>(this, "UInterpTrackBoolProp.CanAddKeyframe", TrackInst); }
	int DuplicateKeyframe(int KeyIndex, float NewKeyTime, UInterpTrack * ToTrack) { return NativeCall<int, int, float, UInterpTrack *>(this, "UInterpTrackBoolProp.DuplicateKeyframe", KeyIndex, NewKeyTime, ToTrack); }
	const FString * GetEdHelperClassName(const FString * result) { return NativeCall<const FString *, const FString *>(this, "UInterpTrackBoolProp.GetEdHelperClassName", result); }
	const FString * GetSlateHelperClassName(const FString * result) { return NativeCall<const FString *, const FString *>(this, "UInterpTrackBoolProp.GetSlateHelperClassName", result); }
	float GetTrackEndTime() { return NativeCall<float>(this, "UInterpTrackBoolProp.GetTrackEndTime"); }
	int SetKeyframeTime(int KeyIndex, float NewKeyTime, bool bUpdateOrder) { return NativeCall<int, int, float, bool>(this, "UInterpTrackBoolProp.SetKeyframeTime", KeyIndex, NewKeyTime, bUpdateOrder); }
	void UpdateKeyframe(int KeyIndex, UInterpTrackInst * TrackInst) { NativeCall<void, int, UInterpTrackInst *>(this, "UInterpTrackBoolProp.UpdateKeyframe", KeyIndex, TrackInst); }
	void UpdateTrack(float NewPosition, UInterpTrackInst * TrackInst, bool bJump) { NativeCall<void, float, UInterpTrackInst *, bool>(this, "UInterpTrackBoolProp.UpdateTrack", NewPosition, TrackInst, bJump); }
};

