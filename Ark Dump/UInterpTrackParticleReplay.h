#pragma once

#include "BaseDeclarations.h"
#include "UInterpTrack.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UInterpTrackParticleReplay : UInterpTrack
{
	char __padding[0x10L];
	TArray<FParticleReplayTrackKey>& TrackKeysField() { return *GetNativePointerField<TArray<FParticleReplayTrackKey>*>(this, "UInterpTrackParticleReplay.TrackKeys"); }

	// Functions

	int AddKeyframe(float Time, UInterpTrackInst * TrInst, EInterpCurveMode InitInterpMode) { return NativeCall<int, float, UInterpTrackInst *, EInterpCurveMode>(this, "UInterpTrackParticleReplay.AddKeyframe", Time, TrInst, InitInterpMode); }
	int DuplicateKeyframe(int KeyIndex, float NewKeyTime, UInterpTrack * ToTrack) { return NativeCall<int, int, float, UInterpTrack *>(this, "UInterpTrackParticleReplay.DuplicateKeyframe", KeyIndex, NewKeyTime, ToTrack); }
	const FString * GetEdHelperClassName(const FString * result) { return NativeCall<const FString *, const FString *>(this, "UInterpTrackParticleReplay.GetEdHelperClassName", result); }
	const FString * GetSlateHelperClassName(const FString * result) { return NativeCall<const FString *, const FString *>(this, "UInterpTrackParticleReplay.GetSlateHelperClassName", result); }
	void GetTimeRange(float * StartTime, float * EndTime) { NativeCall<void, float *, float *>(this, "UInterpTrackParticleReplay.GetTimeRange", StartTime, EndTime); }
	float GetTrackEndTime() { return NativeCall<float>(this, "UInterpTrackParticleReplay.GetTrackEndTime"); }
	void PreviewUpdateTrack(float NewPosition, UInterpTrackInst * TrInst) { NativeCall<void, float, UInterpTrackInst *>(this, "UInterpTrackParticleReplay.PreviewUpdateTrack", NewPosition, TrInst); }
	void RemoveKeyframe(int KeyIndex) { NativeCall<void, int>(this, "UInterpTrackParticleReplay.RemoveKeyframe", KeyIndex); }
	void UpdateTrack(float NewPosition, UInterpTrackInst * TrInst, bool bJump) { NativeCall<void, float, UInterpTrackInst *, bool>(this, "UInterpTrackParticleReplay.UpdateTrack", NewPosition, TrInst, bJump); }
	void BeginDrag(FInterpEdInputData * InputData) { NativeCall<void, FInterpEdInputData *>(this, "UInterpTrackParticleReplay.BeginDrag", InputData); }
	void EndDrag(FInterpEdInputData * InputData) { NativeCall<void, FInterpEdInputData *>(this, "UInterpTrackParticleReplay.EndDrag", InputData); }
	EMouseCursor::Type GetMouseCursor(FInterpEdInputData * InputData) { return NativeCall<EMouseCursor::Type, FInterpEdInputData *>(this, "UInterpTrackParticleReplay.GetMouseCursor", InputData); }
};

