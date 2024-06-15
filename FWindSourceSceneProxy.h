#pragma once

#include "BaseDeclarations.h"
struct FWindSourceSceneProxy
{
	char __padding[0x28L];
	FVector& PositionField() { return *GetNativePointerField<FVector*>(this, "FWindSourceSceneProxy.Position"); }
	FVector& DirectionField() { return *GetNativePointerField<FVector*>(this, "FWindSourceSceneProxy.Direction"); }
	float& StrengthField() { return *GetNativePointerField<float*>(this, "FWindSourceSceneProxy.Strength"); }
	float& SpeedField() { return *GetNativePointerField<float*>(this, "FWindSourceSceneProxy.Speed"); }
	float& RadiusField() { return *GetNativePointerField<float*>(this, "FWindSourceSceneProxy.Radius"); }
	bool& bIsPointSourceField() { return *GetNativePointerField<bool*>(this, "FWindSourceSceneProxy.bIsPointSource"); }

	// Functions

	bool GetDirectionalWindParameters(FVector4 * WindDirectionAndSpeed, float * Weight) { return NativeCall<bool, FVector4 *, float *>(this, "FWindSourceSceneProxy.GetDirectionalWindParameters", WindDirectionAndSpeed, Weight); }
	bool GetWindParameters(const FVector * EvaluatePosition, FVector4 * WindDirectionAndSpeed, float * Weight) { return NativeCall<bool, const FVector *, FVector4 *, float *>(this, "FWindSourceSceneProxy.GetWindParameters", EvaluatePosition, WindDirectionAndSpeed, Weight); }
};

