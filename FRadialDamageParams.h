#pragma once

#include "BaseDeclarations.h"
struct FRadialDamageParams
{
	char __padding[0x10L];
	float& MinimumDamageField() { return *GetNativePointerField<float*>(this, "FRadialDamageParams.MinimumDamage"); }
	float& InnerRadiusField() { return *GetNativePointerField<float*>(this, "FRadialDamageParams.InnerRadius"); }
	float& OuterRadiusField() { return *GetNativePointerField<float*>(this, "FRadialDamageParams.OuterRadius"); }
	float& DamageFalloffField() { return *GetNativePointerField<float*>(this, "FRadialDamageParams.DamageFalloff"); }

	// Functions

	float GetDamageScale(float DistanceFromEpicenter) { return NativeCall<float, float>(this, "FRadialDamageParams.GetDamageScale", DistanceFromEpicenter); }
};

