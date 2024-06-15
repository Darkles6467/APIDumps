#pragma once

#include "BaseDeclarations.h"
struct FCurveHandle
{
	char __padding[0x10L];
	const FCurveSequence * OwnerSequenceField() { return GetNativePointerField<const FCurveSequence *>(this, "FCurveHandle.OwnerSequence"); }
	int& CurveIndexField() { return *GetNativePointerField<int*>(this, "FCurveHandle.CurveIndex"); }

	// Functions

	static float ApplyEasing(float Time, ECurveEaseFunction::Type EaseFunction) { return NativeCall<float, float, ECurveEaseFunction::Type>(nullptr, "FCurveHandle.ApplyEasing", Time, EaseFunction); }
	float GetLerpLooping() { return NativeCall<float>(this, "FCurveHandle.GetLerpLooping"); }
};

