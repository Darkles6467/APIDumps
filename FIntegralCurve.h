#pragma once

#include "BaseDeclarations.h"
#include "FIndexedCurve.h"
#include "FKeyHandle.h"

struct FIntegralCurve : FIndexedCurve
{
	char __padding[0x10L];
	TArray<FIntegralKey>& KeysField() { return *GetNativePointerField<TArray<FIntegralKey>*>(this, "FIntegralCurve.Keys"); }

	// Functions

	FKeyHandle * AddKey(FKeyHandle * result, float InTime, int InValue, FKeyHandle InKeyHandle) { return NativeCall<FKeyHandle *, FKeyHandle *, float, int, FKeyHandle>(this, "FIntegralCurve.AddKey", result, InTime, InValue, InKeyHandle); }
	int Evaluate(float Time) { return NativeCall<int, float>(this, "FIntegralCurve.Evaluate", Time); }
	bool IsKeyHandleValid(FKeyHandle KeyHandle) { return NativeCall<bool, FKeyHandle>(this, "FIntegralCurve.IsKeyHandleValid", KeyHandle); }
	void ScaleCurve(float ScaleOrigin, float ScaleFactor) { NativeCall<void, float, float>(this, "FIntegralCurve.ScaleCurve", ScaleOrigin, ScaleFactor); }
	void ShiftCurve(float DeltaTime) { NativeCall<void, float>(this, "FIntegralCurve.ShiftCurve", DeltaTime); }
	FKeyHandle * UpdateOrAddKey(FKeyHandle * result, float Time, int Value) { return NativeCall<FKeyHandle *, FKeyHandle *, float, int>(this, "FIntegralCurve.UpdateOrAddKey", result, Time, Value); }
};

