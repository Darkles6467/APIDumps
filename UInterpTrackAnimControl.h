#pragma once

#include "BaseDeclarations.h"
#include "UInterpTrackFloatBase.h"
#include "UInterpTrack.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UInterpTrackAnimControl : UInterpTrackFloatBase
{
	char __padding[0x20L];
	FName& SlotNameField() { return *GetNativePointerField<FName*>(this, "UInterpTrackAnimControl.SlotName"); }
	TArray<FAnimControlTrackKey>& AnimSeqsField() { return *GetNativePointerField<TArray<FAnimControlTrackKey>*>(this, "UInterpTrackAnimControl.AnimSeqs"); }

	// Functions

	int AddKeyframe(float Time, UInterpTrackInst * TrInst, EInterpCurveMode InitInterpMode) { return NativeCall<int, float, UInterpTrackInst *, EInterpCurveMode>(this, "UInterpTrackAnimControl.AddKeyframe", Time, TrInst, InitInterpMode); }
	int CalcChannelIndex() { return NativeCall<int>(this, "UInterpTrackAnimControl.CalcChannelIndex"); }
	float ConditionallyReversePosition(FAnimControlTrackKey * SeqKey, UAnimSequence * Seq, float InPosition) { return NativeCall<float, FAnimControlTrackKey *, UAnimSequence *, float>(this, "UInterpTrackAnimControl.ConditionallyReversePosition", SeqKey, Seq, InPosition); }
	int DuplicateKeyframe(int KeyIndex, float NewKeyTime, UInterpTrack * ToTrack) { return NativeCall<int, int, float, UInterpTrack *>(this, "UInterpTrackAnimControl.DuplicateKeyframe", KeyIndex, NewKeyTime, ToTrack); }
	bool GetAnimForTime(float InTime, UAnimSequence ** OutAnimSequencePtr, float * OutPosition, bool * bOutLooping) { return NativeCall<bool, float, UAnimSequence **, float *, bool *>(this, "UInterpTrackAnimControl.GetAnimForTime", InTime, OutAnimSequencePtr, OutPosition, bOutLooping); }
	bool GetClosestSnapPosition(float InPosition, TArray<int> * IgnoreKeys, float * OutPosition) { return NativeCall<bool, float, TArray<int> *, float *>(this, "UInterpTrackAnimControl.GetClosestSnapPosition", InPosition, IgnoreKeys, OutPosition); }
	const FString * GetEdHelperClassName(const FString * result) { return NativeCall<const FString *, const FString *>(this, "UInterpTrackAnimControl.GetEdHelperClassName", result); }
	FColor * GetKeyframeColor(FColor * result, int KeyIndex) { return NativeCall<FColor *, FColor *, int>(this, "UInterpTrackAnimControl.GetKeyframeColor", result, KeyIndex); }
	int GetKeyframeIndex(float KeyTime) { return NativeCall<int, float>(this, "UInterpTrackAnimControl.GetKeyframeIndex", KeyTime); }
	float GetKeyframeTime(int KeyIndex) { return NativeCall<float, int>(this, "UInterpTrackAnimControl.GetKeyframeTime", KeyIndex); }
	const FString * GetSlateHelperClassName(const FString * result) { return NativeCall<const FString *, const FString *>(this, "UInterpTrackAnimControl.GetSlateHelperClassName", result); }
	void GetTimeRange(float * StartTime, float * EndTime) { NativeCall<void, float *, float *>(this, "UInterpTrackAnimControl.GetTimeRange", StartTime, EndTime); }
	float GetTrackEndTime() { return NativeCall<float>(this, "UInterpTrackAnimControl.GetTrackEndTime"); }
	void PostLoad() { NativeCall<void>(this, "UInterpTrackAnimControl.PostLoad"); }
	void PreviewUpdateTrack(float NewPosition, UInterpTrackInst * TrInst) { NativeCall<void, float, UInterpTrackInst *>(this, "UInterpTrackAnimControl.PreviewUpdateTrack", NewPosition, TrInst); }
	void RemoveKeyframe(int KeyIndex) { NativeCall<void, int>(this, "UInterpTrackAnimControl.RemoveKeyframe", KeyIndex); }
	int SetKeyframeTime(int KeyIndex, float NewKeyTime, bool bUpdateOrder) { return NativeCall<int, int, float, bool>(this, "UInterpTrackAnimControl.SetKeyframeTime", KeyIndex, NewKeyTime, bUpdateOrder); }
	void UpdateTrack(float NewPosition, UInterpTrackInst * TrInst, bool bJump) { NativeCall<void, float, UInterpTrackInst *, bool>(this, "UInterpTrackAnimControl.UpdateTrack", NewPosition, TrInst, bJump); }
	void BeginDrag(FInterpEdInputData * InputData) { NativeCall<void, FInterpEdInputData *>(this, "UInterpTrackAnimControl.BeginDrag", InputData); }
	EMouseCursor::Type GetMouseCursor(FInterpEdInputData * InputData) { return NativeCall<EMouseCursor::Type, FInterpEdInputData *>(this, "UInterpTrackAnimControl.GetMouseCursor", InputData); }
};

