#pragma once

#include "BaseDeclarations.h"
struct FSlideData
{
	char __padding[0x50L];
	TWeakObjectPtr<USplineComponent>& SplineComponentField() { return *GetNativePointerField<TWeakObjectPtr<USplineComponent>*>(this, "FSlideData.SplineComponent"); }
	float& CurTimeField() { return *GetNativePointerField<float*>(this, "FSlideData.CurTime"); }
	float& DurationField() { return *GetNativePointerField<float*>(this, "FSlideData.Duration"); }
	TArray<FVector>& PointsField() { return *GetNativePointerField<TArray<FVector>*>(this, "FSlideData.Points"); }
	TArray<FVector>& TangentsField() { return *GetNativePointerField<TArray<FVector>*>(this, "FSlideData.Tangents"); }
	FVector& LocationField() { return *GetNativePointerField<FVector*>(this, "FSlideData.Location"); }
	FVector& TangentField() { return *GetNativePointerField<FVector*>(this, "FSlideData.Tangent"); }

	// Functions

	void AddTime(float fDelta) { NativeCall<void, float>(this, "FSlideData.AddTime", fDelta); }
	void ForceComplete() { NativeCall<void>(this, "FSlideData.ForceComplete"); }
	void GetInitialPosition(FVector * Loc, FVector * Tan) { NativeCall<void, FVector *, FVector *>(this, "FSlideData.GetInitialPosition", Loc, Tan); }
	FVector * GetLocation(FVector * result) { return NativeCall<FVector *, FVector *>(this, "FSlideData.GetLocation", result); }
	void GetLocationAndTangent(FVector * Loc, FVector * Tan) { NativeCall<void, FVector *, FVector *>(this, "FSlideData.GetLocationAndTangent", Loc, Tan); }
	bool IsActive() { return NativeCall<bool>(this, "FSlideData.IsActive"); }
	bool IsComplete() { return NativeCall<bool>(this, "FSlideData.IsComplete"); }
	void SetTime(float fTime) { NativeCall<void, float>(this, "FSlideData.SetTime", fTime); }
	FSlideData * operator=(const FSlideData * __that) { return NativeCall<FSlideData *, const FSlideData *>(this, "FSlideData.operator=", __that); }
};

