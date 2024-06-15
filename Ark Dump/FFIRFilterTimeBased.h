#pragma once

#include "BaseDeclarations.h"
struct FFIRFilterTimeBased
{
	char __padding[0x30L];
	float& LastOutputField() { return *GetNativePointerField<float*>(this, "FFIRFilterTimeBased.LastOutput"); }
	TArray<FFilterData>& FilterWindowField() { return *GetNativePointerField<TArray<FFilterData>*>(this, "FFIRFilterTimeBased.FilterWindow"); }
	EFilterInterpolationType& InterpolationTypeField() { return *GetNativePointerField<EFilterInterpolationType*>(this, "FFIRFilterTimeBased.InterpolationType"); }
	int& CurrentStackIndexField() { return *GetNativePointerField<int*>(this, "FFIRFilterTimeBased.CurrentStackIndex"); }
	float& TimeDurationField() { return *GetNativePointerField<float*>(this, "FFIRFilterTimeBased.TimeDuration"); }
	int& NumValidFilterField() { return *GetNativePointerField<int*>(this, "FFIRFilterTimeBased.NumValidFilter"); }
	float& CurrentTimeField() { return *GetNativePointerField<float*>(this, "FFIRFilterTimeBased.CurrentTime"); }

	// Functions

	float CalculateFilteredOutput() { return NativeCall<float>(this, "FFIRFilterTimeBased.CalculateFilteredOutput"); }
	float GetFilteredData(float Input, float DeltaTime) { return NativeCall<float, float, float>(this, "FFIRFilterTimeBased.GetFilteredData", Input, DeltaTime); }
	int GetSafeCurrentStackIndex() { return NativeCall<int>(this, "FFIRFilterTimeBased.GetSafeCurrentStackIndex"); }
	void Initialize(float WindowDuration, EFilterInterpolationType BlendType) { NativeCall<void, float, EFilterInterpolationType>(this, "FFIRFilterTimeBased.Initialize", WindowDuration, BlendType); }
};

