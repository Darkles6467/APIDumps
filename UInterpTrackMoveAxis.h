#pragma once

#include "BaseDeclarations.h"
#include "UInterpTrackFloatBase.h"
#include "UInterpTrack.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UInterpTrackMoveAxis : UInterpTrackFloatBase
{
	char __padding[0x18L];
	TEnumAsByte<enum EInterpMoveAxis>& MoveAxisField() { return *GetNativePointerField<TEnumAsByte<enum EInterpMoveAxis>*>(this, "UInterpTrackMoveAxis.MoveAxis"); }
	FInterpLookupTrack& LookupTrackField() { return *GetNativePointerField<FInterpLookupTrack*>(this, "UInterpTrackMoveAxis.LookupTrack"); }

	// Functions

	int AddKeyframe(float Time, UInterpTrackInst * TrInst, EInterpCurveMode InitInterpMode) { return NativeCall<int, float, UInterpTrackInst *, EInterpCurveMode>(this, "UInterpTrackMoveAxis.AddKeyframe", Time, TrInst, InitInterpMode); }
	int DuplicateKeyframe(int KeyIndex, float NewKeyTime, UInterpTrack * ToTrack) { return NativeCall<int, int, float, UInterpTrack *>(this, "UInterpTrackMoveAxis.DuplicateKeyframe", KeyIndex, NewKeyTime, ToTrack); }
	float EvalValueAtTime(UInterpTrackInst * TrInst, float Time) { return NativeCall<float, UInterpTrackInst *, float>(this, "UInterpTrackMoveAxis.EvalValueAtTime", TrInst, Time); }
	void GetKeyframeValue(UInterpTrackInst * TrInst, int KeyIndex, float * OutTime, float * OutValue, float * OutArriveTangent, float * OutLeaveTangent) { NativeCall<void, UInterpTrackInst *, int, float *, float *, float *, float *>(this, "UInterpTrackMoveAxis.GetKeyframeValue", TrInst, KeyIndex, OutTime, OutValue, OutArriveTangent, OutLeaveTangent); }
	void ReduceKeys(float IntervalStart, float IntervalEnd, float Tolerance) { NativeCall<void, float, float, float>(this, "UInterpTrackMoveAxis.ReduceKeys", IntervalStart, IntervalEnd, Tolerance); }
	void RemoveKeyframe(int KeyIndex) { NativeCall<void, int>(this, "UInterpTrackMoveAxis.RemoveKeyframe", KeyIndex); }
	int SetKeyframeTime(int KeyIndex, float NewKeyTime, bool bUpdateOrder) { return NativeCall<int, int, float, bool>(this, "UInterpTrackMoveAxis.SetKeyframeTime", KeyIndex, NewKeyTime, bUpdateOrder); }
	void UpdateKeyframe(int KeyIndex, UInterpTrackInst * TrInst) { NativeCall<void, int, UInterpTrackInst *>(this, "UInterpTrackMoveAxis.UpdateKeyframe", KeyIndex, TrInst); }
	int CreateNewKey(float KeyIn) { return NativeCall<int, float>(this, "UInterpTrackMoveAxis.CreateNewKey", KeyIn); }
	void DeleteKey(int KeyIndex) { NativeCall<void, int>(this, "UInterpTrackMoveAxis.DeleteKey", KeyIndex); }
	FColor * GetKeyColor(FColor * result, int SubIndex, int KeyIndex, const FColor * CurveColor) { return NativeCall<FColor *, FColor *, int, int, const FColor *>(this, "UInterpTrackMoveAxis.GetKeyColor", result, SubIndex, KeyIndex, CurveColor); }
	FColor * GetSubCurveButtonColor(FColor * result, int SubCurveIndex, bool bIsSubCurveHidden) { return NativeCall<FColor *, FColor *, int, bool>(this, "UInterpTrackMoveAxis.GetSubCurveButtonColor", result, SubCurveIndex, bIsSubCurveHidden); }
	int SetKeyIn(int KeyIndex, float NewInVal) { return NativeCall<int, int, float>(this, "UInterpTrackMoveAxis.SetKeyIn", KeyIndex, NewInVal); }
};

