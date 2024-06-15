#pragma once

#include "BaseDeclarations.h"
#include "UInterpTrackFloatBase.h"
#include "UInterpTrack.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UInterpTrackFloatProp : UInterpTrackFloatBase
{
	char __padding[0x10L];
	FName& PropertyNameField() { return *GetNativePointerField<FName*>(this, "UInterpTrackFloatProp.PropertyName"); }
	TEnumAsByte<enum ETrackInterpMode>& InterpModeField() { return *GetNativePointerField<TEnumAsByte<enum ETrackInterpMode>*>(this, "UInterpTrackFloatProp.InterpMode"); }

	// Functions

	int AddKeyframe(float Time, UInterpTrackInst * TrInst, EInterpCurveMode InitInterpMode) { return NativeCall<int, float, UInterpTrackInst *, EInterpCurveMode>(this, "UInterpTrackFloatProp.AddKeyframe", Time, TrInst, InitInterpMode); }
	const FString * GetEdHelperClassName(const FString * result) { return NativeCall<const FString *, const FString *>(this, "UInterpTrackFloatProp.GetEdHelperClassName", result); }
	const FString * GetSlateHelperClassName(const FString * result) { return NativeCall<const FString *, const FString *>(this, "UInterpTrackFloatProp.GetSlateHelperClassName", result); }
	void ReduceKeys(float IntervalStart, float IntervalEnd, float Tolerance) { NativeCall<void, float, float, float>(this, "UInterpTrackFloatProp.ReduceKeys", IntervalStart, IntervalEnd, Tolerance); }
	void UpdateKeyframe(int KeyIndex, UInterpTrackInst * TrInst) { NativeCall<void, int, UInterpTrackInst *>(this, "UInterpTrackFloatProp.UpdateKeyframe", KeyIndex, TrInst); }
	void UpdateTrack(float NewPosition, UInterpTrackInst * TrInst, bool bJump) { NativeCall<void, float, UInterpTrackInst *, bool>(this, "UInterpTrackFloatProp.UpdateTrack", NewPosition, TrInst, bJump); }
};

