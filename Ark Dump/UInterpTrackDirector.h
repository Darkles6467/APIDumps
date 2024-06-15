#pragma once

#include "BaseDeclarations.h"
#include "UInterpTrack.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UInterpTrackDirector : UInterpTrack
{
	char __padding[0x18L];
	TArray<FDirectorTrackCut>& CutTrackField() { return *GetNativePointerField<TArray<FDirectorTrackCut>*>(this, "UInterpTrackDirector.CutTrack"); }

	// Functions

	int AddKeyframe(float Time, UInterpTrackInst * TrInst, EInterpCurveMode InitInterpMode) { return NativeCall<int, float, UInterpTrackInst *, EInterpCurveMode>(this, "UInterpTrackDirector.AddKeyframe", Time, TrInst, InitInterpMode); }
	int DuplicateKeyframe(int KeyIndex, float NewKeyTime, UInterpTrack * ToTrack) { return NativeCall<int, int, float, UInterpTrack *>(this, "UInterpTrackDirector.DuplicateKeyframe", KeyIndex, NewKeyTime, ToTrack); }
	int GenerateCameraShotNumber(int KeyIndex) { return NativeCall<int, int>(this, "UInterpTrackDirector.GenerateCameraShotNumber", KeyIndex); }
	const FString * GetEdHelperClassName(const FString * result) { return NativeCall<const FString *, const FString *>(this, "UInterpTrackDirector.GetEdHelperClassName", result); }
	const FString * GetSlateHelperClassName(const FString * result) { return NativeCall<const FString *, const FString *>(this, "UInterpTrackDirector.GetSlateHelperClassName", result); }
	void PostLoad() { NativeCall<void>(this, "UInterpTrackDirector.PostLoad"); }
	void RemoveKeyframe(int KeyIndex) { NativeCall<void, int>(this, "UInterpTrackDirector.RemoveKeyframe", KeyIndex); }
	int SetKeyframeTime(int KeyIndex, float NewKeyTime, bool bUpdateOrder) { return NativeCall<int, int, float, bool>(this, "UInterpTrackDirector.SetKeyframeTime", KeyIndex, NewKeyTime, bUpdateOrder); }
	void UpdateTrack(float NewPosition, UInterpTrackInst * TrInst, bool bJump) { NativeCall<void, float, UInterpTrackInst *, bool>(this, "UInterpTrackDirector.UpdateTrack", NewPosition, TrInst, bJump); }
};

