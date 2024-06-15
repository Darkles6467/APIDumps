#pragma once

#include "BaseDeclarations.h"
#include "FIndexedCurve.h"
#include "FKeyHandle.h"
#include "FRichCurveKey.h"

struct FRichCurve : FIndexedCurve
{
	char __padding[0x10L];
	TArray<FRichCurveKey>& KeysField() { return *GetNativePointerField<TArray<FRichCurveKey>*>(this, "FRichCurve.Keys"); }

	// Functions

	FKeyHandle * AddKey(FKeyHandle * result, float InTime, float InValue, const bool bUnwindRotation, FKeyHandle NewHandle) { return NativeCall<FKeyHandle *, FKeyHandle *, float, float, const bool, FKeyHandle>(this, "FRichCurve.AddKey", result, InTime, InValue, bUnwindRotation, NewHandle); }
	static void ConvertInterpCurveFloat(const FInterpCurve<float> * InCurve, FRichCurve * OutCurve) { NativeCall<void, const FInterpCurve<float> *, FRichCurve *>(nullptr, "FRichCurve.ConvertInterpCurveFloat", InCurve, OutCurve); }
	static void ConvertInterpCurveVector(const FInterpCurve<FVector> * InCurve, FRichCurve * OutCurves) { NativeCall<void, const FInterpCurve<FVector> *, FRichCurve *>(nullptr, "FRichCurve.ConvertInterpCurveVector", InCurve, OutCurves); }
	float Eval(float InTime, float DefaultValue) { return NativeCall<float, float, float>(this, "FRichCurve.Eval", InTime, DefaultValue); }
	TArray<FRichCurveKey> * GetCopyOfKeys(TArray<FRichCurveKey> * result) { return NativeCall<TArray<FRichCurveKey> *, TArray<FRichCurveKey> *>(this, "FRichCurve.GetCopyOfKeys", result); }
	TIndexedContainerIterator<TArray<FRichCurveKey> const ,FRichCurveKey const ,int> * GetKeyIterator(TIndexedContainerIterator<TArray<FRichCurveKey> const ,FRichCurveKey const ,int> * result) { return NativeCall<TIndexedContainerIterator<TArray<FRichCurveKey> const ,FRichCurveKey const ,int> *, TIndexedContainerIterator<TArray<FRichCurveKey> const ,FRichCurveKey const ,int> *>(this, "FRichCurve.GetKeyIterator", result); }
	void GetTimeRange(float * MinTime, float * MaxTime) { NativeCall<void, float *, float *>(this, "FRichCurve.GetTimeRange", MinTime, MaxTime); }
	void GetValueRange(float * MinValue, float * MaxValue) { NativeCall<void, float *, float *>(this, "FRichCurve.GetValueRange", MinValue, MaxValue); }
	void Reset() { NativeCall<void>(this, "FRichCurve.Reset"); }
	void ScaleCurve(float ScaleOrigin, float ScaleFactor) { NativeCall<void, float, float>(this, "FRichCurve.ScaleCurve", ScaleOrigin, ScaleFactor); }
	void ShiftCurve(float DeltaTime) { NativeCall<void, float>(this, "FRichCurve.ShiftCurve", DeltaTime); }
	FKeyHandle * UpdateOrAddKey(FKeyHandle * result, float InTime, float InValue) { return NativeCall<FKeyHandle *, FKeyHandle *, float, float>(this, "FRichCurve.UpdateOrAddKey", result, InTime, InValue); }
};

