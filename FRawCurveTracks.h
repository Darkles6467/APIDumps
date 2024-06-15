#pragma once

#include "BaseDeclarations.h"
struct FRawCurveTracks
{
	char __padding[0x10L];
	TArray<FFloatCurve>& FloatCurvesField() { return *GetNativePointerField<TArray<FFloatCurve>*>(this, "FRawCurveTracks.FloatCurves"); }

	// Functions

	bool AddCurveData(unsigned __int16 Uid, int CurveFlags) { return NativeCall<bool, unsigned __int16, int>(this, "FRawCurveTracks.AddCurveData", Uid, CurveFlags); }
	void EvaluateCurveData(UAnimInstance * Instance, float CurrentTime, float BlendWeight) { NativeCall<void, UAnimInstance *, float, float>(this, "FRawCurveTracks.EvaluateCurveData", Instance, CurrentTime, BlendWeight); }
	void UpdateLastObservedNames(FSmartNameMapping * NameMapping) { NativeCall<void, FSmartNameMapping *>(this, "FRawCurveTracks.UpdateLastObservedNames", NameMapping); }
};

