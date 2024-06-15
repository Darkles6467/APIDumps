#pragma once

#include "BaseDeclarations.h"
struct FKeyState
{
	char __padding[0xd0L];
	FVector& RawValueField() { return *GetNativePointerField<FVector*>(this, "FKeyState.RawValue"); }
	FVector& ValueField() { return *GetNativePointerField<FVector*>(this, "FKeyState.Value"); }
	float& LastUpDownTransitionTimeField() { return *GetNativePointerField<float*>(this, "FKeyState.LastUpDownTransitionTime"); }
	FieldArray<TArray<unsigned int>, 5> EventCountsField() { return {this, "FKeyState.EventCounts"}; }
	FieldArray<TArray<unsigned int>, 5> EventAccumulatorField() { return {this, "FKeyState.EventAccumulator"}; }
	FVector& RawValueAccumulatorField() { return *GetNativePointerField<FVector*>(this, "FKeyState.RawValueAccumulator"); }
	char& SampleCountAccumulatorField() { return *GetNativePointerField<char*>(this, "FKeyState.SampleCountAccumulator"); }

	// Functions

};

