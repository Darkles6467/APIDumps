#pragma once

#include "BaseDeclarations.h"
#include "AVolume.h"
#include "ABrush.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct APostProcessVolume : AVolume
{
	char __padding[0x3c0L];
	float& PriorityField() { return *GetNativePointerField<float*>(this, "APostProcessVolume.Priority"); }
	float& BlendRadiusField() { return *GetNativePointerField<float*>(this, "APostProcessVolume.BlendRadius"); }
	float& BlendWeightField() { return *GetNativePointerField<float*>(this, "APostProcessVolume.BlendWeight"); }
	float& MaterialWaterLineParameterValueField() { return *GetNativePointerField<float*>(this, "APostProcessVolume.MaterialWaterLineParameterValue"); }
	TEnumAsByte<enum EPostProcessVolumeType::Type>& VolumeTypeField() { return *GetNativePointerField<TEnumAsByte<enum EPostProcessVolumeType::Type>*>(this, "APostProcessVolume.VolumeType"); }
	float& ViewDistanceMultiplierField() { return *GetNativePointerField<float*>(this, "APostProcessVolume.ViewDistanceMultiplier"); }
	TArray<AExponentialHeightFog *>& DisabledHeightFogsField() { return *GetNativePointerField<TArray<AExponentialHeightFog *>*>(this, "APostProcessVolume.DisabledHeightFogs"); }
	TArray<AExponentialHeightFog *>& PrimaryLerpingHeightFogsField() { return *GetNativePointerField<TArray<AExponentialHeightFog *>*>(this, "APostProcessVolume.PrimaryLerpingHeightFogs"); }

	// Functions

	void BeginPlay() { NativeCall<void>(this, "APostProcessVolume.BeginPlay"); }
	bool EncompassesPoint(FVector Point, float SphereRadius, float * OutDistanceToPoint, float * MaxDistanceLimit) { return NativeCall<bool, FVector, float, float *, float *>(this, "APostProcessVolume.EncompassesPoint", Point, SphereRadius, OutDistanceToPoint, MaxDistanceLimit); }
	FPostProcessVolumeProperties * GetProperties(FPostProcessVolumeProperties * result) { return NativeCall<FPostProcessVolumeProperties *, FPostProcessVolumeProperties *>(this, "APostProcessVolume.GetProperties", result); }
	void SetEnabled(bool enabled) { NativeCall<void, bool>(this, "APostProcessVolume.SetEnabled", enabled); }
	void PostRegisterAllComponents() { NativeCall<void>(this, "APostProcessVolume.PostRegisterAllComponents"); }
	void PostUnregisterAllComponents() { NativeCall<void>(this, "APostProcessVolume.PostUnregisterAllComponents"); }
};

struct ASpherePostProcessVolume : APostProcessVolume
{
	char __padding[0x10L];
	float& SphereVolumeRadiusField() { return *GetNativePointerField<float*>(this, "ASpherePostProcessVolume.SphereVolumeRadius"); }

	// Functions

	bool EncompassesPoint(FVector Point, float SphereRadius, float * OutDistanceToPoint, float * MaxDistanceLimit) { return NativeCall<bool, FVector, float, float *, float *>(this, "ASpherePostProcessVolume.EncompassesPoint", Point, SphereRadius, OutDistanceToPoint, MaxDistanceLimit); }
};

