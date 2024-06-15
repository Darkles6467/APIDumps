#pragma once

#include "BaseDeclarations.h"
struct FCurveSequence
{
	char __padding[0x20L];
	TArray<FCurveSequence::FSlateCurve>& CurvesField() { return *GetNativePointerField<TArray<FCurveSequence::FSlateCurve>*>(this, "FCurveSequence.Curves"); }
	long double& StartTimeField() { return *GetNativePointerField<long double*>(this, "FCurveSequence.StartTime"); }
	float& TotalDurationField() { return *GetNativePointerField<float*>(this, "FCurveSequence.TotalDuration"); }
	bool& bInReverseField() { return *GetNativePointerField<bool*>(this, "FCurveSequence.bInReverse"); }

	// Functions

	FCurveHandle * AddCurve(FCurveHandle * result, const float InStartTimeSeconds, const float InDurationSeconds, const ECurveEaseFunction::Type InEaseFunction) { return NativeCall<FCurveHandle *, FCurveHandle *, const float, const float, const ECurveEaseFunction::Type>(this, "FCurveSequence.AddCurve", result, InStartTimeSeconds, InDurationSeconds, InEaseFunction); }
	float GetLerp() { return NativeCall<float>(this, "FCurveSequence.GetLerp"); }
	float GetLerpLooping() { return NativeCall<float>(this, "FCurveSequence.GetLerpLooping"); }
	bool IsInReverse() { return NativeCall<bool>(this, "FCurveSequence.IsInReverse"); }
	bool IsPlaying() { return NativeCall<bool>(this, "FCurveSequence.IsPlaying"); }
	void JumpToEnd() { NativeCall<void>(this, "FCurveSequence.JumpToEnd"); }
	void JumpToStart() { NativeCall<void>(this, "FCurveSequence.JumpToStart"); }
	void Play(const float StartAtTime) { NativeCall<void, const float>(this, "FCurveSequence.Play", StartAtTime); }
	void Reverse() { NativeCall<void>(this, "FCurveSequence.Reverse"); }
};

